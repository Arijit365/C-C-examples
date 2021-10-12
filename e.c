#include <stdio.h>
#include <conio.h>
int main()
{
    float fahrenheit, celsius;
    char ch;
    float c , C , f , F;
    printf("c for converting Fahrenheit to Celsius.\n");
    printf("f for converting Celsius to Fahrenheit.\n");
    scanf("%c", &ch);
    if ((ch == 'c')  (ch == 'C'))
    {
        printf("Temp in Fahrenheit: \n");
        scanf("%f", &fahrenheit);
        printf("Temp in Celsius: %.2f\n", celsius = (fahrenheit - 32) / 1.8);
    }
    else if ((ch == 'f')  (ch == 'F'))
    {
        printf("Temp in Celsius: \n");
        scanf("%f", &celsius);
        printf("Temp in Fahrenheit: %.2f\n", fahrenheit = (celsius * 1.8) + 32);
    }
    else
    {
        printf("ERROR!\n");
    }
    printf ("any key to close");
    getch();
    return (0);
}