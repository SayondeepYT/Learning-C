/*Outputs In Separate Lines
When we use multiple printf statements, everything gets printed on one line.

Task
Write a program which does the following

Output the sum of 3 and 4 using printf.
Output the sum of 1 and 2 using printf, but on a new line.*/

#include <stdio.h>

int main()
{
    printf("Sum of 3 and 4 = %d\n", 3 + 4);
    printf("Sum of 1 and 2 = %d\n", 1 + 2);
    return 0;
}