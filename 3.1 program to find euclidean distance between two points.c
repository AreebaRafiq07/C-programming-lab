#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("enter the value - ");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("answer is = %.2f",distance);
    return 0;
}
