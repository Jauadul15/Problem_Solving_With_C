#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
    if (n>0)
    {
        printf("Positive\n");
    }else
    {
        printf("Negative\n");
    }
    return 0;
}