#include<stdio.h>
int main()
{
    int a = -1,b = 1,c,k,n,i = 0;
    scanf("%d%d",&k,&n);
    while (n >= 0)
    {
        c = a + b;
        a = b; 
        b = c;
        if (c%k==0)
            n--;
        i++;
    }
    printf("%d",i);
}

// Statement:The Fibonacci series is defined asthe sequence of numbers, starting with zero and one, is created by adding the previous two numbers.

// For example, the early part of the sequence is 0, 1,1, 2, 3, 5, 8, 13, 21, 34, 55, 89,144, 233, 377, and so on. Note that Here first position is occupied by number 0.

// Your task is to accept a number and find nth multiple of that number is available at which position of Fibonacci series. For this write a program that accepts two

// integers K and N respectively. where K denoting a number whose nth multiple(denoted by N) you have to find in list and print its position P.

// For example, K=2 and N=3 gives output 10. Here we have to find 3rd multiple of 2 available in Fibonacci series which is 34

// (first multiple is 2 second multiple is 8 and third multiple is 34 in list) and 34 at 10th position in Fibonacci series).

// Don’t consider zero as multiple of any number.

// Input: first line contains two integers K and N separated by space.

// Output: output contains an integer P denoting position of nth multiple of K.

// Constraint:1=<N<=5

// 1<=K<=10

// Example:

// 2 3

// 10