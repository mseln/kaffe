/*
 * Kaffe Simple 2d GameEngine 
 * Magnus Selin
 * mseln@github
 */

/* 
 * SFML includes
 */
#include <SFML/Graphics.hpp>

#include "loop.h"

void main_loop(sf::RenderWindow * window){ 
    while (window->isOpen()){
        sf::Event event;
        while (window->pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();
        window->display();

        //*** TODO calculate framerate      TODO ***//
        //*** TODO menu                     TODO ***//
        //*** TODO event handler            TODO ***//
    }
}

void game_loop(sf::RenderWindow * window){

}
