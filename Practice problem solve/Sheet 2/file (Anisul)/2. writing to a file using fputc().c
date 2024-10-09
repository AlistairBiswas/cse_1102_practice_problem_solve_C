#include<stdio.h>

int main ()
{
    FILE *file;

    char name[50] = "Alistair Biswas";

    int length = strlen(name), i;

    file = fopen("test.txt", "w");

    if (file==NULL)
    {
        printf("File does not exist.\n");
    }
    else
    {
        printf("File is opened.\n");

        for (i=0; i<length; i++)
        {
            fputc(name[i], file);
        }
        printf("\nFile is written successfully.\n");

        fclose(file);
    }
    getch ();
}
