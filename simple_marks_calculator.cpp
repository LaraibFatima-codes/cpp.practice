#include<iostream>
using namespace std;
int main(){
    float maths , physics , computer ;

       cout<< "\nEnter your maths' marks:"; // prints the statement Enter your marks:
       cin>> maths;                      // takes the input for maths 
       cout<<"\nEnter your physics marks :";
       cin>> physics;
       cout<< "\nEnter your computer marks:";
       cin>> computer;

       float total = maths + physics + computer;
       float percentage = (total/300)*100;

       cout<< "\nTotal marks :"<< total << "/300" ;
       cout<< "\n Percantage :"<< percentage << "%";
       return 0;
}
