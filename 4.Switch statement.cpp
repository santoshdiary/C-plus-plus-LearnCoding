#include<iostream>
using namespace std; 
int main(){



// int choice;
// cout<<"Enter User Choice: ";
// cin>>choice;
// switch (choice)   //switch  case usually used to select only  one case   out of multiple cases
// {
//     case 0 :cout<<"Sunday";
//     break;
//     case 1:cout<<"Monday";
//       break;
//     case 2 :cout<<"Tuesday";
//       break;
//     case 3 :cout<<"wednesday";
//       break;
//     case 4 :cout<<"Thursday";
//       break;
//     case 5 :cout<<"Friday";
//       break;
//     case 6 :cout<<"Saturday";
//       break;
// default:cout<<"Invalid choice";


// }

//WITH THE HELLP OF SWITCH CASE WE CAN CREAT MCQ IN WHICH WE CAN SELECT 
//ONLY ONE OUT OF 4 OPTION .

cout<<"Who was the first prime minister of india?"<<endl;
cout<<"(1) Indira Gandhi     (2)Jwahar lal Neharu "<<endl;
cout<<"(3) Motilal Neharu    (4)non of these"<<endl;
int choice;
cin>>choice;
switch(choice){
  case 1: cout<<"Wrong Answer"<<endl;
  break;
  case 2: cout<<"Right Answer"<<endl;
   break;
  case 3: cout<<"Wrong Answer"<<endl;
   break;
  case 4:cout<<"Wrong Answer"<<endl;
   break;
  default: cout<<"Invalid input "<<endl;
}

    return 0;
}
