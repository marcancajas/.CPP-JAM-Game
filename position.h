#ifndef POSITION_H
#define POSITION_H

typedef struct {
	int xCord;
	int yCord;

}Pos;

class Position {
	Pos *pos;

	
	public :
		Position ();
		void set_xCord (int);
		void set_yCord (int);
		int get_xCord ();
		int get_yCord();
	
};

#endif
