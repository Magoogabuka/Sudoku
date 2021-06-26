#include "Utils.hpp"

void Game::drawBoard()
{
    for(int i = 0; i<9; i++)
    {
      cout<<"  "<<i+1<<" ";
    }
    cout<<"\n +---+---+---+---+---+---+---+---+---+\n";
    for(int i = 0; i<9; i++)
    {
      cout<<i+1;//sidebar column counter
      cout<<"| "<<sudokuBoardOne[i][0]<<" | "<<sudokuBoardOne[i][1]<<" | "<<sudokuBoardOne[i][2]<<" | "
        <<sudokuBoardOne[i][3]<<" | "<<sudokuBoardOne[i][4]<<" | "<<sudokuBoardOne[i][5]
          <<" | "<<sudokuBoardOne[i][6]<<" | "<<sudokuBoardOne[i][7]<<" | "<<sudokuBoardOne[i][8]<<" |";
      if(i != 8)
         {
           cout<<"\n +---+---+---+---+---+---+---+---+---+\n";
         }
    }
    cout<<"\n +---+---+---+---+---+---+---+---+---+\n";
}

int Game::playerChoiceRow()
{
  int row;
  cout<<"choose a row: ";
  cin>>row;
  return row;
}

int Game::playerChoiceColumn()
{
  int column;
  cout<<"choose a column: ";
  cin>>column;
  return column;
}

int Game::numberChosen()
{
  int choice;
  bool tryAgain = true;  

  /*int row = playerChoiceRow();
  int column = playerChoiceColumn();*/

  do
  {

      int row = playerChoiceRow();
      int column = playerChoiceColumn();

      if(row > 0 && column <= 9)
      {
        if(sudokuBoardOne[row-1][column-1] == 0)
        {
          cout<<"What number do you choose: ";
          cin>>choice;
          if((checkGrids(row, column, choice) == false))
          {
            if((checkColumn(column, choice) == false) && (checkRow(row, choice) == false))
            {
              sudokuBoardOne[row-1][column-1] = choice;
              tryAgain = false;
            }
          }
          else
          {
            tryAgain = true;
          }
        }
        else
        {
          cout<<"Space already taken! \n";
          tryAgain = true;
        }
      }
          //sudokuBoardOne[0][0] = choice;
    }while(tryAgain == true);

  return choice;
}

bool Game::checkTopGrids(int row, int column, int num)
{
  if((row > 0 && row<=3) && column <=3)
  {
    cout<<"you are in the first grid\n";
    for(int r = 0; r<3; r++)
    {
      for(int c = 0; c<3; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  else if((row > 0 && row<=3) && (column > 3 && column <=6))
  {
    cout<<"you are in the second grid\n";
    for(int r = 0; r<3; r++)
    {
      for(int c = 3; c<6; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  else if((row > 0 && row<=3) && (column > 6 && column <=9))
  {
    cout<<"you are in the third grid\n";
    for(int r = 0; r<3; r++)
    {
      for(int c = 6; c<9; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  
  return false;
}

bool Game::checkMiddleGrids(int row, int column, int num)
{
    if((row > 3 && row<=6) && column <=3)
  {
    cout<<"you are in the first grid\n";
    for(int r = 3; r<6; r++)
    {
      for(int c = 0; c<3; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  else if((row > 3 && row<=6) && (column > 3 && column <=6))
  {
    cout<<"you are in the second grid\n";
    for(int r = 3; r<6; r++)
    {
      for(int c = 3; c<6; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  else if((row > 3 && row<=6) && (column > 6 && column <=9))
  {
    cout<<"you are in the third grid\n";
    for(int r = 3; r<6; r++)
    {
      for(int c = 6; c<9; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  
  return false;

}

bool Game::checkBottomGrids(int row, int column, int num)
{
   if((row > 6 && row<=9) && column <=3)
  {
    cout<<"you are in the first grid\n";
    for(int r = 6; r<9; r++)
    {
      for(int c = 0; c<3; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  else if((row > 6 && row<=9) && (column > 3 && column <=6))
  {
    cout<<"you are in the second grid\n";
    for(int r = 6; r<9; r++)
    {
      for(int c = 3; c<6; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  else if((row > 6 && row<=9) && (column > 6 && column <=9))
  {
    cout<<"you are in the third grid\n";
    for(int r = 6; r<9; r++)
    {
      for(int c = 6; c<9; c++)
      {
        if(sudokuBoardOne[r][c] == num){
          cout<<"number already in grid\nplease choose another number\n";
          return true;
        }
      }
    }
  }
  
  return false;
  
}

bool Game::checkColumn(int column, int valueChosen)
{
  for(int r = 0; r<9; r++)
  {
    if(sudokuBoardOne[r][column-1] == valueChosen)
    {
      cout<<"number already in the column\nPlease Choose another number\n";
      return true;
    }
  }
  return false;
}

bool Game::checkRow(int row, int valueChosen)
{
  for(int c = 0; c<9; c++)
  {
    if(sudokuBoardOne[row-1][c] == valueChosen)
    {
      cout<<"number already in the row\nPlease Choose another number\n";
      return true;
    }
  }
  return false;
}

void Game::playGame()
{
  bool playAgain = true;
  char choice;

  drawBoard();

  do
  {
    numberChosen();
    updateBoard();

    cout<<"Would you like to play again?\n(Y). yes\n(N). no\nenter choice: ";
    cin>>choice;
    if(choice == 'Y' ||  choice == 'N')
    {
      playAgain = true;
    }
    else if(choice == 'N' || choice == 'n')
    {
      system("clear");
      playAgain = false;
    }

  } while (playAgain == true);


}

bool Game::checkGrids(int row, int column, int num)
{
  if((row > 0 && row<=3))
  {
    if(checkTopGrids(row, column, num) == true)
    {
      return true;
    }
  }
  else if(row > 3 && row<=6)
  {
    if(checkMiddleGrids(row, column, num) ==true)
    {
      return true;
    }
  }
  else if(row > 6 && row<=9)
  {
    if(checkBottomGrids(row, column, num) == true)
    {
      return true;
    }
  }
  return false;
}