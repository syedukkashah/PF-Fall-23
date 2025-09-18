#ifndef CONNECT4_H
#define CONNECT4_H

#include <stdbool.h>

// Original function declarations
//displays start menu and returns game mode
int start_menu();

// create a game grid
char **create_game_grid();

// initializes the grid
void initialize_grid(char **grid);

// changes console color to the code value
void set_color(int color);

// change color of character
void color_player(char player);

// print the game grid
void print_grid(char **grid);

// update the frame by clearing the screen and printing the grid
void update_frame(char **grid);

// user input for the column number or if user wants to save or exit
int user_input(char **grid, int *player); 

// validate a move in the specified column
bool validate_move(char **grid, int col);

// get the first empty row in a column
int get_first_empty(char **grid, int col);

// set the grid at the specified column and row with the player's character
void set_grid(char **grid, int col, int player);

// check the win status of the game after a move
bool game_win_status(char **grid, int player);

// check if the game is a draw
bool game_draw_status(char **grid);

// displays game draw screen to player
void game_draw_display(char **grid, int player);

// displays game end screen to player
void game_end_display(char **grid, int player);

// extracts player wins from the wins file
int *save_win(int player);

// checks if the grid is empty
// used to prevent saving an empty grid
bool check_empty_grid(char **grid);

// saves the game progress and turn
void save_game(char **grid, int player);

// loads the game from the file
int load_game(char **grid, int player);

// shows the wins for each player
void display_wins(int player);

// AI function declarations
// gets the best move for AI player
int get_ai_move(char **grid, int ai_player);

// finds a winning move for the specified player
int find_winning_move(char **grid, int player);

// gets the best move using minimax algorithm
int get_best_move_minimax(char **grid, int ai_player);

// minimax algorithm with alpha-beta pruning
int minimax(char **grid, int depth, bool maximizing, int ai_player, int alpha, int beta);

// evaluates the current board position
int evaluate_position(char **grid, int ai_player);

// evaluates all possible 4-piece windows
int evaluate_windows(char **grid, char ai_char, char opponent_char);

// evaluates a single 4-piece window
int evaluate_window(char **grid, int row, int col, int delta_row, int delta_col, char ai_char, char opponent_char);

#endif
