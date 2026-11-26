// This Program Is To See How To Access Array Pointers 
#include <stdio.h>

int main() {

int a[5]={10,20,30,40,50};
int *p;
int i;

p=a;

printf("The Elements are:\n");
for(i=0;i<5;i++) { 
    printf("%d\n",*((p+i)));
}

    return 0;
}


OUTPUT :

The Elements are:
10
20
30
40
50
