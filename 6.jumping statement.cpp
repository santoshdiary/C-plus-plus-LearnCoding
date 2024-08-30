#include<iostream>
using namespace std;
int main(){
// 1. Break statement- it is used to terminate the loop*

// int i;
// for(i=1;i<=10;i++){
//     if(i==6)
//     break;                           //Break statement
//     cout<<i<<endl;
// }


// 1. continue statement-it is used to skip the conditional statement

// int i;
// for(i=1;i<=10;i++){
//     if(i==6)
//    continue;                           //Continue statement
//     cout<<i<<endl;
// }


//3.Goto statement- for jumps a place to another place

int age;
cout<<" Enter your age:";
cin>>age;
if(age>=18)
goto vote;           // going to vote

else

goto notevote;

vote:                 //coming to vote
cout<<"Eligible for vote";
return 0;
notevote:
cout<<"not eligible for vote";
 
//4. exit - for eixt* the programme
// cout<<"Santosh bro"<<endl;
// exit(0);// we can use any number in place of 0;

// cout<<"ramakrishna bro"<<endl;
// cout<<"karan bro"<<endl;
    return  0;
}