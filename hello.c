#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,choice;
double disc,r1,r2,real,img;
printf("enter a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
disc=(b*b)-(4*a*c);
if(disc>0)
    choice=1;
else if(disc<0)
        choice=2;
else
 choice=3;
switch(choice)
{
    case 1:
{
    printf("\n real and distinct roots \n");
    r1=(-b+sqrt(disc))/(2.0*a);
    r2=(-b-sqrt(disc))/(2.0*a);
    printf("\n root1=%0.2lf",r1);
    printf("\n root2=%0.2lf",r2);
}
break;

    case 2:
{
    printf("\n roots are complex and distinct roots\n");
    real=-b/(2.0*a);
    img=sqrt(abs(disc))/(2*a);
    printf("\n root1=%0.2lf+i%0.2lf",real,img);
    printf("\n root2=%0.2lf-i%0.2lf",real,img);
}
break;
    case 3:
{
    printf("\n roots are real and equal");
    r1=-b+(2.0*a);
    r2=-b+(2.0*a);
    printf("\n root1=%0.2lf",r1);
    printf("\n root2=%0.2lf",r2);

}
break;

    default:printf("\n invalid inputs");
}

}
