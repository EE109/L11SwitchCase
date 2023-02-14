/*********************************************
* Alabama A&M University - EE109 - Spring 2023
* Lesson 11 sample code: Using Switch and Case
*    keywords to create a menu
* By:            Prof J Zehnpfennig, PE
* Created:       31 January 2023
* Last Updated:  14 Februrary 2023
* Happy Valentine's Day!
*********************************************/
#include <iostream>
#include <string>
#include <iomanip> //JZ - to manipulate cursor position in output
#include <stdlib.h> //JZ - to clear the screen
#include <stdio.h>

using namespace std;

//JZ - Initialize functions so the compiler knows they are there when you invoke them
void boilPasta();
void howToFish(int numFish);
void tipCalc();
void bizCard();


int main() 
{
  int numberFish = 0, selection = 7;

  while (selection < 0 || selection > 6)
    {
      //JZ - Output Main Menu 
      system("clear"); //JZ - passess command to linux shell to clear the console
      cout << "\n1 - Pasta Cooking Tutorial";
      cout << "\n2 - Fishing Tutorial";
      cout << "\n3 - Tip Calculator";
      cout << "\n4 - Business Card Prep";
      cout << "\n5 - Book a Reservation";
      cout << "\n6 - Address Book";
      cout << "\n0 - Exit Program";
      cout << "\n\nPlease make your selection (0-6): ";
      //JZ - collect user input
      cin >> selection;
      //launch selected function or exit
    switch (selection)
      {
        case 0: //JZ - Exit Program
          {
          cout << "\nThanks, the program is over.";
          return 0;        
          }
        case 1: //JZ - Boil Pasta
          {
          boilPasta();
          break;          
          }         
        case 2: //JZ - Fishing Tutorial
          {
          cout << "\nHow many fish do you want to catch?\n";
          cin >> numberFish;
          howToFish(numberFish);         
          }
        case 3: //JZ - Tip Calculator
          {
          tipCalc();
          break;          
          }
        case 4: //JZ - Tip Calculator
          {
          bizCard();
          break;          
          }
        //JZ - add additional cases here to expand the menu
      }

      //JZ - reset 'selection' so that the menu will run again
      selection = -1;//return to menu
    }
    
  return 0;
}

//JZ - invoke our functions
//this is selection "1" from the menu
void boilPasta()  //JZ - takes no values in and returns nothing to the calling function
{
  /*
  Your code goes here
  */
  
  cout << "\nYay!  The pasta boiled nicely.  Al dente.\n";  //JZ - example line to show the function worked.  You can delete it.
  
}

//this is selection "2" from the menu
void howToFish(int numFish)  //JZ takes in an integer value numFish and returns nothing to the calling function.
{
  /*
  Your code goes here
  */
  
  cout << "\nYou will catch " << numFish << " fish.\n";     //JZ - example line to show the function worked.  You can delete it.
  
}

