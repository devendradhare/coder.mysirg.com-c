#include <stdio.h>
void display(int n, int m, int aar[n][m], int size);
int main()
{
    int arr1[20][2];
    int n, temp, i, j;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i][0]);
        arr1[i][1] = 0;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr1[j][0] > arr1[j + 1][0])
            {
                temp = arr1[j][0];
                arr1[j][0] = arr1[j + 1][0];
                arr1[j + 1][0] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr1[i][0] == arr1[j][0])
            {
                arr1[j][1]++;
            }
        }
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr1[j][1] < arr1[j + 1][1])
            {
                temp = arr1[j][0];
                arr1[j][0] = arr1[j + 1][0];
                arr1[j + 1][0] = temp;

                temp = arr1[j][1];
                arr1[j][1] = arr1[j + 1][1];
                arr1[j + 1][1] = temp;
            }
        }
    }
    display(20,2,arr1,n);
}
void display(int n, int m, int aar[n][m], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", aar[i][0]);
    }
}
// #include <stdio.h>
// void display(int n, int m, int aar[n][m], int size);
// int main()
// {
//     int arr1[20][2], arr2[20][2];
//     int k = 0, n, temp, count, i, j;

//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i][0]);
//         arr1[i][1] = 0;
//     }
//     printf("\n");

//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr1[j][0] > arr1[j + 1][0])
//             {
//                 temp = arr1[j][0];
//                 arr1[j][0] = arr1[j + 1][0];
//                 arr1[j + 1][0] = temp;
//             }
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (arr1[i][0] == arr1[j][0])
//             {
//                 arr1[j][1]++;
//             }
//         }
//     }
//     display(20,2,arr1,n);

//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr1[j][1] < arr1[j + 1][1])
//             {
//                 temp = arr1[j][0];
//                 arr1[j][0] = arr1[j + 1][0];
//                 arr1[j + 1][0] = temp;

//                 temp = arr1[j][1];
//                 arr1[j][1] = arr1[j + 1][1];
//                 arr1[j + 1][1] = temp;
//             }
//         }
//     }
//     printf("\n");
//     printf("\n");
//     display(20,2,arr1,n);
// }
// void display(int n, int m, int aar[n][m], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", aar[i][0]);
//     }
//     printf("\n");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", aar[i][1]);
//     }
// }
//     scanf("%d", &l);
//     for(i = 0; i < l; i++)
//         scanf("%d",&arr[i]);

//     for(i = 0; i < l; i++)
//     {
//         for(j = 0; j < l; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 mxfri++;
//             }
//         }
//     }
// }

// 147. frequency based array sorting
// Statement:an integer array A is collection of positive and negative numbers and these numbers are called as elements E(i)

// of array A .it allows some numbers to be repeated. So Frequency of the element is defined as number of times an element E is repeated in array A.

// in this problem you should accept N integers that represent array A of size N. and find frequency F of each element in array.

// Now your task is to rearrange the array elements based on there frequencies that means most frequent element should come first in array.

// If two or more than two elements have same frequency F then place that element first which is lesser than another, that means in increasing order of elements.

// If all elements are unique and only available once, place that element first which is lesser than another ie. Sort the array in increasing order.

// Finally print the rearranged array in output.

// input:first line contain an integer n denoting number of elements in array.

// second line contains n space separated integers denoting elements of array A.

// Output: output consist N integers denoting rearranged array A

// Constraints:5<=N<=20

// 1<=F<=N

// Example:

// 5

// 4 3 2 2 1

// 2 2 1 3 4

// copy past code

// #include <stdio.h>
// int main()
// {
//     int arr1[20][2], arr2[20][2];
//     int k = 0, n, temp, count, i, j;

//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i][0]);
//         arr1[i][1] = 0;
//     }
// for (i = 0; i < n-1; i++)
// {
//     for (j = 0; j < n-i-1; j++)
//     {
//         if (arr1[j][0]>arr1[j+1][0])
//         {
//             temp = arr1[j][0];
//             arr1[j][0] = arr1[j+1][0];
//             arr1[j+1][0] = temp;
//         }

//     }
// }

//     for (i = 0; i < n; i++)
//     {
//         if (arr1[i][1])
//             continue;
//         count = 1;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr1[i][0] == arr1[j][0])
//             {
//                 arr1[j][1] = 1;
//                 count++;
//             }
//         }
//         arr2[k][0] = arr1[i][0];
//         arr2[k][1] = count;
//         k++;
//     }
//     n = k;

//     for (int i = 0; i < n - 1; i++)
//     {
//         temp = arr2[i][1];
//         for (j = i + 1; j < n; j++)
//         {
//             if (temp < arr2[j][1])
//             {
//                 temp = arr2[j][1];
//                 arr2[j][1] = arr2[i][1];
//                 arr2[i][1] = temp;

//                 temp = arr2[j][0];
//                 arr2[j][0] = arr2[i][0];
//                 arr2[i][0] = temp;
//             }
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         while (arr2[i][1] != 0)
//         {
//             printf("%d ", arr2[i][0]);
//             arr2[i][1]--;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int a[10];
//     a[1] = 3;
//     a[1]++;
//     a[1]++;
//     printf("%d",a[1]);
// }