// sum of two pointers
#include<stdio.h>
int main () {
int a = 4 , b = 5;
int* x;
int*  y;
x = &a;
y = &b;
int z;
z = a + b;
int* c = &z;
printf("%d" , *c);
    return 0;
}