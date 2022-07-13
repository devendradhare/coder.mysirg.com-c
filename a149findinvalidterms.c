#include <stdio.h>
int main()
{
    int l, arr[20], i, c, fine = 0;
    scanf("%d", &l);
    for (i = 0; i < l; i++)
        scanf("%d", &arr[i]);

    c = arr[1] - arr[0];
    for (i = 0; i < l - 1; i++)
    {
        if (arr[i + 1] - arr[i] != c)
        {
            printf("%d ", arr[i + 1]);
            fine++;
        }
    }
    if (fine == 0)
    {
        printf("0");
    }
}

// 149. find invalid terms
// Statement: an array of n elements containing elements in sequence with constant succession.

// That means a[i+1]-a[i]=c where c is constant and 0<=i<=n-1.

// Always calculate the c value by subtracting first two terms of array that is a[1]-a[0]

// So your task is to find the term which doesn’t follow the a[i+1]-a[i]=c.

// For example, suppose array a= 2 4 6 8 10 11 13 15 16 18

// Due to here c =2, so 11-10=1 and 16-15=1 both have c=1.

// So output should be 11 and 16 that means all the terms that are not satisfying the succession criteria

// should print in output in order of availability in array A.

// If you found all term are satisfying the succession criteria print 0.

// Input: first line contains an integer n denoting number of elements in array A.

// Second line contains n space separated integers denoting elements of array.

// Output: output contains m terms that doesn’t satisfying succession criteria or zero if you don't found any invalid terms.

// Constraint:5<=n<=20

// c can be negative, positive or zero

// Example:

// 5

// 1 2 3 4 5

// 0