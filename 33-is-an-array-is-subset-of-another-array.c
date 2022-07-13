#include <stdio.h>
int main()
{
    int arrA[20], arrB[20], n, m, i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]);
    }
    printf("    .   .   .   .   .   ");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arrB[i]);
    }
    printf("    .   .   .   .   .   ");

    for (i = 0; i < n; i++)
    {
        if (arrB[0] == arrA[i])
        {
            for (j = 0; j < m; j++)
            {
                if (arrB[j] != arrA[i + j])
                {
                    break;
                }
            }
            if (j >= m)
            {
                printf("1");
                break;
            }
        }
    }
    if (i >= n)
    {
        printf("-1");
    }
}

// 33. is an array is subset of another array?
// Statement:Array subset is defined as small part of array which consist consecutive array elements. Any subset S of array A can be formed as one or more than one

// adjacent cells of array  A. so a single element A[i] (where i represents index of array) or group of consecutive elements of array A[i] A[i+1] A[i+2] …… can be called as

// subset of array A.In this program you have to compare two arrays A and B. in order to find that B is subset of array A or not.

// For this create a program such that it accepts two arrays A and B that contains M and N elements respectively and find that array B is subset of array A or not. if B is

// subset of A print 1 in output and if B is not subset of A print -1 in output.

// Input:first line contains an integer M denoting number of elements in array A

// second line contains list of M integers separated by space denoting elements of array A.

// third line contains an integer N denoting number of elements in array B

// fourth line contains the list of N integers separated by space denoting elements of array B.

// Output:output consist either 1 or -1 denoting B is subset of A and B is not a subset of A respectively .

// Constraints:5<=M<=20

// 1<=N<=M

// take the array size as 20.

// Example:

// 5

// 5 4 3 2 1

// 1

// 3

// 1