// Program dynamically calculates product of 2 matrices 

#include <stdio.h>

int main() {
  int i,j,k,a[3][3],b[3][3],r[3][3];
 printf("Enter the elements for A matrix");
 
 for(i=0;i<3;i++){              // Nested Loop for 2D Arrays 
     for(j=0;j<3;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }
  printf("Enter the elements for B matrix");
for(i=0;i<3;i++){
     for(j=0;j<3;j++)
     {
         scanf("%d",&b[i][j]);
     }
 }

printf("Product of A and B matrices are\n");
for(i=0;i<3;i++) {
     for(j=0;j<3;j++)
     {
         r[i][j]=0;
       for(k=0;k<3;k++) {
        r[i][j] = r[i][j]+a[i][k]*b[k][j];
       
       }
        printf("%d\t",r[i][j]);
     }
     printf("\n");
 }


    return 0;
}

OUTPUT :
Enter the elements for A matrix 1 2 3 4 5 6 7  8 9
Enter the elements for B matrix 1 2 3 4 5 6 7 8 9
Product of A and B matrices are
30	36	42	
66	81	96	
102	126	150	
