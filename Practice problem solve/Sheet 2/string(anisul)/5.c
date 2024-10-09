#include<stdio.h>

int main ()
{
    char source[] = "C Programming";
    char target[20];

    strcpy(target,source);

    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);
}
