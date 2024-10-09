#include<stdio.h>

int main ()
{
    char str1[20] = "Bangladesh";
    char str2[20] = "India";
    char temp[20];

    printf("Before swapping :\n");
    printf("\nstr1 = %s\nstr2 = %s\n", str1, str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swapping :\n");
    printf("\nstr1 = %s\nstr2 = %s\n", str1, str2);

    getch();
}
