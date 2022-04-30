#include <stdio.h>
int main()
{
    int n, n2, i, tmp, ftmp = 1, sum = 0;
    scanf("%d", &n);
    n2 = n;
    while (n > 0)
    {
        ftmp = 1;
        tmp = n % 10;
        for (i = 1; i <= tmp; i++)
        {
            ftmp *= i;
        }
        sum += ftmp;
        n /= 10;
    }
    if (sum == n2)
        printf("1");
    else
        printf("0");
}

// 26. Strong number
// Statement:Strong number is a number N whose sum of all digits’ factorial S is equal to the number N.

// Factorial implies when we find the product of all the numbers from 1 to that number and factorial is denoted by “!” (Exclamation sign), For example: factorial of 4 can

// be written as 4! = 4x3x2x1 = 24.

// So, in order to find a strong number, we have to pick every digit of number N and find the factorial of each digit D(i) (where i=1 starts from unit place of N) present in that

// number suppose N is 3 digit number  then we have to pick D(1), D(2) and D(3) now we have to find factorial of D(1)!, D(2)! and D(3)!.

// After this we will find the sum of all digits’ factorial S=D(1)! +D(2)! +D(3)! .if we found S=N then N is said to be a Strong number.

// for example if N is 145 then digits will be D(1)=5, D(2)=4 and D(3)=1 and the factorial can be calculated as  D(3)! = 1, D(2)! = 24 and D(3)! = 120.

// and S=1+24+120=145=N so we can say that the number 145 is a strong number.

// If a number is single digit number then find the factorial of number itself and if the factorial is equal to the number then the number is considered as strong number.

// Your task is to write a program to accept a number from the user and check that number is strong number or not if yes print 1 if not print 0.

// Input:first line contains  an integer N .

// Output:output contains either 1 or 0 if N is strong print 1 otherwise print 0.

// Constraints:1<=N<=1000

// Example:

// 2

// 1