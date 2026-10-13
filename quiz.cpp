#include<iostream>
using namespace std;
int main(){
     int sum = 0;
    char a,b, c, d, ans1, ans2, ans3, ans4;

    cout<< "Lets test your knowledge ! \n\n";
    cout<< "Question no 1:\n";
    cout<< "Which planet is known as the Red Planet?\n";
    cout<< "a.Venus\n";
    cout<< "b.Mars\n";
    cout<< "c.Jupiter\n";
    cout<< "d.Saturn\n";
    cout<< "Your answer :";
    cin>> ans1;
    if(ans1 =='b')
      {cout<< "Congratulations your answer is correct\n";
      sum=sum+1;}
    else
      cout<< "You are wrong, correct answer is Mars\n";

    cout<< "Question no 2 :\n";  
    cout<< "Which is the largest ocean on earth\n";
    cout<< "a. Atlantic ocean\n";
    cout<< "b. Indian ocean\n";
    cout<< "c. Pacific ocean\n";
    cout<< "d. Arctic ocean\n";
    cout<< "Your answer :";
    cin>> ans2;
    if(ans2=='c')
     { cout<< "Congratulations, your answer is correct\n";
        sum=sum+1;}
    else
    cout<< "You are wrong, correct answer is pacific ocean\n";

    cout<< "Question no. 3:\n";
    cout<< "Who painted the Mona Lisa?\n";
    cout<< "a. Michelangelo\n";
    cout<< "b. Leonardo da Vinci\n";
    cout<< "c. Pablo Picasso\n";
    cout<< "d. Vincent van Gogh\n";
    cout<< "Your answer :";
    cin>> ans3;
    if(ans3=='b')
     {cout<< "Congratulations, your answer is correct.\n";
       sum = sum+1; }
    else
      cout<< "You are wrong, correct answer is Leonardo da Vinci\n ";

    cout<< "Question no. 4:\n";
    cout<< "Which country is famous for the Great Wall?\n";
    cout<< "a. Japan\n";
    cout<<  "b. Korea\n";
    cout<< "c. Thailand\n";
    cout<< "d. China\n";
    cout<< "Your answer :";
    cin>> ans4;
    if(ans4=='d')
      {cout<< "Congratulations your answer is correct.\n";
        sum = sum +1 ; }
    else
       cout<< "You are wrong, correct answer is China.\n";

    cout<< "Your score :"<<sum <<"/4\n\n";
    if(sum==4)
       cout<< "You've done a great job\n";
    else if (sum==3)
       cout<< "Much better\n";
    else if (sum==2)
       cout<< "You need to improve\n";
    else if (sum==1)
       cout<< "You need to improve\n";
    else if(sum==0)
       cout<< "Better luck next time\n";

    return 0;
}
