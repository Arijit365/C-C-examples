#include<iostream>
using namespace std; 
int main() {
int i;
int count;
cin>>count;
for ( i = 0; i < count; i++) 
{
    if (i%5==0)
    {
    continue; // continue--> skip the loop
    }
    if (i%3==0)
    {
    continue;
    cout<<"breaking the loop";
    }
    
    cout<<i<<endl;
}

    return 0;
}