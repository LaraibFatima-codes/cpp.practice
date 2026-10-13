#include<iostream>
using namespace std;
int main(){

    char menuchoice, ans1, ans2, ans3, ans4, ans5;
    int sum;
    do
    {
        cout<<"~~~~~~~~ WELCOME~~~~~~~~~"<<endl;
        cout<<"Let's test your knowledge"<<endl;
        cout<<"1. Start Quiz"<<endl;
        cout<<"2. Instructions"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"What would you like to do today :";
        cin>>menuchoice;
        switch(menuchoice)
        {  case '1':
            sum=0;
            cout<<"Who painted Mona Lisa?"<<endl;
            cout<<"1. Leonardo da Vinci"<<endl;
            cout<<"2. Micheal Jakcson"<<endl;
            cout<<"3. Donald Trump"<<endl;                cout<<"What is the correct option (1,2 or 3): ";
            cin>> ans1;
            if(ans1=='1')
                {  cout<<"You are right"<<endl;
                    sum ++;  }
            else
                cout<<"Correct answer is Leonardo da Vinci"<<endl;
            cout<<"In which country is the Taj Mahal located?"<<endl;
            cout<<"1. Egypt"<<endl;
            cout<<"2. Pakistan"<<endl;
            cout<<"3. India"<<endl;
            cout<<"Which option is correct (1, 2 or3):";
            cin>>ans2;
            if(ans2=='3')
                {    cout<<"You are right"<<endl;
                     sum++;}
            else
                cout<<"Correct answer is India."<<endl;
            cout<<"What is the capital of Japan?"<<endl;
            cout<<"1. Hongkong"<<endl;
            cout<<"2. Tokyo"<<endl;
            cout<<"3. Yokohama"<<endl;
            cout<<"Which option is correct (1,2 or 3): ";
            cin>>ans3;
            if(ans3=='2')
             {   cout<<"You are right."<<endl;
                sum+=1;} 
            else
                cout<<"You are wrong."<<endl;
            cout<<"Which classic novel about a sprawkling Russina war and peace epic was written by Leo Tolsoy?"<<endl;
            cout<<"1. War and Peace."<<endl;
            cout<<"2. A Farewll to Arms"<<endl;
            cout<<"3. Birdsong"<<endl;
            cout<<"Which opiton is correct (1, 2 or 3): ";
            cin>>ans4;
            if(ans4=='1')
            {   cout<<"You are right.";
                sum++;}  
            else
                cout<<"Correct answer is War and Peace."<<endl;
            cout<<"Which river is recognized as the longest river in the world?"<<endl;
            cout<<"1. The Indus river"<<endl;
            cout<<"2. The Nile river"<<endl;
            cout<<"3. The Kenai river"<<endl;
            cout<<"Which is the correct option (1, 2 or 3): ";
            cin>>ans5;
            if(ans5=='2')
            {   cout<<"You are right"<<endl;
                sum++;}
            else
            {cout<<"Correct answer is The Nile River"<<endl;
            }
            cout<<"Your total score : "<<sum<<"/5"<<endl;
            break;    
            case '2':
            cout << R"(
==================================================
                   INSTRUCTIONS             
==================================================
1. The quiz consists of 5 multiple-choice questions.
2. Type 1 or 2 or 3 to answer, then press Enter.
3. You get 1 point for each correct answer. 
4. There is no negative marking for wrong answers.
Good luck! Press Enter to return to the main menu.
==================================================
)";
break;
case '3':
 cout<<"You have exit the game\n"<<endl;
break;
default:
cout<<"Invalid input, inpt again!\n";
}
}
while(menuchoice!='3');

}
