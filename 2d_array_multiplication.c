#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,k;
    //getting the size of arrays 
    level:
    printf("Enter the size of arry A row and column :");
    scanf("%d%d",&r1,&c1);
      printf("Enter the size of arry B row and column :");
    scanf("%d%d",&r2,&c2);
    int A[r1][c1],B[r2][c2],result[r1][c2];
    // Entering the value of array A and B
    printf("enter the value of array A :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        scanf("%d",&A[i][j]);
    }
     printf("enter the value of array B :\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
        scanf("%d",&B[i][j]);
    }
    if(c1==r2){
           // Now multipling the value of array A and B 
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            result[i][j]=0;
            for(k=0;k<c1;k++)
        result[i][j]+=A[i][k]*B[k][j];
        }
    }
    // Printing the value of A*B 
       printf("Multiplication of the array A and B is :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
        printf("%d\t",result[i][j]);
        printf("\n");
    }
    }
    else{
        printf("The size of array is insufficent for the multiplication");
    }
    return 0;
}