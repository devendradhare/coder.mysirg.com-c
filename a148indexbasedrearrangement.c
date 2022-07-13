#include <stdio.h>
int main()
{
    int arr[2][20], l, i, idx;
    scanf("%d", &l);
    for (i = 0; i < l; i++)
        scanf("%d", &arr[0][i]);

    for (i = 0; i < l; i++)
    {
        scanf("%d", &idx);
        arr[1][i] = arr[0][idx];
    }
    
    for (i = 0; i < l; i++)
        printf("%d ", arr[1][i]);
}

// 148. index-based rearrangement
// Statement: create two arrays A and B of size n. an array A of integers of size n containing positive and negative numbers.

// array A can contain repeated numbers.

// Array B contains also n elements each element of array B contains an index from 0 to n-1. So array B doesn’t allow repetation.

// Your task is to rearrange the array A on the basis of array B. that means if array B contains k on 0th index that means shift the element

// available on kth index in array A to 0th index of array A.

// For example, suppose A= 5 7 8 1 9 and B= 1 0 4 2 3

// So rearranged array A looks like 7 5 9 8 1.

// Input: first line contains an integer n denoting number of elements in array A and B

// Second line contains n integers denoting elements of array A.

// Third line contains n integers from 0 to n-1 in any order denoting elements of array B.

// Output: contains rearranged array A.

// Constraints: 5<=n<=20

// Example:

// 5

// 5 7 8 1 9

// 1 0 4 2 3

// 7 5 9 8 1