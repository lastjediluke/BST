#include "../inc/tree.h"
namespace lab7 {
    void clear(node *to_clear);

    void node_print_gtl(node *to_print);

    // Construct an empty tree
    tree::tree() {
        root = nullptr;
        len = 1;
    }

    // Deconstruct tree
    tree::~tree() {
        clear(root);
    }

    // Insert
    void tree::insert(int value) {

        node *current;
        node *trailer;
        auto *newnode = new node (value);

        if (root == nullptr){
            root = newnode;
        }

        else {
            current = root;

            while (current != nullptr){

                trailer = current;
                if (current->data == value){
                    current->frequency++;
                    len++;
                    return;
                }

                else if (current->data > value){
                    current = current->left;
                }

                else {
                    current = current->right;
                }
            }

            if (trailer->data > value){
                trailer->left = newnode;
            }

            else {
                trailer->right = newnode;
            }

            len++;

        }

    }

    void tree::removematch(node *parent, node *match, bool left){
        if ( root != nullptr){

            node *deleter;
            int matcher = match->data;
            int smallright;

            if (match->left == nullptr && match->right == nullptr){
                deleter = match;
                left == true ? parent->left = nullptr : parent->right = nullptr;
                delete deleter;
            }

            //case1: 1 child

            else if (match->left == nullptr && match->right != nullptr){
                left = true ? parent->left = match->right : parent->right = match->right;
                match->right = nullptr;
                deleter = match;
                delete deleter;

            }

            else if (match->left != nullptr && match->right == nullptr){
                left = true ? parent->left = match->left : parent->right = match->left;
                match->left = nullptr;
                deleter = match;
                delete deleter;

            }
                //two children
            else {
                smallright = privatefindsmall(match->right);
                privateremove(smallright, match);
                match->data = smallright;
            }

        }

        else {
            std::cout << "empty" << std::endl;
        }
    }

    // Remove key
    void tree::remove(int key) {
        privateremove(key, root);
    }

    void tree::privateremove(int key, node *parent){

        if (root != nullptr){
            if(root->data == key){
                //write root remove func
                removeroot();
            }
            else {

                if (key < parent->data && parent->left != nullptr){
                    parent->left->data == key ?
                    removematch(parent, parent->left, true) :
                    privateremove(key, parent->left);
                }

                else if (key > parent->data && parent->right != nullptr){
                    parent->right->data == key ?
                    removematch(parent, parent->right, false) :
                    privateremove(key, parent->right);
                }

                else {
                    std::cout << "not found" << std::endl;
                }


            }
        }
        else {
            std::cout << "empty" << std::endl;
        }
    }

    void tree::removeroot(){
        if (root != nullptr){
            node *deleter = root;
            int rootdata = root->data;
            int smallright;

            //case 0: no children
            if(root->left == nullptr && root->right == nullptr){
                root = nullptr;
                delete deleter;
            }

            //case 1: one child
            else if(root->left == nullptr && root->right != nullptr){
                root = root->right;
                deleter->right = nullptr;
                delete deleter;
            }

            else if(root->left != nullptr && root->right == nullptr){
                root = root->left;
                deleter->left = nullptr;
                delete deleter;
            }

            //case 2: 2 children

            else {
                smallright = privatefindsmall(root->right);
                privateremove(smallright, root);
                root->data = smallright;
            }


        }

        else {
            std::cout << "empty" << std::endl;
        }
    }

    int tree::findbig(){

    }

    int tree::privatefindbig(node *ptr){
        if (root == nullptr){
            std::cout << "empty" << std::endl;
            return 66;
        }

        else {
            if (ptr->right != nullptr){
                return privatefindsmall(ptr->right);
            }
            else {
                return ptr->data;
            }
        }
    }

    int tree::findsmall(){

        privatefindsmall(root);
    }

