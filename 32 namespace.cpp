// #include<iostream>
// //using namespace std;
// int main(){
// std::cout<<"Learn Coding..";

//     return 0;
// }


//we can creat   a self namespace
//user defined namespace




#include<iostream>
namespace A
{
    int a;
    void print ()
    {
        a=90;
        std::cout<<a<<"  ";
    }
}

namespace B
{
    int a;
    void print ()
    {
        a=780;
        std::cout<<a;
    }
}
int main(){

    A :: print();
    B::print ();  //'::' scop revolution operator 
    return 0;
}