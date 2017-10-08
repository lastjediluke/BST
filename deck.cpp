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

deck deck::draw(unsigned number_of_cards) {
    deck return_deck = deck(); // Create new deck to return;
    return_deck.card_rules = card_rules; // Copy the card rules into return deck
    return_deck.cards = cards.split_after(0); // Split cards at position 0 and store it in new deck
    return return_deck;
}

// Pull a single card from the deck
deck deck::pull(unsigned position) {
    deck return_deck = deck(); // Create new deck to return
    return_deck.card_rules = card_rules; // Copy the card rules into return deck
    return_deck.cards = cards.split_set(position, position); // Copy the card into the new deck
    return return_deck;
}

deck deck::pull(unsigned position, unsigned number_of_card) {
    deck return_deck = deck(); // Create new deck to return
    return_deck.card_rules = card_rules; // Copy the card rules into return deck
    return_deck.cards = cards.split_set(position, position+number_of_card); // Copy the card into the new deck
    return return_deck;
}

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
//    return <#initializer#>;
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
