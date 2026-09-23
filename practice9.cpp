#include<iostream>
using namespace std;
int main (){

    int user_choice;

    cout<< "ROCK PAPER SCISSORS"<< endl;
    cout<< "1. Rock" <<endl;
    cout<< "2. Paper" <<endl;
    cout<< "3. Scissors" <<endl;

    cout<< "Enter your choice :";
    cin>> user_choice;
    cout<< "Computer chose rock" <<endl;

    if(user_choice == 1 )
      cout<< "You made the same choice as computer" <<endl;
    
    else if(user_choice == 2 )
      cout<< "Congratulations! You won" <<endl;

    else
       cout<< "Oops! You've lost the game" <<endl;

    return 0;
}