    int tree::privatefindsmall(node *ptr){
        if (root == nullptr){
            std::cout << "empty" << std::endl;
            return 66;
        }

        else {
            if (ptr->left != nullptr){
                return privatefindsmall(ptr->left);
            }
            else {
                return ptr->data;
            }
        }

    }
    // What level is key on?
    int tree::level(int key) {

        node *current;
        bool found = false;
        int level = 0;

        if (root != nullptr){

            current = root;


            while (current != nullptr && !found){

                if (current->data == key){
                    // std::cout << "Echo Base, this is Rogue Two. I've found them. Repeat, I've found them" << std::endl;
                    found = true;
                    //level++;
                    std::cout << "Level: " << level << std::endl;

                    return level;
                }
                else if (current->data > key){
                    level++;
                    current = current->left;
                }
                else {
                    level++;
                    current = current->right;
                }

            }

        }

        else {
            std::cout << "such empty" << std::endl;
        }



    }

    // Print the path to the key, starting with root
    void tree::path_to(int key) {
        node *current;
        bool found = false;

        if (root != nullptr){

            current = root;


            while (current != nullptr && !found){

                if (current->data == key){

                    std::cout << "Path data: " << current->data << std::endl;
                    //std::cout << "Echo Base, this is Rogue Two. I've found them. Repeat, I've found them" << std::endl;
                    found = true;
                    return;
                }
                else if (current->data > key){
                    std::cout << "Path data: " << current->data << std::endl;
                    current = current->left;
                }
                else {
                    std::cout << "Path data: " << current->data << std::endl;
                    current = current->right;
                }

            }

        }

        else {
            std::cout << "such empty" << std::endl;
        }
    }

    // Number of items in the tree
    unsigned tree::size() {
        std::cout << "Size of tree: " << len << std::endl;
        return len;
    }

    // Calculate the depth of the tree, longest string of connections
    unsigned tree::depth() {
        privatedepth(root);
    }

    int tree::privatedepth(node *ptr){
        if (ptr == nullptr){
            return -1;
        }

        int lefty = privatedepth(ptr->left);
        int righty = privatedepth(ptr->right);

        if (lefty > righty){
            //std::cout << "Depth: " << std::endl;
            return lefty+1;
        }
        else {
            //std::cout << "Depth: " << std::endl;
            return righty+1;
        }
    }

    // Determine whether the given key is in the tree
    bool tree::in_tree(int key) {

        node *current;
        bool found = false;

        if (root != nullptr){

            current = root;

            while (current != nullptr && !found){

                if (current->data == key){
                    std::cout << "Echo Base, this is Rogue Two. I've found them. Repeat, I've found them" << std::endl;
                    found = true;
                }
                else if (current->data > key){
                    current = current->left;
                }
                else {
                    current = current->right;
                }

            }

            return found;

        }

        else {
            std::cout << "such empty" << std::endl;
        }
    }



    // Return the number of times that value is in the tree
    int tree::get_frequency(int key) {      //essentially run the in_tree function
        node *current;
        bool found = false;

        if (root != nullptr){

            current = root;

            while (current != nullptr && !found){

                if (current->data == key){
                   // std::cout << "Echo Base, this is Rogue Two. I've found them. Repeat, I've found them" << std::endl;
                    found = true;
                    std::cout << current->frequency << std::endl;
                    return current->frequency;
                }
                else if (current->data > key){
                    current = current->left;
                }
                else {
                    current = current->right;
                }

            }

        }

        else {
            std::cout << "such empty" << std::endl;
        }

    }

    // Print the tree least to greatest, Include duplicates
    void tree::print() {

        privateprint(root);


    }

    void tree::privateprint(node *ptr){
        if (root != nullptr){

            if (ptr->left != nullptr){
                privateprint(ptr->left);
            }
            for (int i = 0; i < ptr->frequency; i++){       //prints duplicates as well
                std::cout << ptr->data << " ";
            }

            if (ptr->right != nullptr){
                privateprint(ptr->right);
            }
        }

        else {
            std::cout << "empty" << std::endl;
        }

    }
    void tree::print_gtl() {
        //WILL BE PROVIDED FOR YOU
    }

    void node_print_gtl(node *to_print) {
        //WILL BE PROVIDED FOR YOU
    }

    void clear(node *to_clear) {
        if (to_clear == nullptr) return;
        if (to_clear->left != nullptr) clear(to_clear->left);
        if (to_clear->right != nullptr) clear(to_clear->right);
        delete to_clear;
    }
}