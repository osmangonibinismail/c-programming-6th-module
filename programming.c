// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 20; j++)
//         {
//             printf("%d ", j + 1);
//         }
//         printf("Hello for loop.\n");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Outer loop.\n");
//         for (int j = 0; j < 5; j++)
//         {
//             printf("inner loop\n");
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>
int main()
{
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Outer loop.\n");
        for (int j = 0; j < 5; j++)
        {
            cnt++;
        }
        printf("%d\n", cnt);
    }
}