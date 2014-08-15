/*
 * Kaffe Simple 2d GameEngine 
 * Magnus Selin
 * mseln@github
 */

/* 
 * SFML includes
 */
#include <SFML/Graphics.hpp>

#ifndef LOOP_H
#define LOOP_H

#include "menu.hpp"
#include "game_states.hpp"

Menu menu;
InGame_Menu ingame_menu;

void main_loop(sf::RenderWindow * window);
void game_loop(sf::RenderWindow * window);

#endif
