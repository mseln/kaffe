/*
 * Kaffe Simple 2d GameEngine 
 * Magnus Selin
 * mseln@github
 */

#include "loop.hpp"

game_state = new Game_States(MENU);

void main_loop(sf::RenderWindow * window){ 
    sf::Event event;
    while (window->isOpen()){
        window->clear();
        update();
        window->display();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window->close();
        if (event.type == sf::Event::Closed)
            window->close();
        //*** TODO calculate framerate      TODO ***//
        //*** TODO menu                     TODO ***//
    }
}

void update(){
	switch (*game_state) {
		case MENU:
			//std::cout << "in menuloop\n";
			menuloop();
			break;
		
		case IN_GAME:
			std::cout << "in gameloop\n";
			gameloop();
			break;
		
		case IN_GAME_MENU:
			std::cout << "in ingame menuloop\n";
			if (pause_if_in_menu) gameloop();
			ingame_menuloop();
			break;
	}
}

void menuloop(){
	//if(event_h->pollCh('a')) *game_state = IN_GAME;
	
	// menu.update(game_state, event_h, window);
	// menu.draw(window);
	
	// if(*game_state == IN_GAME) session = new Session(window, event_h);
}

void gameloop(){
	if(sf::Mouse::isButtonPressed(sf::Mouse::Escape)){
		*game_state = IN_GAME_MENU;
	}
	
	// session->update();
	// session->draw();
}

void ingame_menuloop(){
	// ingame_menu.update(game_state, window);
	// ingame_menu.draw(window);
	
	// if(*game_state == MENU) delete session;
}
