// Program Finds if a String is Palindrome or not ( Words Even after reversing are same )

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
char a[50],b[50];
clrscr();

printf("Enter the string");
scanf("%s",&a);
strcpy(b,a);
strrev(b);

if(strcmp(a,b)==0)
{
printf("This string is a palindrome");
}
else {
printf("This string is not a palindrome");
}
getch();
}

OUTPUT:
Enter the string helooo
This string is not a palindrome
