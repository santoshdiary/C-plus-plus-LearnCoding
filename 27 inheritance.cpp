#include<iostream>
using namespace std;
class dad {					//BASE CLASS 
	protected:
		int amount;
		public:
			void input(){
		amount=10000;
			}
};

class son:public dad{		 //inheritance here          	//DERIVED CLASS 
	int money;
	public:
	
		void show(){
				money=4582;
		cout<<"Dad money:"<<amount<<endl;
			cout<<"son money:"<<money;	
		}
};
int main(){
	
	
son s;
s.input();
s.show();	
	
	
	
	return 0;
}


