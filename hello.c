#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char str1[50]="Bengaluru";
char str2[50]="Nagara";
printf("\n string1=%s string2=%s",str1,str2);
printf("\n 1.length of the %s=%d",str1,strlen(str1));
printf("\n 2.string copy in str2=%s",strcpy(str2,"city"));
printf("\n 3.concatenation = %s",strcat(str1,str2));
printf("\n 4.compare str1 & str2 %d",strcmp(str1,str2));
printf("\n 5.string in lower case %s",strlwr(str2));
printf("\n 6.string in upper case %s",strupr(str2));
printf("\n 7.substring search %s",strchr(str1,'n'));
printf("\n 8.Duplicate string=%s",strdup(str1));
printf("\n 9.string reverse=%s",strrev(str2));
printf("\n 10.set all characters to #=%s",strset(str1,'#'));
return 0;
}
