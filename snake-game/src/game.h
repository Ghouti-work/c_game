#ifndef GAME_H
#define GAME_H

class Game {
public:
    void start();
    void update();
    void render();
    
private:
    void processInput();
    void logic();
    void draw();
    void checkCollision();
    void generateFood();
    
    // Game state variables
    int snakeLength;
    int snakePositionX;
    int snakePositionY;
    int foodPositionX;
    int foodPositionY;
    bool gameOver;
};

#endif // GAME_H