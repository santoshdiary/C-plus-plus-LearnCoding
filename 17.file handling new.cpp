#include<iostream>
#include<fstream>//it's compulsory to include this header file to  work on file related operation
using namespace std;
int main(){


//1 To creat and write file-

// ofstream newFile("C:\\Users\\91900\\Desktop\\c ++\\file handling\\santosh.txt");
// //here newFile is an object of ofstream class
// newFile<<"santosh is best student who always try to do better I lerant this course from learn coding"<<endl;
// cout<<"File created...";


//2.read the file 

string str;
ifstream newFile("C:\\Users\\91900\\Desktop\\c ++\\file handling\\santosh.txt");
while(getline(newFile,str)){

    cout<<str;
}
newFile.close();

    return 0;
}