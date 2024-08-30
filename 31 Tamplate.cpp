  // function template -

  // #include<iostream>
  // using namespace std;

  // template <class A>
  
  
  // void print (A x, A y){
  //  cout<<x<<" "<<y<<endl;  
  // }
  // int main(){
  //   print (10,20);
  //   print ("santosh", "shikha"); //we can make any data type. data type decide on run time 
  //   print ( 443.53,533.23);
  //   return 0;
  // }

  // //class template- 


  #include<iostream>
  using namespace std;

  template <class A>
  
  
class print 
  {int c;
    public:
    print (A x, A y){
c=x+y;
      cout<<"Addition ="<<c<<endl;
    }
    
  };
  int main(){
  int d,m;
  cout<<"Enter two number:";
  cin>>d>>m;
print <int> obj(d,m);

//print <double> obj(5958.353, 434343.532);
    return 0;
  }
