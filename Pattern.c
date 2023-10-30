#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 0; i <= input; i++)
    {
        int y =  2 * i + 1;

        for (int j = 0; j <= y; j++)
        {
            printf("#");
        }
        // y = y + 2;

        printf("\n");
    }

    return 0;
}
