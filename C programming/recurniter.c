#include<stdio.h>
#include<conio.h>
int recur(int n){
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return recur(n-1) + recur(n-2);
    }
}
int iter(int n){
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b = b + a;
        a = b - a;

    }
    return a;
}
int main()
{
    int n;
    printf("Enter number of term of fibo series you want\n");
    scanf("%d",&n);
    printf("the %d term of fibo series with iter func is %d\n",n,iter(n));
    printf("the %d term of fibo series with recur func is %d\n",n,recur(n));
    getch();
    return 0;
}
