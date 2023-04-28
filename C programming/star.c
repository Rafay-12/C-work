#include <stdio.h>
#include<conio.h>
void hollow(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                {
                    printf("%c ", '*');
                }
                else
                    printf("%c ", ' ');
            }
            printf("\n");
        }
    }
void big_tri(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("%c ",' ');
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c ",'*');
        }
        for (int l = 0; l <= i; l++)
        {
            printf("%c ",'*');
        }
        printf("\n");

    }
}
void sqr(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("%c ",'*');
        }
        printf("\n");

    }
}
int main()
{
    int n;
    printf("Enter the number of rows of stars\n");
    scanf("%d", &n);
    hollow(n);
    getch();
}
