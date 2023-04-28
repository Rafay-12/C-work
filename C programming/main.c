#include<stdio.h>
int recur(int n){
    if (n <= 1){
        return n;
    }
    else{
        return recur(n-1) + recur(n-2);

    }
}
int main()
{
    int n;
    printf("enter the no of terms for which you want fibonacci series\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",recur(i));
    }
        
    return 0;
}
