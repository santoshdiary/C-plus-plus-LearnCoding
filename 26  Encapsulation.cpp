#include<iostream>
using namespace std;
class thief {
    private:            //in the case of encapsulation data members must be under of private section.
string name, address;
int mob;
public:
void input ()
{
    name = " Raj";
    address= "old purulia road";
    mob=45555455;

}
void output (){
    cout<<name<<endl;
     cout<<address<<endl;
      cout<<mob<<endl;
}
};

class police:public thief  
{

};
int main (){
   cout<<" thief access ........."<<endl; 
thief t;
t.input();
t.output();


    police p;
    cout<<" police    access ........."<<endl; 
   p.input();
   p.output();


    return 0;
}