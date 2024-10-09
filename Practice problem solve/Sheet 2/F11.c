#include<stdio.h>

int sumAvg ();

void main ()
{
    int n;

    printf("Enter the term : ");
    scanf("%d", &n);

    sumAvg (n);
}

int sumAvg (int number)
{
    int i, sum=0;
    float avg;

    for (i=1; i<2*number; i=i+2)
    {
        sum = sum + i;
    }

    avg = sum/number;

    printf("\nSUM = %d\nAVERAGE = %.2f\n", sum, avg);
}
