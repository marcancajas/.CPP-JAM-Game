#include <iostream>
#include <string.h>
#include "game.h"


using namespace std;
Character::Character() {

str = 0;
agil = 0;
name = "default";
position = new Position();

} 

void Character::set_name (char* c) {
	name = c;
}

void Character::set_str (int a) {
	str = a;
}

void Character::set_agil (int b) {
	agil = b;
}

char* Character::get_name () {
	return name;
}

int Character::get_str () {
	return str;
}

int Character::get_agil () {
	return agil;
}
