#include <iostream>
using namespace std;
int main()
{

    // (1). If statement-  for one condition

    // int atm;
    //  cout<<"Enter your atm password:"<<endl;
    //  cin>>atm;
    //  if(atm==7345){
    //      cout<<"You can access your Balance   "<< "  Thank you"<<endl;
    //  }

    //(2). if-else statement- for two condition

    // int a,b;

    // cout<<"Enter two Number:";
    // cin>>a>>b;

    // if(a>b){
    //     cout<<"Maximum Number is :"<<a<<endl;
    // }
    // else{cout<<"Maximum Number is:"<<b<<endl;

    // }

    // By terinery operator:- this is short form of if-else statment
    //  int a,b  max;
    // max=(a>b)?a:b;    //if 'a' is grater then 'a'  will be print other wise 'b' will be pirnt
    // cout<<max;

    //(3).else-if ladder statement:- for Multiple  condition
    // int a, b;
    // int choice;
    // cout << "ENTER TWO NUMBER:" << endl;
    // cin >> a >> b;

    // cout << "What's your choice " << endl;
    // cout << "FOR ADDITON PRESS- 1" << endl;
    // cout << "FOR SUBSTRACTION PRESS-2" << endl;
    // cout << "FOR MULTIPLICITION PRESS-3" << endl;
    // cout << "FOR DIVISION PRESS-4" << endl;
    // cout << "Enter your choice:";
    // cin >> choice;

    // if (choice == 1)
    // {
    //     int sum = a + b;
    //     cout << "sum:" << sum;
    // }
    // else if (choice == 2)
    // {
    //     int sub = a - b;
    //     cout << "sub:" << sub;
    // }
    // else if (choice == 3)
    // {
    //     int mul = a * b;
    //     cout << "mul:" << mul;
    // }
    // else if (choice == 4)
    // {
    //     int div = a / b;
    //     cout << "div:" << div;
    // }
    // else
    // {
    //     cout << "Entered input invalid";
    // }

    //(4.) Nested if else Statement - for condition in condition
    int a=10, b=678, c=50;
    if(a>b){
        if(a>c){
            cout<<"max is "<<a<<endl;

        }
        else{
            cout<<"max is"<<c<<endl;
        }
    }
    else{
      if(b>c){
        cout<<"max is:"<< b <<endl;
    }
     else{
        cout<<"max is "<<c<<endl;
     }
    }
    return 0;
}