#include <stdio.h>
int main()
{
    int A1[20], A2[20], A3[40], m, n, temp, i, j;
    float median;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        scanf("%d", &A1[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &A2[i]);
    for (i = 0; i < m; i++)
        A3[i] = A1[i];
    for (i = m; i < m + n; i++)
        A3[i] = A2[i - m];
    for (i = 0; i < m + n - 1; i++)
    {
        for (j = 0; j < m + n - i - 1; j++)
        {
            if (A3[j] > A3[j + 1])
            {
                temp = A3[j];
                A3[j] = A3[j + 1];
                A3[j + 1] = temp;
            }
        }
    }
    if ((m + n) % 2 == 0)
    {
        j = (m + n) / 2;
        median = (A3[j] + A3[j - 1]) / 2.0;
        printf("%.2f", median);
    }
    else
    {
        j = (m + n) / 2;
        median = A3[j];
        printf("%.0f", median);
    }
}

// 227. Find median
// Statement:The median is the middle number in a sorted, list of numbers.

// If there is an odd amount of numbers, the median value is the number that is in the middle, with the same amount of numbers below and above.

// If there is an even amount of numbers in the list, the middle pair must be determined, added together, and divided by two to find the median value.

// create two arrays A1 and A2 of size m and n and merge it into a single array now find the median of the new array.

// for example: suppose Array A1 = 1 2 7 6 8 and A2 = 4 3 9 5 10

// so the merged sorted array will look like 1 2 3 4 5 6 7 8 9 10 and hence the size of sorted array is 10 so median will be (5+6)/2=5.50.

// (use only two digits after decimal point)

// Input: first line contains two integers m and n denoting size of A1 and A2 respectively.

// second line contains m integers denoting elements of array A1.

// third line contains n integers denoting elements of array A2.

// output: contains a real number denoting median value.

// constraint: 5<=n, m<=20

// Example Input:

// 5 5

// 1 2 7 6 8

// 4 3 9 5 10

// Example Output:

// 5.50