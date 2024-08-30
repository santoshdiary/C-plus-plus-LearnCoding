#include<iostream>
using namespace std;

class ankit{

    private:
    string tv;
    public:
    void show(){
        tv= "IPL final 2021";

    }
    friend void ankush (ankit r);
};

void ankush (ankit r){              //ankush is another funtion which access  the variable's value  of ankit class with the help of friend function. 
    cout<<" I'm watching "<<r.tv;
}

int main(){
    
    ankit a;
a.show();
ankush (a);

return 0;
}