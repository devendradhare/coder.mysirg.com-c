#include <stdio.h>
int main()
{
    int arr[10] = {}, i, j, len;
    scanf("%d", &len);
    for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    for (i = len / 2; i < len-1; i++)
    {
        for (j = len/2; j < len-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }

    for (j = 0; j < len; j++)
    {
        printf("%d ", arr[j]);
    }
}

// 29. Rearrange Array
// Statement:Rearrangement is the process in which you have to shift or swap the array elements in order to achieve the desire output. In order to achieve the correct outcome, you have to follow certain steps as mentioned below and perform rearrangement on array.

// The first half of array contains the greatest elements available in array in descending order.

// The second half of array contains lowest elements available in array in ascending order.

// Your task is to create a program that accepts an array A of N unique positive integers. Now find the first N/2 greatest elements G(i) in array A and arrange them in first N/2 cells of Array A in decreasing order. after this find the rest N/2 smallest elements S(i) of array A and place them in rest N/2 cells of array A in ascending order.

// Input:first line contains an integer N denoting number of elements you want to store in array.

// second line consist N space separated integers denoting array elements.

// Output:output consist of a line of N separated integers, first N/2 integers represents greatest elements G(i) and rest N/2 elements represent smallest elements S(i).

// Constraints:N should always be an even positive number

// 2<=N<=10

// take size of array as 10.

// Example:

// 10 20 5 1 30 12

// 30 20 10 1 5 12