void bizCard()
{
  //JZ - define the variables
  string name, title, business, phone, address, email;
  char sel = 'a';

  //JZ - Business Card Menu
  while (sel != 'q' && sel != 'Q')
    {
      system("clear"); //JZ - clears the screen
      cout << "\t\t\t\tBusiness Card!";
      cout << "\n\n\t\t\tD - Print Default Business Card";
      cout << "\n\t\t\tC - Print Custom Business Card";
      cout << "\n\t\t\tQ - Quit Printing Business Cards";
      cout << "\n\nEnter your selection: ";
      cin >> sel;
      //JZ - input validations
      while (sel != 'D' && sel != 'd' && sel != 'C' && sel != 'c' && sel != 'Q' && sel != 'q' )
        {
          cout << "\nInvalid Input!  Please enter D, C, or Q: ";
          cin >> sel;
        }
      //JZ - implement user's choice
      if (sel == 'Q' || sel == 'q') //JZ - start with exit case to save processor time
      {
        cout << "\n\nThanks for using the Business Card app!";
        return;
      }
      else if (sel == 'D' || sel == 'd') //JZ - Set default values
      {
        name = "Banana Rama Lama";
        title = "Chief Chewer";
        business = "Smoothie Shock!";
        phone = "+1-256-BAN-ANA1";
        address = "123 Main Street | Normal, Alabama"; 
        email = "bigBanana@SmoothShock.xyz";
      }
      else if (sel == 'C' || sel == 'c') //JZ - collect custom values.  Using 'getline(cin, VAR) so the user can input ' ' space characters'
      {
        cout << "\nPlease enter the person's name: ";
        getline(cin, name);
        cout << "\nPlease enter the person's title: ";
        getline(cin,title);
        cout << "\nPlease enter the person's business: ";
        getline(cin, business);
        cout << "\nPlease enter the person's phone number: ";
        getline(cin, phone);
        cout << "\nPlease enter the person's business email: ";
        getline(cin, email);   
        cout << "\nPlease enter the person's business address: ";
        getline(cin, address); 
      }

      //JZ - Output 2 x 3 array of business cards
      for (int x = 0 ; x < 3 ; x++)
        {
          cout << "\n\n\n\t\t" << left << setw(40) << business;
          cout << left << setw(40) << business;
          
          cout << "\n\n\t" << left << setw(40) << name; 
          cout << left << setw(40) << name;
     
          cout << "\n\t" << left << setw(40) << title;
          cout << left << setw(40) << title;
          
          cout << "\n\n" << left << setw(40) << phone;
          cout << left << setw(40) << phone;
          
          cout << "\n" << left << setw(40) << email;
          cout << left << setw(40) << email;
          
          cout << "\n" << left << setw(40) << address;
          cout << left << setw(40) << address;
        }
      cout << "\n\nPress any key to return to the Business Card menu.";
      getchar(); getchar();//JZ - causes the system to pause until user input.  Used double 'getchar()' to catch any stray characters in the buffer - so the user actually gets a chance to enter a keystroke.
     }
  
}

void tipCalc()
{
  //JZ - define and initialize variables
  float bill = 0.0, tip = 0.0, total = 0.0, rate = -1;
  char sel = 'a';
  
  //JZ - Business Card Menu
  while (sel != 'q' && sel != 'Q')
    {
      rate = -1; //JZ - Reset rate for loops
      system("clear"); //JZ - passes command to Linux to clear the console
      cout << "\t\t\t\tTip Calculator!";
      cout << "\n\n\t\t\tD - Calculate 15% Tip";
      cout << "\n\t\t\tC - Calculate Custom Tip";
      cout << "\n\t\t\tQ - Quit Calculating Tips";
      cout << "\n\nEnter your selection: ";
      cin >> sel;
      
      //JZ - input validation
      while (sel != 'D' && sel != 'd' && sel != 'C' && sel != 'c' && sel != 'Q' && sel != 'q' )
        {
          cout << "\nInvalid Input!  Please enter D, C, or Q: ";
          cin >> sel;
        }
      
           //JZ - set tiprate
      if (sel == 'Q' || sel == 'q') //JZ - start with exit case 
        {
          cout << "\n\nThanks for using the Tip Calculator app!";
          return;
        }
      else if (sel == 'd' || sel == 'D')
        {
          rate = 15;
        }
      else if (sel == 'c' || sel == 'C')
        {
          //JZ - Input validation verifies tip rate is between 0% and 100%
          while (rate > 100 || rate < 0)
            {
              cout << "\nPlease enter the tip rate as a whole number.  For example, you would for an 18% tip you input: 18  Rate: ";
              cin >> rate;              
            }          
        }
      
      
      //JZ - collect bill amount
      cout << "\n\nPlease enter the pre-tip bill value: $";
      cin >> bill;
     
      //JZ - make calculations
      tip = bill * (rate/100);
      total = bill + tip;
      //JZ - Output results
      cout << "\n\nFor the $" << bill <<" bill, the tip is $" << tip << " at a rate of " << rate << "%.  This brings the total cost to $" << total << "  Press any key to return to the Tip Calculator menu.";
      getchar(); getchar();//JZ - causes the system to pause until user input.  Used double 'getchar()' to catch any stray characters in the buffer - so the user actually gets a chance to enter a keystroke.
      

   }
}
  
