#include<stdio.h>
int main()
{
    int j,a,s,o,n,p;
    scanf("%d%d%d%d%d",&j,&a,&s,&o,&n);
    printf("%.2f",((j+a+s+o+n)/153.0)*100);
}

// 11. Find Attendance Percentage
// Statement:A student is eligible for exam if he gives more or equal to 70.00% attendance in his academic semester. Suppose this is an odd semester from July to December so

// add days of these months to calculate the percentage accordingly. Your task is to find the percentage of attendance. For this accept total attendance of 5 months from July

// to November “J”, “A”, “S”,“O” and “N” respectively. Add them and calculate the percentage “P” of attendance.

// Note: national holidays are also considered as present for the student. For example, it is a valid input if you take 31 days present attendance in input for October month while

// there are 5 days national holiday in same month.

// Print percentage P with 2 digits after decimal point only.

// Input:first line contain 5integers J A S O N separated by space denoting attendance of student from July to November respectively.

// Output:output contains P that represents attendance percentage of a student.

// Constraints:0<=J<=31

// 0<=A<=31

// 0<=S<=30

// 0<=O<=31

// 0<=N<=30

// Example:

// 21 28 26 20 14

// 71.24