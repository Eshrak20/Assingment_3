#include <stdio.h>
void count_before_one(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            int sum = 0;
            for (int j = 0; j < i; j++)
            {
                sum = sum + 1;
            }

            printf("%d", sum);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count_before_one(arr, n);

    return 0;
}
