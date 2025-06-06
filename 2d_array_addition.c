#include<stdio.h>
int main(){
    int r,c,i,j;
    //getting the size of arrays 
    printf("Enter the size of arry row and column :");
    scanf("%d%d",&r,&c);
    int A[r][c],B[r][c],result[r][c];
    // Entering the value of array A and B
    printf("enter the value of array A :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&A[i][j]);
    }
     printf("enter the value of array B :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        scanf("%d",&B[i][j]);
    }
    // Now adding the value of array A and B 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        result[i][j]=A[i][j]+B[i][j];
    }
    // Printing the value of A+B 
       printf("Sum of the array A and B is :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        printf("%d\t",result[i][j]);
        printf("\n");
    }
    return 0;
}