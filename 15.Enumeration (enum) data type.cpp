
#include<iostream>
using namespace std;
int main(){
	enum santosh{
		male, female, others
		//0,1,2 is order of enum
	};
	cout<<male<<endl;
	
	//another way to access enum 
	santosh str=others;		/*enum data type is allow only its value to access for ex. 'others'is itself data
    	here str a enum variable which hold "others" integral value	*/
    cout<<str<<endl;
	
	return 0;
}
