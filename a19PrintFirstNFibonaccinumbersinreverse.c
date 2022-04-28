#include <stdio.h>
int main()
{
    int n, i, j, a = -1, b = 1, c;
    scanf("%d", &n);
    for (j = n; j > 0; j--)
    {
        c = 0;
        a = -1;
        b = 1;
        for (i = 0; i < j; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }
}
// 19. Print First N Fibonacci numbers in reverse.
// Statement:The Fibonacci series is defined as the sequence of numbers, starting with zero and one, is created by adding the previous two numbers.

// For example, the early part of the sequence is 0, 1, 1, 2, 3, 5, 8,13, 21, 34, 55, 89,144, 233, 377, and so on.

// All the numbers available in Fibonacci series is called as Fibonacci Number F(i).

// Your task is to write a program which accept a number N and print First N Fibonacci numbers F(i) in reverse order.

// For example, suppose if N=7 then pick first 7 Fibonacci Number (0 to 8) and print these  Fibonacci Numbers F(i) in reverse order like 8 5 3 2 1 1 0.

// Input:one integer N from STDIN

// Output:print first N Fibonacci numbers F(i) in reverse order each separated by space.

// Constraints:1<=N<=100

// Example:

// 3

// 1 1 0