#include <stdio.h>

int main()
{

    int marks[5];

    int *pointers = &marks[0];

    for (int i = 0; i < 5; i++)
    {

        printf("Enter the marks of student %d : ", i + 1);
        scanf("%d", pointers);

        pointers++;
    }
    for (int i = 0; i < 5; i++)
    {

        printf("The marks of student %d : %d\n ", i + 1, marks[i]);
    }

    return 0;
}