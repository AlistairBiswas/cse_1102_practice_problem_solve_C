#include <stdio.h>
#include <conio.h>

int main(){
    int num, temp, digit, factorial, counter, factSum;


    for(num = 1; num <= 10000; num++){
        /* Calculate sum of factorial of digits of num */
        temp = num;
        factSum = 0;
        while(temp){
           digit = temp%10;
           /* Calculate factorial of every digit
            * N! = N*(N-1)*(N-2)*(N-3)*.....*3*2*1
            */
           for(counter=1, factorial=1; counter<=digit; counter++){
               factorial = factorial * counter;
           }
           factSum += factorial;
           temp = temp/10;
        }

        if(factSum == num)
           printf("%d ", num);

    }
    getch();
    return 0;
}
