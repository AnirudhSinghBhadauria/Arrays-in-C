#include <stdio.h>

void printarray(int number, int marks[number])
{

    for (int i = 0; i < number; i++)
    {
        printf("The marks of student %d  : %d\n ", i + 1, marks[i]);
    }
}

int main()
{

    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    printarray(4, marks);

    return 0;
}