#include "doubly_linked_list.h"

// Default constructor
doubly_linked_list::doubly_linked_list() {

}

// Take in a vector of inputs and construct a doubly linked list from them
doubly_linked_list::doubly_linked_list(std::vector<unsigned> values) {

}

// Copy constructor
doubly_linked_list::doubly_linked_list(const doubly_linked_list& original) {

}

// Create doubly linked linked list with one input value
doubly_linked_list::doubly_linked_list(unsigned input) {

}

// Default constructor
doubly_linked_list::~doubly_linked_list() {

}

// return the value inside of the node located at position
unsigned doubly_linked_list::get_data(unsigned position) {
    return 0;
}

// Get a set of values between position_from to position_to
std::vector<unsigned> doubly_linked_list::get_set(unsigned position_from, unsigned position_to) {

}

// Add a value to the end of the list
void doubly_linked_list::append(unsigned data) {

}

// Merge two lists together in place, placing the input list at the end of this list
void doubly_linked_list::merge(doubly_linked_list rhs) {

}

// Allow for the merging of two lists using the + operator.
doubly_linked_list doubly_linked_list::operator+(const doubly_linked_list &rhs) const {
//    return ;
}

// Insert a node before the node located at position
void doubly_linked_list::insert_before(unsigned position, unsigned data) {

}

// Insert a node after the node located at position
void doubly_linked_list::insert_after(unsigned position, unsigned data) {

}

// Remove the node located at position from the linked list
void doubly_linked_list::remove(unsigned position) {

}

// Split the list with the node being split on being included in the returned list
doubly_linked_list doubly_linked_list::split_before(unsigned position) {
//    return ;
}

// Split the list with the node being split on being included in the retained list
doubly_linked_list doubly_linked_list::split_after(unsigned position) {
//    return ;
}

// Create two lists, one starting at position_from and ending with position_to and return that list
// Merge the beginning of the original list with the end of the original list and retain it
doubly_linked_list doubly_linked_list::split_set(unsigned position_from, unsigned position_to) {
//    return ;
}

// Swap two nodes in the list. USE POINTERS. Do not just swap the values!
void doubly_linked_list::swap(unsigned position1, unsigned position2) {

}

// Swap two sets of cards. The sets are inclusive. USE POINTERS. Do not just swap the values!
void doubly_linked_list::swap_set(unsigned position1_from, unsigned position1_to, unsigned position2_from,
                                  unsigned position2_to) {

}

// Overload operator=
doubly_linked_list &doubly_linked_list::operator=(const doubly_linked_list &RHS) {
//    return <#initializer#>;
}

unsigned doubly_linked_list::get_size() {
    return size;
}

bool doubly_linked_list::is_empty() {
    return !size;
}