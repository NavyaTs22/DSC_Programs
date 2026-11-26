// Program Accesses Structure Elements and displays them after taking user input 

#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {

struct student s;       
struct student *p;               // Used Pointers for Efficiency and Dynamic Memory Management 
p=&s;

printf("Enter roll no");
scanf("%d",&p->roll);

printf("Enter name");
scanf("%s",p->name);

printf("Enter marks");
scanf("%f",&p->marks);

printf("Roll no : %d\n Name : %s\n Marks : %.1f\n",p->roll,p->name,p->marks);


    return 0;
}



OUTPUT :

Enter roll no 22
Enter name Navya
Enter marks 100
    
Roll no : 22
Name : Navya
Marks : 100.0

