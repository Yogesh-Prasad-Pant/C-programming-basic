// what is array : array is the collection of contigious memory location 
// array always starts with index 0;
// array can be one dimensional or multi dimensional 
// example of one dimensional array
// program to find the greatest number among 10 number in array
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,great;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Entere the elements of array to find greatest : ");
    scanf("%d",&arr[0]);
    great = arr[0];
    for(i=1;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>great){
            great = arr[i];
    }
}
    printf("\n greatest number is %d",great);
    return 0;
}