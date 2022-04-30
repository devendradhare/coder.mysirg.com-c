#include <stdio.h>
int main()
{
    int n, i, a = -1, b = 1, c = 0, d, e;
    scanf("%d", &n);
    while (c <= n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    e = n - a;
    d = c - n;
    if (e < d)
        printf("%d", a);
    else if (d < e)
        printf("%d", c);
    else
        printf("%d %d", a, c);
}

// 24. Find closest Fibonacci Number
// Statement:The Fibonacci numbers, commonly denoted as F(i) form a sequence, called the Fibonacci sequence F, such that each number F(i) is the sum of the two preceding

// ones F(i-1) and F(i-2) that is F(i)=F(i-1)+F(i-2). Fibonacci sequence usually starts from 0 and 1.For example, the early part of the Fibonacci sequence is

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,89,144, 233, 377, and so on. All the numbers of this series is called as Fibonacci number F(i).

// Write a program to accept a number N and check N is closest to which Fibonacci number F(i) of Fibonacci sequence F. in order to find closest  Fibonacci number F(i)

// there should be least numbers between N and F(i).

// For example, if N is 10, N is closest  to F(6)=8 rather than F(7)=13 because there are less number between N and F(6) rather than N and F(7). (exclude N and F(i))

// If given number is equally closest to 2 Fibonacci numbers of Fibonacci sequence print both numbers in increasing order in output.

// For example if N is  4 then it is closest toFibonacci numberF(5)=3 and F(6)=5 becausethere are zero numbers available between N and F(5) and also between N

// and F(6) (exclude N and F(i)).so print F(5) and F(6) both in output and should be in increasing order that is 3 5.

// Input:first line contains an integer N

// Output:print closest Fibonacci number F(i) if 2 Fibonacci numbers F(i) and F(i+1) where F(i)<F(i+1) found, print both numbers separated by space.

// Constraints:1<=N<=10000

// Example:

// 6

// 5