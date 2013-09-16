#ifndef GAME_H
#define GAME_H
#include <string>
#include "position.h"

class Character {
		int str;
		int agil;
		char* name;
	public :
		Position* position;	
		Character ();

		void set_name (char*);
		void set_str (int);
		void set_agil (int);
		char* get_name ();
		int get_agil ();
		int get_str ();
		
} ;

#endif
