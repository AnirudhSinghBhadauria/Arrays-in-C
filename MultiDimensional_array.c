#include <stdio.h>

int main()
{

    // 2 DIMENSIONAL ARRAY !!

    int subject, students;

    printf("Enter the number of students in your class : ");
    scanf("%d", &students);
    printf("Enter the number of subjects : ");
    scanf("%d", &subject);

    int class[students][subject];

    for (int i = 0; i < students; i++)
    {

        for (int j = 0; j < subject; j++)
        {
            printf("Enter the marks of student %d in subject %d : ", i + 1, j + 1);
            scanf("%d", &class[i][j]);
        }
    }

    for (int i = 0; i < students; i++)
    {

        for (int j = 0; j < subject; j++)
        {
            printf("The marks of student %d in subject %d : %d\n", i + 1, j + 1, class[i][j]);
        }
    }

    return 0;
}