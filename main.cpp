#include "header.hpp"

int main()
{
  Game game;
  char menu;
  bool pleaseQuit;
  char choice;

  do
  {    
      menu = game.menuScreen();
    
      if(menu == 'p' || menu == 'P')
      {
        game.playGame();
        pleaseQuit = true;
      }
      else if(menu == 'q' || menu == 'Q')
      {
        pleaseQuit = true;
      }
      else if(menu == 'i' || menu == 'I')
      {
        cout<<"      ----------------SUDOKU-------------------\n\n";
        cout<<"To input your choice, choose an x and a y coordinate.\n";
        cout<<"Then input the number you wish to choose eg, 9\n";
        cout<<"If there is a zero, it means the space can be filled\n\n";
        cout<<"Would you like to return to the main menu? (y/n): ";
        cin>>choice;
        if(choice == 'Y' || choice == 'y')
        {
          pleaseQuit = false;
        }
        else
        {
          pleaseQuit = true;
        }

      }
  } while(pleaseQuit == false);

  return 0;
}
