#include<stdio.h>
#include<conio.h>
int rev_int(int a){
    int rem,rev=0;
    while (a!=0)
    {
        rem = a%10;
        rev = rev*10+rem;
        a = a/10;
    }
    return rev;
}
int poli(int a,int b){
    if(a == b){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int orginal;
    printf("enter a number to check if it is palindromic\n");
    scanf("%d",&orginal);
    printf("the original number is %d\n",orginal);
    int rev = rev_int(orginal);
    printf("the reverse of number is %d\n",rev);
    if(poli(rev,orginal) == 1){
        printf("It is palindromic");
    }
    else{
        printf("It is not palindromic");
    }
}           