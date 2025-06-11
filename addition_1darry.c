#include<stdio.h>
int main(){
  int A[5]={7,2,3,4,5};
  int i;
  int *ptr1 = A;
  printf("%d\n",*(ptr1+3));//4
  printf("%d\n",*A);
  printf("%d\n",*(A+1));
  for(i=0; i<5;i++)
  printf("%d\t",*(ptr1+i));
  return 0;
}