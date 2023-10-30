#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int y = input;
    for (int i = 0; i <= input; i++)
    {
        for (int j = 0; j <= y; j++)
        {
            printf("#");
        }

        printf("\n");

    }

    return 0;
}

