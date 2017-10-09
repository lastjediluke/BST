#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H


class node {
public:
    node* next;
    node* prev;
    unsigned data;

    explicit node(unsigned int data) : data(data), next(nullptr), prev(nullptr) {}
};


#endif //UNTITLED1_NODE_H
