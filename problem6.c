#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int countPositive=0,countNegative=0,countEven=0,countOdd=0;
    for (int i = 0; i <=n; i++)
    {   
        int x;
        scanf("%d",&x);
        if (x%2==0)
        {
            countEven++;
        }else
        {
            countOdd++;
        }
        if (x<0)
        {
            countNegative++;
        }
        else if(x>=0)
        {
            countPositive++;
        }
    }
    printf("Even : %d\n",countEven);
    printf("Odd : %d\n",countOdd);
    printf("Positive : %d\n",countPositive);
    printf("Negative : %d\n",countNegative);
    
    return 0;
}