#include<stdio.h>
void main()
{
    int l,b;
    printf("enter the length of rectangle - ");
    scanf("%d",&l);
    printf("enter the breadth of rectangle - ");
    scanf("%d",&b);
    int side;
    printf("\n enter the side of square - ");
    scanf("%d",&side);
    float radius;
    printf("\n enter the radius of circle - ");
    scanf("%f",&radius);
    printf("\n perimeter of circle - %f",2*3.14*radius);
    printf("\n area of circle - %f",radius*radius*3.14);
    printf("\n\n perimeter of square - %d",4*side);
    printf("\n area of square - %d",side*side);
    printf("\n\n perimeter of rectangle - %d",2*l+2*b);
    printf("\n area of rectangle - %d",l*b);
}
