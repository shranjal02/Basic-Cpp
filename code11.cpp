#include<iostream>
using namespace std;

int main(){

int s = 0, f = 1, i=1,N=20;


while(i <= N)
{
f = f * i;
s = s +(i / f);
i=i+1;
}
cout<<s<<endl;
return(0);
}