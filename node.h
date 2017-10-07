#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H


class node {
public:
    node* next;
    unsigned data;

    node(unsigned int data) : data(data), next(nullptr) {}
};


#endif //UNTITLED1_NODE_H
