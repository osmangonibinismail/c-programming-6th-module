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
// #include <stdio.h>
// int main()
// {
//     int cnt = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Outer loop.\n");
//         for (int j = 0; j < 5; j++)
//         {
//             cnt++;
//         }
//         printf("%d\n", cnt);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);

//     printf("%d * 1 = %d\n", n, n * 1);
//     printf("%d * 2 = %d\n", n, n * 2);
//     printf("%d * 3 = %d\n", n, n * 3);
//     printf("%d * 4 = %d\n", n, n * 4);
//     printf("%d * 5 = %d\n", n, n * 5);
//     printf("%d * 6 = %d\n", n, n * 6);
//     printf("%d * 7 = %d\n", n, n * 7);
//     printf("%d * 8 = %d\n", n, n * 8);
//     printf("%d * 9 = %d\n", n, n * 9);
//     printf("%d * 10 = %d\n", n, n * 10);

//     return 0;

// }
// #include <stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);

//     for(int i = 1; i <= 10; i++){
//         printf("%d * %2d = %3d\n", n, i, n * i);
//     }

//     return 0;

// }
// #include <stdio.h>

// int main() {
//     int born_year;
//     printf("Enter Your Born Year: ");
//     scanf("%d", &born_year);

//     if (born_year >= 1997 && born_year <= 2012) {
//         printf("Gen Z\n");
//     } else if (born_year >= 1981 && born_year <= 1996) {
//         printf("Millennials\n");
//     } else if (born_year >= 1965 && born_year <= 1980) {
//         printf("Gen X\n");
//     } else if (born_year >= 1946 && born_year <= 1964) {
//         printf("Baby Boomers\n");
//     } else {
//         printf("Other Generation\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int count_ones(int n) {
//     int count = 0;
//     while (n) {
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }

// int main() {
//     int N;
//     printf("Enter a positive integer: ");
//     scanf("%d", &N);

//     int ones = count_ones(N);
    
//     if (ones % 2 == 0) {
//         printf("%d is an Evil number.\n", N);
//     } else {
//         printf("%d is an Odious number.\n", N);
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     for (int i = 100; i >= 1; i--) {
//         if (i % 2 == 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i = 100;
//     while (i >= 1) {
//         if (i % 2 == 0) {
//             printf("%d ", i);
//         }
//         i--;
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter a positive integer: ");
//     scanf("%d", &N);

//     if (N % 3 == 0 && N % 7 == 0) {
//         printf("BOTH\n");
//     } else if (N % 3 == 0) {
//         printf("THREE\n");
//     } else if (N % 7 == 0) {
//         printf("SEVEN\n");
//     } else {
//         printf("NONE\n");
//     }
    
//     return 0;
// }





// #include <stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);

//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 1; i <= 10; i++)
//         {
//             printf("%d * %2d = %3d\n", n, i, n * i);
//         }
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for (int j = 11; j <= n; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %3d = %3d\n", j, i, j * i);
        }

        printf("\n\n");
    }

    return 0;
}