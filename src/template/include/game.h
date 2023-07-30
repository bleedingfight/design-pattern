#pragma once
#include <iostream>
class Game {
  public:
    void run();
    explicit Game(int number_of_layers);

  protected:
    int current_player{0};
    int number_of_players;
    virtual void start() = 0;
    virtual bool have_winner() = 0;
    virtual void take_turn() = 0;
    virtual int get_winner() = 0;
};
