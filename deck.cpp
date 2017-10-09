#include "deck.h"
#include <fstream>
/* NOTE THIS CLASS WILL BE FINISHED FOR YOU, YOU DO NOT NEED TO WRITE ANY CODE FOR THIS CLASS*/

const int BUFFER_SIZE = 500;

deck::deck() {
    cards = doubly_linked_list();
    std::map<int, std::string> deck::card_rules;
}

deck::deck(std::string rules, std::string deck_list) {

}

std::vector<std::string> deck::load(std::string file) {
    std::ifstream in_file(file);
    std::vector<std::string> input_parse;
    char temp[BUFFER_SIZE];

    while(in_file.good()) {
        in_file.getline(temp, BUFFER_SIZE, ',');
        input_parse.emplace_back(temp);
    }
    return input_parse;
}

void deck::save(std::string file) {

}

void deck::riffle_shuffle() {

}

void deck::overhand_shuffle_front() {

}

void deck::overhand_shuffle_back() {

}

// Draw a single card off of the top
deck deck::draw(unsigned number_of_cards = 1) {
    doubly_linked_list temp; // Create a temp variable to store the right hand side of the split
    temp = cards.split_before(0+number_of_cards);

    deck return_deck = deck(); // Create new deck to return;
    return_deck.card_rules = card_rules; // Copy the card rules into return deck
    return_deck.cards = cards; // Set the return deck to the current deck which is the left side of the split

    cards = temp; // Copy the right hand side back into temp.

    return return_deck;
}

// Pull a single or multiple cards out of the deck from any location
deck deck::pull(unsigned position, unsigned number_of_card = 1) {
    deck return_deck = deck(); // Create new deck to return
    return_deck.card_rules = card_rules; // Copy the card rules into return deck
    return_deck.cards = cards.split_set(position, position+number_of_card-1); // Copy the card into the new deck
    return return_deck;
}

// Return bottom half of deck when split
deck deck::split(unsigned position) {
    deck return_deck = deck(); // Create new deck to return;
    return_deck.card_rules = card_rules; // Copy the card rules into return deck
    return_deck.cards = cards.split_after(position); // Split cards at input position and store it in new deck
    return return_deck;
}

deck deck::operator+(const deck &rhs) const {
    return deck();
}

deck &deck::operator=(const deck &rhs) {
}


std::vector<deck> deck::deal(unsigned number_of_players, unsigned number_of_cards) {
    return nullptr;
}

void deck::burn() {
    cards.remove(0);
}

std::string deck::check_card(unsigned position) {
    return card_rules[cards.get_data(position)];
}

std::ostream &operator<<(std::ostream &stream, const deck rhs) {
    std::vector Deck = rhs.cards.get_set(0,rhs.cards.get_size()-1);

    for (int i = 0; i < Deck.size(); ++i) {
        stream << card_rules[Deck[i]];
    }
    stream.flush();
    return stream;
}
