#include "../inc/tree.h"

// Construct an empty tree
tree::tree(){
root = nullptr;
}

// Deconstruct tree
tree::~tree(){

}

// Insert
void tree::insert(node * obj, int value){


    if (root == nullptr) {
        auto *te
}
    else if (value < root->data){
        auto *temp =

}
    else if (value > root->data){

}
    else{

    }
}

// Remove key
bool tree::remove(int key){

}

// How many of that key are in the tree?
int tree::get_frequency(int key){

}

// What level is key on?
int tree::level(int key){

}

// Print the path to the key, starting with root
void tree::path_to(int key){

}

// Number of items in the tree
unsigned tree::size(){

}

// Calculate the depth of the tree, longest string of connections
unsigned tree::depth(){

}

// Print the tree least to greatest, Include duplicates
void tree::print(){

}

bool tree::in_tree (int value){

}