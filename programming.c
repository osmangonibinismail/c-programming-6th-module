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
// #include <stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);

//     for (int j = 11; j <= n; j++)
//     {
//         for (int i = 1; i <= 10; i++)
//         {
//             printf("%d * %3d = %3d\n", j, i, j * i);
//         }

//         printf("\n\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n;

//     scanf("%d", &n);

//     for (int j = 100; j >= n; j--)
//     {
//         for (int i = 1; i <= 10; i++)
//         {
//             printf("%d * %3d = %3d\n", j, i, j * i);
//         }

//         printf("\n\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int evenCount = 0;
//     int oddCount = 0;
//     int positiveCount = 0;
//     int negativeCount = 0;

//     for (int i = 0; i < n; i++)
//     {

//         int x;
//         scanf("%d", &x);
//         if (x % 2 == 0)
//         {
//             // even
//             evenCount++;
//         }
//         else
//         {
//             // odd
//             oddCount++;
//         }

//         if (x > 0)
//         {
//             // positive
//             positiveCount++;
//         }
//         else if (x < 0)
//         {
//             // negative
//             negativeCount++;
//         }
//     }

//     printf("Even: %d\n", evenCount);
//     printf("Odd: %d\n", oddCount);
//     printf("Positive: %d\n", positiveCount);
//     printf("Negative: %d\n", negativeCount);

// }


// #include<stdio.h>
// int main(){
    
//     for(int i = 1; i <= 300; i++){
//         printf("checking %d\n", i);

//         if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0){
//             printf("%d is the number\n", i);
//         }
//     }

// }
/*break */
// #include<stdio.h>
// int main(){
    
//     for(int i = 100; i <= 300; i++){
//         printf("checking %d\n", i);

//         if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0){
//             printf("%d is the number\n", i);
//             break;
//         }
//     }

// }
// #include<stdio.h>
// int main(){
    
//     for(int i = 1; i <= 10; i++){
//         printf("checking %d\n", i);

//         printf("print num 1 \n");
//         printf("print num 2 \n");
//         printf("print num 3 \n");

//         if(i == 7){
//             break;
//         }
//         printf("print num 4 \n");
        
//     }

// }

//continue
// #include<stdio.h>
// int main(){
    
//     for(int i = 1; i <= 10; i++){
//         printf("checking %d\n", i);

//         printf("print num 1 \n");
//         printf("print num 2 \n");
//         printf("print num 3 \n");

//         if(i == 7){
//             continue;
//         }
//         printf("print num 4 \n");
        
//     }


// #include<stdio.h>
// int main(){
    
//     for(int i = 100; i <= 200; i++){
//         printf("checking %d\n", i);

//         if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0){
//             printf("%d is the number\n", i);
//             continue;;
//         }
//     }

//     printf("Outside loop\n");

//     return 0;

// }

// #include <stdio.h>
// int main(){
//     int t;
//     scanf("%d", &t);

//     for(int i = 0; i < t; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         while(n > 0){

//             int digit = n % 10;
//             printf("%d %d \n", n , digit);

//             n /= 10;
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int t;
//     scanf("%d", &t);

//     for(int i = 0; i < t; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         if(n == 0){
//             printf("0");
//         }

//         while(n > 0){

//             int digit = n % 10;
//             printf("%d ", digit);

//             n /= 10;
//         }
//         printf("\n");
//     }

//     return 0;
// }


/*
1
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/

// #include<stdio.h>
// int main(){
    
//     for(int i = 1; i <= 7; i++)
//     {
//         // printf("%d ", i)
        
//         for(int j = 1; j <= i; j++){
//             printf("%d ", j);
//         }

//         printf("\n");


//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
    
//     for(int i = 1; i <= 7; i++)
//     {
//         // printf("%d ", i)
        
//         for(int j = 1; j <= i; j++){
//             printf("* ");
//         }

//         printf("\n");


//     }

//     return 0;
// }
#include<stdio.h>
int main(){
    
    for(int i = 1; i <= 7; i++)
    {
        // printf("%d ", i)
        
        for(int j = i; j >= 1; j--){
            printf("%d ", j);
        }

        printf("\n");


    }

    return 0;
}