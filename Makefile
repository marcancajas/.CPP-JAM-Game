CC = g++
FLAGS = -Wall -pedantic -g
OBJ = game.o main.o position.o io.o databaseM.o

Start : $(OBJ)
	$(CC) $(FLAGS) -o Start $(OBJ) -lmysqlcppconn

main.o : main.cpp io.h game.h
	$(CC) $(FLAGS) -c main.cpp

game.o : game.cpp game.h
	$(CC) $(FLAGS) -c game.cpp
		
position.o : position.cpp position.h
	$(CC) $(FLASGS) -c position.cpp

io.o : io.cpp io.h databaseM.h
	$(CC) $(FLAGS) -c io.cpp
	
databaseM.io : databaseM.cpp databaseM.h
	$(CC) $(FLAGS) -c -lmysqlcppconn databaseM.cpp 

clean:
	rm -rf *.o ./Start
