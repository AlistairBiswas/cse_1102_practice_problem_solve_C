#include<stdio.h>

int main ()
{
    float hn, cc, ts;

    printf("Hardness =");
    scanf("%f", &hn);

    printf("Carbon Content =");
    scanf("%f", &cc);

    printf("Tensile Strength =");
    scanf("%f", &ts);

    if (hn>60 && cc<0.7 && ts>5000)
        printf("Grade is 10.");

    else if (hn>60 && cc<0.7 )
        printf("Grade is 9.");

    else if (ts>5000 && cc<0.7 )
        printf("Grade is 8.");

    else if (hn>60 && ts>5000)
        printf("Grade is 7.");

    else if (hn>60 || cc<0.7 || ts>5000)
        printf("Grade is 6.");

    else
        printf("Grade is 5.");

    return 0;
}
