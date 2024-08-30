#include<iostream>
using namespace std;
int main(){

// cout<<"Execution Starting.."<<endl;
// int a ,b, c;
// cout<<"Enter Two number:"<<endl;
// cin>>a>>b;
// c=a/b;//when we enter the value of b=0 then we exction and programe will be terminated there and full programe will not excute

// cout<<"Divion:"<<c<<endl;






// cout<<"Execution ended..";



cout<<"Execution Starting.."<<endl;
int a ,b, c;
cout<<"Enter Two number:"<<endl;
cin>>a>>b;
try{
    if (b==0)
    throw b;
c=a/b;
}
catch(int x){
    cout<<"Can't be divisable by: "<<x<<endl;
}


cout<<"Divion:"<<c<<endl;




cout<<"Execution ended..";


    return 0;
}