#include<iostream>
using namespace std;
int main(){
     
    int budget, food, trans, enter, edu, other, total, left;
    
    cout<< "Enter your monthyly budget: " <<endl; /* Takes total budget as input and saves
     it in variable budget */
    cin>> budget;

    cout<< "Enter the money spent monthly on Food: " <<endl;
    cin>> food;

    cout<< "Enter the money spent monthly on transportation: " <<endl;
    cin>> trans;

    cout<< "Enter the money spent monthly on education: " <<endl;
    cin>> edu;

    cout<< "Enter the money spent monthly on entertainment: " <<endl;
    cin>> enter;

    cout<< "Enter the other monthly expenditures: " <<endl;
    cin>> other;

//calculating and printing the total money spent monthly
    total= food + trans + edu + enter + other ; 
    cout<< "Total money spent monthly : " << total << endl;
//calculating and printing the money left with user 
    left = budget - total;
    cout<< "Remaining money : " << left << endl;

//Now checking in which area do the user has spend most of his/her money
    if(food>trans && food>edu && food>enter && food>other )
       cout<< "You have spent most of your money on food this month\n";

    else if (trans>food && trans>edu && trans>enter && trans>other)
       cout<< "You have spent most of your money on transportation this month\n ";

    else if (edu>food && edu>trans && edu>enter && edu>other)
       cout<< "You have spent most of your money on education this month\n ";

    else if (enter>food && enter>trans && enter>edu && enter>other)
       cout<< "You have spent most of your money on entertainment this month\n ";

    else
      cout<< "You have spent most of your money on other expenditures this month\n ";

    return 0;

}
