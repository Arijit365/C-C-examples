#include<iostream>
using namespace std;
int main(){
int a[10][10] , b[10][10] , mul[10][10] , r , c , i ,j ,k;
cout << " enter the number of rows";
cin >> r;
cout << " enter the number of columns ";
cin >> c;
cout << " Enter the first matric/";
for(i = 0; i<r ; i++){
    for(j = 0; j<c ; j++){
        cin >> a[i][j];
    }
}
cout << " Enter the second  matric/";
for(i = 0; i<r ; i++){
    for(j = 0; j<c ; j++){
        cin >> b[i][j];
    }
}
cout << " Enter the resultant  matric/";
for(i = 0; i<r ; i++){
    for(j = 0; j<c ; j++){
        mul[i][j]=0; 
        for(k=0; k<c ; k++){
            mul[i][j] = a[i][j] * b[i][j];
        }
 }
}
cout << " Enter  result/";
for(i = 0; i<r ; i++){
    for(j = 0; j<c ; j++){
        cout << mul[i][j] << " ";
    }
    cout << " \n";
}
return 0;
} 