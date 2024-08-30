#include<iostream>
using namespace std;

class goutam;

class aman{
private:
int a ;
public:
void ihave (){
    a=89;
}
friend void santosh (aman p, goutam p2);
};

class goutam{
    private:
    int b;
    public:
    void ihave(){
        b=10;
    }
    friend void santosh (aman p,goutam p2 );
};
void santosh (aman p, goutam p2){
    int c;
    c=p.a+p2.b; //here santosh took debt from aman and goutam;
    cout<<c;
}

int main(){
aman a;
a.ihave();
goutam a2;
a2.ihave();
santosh (a,a2);


    return 0;
}