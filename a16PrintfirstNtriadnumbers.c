#include <stdio.h>
int main()
{
    int n, i, ci, i2, i3, j, diff = 9;
    scanf("%d", &n);
    for (i = 100; i <= 999, n > 0; i++)
    {
        ci = i;
        diff = 9;
        for (j = 0; j <= diff; j++)
        {
            ci = i;
            switch (1)
            {
            case 1:
                while (ci > 0)
                {
                    if (ci % 10 == j)
                        break;
                    ci /= 10;
                }
                if (ci <= 0)
                    ci = i * 2;
                else
                    break;
            case 2:
                while (ci > 0)
                {
                    if (ci % 10 == j)
                        break;
                    ci /= 10;
                }
                if (ci <= 0)
                    ci = i * 3;
                else
                    break;

            case 3:
                while (ci > 0)
                {
                    if (ci % 10 == j)
                        break;
                    ci /= 10;
                }
                if (ci <= 0)
                    ci = i;
                else
                    break;
            default:
                if (j == 0)
                {
                    continue;
                }
                else
                {
                    j = 100;
                    break;
                }
            }
            if (j == 0)
            {
                diff = 8;
            }
            else if (j == diff)
            {
                printf("%d %d %d\n", i, i * 2, i * 3);
                n--;
            }
        }
    }
}

// 16. Print first N triad numbers
// Statement:Any three numbers a, b and c are said to be triad numbers T. if they satisfy following conditions

// a, b and c should be three-digit number and a<b<c.

// all the three digits associated with a, b and c should be different. That means we found total 9 digits (3 in each) and all are distinct from each other.

// second number b should be twice of the first number a and third number c should be thrice of the first number a.

// write a program to accept a number N  and print N triad numbers in the increasing order of there availability between 100 to 999.

// For example, here first three triad number T1, T2 and T3 are given as follows

// T1: 192 384 576

// T2: 219 438 657

// T3: 267 534 801

// If you accept N=2 then you have to print first 2 triad numbers in output like

// 192 384 576

// 219 438 657

// If you print First 2 triad numbers like

// 219 438 657

// 267 534 801

// or

// 192 384 576

// 267 534 801 or in any other combination then your answer will get rejected.

// Input:First line containan integer N from STDIN.

// Output:print each T in new line and a, b and c should be separated by space.

// Constraints:1<=N<=5

// Example:

// 1

// 192 384 576