// Printting rectangle using for loop.

#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==0||i==9||j==0||j==9){
            printf(" * ");
        }else{
            printf("   ");
        }
      
    }
        printf("\n");
    }

    return 0;


}