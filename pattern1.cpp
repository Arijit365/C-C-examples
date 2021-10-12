// making a rectangle pattern in c++
#include<iostream>
using namespace std;
int main()
{
    int row , col;
cin>>row>>col;
int i=0;
for ( i = 1; i<=row; i++){
    for(int j=1; j<=col;j++){
    cout<<"*";
}
cout<<endl;

}
return 0;