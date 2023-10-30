

#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    int s = 1;
    int gap = input - 2;
    for (int i = 0; i <= (2 * input); i++)
    {
        for (int j = gap; j >= 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < s; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        if (i <= input - 2)
        {
            s = s + 2;
            gap--;
        }
        else
        {
            s = s - 2;
            gap++;
        }

        printf("\n");
    }

    return 0;
}
