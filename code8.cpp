#include<iostream>
using namespace std;

int main(){

   int button;
   cin>>button;
   
   switch(button)
      { case 1:
        cout<<"Hello"<<endl;
        break;
        case 2:
        cout<<"Hey"<<endl;
        break;
        default:
        cout<<"ok"<<endl;
        break;
       
      }
    return 0;
}