#include<iostream>
using namespace std;
void calculator(){
    float num1,num2,num3,num4,sum,difference,product,div;
    string opr;
    cout<<"Enter a number:\n";       //takes input from user as nmuber that is to be calculated
    cin>>num1;
    cout<<"Enter second number:\n";
    cin>>num2;
    cout<<"Enter third number:\n";
    cin>>num3;
    cout<<"Enter fourth number:\n";
    cin>>num4;
    while(opr != "add" && opr!="subtract" && opr!= "multiply" && opr!="divide") /* Applying while loop 
    to keep taking input from user until he/she enters valid input*/
    {
    cout<<"Enter the operation that you want to perform on the given numbers as add/subtract/multiply/divide:\n";
    cin>>opr;
    }

    if(opr=="add")    //Applying condition to perform the function as said by the user
    {
        sum=num1+num2+num3+num4;
        cout<<"Sum of given numbers is"<<sum;
    }
    else if(opr=="subtract")
    {
        difference=num1-num2-num3-num4;
        cout<<"Difference of given nymbers is"<<difference;
    }
    else if(opr=="multiply")
    {
        product=num1*num2*num3*num4;
        cout<<"Product of given numbers is"<<product;
    }
    else if(opr=="divide")
    {
        div=num1/num2/num3/num4;
        cout<<"Division of given numbers is"<<div;
    }


}    
int main(){
    calculator();
    return 0;
}
