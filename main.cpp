#include "lib/lab06/inc/deck.h"
#include <iostream>
#include "lib/lab07/inc/tree.h"

int main() {
    lab7::tree a;
    a.insert(10);
    a.insert(20);
    a.insert(5);
    a.insert(2);
    a.insert(1);
    a.insert (5);
    a.insert(5);
    a.path_to(5);
    a.size();
    std::cout << "Depth " << a.depth() << std::endl;

    a.level(1);
    //a.get_frequency(5);
    a.print();
    //a.remove(10);
    //a.print();
    return 0;
}