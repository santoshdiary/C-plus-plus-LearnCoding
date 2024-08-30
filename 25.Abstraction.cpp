#include<iostream>
using namespace std;

class mybank{

    private:
   int atmPIN, Blance;

   public:
    string bName, IFSC;
    int accNumber;
 
void input(){
    atmPIN=4598;
    Blance= 54545854;
    bName="Paytm";
    IFSC="paytm0123456";
    accNumber=454587457;
}
void output (){

    cout<<"Atm pin:"<<atmPIN<<endl;
     cout<<"Blance:"<<Blance<<endl;
      cout<<"Bank Name:"<<bName<<endl;
       cout<<"IFSC coade:"<<IFSC<<endl;
        cout<<"Account NUMBER:"<<accNumber<<endl;
}
};
int main(){
cout<<"My Bank Details......."<<endl;
mybank m;
m.input();
m.output();




cout<<"OTHER  tring to access my account ..."<<endl;


  // cout<<"Atm pin:"<<m.atmPIN<<endl;           /*this is can't be accessable for Aman because this is private*/  
    // cout<<"Blance:"<<m.Blance<<endl;           //                
      cout<<"Bank Name:"<<m.bName<<endl;
       cout<<"IFSC coade:"<<m.IFSC<<endl;
        cout<<"Account NUMBER:"<<m.accNumber<<endl;


    return 0;
}