#include "deck.h"
/* NOTE THIS CLASS WILL BE FINISHED FOR YOU, YOU DO NOT NEED TO WRITE ANY CODE FOR THIS CLASS*/
deck::deck() {

}

deck::deck(std::string rules, std::string deck_list) {

}

std::vector<std::string> deck::load(std::string file) {
    return std::vector<std::string>();
}

void deck::save(std::string file) {

}

void deck::riffle_shuffle() {

}

void deck::overhand_shuffle_front() {

}

void deck::overhand_shuffle_back() {

}

deck deck::draw(unsigned number_of_cards) {
    return deck();
}

deck deck::pull(unsigned position1) {
    return deck();
}

deck deck::pull_multiple(unsigned number_of_card, unsigned position) {
    return deck();
}

deck deck::split(unsigned position) {
    return deck();
}

deck *deck::deal(unsigned number_of_players, unsigned number_of_cards) {
    return nullptr;
}

void deck::burn() {

}

std::string deck::check_card(unsigned position) {
    return std::string();
}

std::ostream &operator<<(std::ostream &stream, const deck rhs) {
    return <#initializer#>;
}
