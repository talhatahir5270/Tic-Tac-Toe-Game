# 🎮 Tic-Tac-Toe Game in C++

This is a simple **two-player console-based Tic-Tac-Toe game** written in C++. It allows two players to take turns marking spaces in a 3×3 grid, using `X` and `O`, and determines a win or draw based on classic Tic-Tac-Toe rules.

---

## 📋 Game Rules

- The game is played on a 3x3 grid.
- Player 1 uses the symbol `X` and Player 2 uses the symbol `O`.
- Players take turns placing their symbol in an unoccupied cell.
- The first player to get three of their marks in a row (vertically, horizontally, or diagonally) wins.
- If all cells are filled and there is no winner, the game ends in a draw.

---

## 🖼️ Game Board Layout

Each cell is mapped to a digit from 1 to 9 as shown:

 Tic-Tac-Toe-Game

  1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9


 
Players enter the number corresponding to the cell where they want to place their mark.

---

## 🚀 Features

- ✅ Two-player turn-based gameplay
- ✅ Input validation to prevent overwriting filled cells
- ✅ Real-time board updates after each move
- ✅ Automatic winner and draw detection
- ✅ Simple, beginner-friendly code structure
- ✅ Easily extendable for future features

---

## 🔧 Requirements

To run the program, you’ll need:

- A C++ compiler like `g++` (GCC) or MSVC (Visual Studio)
- A terminal or command prompt to execute the compiled program

---

## 🛠️ How to Compile and Run

## 🐧 On Linux / macOS


g++ tic_tac_toe.cpp -o tic_tac_toe
./tic_tac_toe

## On Winsows

g++ tic_tac_toe.cpp -o tic_tac_toe.exe
tic_tac_toe.exe

---


Press [Enter] to begin

Tic-Tac-Toe Game

Enter the name of Player 1 (X): Alice
Enter the name of Player 2 (O): Bob
Alice goes first.

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Alice's turn. Enter a number (1-9): 1

 X | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Bob's turn. Enter a number (1-9): 5

 X | 2 | 3
---|---|---
 4 | O | 6
---|---|---
 7 | 8 | 9

...

🎉 Alice wins!

