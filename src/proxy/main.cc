#include <iostream>

#include "bitmap.h"
#include "creature.h"
#include "lazy_bitmap.h"
#include "property.h"
#include "utils.h"
int main() {
  Creature creature;
  creature.agility = 20;
  auto x = creature.strength;
  std::cout << x << " agility " << creature.agility << "\n";
  Bitmap img{"pokemon.png"};
  img.draw();
  LazyBitmap i{"pickaqu.jpg"};
  draw_image(i);
}
