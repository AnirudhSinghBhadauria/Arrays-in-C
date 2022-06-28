#include <stdio.h>

int main()
{

    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf(" the marks of student %d : %d \n", i + 1, marks[i]);
    }

    return 0;
}