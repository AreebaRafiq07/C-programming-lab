#include<stdio.h>
void main()
{
    int a,b,sum,sub,mul,div;
    printf("enter the first number - ");
    scanf("%d",&a);
    printf("enter the second number - ");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\n the sum is = %d",sum);
    printf("\n the sub is = %d",sub);
    printf("\n the mul is = %d",mul);
    printf("\n the div is = %d",div);
}
