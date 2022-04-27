#include <stdio.h>
#include <conio.h>
void check_eligibility(int a, int b, int c, char cn);
int main()
{
    int a, b, c, re = 0;
    char cn;
    scanf("%d%d%d%c%c", &a, &b, &c, &cn, &cn);
    check_eligibility(a, b, c, cn);
}

void check_eligibility(int a, int b, int c, char cn)
{
    int i = 0;
    while (i <= 3)
    {
        if (a + b + c < 255)
        {
            printf("0");
            break;
        }
        switch (cn)
        {
        case 'X':
            if (a >= 90 && b >= 85 && c >= 75 && a + b + c >= 255)
            {
                printf("1 X");
                break;
            }
            else
            {
                if (i != 2)
                    printf("-1 X");
                cn = 'Y';
                i++;
                continue;
            }
        case 'Y':
            if (a >= 80 && b >= 90 && c >= 85 && a + b + c >= 260)
            {
                printf("1 Y");
                break;
            }
            else
            {
                if (i != 2)
                    printf("-1 Y\n");
                cn = 'Z';
                i++;
                continue;
            }
        case 'Z':
            if (a >= 75 && b >= 80 && c >= 85 && a + b + c >= 255)
            {
                printf("1 Z");
                break;
            }
            else
            {
                if (i != 2)
                    printf("-1 Z\n");
                cn = 'X';
                i++;
                continue;
            }
        }
        break;
    }
    // if (i >= 3)
    // {
    //     printf("0");
    // }
}

// 14. Check Eligibility
// Statement:There are 3 popular courses  CR offered by the college named as X, Y and Z. each course have limited seats so college management can’t give the admissions to all

// applied student for certain course. Course X, Y and Z requires some special skills in certain subjects so college management decided to make an admission process based on

// the skills required for all 3 courses.in order to give the admission in any course they accept marks in Three Subjects A, B and C. now on the basis of these subjects marks they

// check the student is eligible for which course or doesn’t eligible for any course. Following is the criteria to check the eligibility of student.

// In order to take admission in X course the required marks in subjects A,B and C and total marks in A+B+C are as follows

// A>=90

// B>=85

// C>=75

// A+B+C>=255

// In order to take admission in Y course the required marks in subjects A,B and C  and total marks in A+B+C  are as follows

// A>=80

// B>=90

// C>=85

// A+B+C>=260

// In order to take admission in Z course the required marks in subjects A,B and Cand total marks in A+B+Care as follows

// A>=75

// B>=80

// C>=85

// A+B+C>=255

// If student doesn’t fit in any criteria mentioned above, he is not eligible for admission.

// The admission process is flexible in terms of choosing the course so student will enter his favorite course name in which he wants to take admission along with marks in

// subject A, B and C.

// Your task is to write a program that accepts marks AM, BM and CM denoting marks of subjects A, B and C respectively. Also accepts the Course X, Y or Z of student’s choice.

// Find the total of AM+BM+CM and tell him he is eligible for that course or not.

// Also, if student is not eligible for his favorite course in which he wants to take admission your program should give him a suggestion that, is he eligible for another course.

// If he is eligible for his favorite course print 1 along with course name separated by space in a line.

// If he is not eligible for his favorite course but eligible for different course print -1 along with the course name and in next line print 1 along with the Course name in which he is eligible.

// If he is not at all eligible for any course print 0.

// Input:first line contains three integers  AM BM CM denoting marks in three subjects A, B and C respectively andan upper-case character CR denoting favorite course of student. (possible values are X, Y and Z) separated by space.

// Output:first line either contain 1 or -1 along with favorite course name CR separated by space or first line contains 0 if student is not eligible.

// If first line contains -1 second line will contain 1 along with Course name CR in which he/she is eligible.

// Constraints:0<=AM<=100

// 0<=BM<=100

// 0<=CM<=100

// CR can be either X, Y or Z only.

// Example:

// 80 85 90 Y

// -1 Y

// 1 Z

// re = check_eligibility(a, b, c, cn);
// if (re == 1)
// {
//     printf("1 %c", cn);
// }
// else
// {
//     printf("-1 %c", cn);
//     if (cn == 'X')
//         cn = 'y';
//     else if (cn == 'Y')
//         cn = 'Z';
//     else if (cn == 'Z')
//         cn = 'X';
// }