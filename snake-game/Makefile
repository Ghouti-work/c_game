CC = g++
CFLAGS = -I./src -I./src/utils -Wall -Wextra -std=c++11
SRC = src/main.cpp src/game.cpp src/utils/utils.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = snake_game

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)