#ifndef SO_LONG_H
#define SO_LONG_H

#include <mlx.h>

// Define constants
#define WIDTH 800
#define HEIGHT 600
#define TITLE "So Long"

// Define enum for game states
typedef enum {
    GAME_START,
    GAME_PLAYING,
    GAME_PAUSED,
    GAME_OVER
} game_state;

// Define struct for game data
typedef struct {
    void *mlx;
    void *window;
    int width;
    int height;
    int **map;
    int player_x;
    int player_y;
    int collectibles;
    int exits;
    game_state state;
} game_data;

// Function declarations
void init_game(game_data *game);
void render_game(game_data *game);
void handle_key_press(int key, game_data *game);
void handle_key_release(int key, game_data *game);
void update_game(game_data *game);

#endif