// #include<iostream>
// using namespace std;
// void fun() {    //function declration or definition
//  int a=10;
// static int b=10;
// cout<<a<<" " <<b<<endl;
// ++a;  ++b;
// }
//
//    int main(){
//	fun();       //function calling
// 	fun();
//	return 0;
// }


 #include<iostream>
 using namespace std;
 int a=10;        // extern (global variable)- we can use any where in whole programe
 void fun()      //function definition
 {
 	cout<<a<<endl;
 }
 int main(){
 	int b=20; //local variable
 	fun();   // function calling 
 	fun();
 	fun();
 	cout<<a<<" "<<b;
 	
 	return 0;
 }
