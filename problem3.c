#include<stdio.h>

int main(){
    int n;
    printf("Enter a Number\n");
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
    }else if(n<0)
    {
        printf("Negative\n");
    }else
    {
        printf("zero");
    }
    return 0;
}