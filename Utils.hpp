#include <iostream>

using namespace std;

enum Size
{
  boardSize = 9
};

 int sudokuBoardOne[boardSize][boardSize] = {
                {6,0,8,4,1,9,7,0,5},
                {0,0,0,7,2,6,1,8,3},
                {2,1,7,3,5,8,9,0,6},
                {8,6,3,5,7,1,2,9,4},
                {4,5,1,9,8,2,3,6,7},
                {7,2,9,6,4,3,8,5,1},
                {5,9,6,2,3,7,4,1,8},
                {1,7,4,8,9,5,6,3,2},
                {3,8,2,1,6,4,5,7,0},
          };
//class definitions
class Game
{
  public:
    void drawBoard();
    void updateBoard(){system("clear"); drawBoard();};
    void playGame();
    void clearMatrix();
   

    //bool emptyRowCol();
    bool checkTopGrids(int row, int column, int num);
    bool checkMiddleGrids(int row, int column, int num);
    bool checkBottomGrids(int row, int column, int num);
    bool checkGrids(int row, int column, int num);
    bool checkRow(int row, int num);
    bool checkColumn(int column, int num);
    bool checkEndOfGame();


    int playerChoiceRow();
    int playerChoiceColumn();
    int numberChosen();
  
  private://8, row 1, column 3

};
