#include <stdio.h>
#include <string.h>
char is_palindrome(char *a, int sz)
{
    int i = 0;
    int j = sz - 1;
    int flag = 1;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char a[1001];
    scanf("%s", a);
    int sz = strlen(a);
    char res = is_palindrome(a, sz);
    if (res == 0)
    {
        printf("x");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[100005];
//     scanf("%s", &a);
//     // printf("%s ", a);
//     int sz = strlen(a);
//     int i = 0;
//     int j = sz - 1;
//     int ans = 1;
//     while (i < j)
//     {
//         if (a[i] == a[j])
//         {
//             j--;
//             i++;
//         }
//         else
//         {
//             ans = 0;
//             break;
//         }
//     }
//     if (ans == 0)

//     {
//         printf("NO");
//     }
//     else

//     {
//         printf("YES");
//     }
// }
