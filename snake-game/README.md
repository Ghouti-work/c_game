# Snake Game

This is a simple implementation of the classic Snake game using C++. The game allows players to control a snake to collect food while avoiding collisions with the walls and itself.

## Project Structure

```
snake-game
├── src
│   ├── main.cpp        # Entry point of the game
│   ├── game.cpp        # Implementation of the Game class
│   ├── game.h          # Declaration of the Game class
│   └── utils
│       ├── utils.cpp   # Utility functions implementation
│       └── utils.h     # Declaration of utility functions
├── Makefile            # Build instructions
└── README.md           # Project documentation
```

## Building the Game

To build the Snake game, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create an executable.

## Running the Game

After building the project, you can run the game with the following command:

```
./snake-game
```

## Controls

- Use the arrow keys to control the direction of the snake.
- Collect the food to grow the snake.
- Avoid colliding with the walls or the snake's own body.

## License

This project is open-source and available for modification and distribution.