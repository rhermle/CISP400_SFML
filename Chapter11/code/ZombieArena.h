#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Zombie.h"
using namespace sf;
int createBackground(VertexArray& rVA, IntRect arena);
Zombie* createHorde(int numZombies, IntRect arena);