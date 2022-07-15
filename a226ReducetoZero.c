#include <stdio.h>
int combination(int arr[], int data[], int start, int end, int index, int r, int x);
int reduce2(int arr[], int n, int r, int x);
int reduce(int arr[], int n, int x);

int reduce(int arr[], int n, int x)
{
    int i, t = 0;
    for (i = 1; i <= n; i++)
    {
        t = reduce2(arr, n, i, x);
        if (t == 1)
        {
            return i;
        }
    }
    return 0;
}
int reduce2(int arr[], int n, int r, int x)
{
    int data[r], t = 0;
    t = combination(arr, data, 0, n - 1, 0, r, x);
    if (t == 1)
    {
        return 1;
    }
    return 0;
}
int combination(int arr[], int data[], int start, int end, int index, int r, int x)
{
    int i, j, t = 0, rds = 0;
    if (index == r)
    {
        for (j = 0; j < r; j++)
        {
            rds += data[j];
        }
        if (rds == x)
        {
            return 1;
        }
        return 0;
    }
    for (i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        t = combination(arr, data, i + 1, end, index + 1, r, x);
        if (t == 1)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[20];
    int x, size, i, min;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    min = reduce(arr, size, x);
    printf("%d", min);
}
// #include <stdio.h>
// int combination(int arr[], int data[], int start, int end, int index, int r, int x);
// int reduce2(int arr[], int n, int r, int x);
// int reduce(int arr[], int n, int x);

// int reduce(int arr[], int n, int x)
// {
//     int i, t = 0;
//     for (i = 1; i <= n; i++)
//     {
//         t = reduce2(arr, n, i, x);
//         if (t == 1)
//         {
//             return i;
//         }
//     }
// }
// int reduce2(int arr[], int n, int r, int x)
// {
//     int data[r], t = 0;
//     t = combination(arr, data, 0, n - 1, 0, r, x);
//     if (t == 1)
//     {
//         return 1;
//     }
// }
// int combination(int arr[], int data[], int start, int end, int index, int r, int x)
// {
//     int i, j, t = 0, rds = 0;
//     if (index == r)
//     {
//         for (j = 0; j < r; j++)
//         {
//             printf("%d ", data[j]);
//             rds += data[j];
//         }
//         printf(" = %d\n", rds);
//         if (rds == x)
//         {
//             return 1;
//         }
//         return 0;
//     }

//     for (i = start; i <= end && end - i + 1 >= r - index; i++)
//     {
//         data[index] = arr[i];
//         t = combination(arr, data, i + 1, end, index + 1, r, x);
//         if (t == 1)
//         {
//             return 1;
//         }
//     }
// }
// int main()
// {
//     int arr[20];
//     int x, r, size, i, min;
//     scanf("%d", &size);
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &x);
//     min = reduce(arr, size, x);
//     printf("            min %d", min);
// }

// #include <stdio.h>
// void reduse(int *, int, int);
// int main()
// {
//     int n, arr[20], x, i, j;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &x);

//     reduse(arr, n, x);
// }
// void reduse(int *arr, int size, int rds)
// {
//     int i, j;
//     for (i = 0; i < size; i++)
//     {
//         if (arr[i] == rds)
//         {
//             printf("\n1if %d size %d rds %d ", arr[i], size, rds);
//             break;
//         }
//         else
//         {
//             for (j = 0; j < size; j++)
//             {
//                 if (arr[i] < rds)
//                 {
//                     printf("\n2if %d size %d rds %d ", arr[j], size, rds);
//                     j++;
//                     reduse(arr + j, size - j + 1, rds - arr[j]);
//                     break;
//                 }
//             }
//         }
//     }
// }

// 8

// 1 3 2 1 4 2 5 4

// 6
// 226. Reduce to Zero
// Statement: create an array of size n and accept n integers in it. now accept one more integer x denoting a random value.

// Your Task is to reduce the x to zero by subtracting array elements from this number. remember you should subtract minimum elements to

// make x zero.

// for example: suppose array elements are 1 3 2 1 4 2 5 4 and  x=6 so if you subtract 6 by 5 and 1 or 4 and 2 in both cases you subtracted 2

// elements from x and if you subtract x by 3 2 and 1 you subtracted 3 elements to reduce x to zero.

// the constraint isyou should subtract minimum elements to make x zero.

// so output contains minimum elements as 2.

// if it is not possible to reduce x to zero print -1 in output.

// input: First line contains an integer n denoting size of array.

// second line contains n space separated integers denoting elements of array.

// third line contains an integer x denoting a random number.

// output: contains an integer denoting minimum numbers of element required to reduce x to zero.

// constraints: 5<=n<=20

// 1<=x<=100

// Input Example:

// 8

// 1 3 2 1 4 2 5 4

// 6

// Example Output

// 2
// Program to print all combination of size r in an array of size n
