# Tic-Tac-Toe Game (C++)

A simple two-player Tic-Tac-Toe game written in C++ for the console.

## Author: Talha Pasha

## How to Compile and Run

Use any C++ compiler like g++ to compile the code:

g++ -o tic_tac_toe main.cpp  
./tic_tac_toe

(Replace main.cpp with your actual file name if it's different.)

## How to Play

- The program starts by asking for names of two players.
- Talha plays as X and Pasha plays as O.
- Each player takes turns entering a row and column number (1 to 3).
- The symbol (X or O) is placed on the selected position if it's empty.
- The game checks after each turn for a win or a draw.
- If a player gets 3 of their symbols in a row, column, or diagonal, they win.
- If all spaces are filled and no one wins, the game ends in a draw.

## Sample Output

TIC-TAC-TOE GAME:

Enter name of 1st Player: Talha  
Enter name of 2nd Player: Pasha  

Symbol for Talha: X  
Symbol for Pasha: O  

Talha's turn:  
Enter row (1-3): 1  
Enter column (1-3): 1  

X|-|- 
-----  
-|-|- 
-----  
## -|-|- 

Pasha's turn:  
Enter row (1-3): 2  
Enter column (1-3): 2  

X|-|- 
-----  
-|O|- 
-----  
-|-|- 
<hr>
... and so on, until someone wins or it's a draw.

## Features

- Two-player console game
- Validates input range (1–3)
- Shows messages if position is already taken
- Displays win or draw result at the end

## License

This project is made for educational purposes. Feel free to use or modify it. 
