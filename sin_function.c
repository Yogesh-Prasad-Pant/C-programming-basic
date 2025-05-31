// to calculate the value of sin function 
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int angle, i,j,fact,term,n=1,y=1;
    float sum =0,x;
    printf("Enter any angle : ");
    scanf("%d",&angle);
    x = angle*3.1415/180;
    printf("\nEnter the nuber of term to calculate : ");
    scanf("%d",&term);
    for(i=1;i<=term;i++){   
        fact = 1;
        for(j=1;j<=n;j++)
        fact = fact*j;
        sum = sum + (((pow(x,n))/fact)*y);
        y *=-1;
        n = n+2;
    }
    printf("sin %d is %f",angle,sum);
return 0;
}