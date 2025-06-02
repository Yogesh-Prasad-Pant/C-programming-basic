// fabonic series n th term = n-1th term +n-2th term
//start from 0
//first memeber 0 
//second 1
//thid 1
//fourth 2
//so on 
#include<stdio.h>
int fabonic(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else
    {
        return fabonic(n-1)+fabonic(n-2);
    }
}
int main(){
    int a,i;
    printf("Enter the nuber of term of fabonic series to be displayed :");
    scanf("%d",&a);
    for(i = 0;i<a;i++){
        printf("%d\t",fabonic(i));
    }
    return 0;
}