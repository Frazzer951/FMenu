#include <iostream>

#include "FMenu.hpp"

void op1()
{
  std::cout << "You chose option 1!\n";
}

void op2()
{
  std::cout << "You chose option 2!\n";
}

int main()
{
  FMenu menu( "Main Menu" );
  menu.addMenuOption( menuOption( "Option 1", "This is an example option", op1 ) );
  menu.addMenuOption( menuOption( "Option 2", "This is an example option", op2 ) );

  FMenu subMenu( "Sub Menu" );
  menu.addSubMenu( subMenu );

  menu.runMenuContinuous();
}