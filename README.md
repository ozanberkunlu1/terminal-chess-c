# terminal-chess-c
A terminal based chess game with basic AI bot and match logging written in C from scratch.

## Features
- **Dynamic Memory Allocation:** Uses `malloc` to manage the 8x8 game board dynamically.
- **Rule Validation:** Custom movement logic for all pieces (pawns, knights, rooks, bishops, queens, kings) including obstacle collision checks.
- **AI Opponent:** A randomized bot logic for single player matches.
- **Game Logging:** Automatically records all moves into a file(notasyon.txt).

## How to Compile and Run
1. Clone the repository:
   ```bash
   git clone [https://github.com/ozanberkunlu1/terminal-chess-c.git](https://github.com/ozanberkunlu1/terminal-chess-c.git)
   
2. Navigate to the project directory and compile using GCC:
   '''bash
   gcc chess.c -o chess
   
4. Run the executable:
   '''bash
   ./chess
