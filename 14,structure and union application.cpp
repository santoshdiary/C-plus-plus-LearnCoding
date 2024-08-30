 #include<iostream>
 using namespace std;
 struct stu
 {
 	int roll;
	char name[20];
 	float marks;
 };
 int main()
 {
 	struct stu s;
	cout<<"Enter Student roll number:";
 	cin>>s.roll;
 	cout<<"Enter students name:";
	cin>>s.name;
 	cout<<"Enter students marks:";
 	cin>>s.marks;
	
 	cout<<"Roll:"<<s.roll<<ends<<"Name:"<<s.name<<ends<<"Marks:"<<s.marks;
 	return 0;
 }



//
//#include<iostream>
//using namespace std;
//union stu
//{
//	int roll;
//	char name[20];
//	float marks;
//};
//int main()
//{
//	union stu s;
//	cout<<"Enter Student roll number:";
//    cin>>s.roll;
//		cout<<"Roll:"<<s.roll<<endl;//int the case of union we need to just print the value
//	cout<<"Enter students name:";
//	cin>>s.name;
//	cout<<"Name:"<<s.name<<endl;
//	cout<<"Enter students marks:";
//	cin>>s.marks;
//	cout<<"Marks:"<<s.marks<<endl;
//	
//
//	return 0;
//}
