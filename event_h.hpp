
/*
 * event_h.hpp
 *
 * Kaffe Simple 2d GameEngine 
 * Magnus Selin
 * mseln@github
 */

#include <SFML/Graphics.hpp>
#include <iostream>

#ifndef EVENT_HANDLER
#define EVENT_HANDLER

struct Special_Keys{
	bool SPACE,
	ESCAPE,
	UP, DOWN, RIGHT, LEFT,
	RSHIFT, LSHIFT;
};

class Event_Handler{
private:
	sf::RenderWindow * window;
	
	bool key[128];
	Special_Keys sp_key;
	
	int m_pos[2];
	bool m_key[2];
public:
	Event_Handler(sf::RenderWindow * w);
	
	void update();

	bool pollCh(char c);
	bool pollSp(char c);
	bool pollMb(char c);
	int  pollMp(char c);
};

#endif
