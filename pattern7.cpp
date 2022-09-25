#include<iostream>
using namespace std;
int main(){
    int row,columns;
cout<<"Enter Number of Rows "<<endl;
cin>>row;
cout<<"Enter Number of Coloumns"<<endl;
cin>>columns;

for(int i=1;i<=row;i++)
{
    for(int j=1;j<=columns;j++)
        { if(i>j)
        {
           cout<<" ";
        }
        else {cout<<"*";}


        }
cout<<endl;}


return 0;
}
