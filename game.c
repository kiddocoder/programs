#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define TILE_COUNT 20
#define GRID_SIZE 400
#define INITIAL_TAIL 4
#define GAME_SPEED 100  // 100 ms

typedef struct {
    int x;
    int y;
} Point;

typedef enum {
    none, up, down, left, right
} Action;

typedef struct {
    Point player;
    Point fruit;
    Point trail[TILE_COUNT * TILE_COUNT];
    int tail;
    int points;
    int pointsMax;
    int tileCount;
    int gridSize;
    int velocityX;
    int velocityY;
    Action lastAction;
} SnakeGame;

void initializeGame(SnakeGame *game) {
    game->tileCount = TILE_COUNT;
    game->gridSize = GRID_SIZE;
    game->tail = INITIAL_TAIL;
    game->points = 0;
    game->pointsMax = 0;
    game->velocityX = 0;
    game->velocityY = 0;
    game->lastAction = none;
    // Initialize player and fruit positions
    game->player.x = game->tileCount / 2;
    game->player.y = game->tileCount / 2;
    game->fruit.x = 1;
    game->fruit.y = 1;
    // Initialize trail
    for (int i = 0; i < game->tail; i++) {
        game->trail[i].x = game->player.x;
        game->trail[i].y = game->player.y;
    }
}

void drawGame(SnakeGame *game) {
    system("cls");  // Clear the console
    // Draw the game grid
    for (int i = 0; i < game->tileCount; i++) {
        for (int j = 0; j < game->tileCount; j++) {
            if (i == game->player.y && j == game->player.x) {
                printf("#");  // Draw the snake
            } else if (i == game->fruit.y && j == game->fruit.x) {
                printf("o");  // Draw the fruit
            } else {
                printf(".");  // Empty cell
            }
        }
        printf("\n");
    }
    // Display the score
    printf("Points: %d\n", game->points);
}

void processInput(SnakeGame *game, char input) {
    switch (input) {
        case 56:  // Up arrow key (8)
            if (game->lastAction != down) {
                game->velocityX = 0;
                game->velocityY = -1;
                game->lastAction = up;
            }
            break;
        case 50:  // Down arrow key (2)
            if (game->lastAction != up) {
                game->velocityX = 0;
                game->velocityY = 1;
                game->lastAction = down;
            }
            break;
        case 52:  // Left arrow key (4)
            if (game->lastAction != right) {
                game->velocityX = -1;
                game->velocityY = 0;
                game->lastAction = left;
            }
            break;
        case 54:  // Right arrow key (6)
            if (game->lastAction != left) {
                game->velocityX = 1;
                game->velocityY = 0;
                game->lastAction = right;
            }
            break;
        default:
            break;
    }
}

void updateGame(SnakeGame *game) {
    game->player.x += game->velocityX;
    game->player.y += game->velocityY;
    // Check for collisions and update points
    if (game->player.x == game->fruit.x && game->player.y == game->fruit.y) {
        game->points++;
        game->fruit.x = rand() % game->tileCount;
        game->fruit.y = rand() % game->tileCount;
    }
}

void delay(unsigned int ms) {
    clock_t goal = ms + clock();
    while (goal > clock());
}

int main() {
    SnakeGame game;
    initializeGame(&game);
    // Game loop
    while (1) {
        if (_kbhit()) {
            char input = _getch();
            processInput(&game, input);
        }
        updateGame(&game);
        drawGame(&game);
        delay(GAME_SPEED);
    }
    return 0;
}