#include <stdio.h>

int main()
{

    // ADDITION OF A NUMBER TO A POINTER !!

    int number;

    int *pointer = &number;

    printf("The adress of pointer before the additon is : %u\n ", pointer);

    pointer++;

    printf("The adress of pointer after the additon is : %u\n ", pointer);

    // SUBTRACTION OF A NUMBER TO A POINTER !!

    int number;

    int *pointer = &number;

    printf("The adress of pointer before the additon is : %u\n ", pointer);

    pointer--;

    printf("The adress of pointer after the additon is : %u\n ", pointer);

    // SUBTRACTION OF ONE POINTER TO OTHER !!

    int number, number1;

    int *pointer1 = &number;
    int *pointer2 = &number1;

    printf("pointer2 - pointer1 : %u - %u = %u\n", pointer1, pointer2, pointer1 - pointer2);

    // COMPARING TWO POINTERS !!

    int number;

    int *pointer1 = &number;
    int *pointer2 = &number;

    printf("The value of pointer1 is %u \n", pointer1);
    printf("The value of pointer2 is %u \n", pointer2);

    if (pointer1 == pointer2)
    {
        printf("They are same !! \n");
    }

    else
    {
        printf("They are NOT same !! \n");
    }
    return 0;
}