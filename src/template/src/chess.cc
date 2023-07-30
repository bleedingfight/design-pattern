#include "chess.h"
Chess::Chess() : Game{2} {}
void Chess::start() { std::cout << "Chess Game Start......\n"; }
bool Chess::have_winner() { return turns == max_turns; }
void Chess::take_turn() {
    turns++;
    current_player = (current_player + 1) % number_of_players;
    std::cout << "Player " << current_player << " run .....\n";
}
int Chess::get_winner() { return current_player; }
