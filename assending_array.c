// arranging array in ascending order
#include<stdio.h>
int main(){
    int n,i,temp,j;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the memebers of array : ");
    for(i = 0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                //swap the values
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("The array in ascending order is : ");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);

    return 0;
}