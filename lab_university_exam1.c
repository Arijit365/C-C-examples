#include <stdio.h>
#include <conio.h>
struct student {
    char name[100];
    int roll;

} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
     float mk1, mk2, mk3,total, avg;
    printf("Enter marks obtained in sub 1 :");
    scanf("%f", &mk1);
    printf("Enter marks obtained in sub 2 :");
    scanf("%f", &mk2);
    printf("Enter marks obtained in sub 3 :");
    scanf("%f", &mk3);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    total = (mk1 + mk2 + mk3);
    avg = (total) / 3;
    printf("Total : %0.2f\n", total);
    printf("Average : %0.2f\n", avg);

    if (avg >= 90)
    {
        printf("Grade A");
    }
    else if (avg >= 80)
    {
        printf("Grade B");
    }
    else if (avg >= 70)
    {
        printf("Grade C");
    }
    else if (avg >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade Fail");
    }

    getch();
    return 0;
}

   

