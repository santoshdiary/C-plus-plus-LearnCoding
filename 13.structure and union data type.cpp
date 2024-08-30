#include<iostream>
using namespace std;

struct santosh 
{
    int marks; // int 4 bytes
    float avg;//float 4 bytes
    double salary;//double 8 bytes  (4+4+8=16 bytes)
};
union santosh2 
{
int marks;
float avg;
double salary;//double 8 bytes ( union size = 8 bytes)

};

int main(){


    struct santosh s;
    union santosh2 s2;
    cout<<"Structure  size="<<sizeof(s)<<endl;
    cout<<"Union size="<<sizeof(s2);
    return 0;
}