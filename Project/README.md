### AI-Powered Connect 4 Game 
### Project Overview
This project implements a Connect 4 game in C, featuring a 6x7 grid where players ('R' for red, 'B' for blue) aim to connect four discs horizontally, vertically, or diagonally. It supports Human vs. Human and Human vs. AI modes, with a command-line interface using Windows API for colored output. Key features include:

Game Modes: Human vs. Human (default) or Human vs. AI.
Controls: Commands for reset ('r'), save ('s'), load ('l'), and exit ('e').
Persistence: Saves game state to saves.csv and tracks wins in wins.txt.
Interface: Displays a colored grid, start menu with rules, and win/draw screens.
Code Structure: Modular, with connect4.h for declarations and connect4.c for implementation.


Human vs Human mode demo:

https://github.com/user-attachments/assets/e52dfb29-8686-460b-b371-af6a33630c5b



Human vs AI demo:





https://github.com/user-attachments/assets/95c04170-b75b-4f51-9ecf-7d1a700ffbba



The game uses safe input handling (fgets) and dynamic memory allocation for the grid. The AI, active in Human vs. AI mode, employs intelligent move selection.
Algorithms Implemented

Grid Management

Description: Allocates and initializes a 6x7 grid.
Implementation: create_game_grid() uses dynamic memory; initialize_grid() sets empty slots ('.').
Complexity: O(1) for fixed-size grid.
Purpose: Efficient board setup.


Move Validation and Placement

Description: Validates column moves and places discs in lowest empty slot.
Implementation: validate_move() checks bounds and column fullness; get_first_empty() finds lowest free row; set_grid() places disc.
Complexity: O(rows) per move.
Purpose: Ensures valid, gravity-based moves.


Win and Draw Detection

Description: Checks for four-in-a-row or full grid.
Implementation: game_win_status() scans all directions; game_draw_status() checks top row.
Complexity: O(rows * cols) for win, O(cols) for draw.
Purpose: Determines game outcome.


AI Move Selection

Description: Prioritizes winning, blocking, then strategic moves.
Implementation: get_ai_move() tries find_winning_move() for AI/opponent, then get_best_move_minimax().
Complexity: O(cols * rows * win_check) for simulations.
Purpose: Reactive and strategic AI decisions.


Minimax with Alpha-Beta Pruning

Description: Searches game tree for optimal moves, pruning unpromising branches.
Implementation: minimax() evaluates wins/losses/draws or board state at depth=6; uses alpha-beta pruning.
Complexity: Reduced from O(7^6) via pruning.
Purpose: Enables forward-looking AI strategy.


Board Evaluation

Description: Heuristically scores board states.
Implementation: evaluate_position() rewards center control; evaluate_windows() scores 4-slot windows (+100 for 4 AI, +10 for 3 AI + 1 empty, etc.).
Complexity: O(rows * cols).
Purpose: Guides minimax in non-terminal states.




Notes

Optimizations: Alpha-beta pruning improves efficiency; simulations are lightweight.
Limitations: Fixed depth (6) balances speed and strength.
Showcase: Clips can highlight gameplay, AI moves, and interface (colored grid, menus).
