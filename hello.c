#include <stdio.h>

int main()
{
    int num, orgnum;
    int sum=0,rev=0,rem;
    printf("enter a number\n");
    scanf("%d",&num);
    orgnum=num;
    while (num>0) {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("\n reversed number=%d",rev);
    if(orgnum==rev)
        printf("\n number is a palindrome");
    else
        printf("\n number is not a palindrome");
    return 0;

}
