#include "deck.h"
#include <fstream>
/* NOTE THIS CLASS WILL BE FINISHED FOR YOU, YOU DO NOT NEED TO WRITE ANY CODE FOR THIS CLASS*/

const int BUFFER_SIZE = 500;

deck::deck()=default;

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
    unsigned middle= abs(cards.get_size()/2 +(rand()%20-10))%cards.get_size();
    doubly_linked_list right_cards= cards.split_before(middle),left_cards= cards,merged_cards ;
    unsigned from_left=left_cards.get_size()-1, to_left=left_cards.get_size()-1,
            from_right=right_cards.get_size()-1, to_right=right_cards.get_size()-1, riffle_count;

    while(to_left > 0 || from_right > 0){
        riffle_count=(unsigned)abs(rand()%4+1);
        from_left= (from_left-riffle_count < 0)? 0: from_left-riffle_count;
        riffle_count=(unsigned)abs(rand()%4+1);
        from_right= (from_right-riffle_count < 0)? 0: from_right-riffle_count;

        if(to_left > 0 && from_right > 0){
            merged_cards=merged_cards+ left_cards.split_set(from_left,to_left);
            merged_cards=merged_cards+ right_cards.split_set(from_right,to_right);
        }
        else if(to_left > 0){
            from_left=0;
            merged_cards=merged_cards+ left_cards.split_set(from_left,to_left);
        }
        else{
            from_right=0;
            merged_cards=merged_cards+ right_cards.split_set(from_right,to_right);
        }
        to_left=from_left;
        from_right=to_right;
    }
    cards=merged_cards;
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
