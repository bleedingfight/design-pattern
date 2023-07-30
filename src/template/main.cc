#include "chess.h"
#include "game.h"
int main() {
    Game *p = new Chess();
    p->run();
    delete p;
}
