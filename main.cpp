/*
 * Kaffe Simple 2d GameEngine 
 * Magnus Selin
 * mseln@github
 */


/* 
 * SFML includes
 */
#include <SFML/Graphics.hpp>

/*
 * Kaffe includes
 */
#include "loop.h"
#include "menu.h"

int main(){
    // Create a window with the same pixel depth as the desktop
    sf::RenderWindow window;
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    window.create(sf::VideoMode(desktop.width  * 3/4, 
                                desktop.height * 3/4, 
                                desktop.bitsPerPixel), 
                  "SFML window");
    window.setPosition(sf::Vector2i(desktop.width  * 1/8, 
                                    desktop.height * 1/16));

    window.setFramerateLimit(60);

    main_loop(&window);

    return 0;
}
