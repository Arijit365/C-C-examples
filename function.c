// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>

struct 
{
    char name[15];
    int age;
    int grade;
} boy , girl;
int main () {
strcpy(boy.name , "arj");
boy.age = 16;
boy.grade = 90;
girl.age = boy.age - 1;
girl.grade = 95;
strcpy(girl.name , "Valentine");
printf("%s is %d of age got grade %d\n", girl.name , girl.age , girl.grade);
printf("%s is %d of age got grade %d\n", boy.name , boy.age , boy.grade);
return 0;
}

