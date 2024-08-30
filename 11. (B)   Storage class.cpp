
#include<iostream>
using namespace std;
/*  Storage class define the scope (range) and lifetime of variable and functions*/





   int a; //extern(global) storage class-default valu ='0'

int main(){

int b ;//auto(local)-default valu 'garbage'
static int c;//static-default valu '0'
register int d;//registerdefault valu 'garbage'

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
	return 0;
}