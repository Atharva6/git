#include<stdio.h>
#include<conio.h>
void main()
{
    char s[3][10];
    int i;
    printf("ENTER THREE STRINGS");
    for(i=0;i<=2;i++)
        gets(&s[i][0]);
    for(i=0;i<=2;i++)
        printf("THE STRING IS %s\n",s[i]);
    getch();
}
