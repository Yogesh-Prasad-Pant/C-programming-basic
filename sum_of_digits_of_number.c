#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,digit;
    printf("Enter any integer number for finding sum of it's digit : ");
    scanf("%d",&n);
    while(n!=0){
        digit = n%10;
        sum += digit;
        n = n/10;
    }
    printf("The sum of digit of given nuber is %d ",sum);
    getch();
}