#include<iostream>
using namespace std;

int main(){
int n1=0,n2=1,n3=1,count=1,limit=6;


while(count<=limit)
{
count=count+1;
cout<<n3<<endl;
n3 = n1 + n2;
n1 = n2;
n2 = n3;
}
 return 0;
 }