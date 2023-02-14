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
      cout << "\n\n1 - Pasta Cooking Tutorial";
      cout << "\n\n2 - Fishing Tutorial";
      cout << "\n\n3 - Tip Calculator";
      cout << "\n\n4 - Business Card Prep";
      cout << "\n\n5 - Book a Reservation";
      cout << "\n\n6 - Address Book";
      cout << "\n\n0 - Exit Program";
      cout << "\n\nPlease make your selection (0-2): ";
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
          case 3: //JZ - Tip Calculator
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
      cout << "\n\n\t\t\tBusiness Card!";
      cout << "\n\t\t\tD - Print Default Business Card";
      cout << "\n\t\t\tC - Print Custom Business Card";
      cout << "\n\t\t\tQ - Quit Printing Business Cards";
      cout << "\nEnter your selection: ";
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
        email = "bigBanana@SmoothieShockAL!!.xyz";
      }
      else if (sel == 'C' || sel == 'c') //JZ - collect custom values
      {
        cout << "\nPlease enter the person's name: ";
        cin >> name;
        cout << "\nPlease enter the person's title: ";
        cin >> title;
        cout << "\nPlease enter the person's business: ";
        cin >> business;
        cout << "\nPlease enter the person's phone number: ";
        cin >> phone;
        cout << "\nPlease enter the person's business email: ";
        cin >> email;   
        cout << "\nPlease enter the person's business address: ";
        cin >> address; 
      }

      //JZ - Output 2 x 3 array of business cards
      for (int x = 0 ; x < 3 ; x++)
        {
          cout << "\n\n\n\t" << business << "\t\t\t\t" << name;
          cout << "\\n\n" << name << "\t\t\t\t" << name;
          cout << "\n" << title << "\t\t\t\t" << title;
          cout << "\n" << phone << "\t\t\t\t" << phone;
          cout << "\n" << email << "\t\t\t\t" << email;
          cout << "\n\n" << address << "\t\t\t" << address;
        }
     }
  
}

void tipCalc()
{

  
}