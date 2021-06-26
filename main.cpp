#include "header.hpp"

//function declarations

int main()
{
  Game game;

  cout<<"SUDOKU"<<endl;
  cout<<"To input your choice, choose an x and a y coordinate."<<endl;
  cout<<"Then input the number you wish to choose eg, 9"<<endl;
  cout<<"If there is a zero, it means the space can be filled"<<endl;

  //game.drawBoard();
  //game.emptyRowCol();
  //initBoard();
  game.playGame();

  return 0;
}