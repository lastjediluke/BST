#ifndef CMPE126F17_LABS_TREE_H
#define CMPE126F17_LABS_TREE_H
#include "node.h"

class tree {
    node* root;
public:
    tree();
    ~tree();
    node* insert(int value);
    bool remove(int value);
    bool in_tree(int value);
    int get_frequency(int key);
    int level(int key);
    void path_to(int key);
    unsigned size();
    unsigned depth();
    void print();
};

#endif //CMPE126F17_LABS_TREE_H
