#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter Number n "<<endl;
cin>>n;
int space = (2*n-1)/2;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=space;j++) {cout<<" ";}
    for(int j=1;j<=2*i-1;j++) {cout<<"*";}
     cout<<endl;
     space--;
}





return 0;
}
