# Tic-Tac-Toe in C++

A simple command-line implementation of the classic Tic-Tac-Toe game for two players.

## Description

This is a console-based Tic-Tac-Toe game written in C++. Players take turns placing their markers (X or O) on a 3x3 grid. The game checks for wins across rows, columns, and diagonals, and declares a tie if the board fills up without a winner.

## Features

- Two-player turn-based gameplay
- Input validation for positions and markers
- Win detection for all possible winning combinations
- Tie detection
- Simple text-based board display

## Requirements

- C++ compiler (e.g., g++, clang++)
- Standard C++ libraries (iostream)

## How to Compile and Run

1. Ensure you have a C++ compiler installed on your system.

2. Compile the program:
   ```
   g++ tic.cpp -o tic-tac-toe
   ```

3. Run the executable:
   ```
   ./tic-tac-toe
   ```

   On Windows, you may need to use:
   ```
   tic-tac-toe.exe
   ```

## Gameplay

- Player 1 chooses their marker (X or O)
- Players take turns entering a position (1-9) to place their marker
- The board is displayed after each move
- The game ends when a player wins or the board is full (tie)

## Board Positions

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```
