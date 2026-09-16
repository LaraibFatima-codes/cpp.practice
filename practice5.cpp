#include<iostream>
using namespace std;
int main(){

    int maths,physics,english,chemistry,social_sciences;
    int total;
    float percentage;
//Taking input (marks) from user 
    cout<< "Enter your maths' marks:\n";
    cin>>maths;
    
    cout<< "Enter your physics' marks :\n";
    cin>>physics;

    cout<< "Enter your English' marks :\n";
    cin>> english;

    cout<< "Enter your chemistry's marks:\n";
    cin>>chemistry;

    cout<< "Enter your social sciences' marks:\n";
    cin>>social_sciences;

// Calculating total marks and printing it
    total = maths + physics + english + chemistry + social_sciences;
    cout<< "Your total marks are "<<total<<endl;

//Calculating percentage ad printing it
    percentage = (total/500.0)*100;
    cout<< "Your percentage is "<<percentage <<"%\n";

//Calculating the grade according to grading scheme and printing the grade accordingly
    if(percentage>80)
       cout<<"YOur grade is A\n";

    else if (percentage>70)
       cout<<"Your grade is B\n";

    else if (percentage>60)
       cout<<"Your grade is C\n ";

    else if (percentage>50)
       cout<<"Your grade is D\n ";

    else 
       cout<< "You are fail :(\n";
       
    return 0;

}