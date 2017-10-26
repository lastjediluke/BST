#ifndef CMPE126F17_LABS_TREE_H
#define CMPE126F17_LABS_TREE_H
#include "node.h"
#include <iostream>

namespace lab7 {
    class tree {
        node *root;
        unsigned len;
        void privateprint(node* ptr);
        void privateremove(int key, node *parent);
        void removeroot();
        int privatefindsmall(node *ptr);        //I have all these functions in private so that I can access the root
        void removematch(node*parent, node*match, bool left);
        void privatefind (node *ptr, int key);
        int privatedepth(node *ptr);
        int privatefindbig(node *ptr);
    public:
        tree();

        ~tree();

        int findbig();

        int findsmall();

        void insert(int value);

        void remove(int key);

        bool in_tree(int key);

        int get_frequency(int key);

        int level(int key);

        void path_to(int key);

        unsigned size();

        unsigned depth();

        void print();

        void print_gtl();
    };
}
#endif //CMPE126F17_LABS_TREE_H
