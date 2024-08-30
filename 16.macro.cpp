// #include<iostream>
// #define num 10  //here num is macro   * object like macro
// using namespace std;

// int main(){
// int i,r;
// for ( i = 1; i<=10; i++)
// {  r=num*i;
// cout<<num<<"*"<<i<<"="<<r<<endl;
    
// }


// return 0;


#include<iostream>
#define num(a,b)  ( (a>b)?a:b)		//functio like macro
using namespace std;

int main(){
cout<<num(236,1645)<<endl;
cout<<num(23096,17675)<<endl;
cout<<num(23556,1698945)<<endl;
cout<<num(245436,197645)<<endl;


return 0;
}











