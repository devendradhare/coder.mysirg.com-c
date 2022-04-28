#include<stdio.h>
int main()
{
    int n,i;
    float h=0;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        h += 1.0/i;
    }
    printf("%f",h);
}
// 20. Print sum of first N terms of harmonic series.
// Statement:A kind of harmonic series H can be formed as follows.
// 1 + 1/2 +1/3 + 1/4 + 1/5 ... 1/n terms
// Write a program to accept a number N that represents number of terms of harmonic series and calculate the sum S of N terms of harmonic series H.

// print exact 6 digits after decimal point in sum S of N terms of Harmonic Series H.

// Input:one integer N denoting number of terms of harmonic series H.

// Output:print S that represents sum of series up to N terms.(display 6 digits after decimal point)

// Constraints:1<=N<=50

// Example:

// 4

// 2.083333