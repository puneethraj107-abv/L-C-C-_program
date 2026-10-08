#include <stdio.h>
int main()
{
    float pi=3.14,radius,circumference,area;
    printf("enter the radius of a circle: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("\n The area of a circle is %f ",area);
    printf("\n circumference is %f ",circumference);
    return 0;
}
