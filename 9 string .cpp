#include<iostream>
#include<string.h> //for strlen function
using namespace std;
int main(){

//syntax:-
//data_type  string name [ size];
// char a [] = " example ";




    /* TYPES OF STRING IN C++  :-

    1. strlen( name of string variable  )
     2.strrev()
     3. strcat()
     4.strcpy()
     5.strlwr()
     6. strupr()
     
    
    
    
    
    
    
    
    
    
    */
    
char str []="Ankit";
cout<<str<<endl;

int r=strlen(str); /*strlen (name of string variable  )   is a pre define function which is used 
                   to count the string length .it return (give) us a integer value =no.of charcter.  */
cout<<r<<endl;

//strrev(str);// it reverse the string 
//cout<<str;

// char str[]="Santosh";
// char str2[]="Kumar";

// strcat(str,str2);   // to marge two string 
// cout<<str;


// char str[]="Lall ";
// char str2[20];
// strcpy(str2,str);// to copy another string in to  other string ;
// cout<<str2;


// char school[]="HANSDIAH SCHOOL HANSIDIHA";
// strlwr(school);// To convert  string in lower case
// cout<<school;

// char dumka[]="high school hansdiha";
// strupr(dumka);//to convert string in upper case

// cout<<dumka;





     return 0;
}