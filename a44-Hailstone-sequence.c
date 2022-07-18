#include <stdio.h>
void hailstone(int m);
void hailstone(int m)
{
    printf("%d ", m);
    if (m <= 1)
    {
        return;
    }
    if (m % 2 == 0)
    {
        m /= 2;
        hailstone(m);
    }
    else
    {
        m = m*3+1;
        hailstone(m);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    hailstone(n);
}

// 44. Hailstone sequence
// Statement:Here’s a little game to play. Starting with any positive whole number n form a sequence in the following way:

// If n is even, divide it by 2 to give m=n/2.

// If n is odd, multiply it by 3 and add 1 to give m=3n+1

// Then take m as the new starting number and repeat the above process to make Hailstone sequence.

// For example, n=5 gives the sequence 5 16 8 4 2 1 4 2 1………. ( here first term for hailstone sequence is n=5)

// and n=11 gives the sequence 11 34 17 52 26 1340 20 10 5 16 8 4 2 1 4 2 1…..(here first term for hailstone sequence is n=11)

// Sequences formed in this way are called hailstone sequences because they go up and down just like a hailstone in a cloud before crashing to Earth.

// However, it seems that all hailstone sequences eventually end in the endless cycle 4 2 1 4 2 1…..

// your task is to Write a recursive program to create a hailstone sequence and stop this sequence as soon as first 1 encounters.

// Input:first line contains an integer n denoting the first term of the hailstone sequence.

// Output:output contain the M integers  separated by space denoting hailstone series.

// Constraints:5<=N<=20

// Example:

// 5

// 5 16 8 4 2 1