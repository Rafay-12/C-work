#include <stdio.h>
#include <conio.h>

int main()
{
    int n, m, r, c,sum=0;
    printf("Enter the number of rows of first matrix\n");
    scanf("%d", &n);
    printf("Enter the number of columns of first matrix\n");
    scanf("%d", &m);
    printf("Enter the number of rows of second matrix\n");
    scanf("%d",&r);
    printf("Enter the number of columns of second matrix\n");
    scanf("%d",&c);
    int mat1[n][m];
    int mat2[r][c];
    int matmul[n][c];
    if (m != r)
    {
        printf("These matrices cannot be multiply");
        goto end;
    }
    // taking first matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("enter the element of %d row and %d column of matrix:\n", i, j);
            scanf("%d", &mat1[i-1][j-1]);
        }
    }
    // taking second matrix
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("enter the element of %d row and %d column of second matrix:\n", i, j);
            scanf("%d", &mat2[i-1][j-1]);
        }
    }
    // printing first matrix
    printf("\n\nthe first matrix is:\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",mat1[i][j]);   
        }
        printf("\n");
    }
    // printing second matrix
    printf("\n\nthe second matrix is:\n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",mat2[i][j]);   
        }
        printf("\n");
    }
    // multiplication
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < c; k++)
            {
                sum += mat1[i][k] * mat2[j][k];
            }
            matmul[i][j] = sum;
            sum = 0;
        }
        
    }
    // printing matrix after multiplication 
    printf("\n\nthe matrix after multiplication is :\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",matmul[i][j]);
        }
        printf("\n");
    } 
end:
getch();
}