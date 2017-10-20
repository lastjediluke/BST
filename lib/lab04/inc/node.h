#ifndef LAB4_LINKEDLIST_NODE_H
#define LAB4_LINKEDLIST_NODE_H


class node {
private:
    node* next;
    int data;

public:
    node();
    node(int input);
    node(int input[], int length);
    ~node();

    void append(int value);
    void append(int values[], int length);
    node* insert(int location, int value);
    node* remove(int location);

    void print();
    void print_middle();

    int get_value(int location);
    void set_data(int location, int value);


};

#endif //LAB4_LINKEDLIST_NODE_H
