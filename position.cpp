#include <iostream>
#include "position.h"

using namespace std;
Position::Position() {

pos = new Pos();
pos->xCord = 0;
pos->yCord = 0;


}

void Position::set_xCord (int a) {
	pos->xCord = a;
}

void Position::set_yCord (int b) {
	pos->yCord = b;
}

int Position::get_xCord () {
	return pos->xCord;
}

int Position::get_yCord () {
	return pos->yCord;
}
