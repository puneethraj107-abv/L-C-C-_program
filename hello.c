#include <stdio.h>
int main()
{
    int radius,area,circumference;
    float PI=3.14;
    printf("enter the radius of a circle ");
    scanf("%d",&radius);
    area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("\n area of a circle is %d",area);
    printf("\n circumference of  a circle is %d",circumference);

}
