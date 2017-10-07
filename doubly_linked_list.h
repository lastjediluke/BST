//
// Created by Bryan on 10/6/2017.
//

#ifndef UNTITLED1_DOUBLY_LINKED_LIST_H
#define UNTITLED1_DOUBLY_LINKED_LIST_H


#include <vector>
#include "node.h"

class doubly_linked_list {
    node *next, *prev;
    unsigned size;

public:
    doubly_linked_list();
    doubly_linked_list(std::vector <unsigned> values );
    doubly_linked_list(doubly_linked_list);
    ~doubly_linked_list();

    unsigned get_data(unsigned position);
    unsigned get_set(unsigned position_from, unsigned position_to);

    void append(unsigned data);
    void insert_before(unsigned position, unsigned data);
    void insert_after(unsigned position, unsigned data);
    void remove(unsigned position);

    doubly_linked_list split_before(unsigned position);
    doubly_linked_list split_after(unsigned position);
    doubly_linked_list split_set(unsigned position_from, unsigned position_to);

    void swap(unsigned position1, unsigned position2);
    void swap_set(unsigned position1_from, unsigned position1_to, unsigned position2_from, unsigned position2_to);

    doubly_linked_list &operator=(const doubly_linked_list& RHS);
    //TODO: create definitions for all functions, as well as descriptions of how they should work
};


#endif //UNTITLED1_DOUBLY_LINKED_LIST_H
