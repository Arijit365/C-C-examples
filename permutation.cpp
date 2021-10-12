#include<bits/stdc++.h>
using namespace std;
void display(int a[] , int n){
    for(int i=0; i < n; i++){
        cout<< a[i] << " ";
    }
    cout << endl;
}
    void findpermutation(){
        sort( a, a+n);
        cout << " possible permutation are:";
        do {
            display( a,n);
        }
        while (next_permutation(a , a+n));
        
    }
int main(){
   int a[] = { 12, 34,12,55,66,78};
   int n = sizeof(a) / sizeof(a[0]);
   findpermutation( a , n);
    return 0;
}