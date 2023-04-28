#include <stdio.h>
#include <conio.h>
int main()
{
    int n, m, r, c;
    printf("Enter the number of rows of first matrix\n");
    scanf("%d", &n);
    printf("Enter the number of columns of first matrix\n");
    scanf("%d", &m);
    printf("Enter the number of rows of second matrix\n");
    scanf("%d",&rewind);
    printf("Enter the number of columns of second matrix\n");
    scanf("%d",&c);
    int mat1[n][m];
    int mat2[r][c];
    if (n != r || m!= c)
    {
        printf("these matrices cannot be add\n");
        goto end;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("enter the element of %d row and %d column of first matrix:\n", i, j);
            scanf("%d", &mat1[i-1][j-1]);
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("enter the element of %d row and %d column of second matrix:\n", i, j);
            scanf("%d", &mat2[i-1][j-1]);
        }
    }
    printf("\n\nthe first matrix is:\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",mat1[i][j]);   
        }
        printf("\n");
    }
    printf("\n\nthe second matrix is:\n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",mat2[i][j]);   
        }
        printf("\n");
    }
    printf("\n\nthe matrix after addition is\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",mat1[i][j]+mat2[i][j]);   
        }
        printf("\n");
    }
end:
getch();
}
