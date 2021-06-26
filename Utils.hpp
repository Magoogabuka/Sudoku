#include <iostream>

using namespace std;

enum Size
{
  boardSize = 9
};

 int sudokuBoardOne[boardSize][boardSize] = {
                {6,0,8,4,1,9,7,0,5},
                {0,0,0,0,2,0,1,0,3},
                {2,1,7,3,0,8,9,0,6},
                {8,0,3,0,0,0,2,9,0},
                {0,5,1,9,0,0,0,6,0},
                {0,0,0,0,4,0,8,0,0},
                {5,0,0,0,0,0,0,1,0},
                {0,0,0,8,0,5,6,0,0},
                {0,8,2,0,6,0,0,0,0},
          };
//class definitions
class Game
{
  public:
    void drawBoard();
    void updateBoard(){system("clear"); drawBoard();};
    void playGame();
    void checkThreeGrid(int array[boardSize][boardSize], int row, int column);

    //bool emptyRowCol();
    bool checkTopGrids(int row, int column, int num);
    bool checkMiddleGrids(int row, int column, int num);
    bool checkBottomGrids(int row, int column, int num);
    bool checkGrids(int row, int column, int num);
    bool checkRow(int row, int num);
    bool checkColumn(int column, int num);


    int playerChoiceRow();
    int playerChoiceColumn();
    int numberChosen();
  
  private://8, row 1, column 3

};