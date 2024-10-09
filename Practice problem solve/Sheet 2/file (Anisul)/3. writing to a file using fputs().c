#include<stdio.h>

int main ()
{
    FILE *file;

    char name[50];

    file = fopen("test.txt", "w");

    if (file==NULL)
    {
        printf("File does not exist.\n");
    }
    else
    {
        printf("File is opened.\n");

        printf("\nEnter your full name : ");
        gets(name);

        fputs(name, file);

        printf("\nFile is written successfully.\n");

        fclose(file);
    }

    getch ();
}
