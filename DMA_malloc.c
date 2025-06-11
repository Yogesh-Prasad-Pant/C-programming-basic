//DMA(Dynamic Memory Allociation) is mthods of allocating memory during rumtime.
//In c there are four function to acheive DMA
// they are Malloc(),calloc(),realloc()and free()
//these function are defined in stdlib.h header file.
//malloc() : this is a DMA function which allocates perticular size of memory during execution of a program.
// and returns void pointer which can be type casted into required data.
// syntax :  malloc(sizeof_memeory);
// pointer to initial location
// int *ptr;
//ptr = (int*)malloc(10*sizeof(int));
// syntax of calloc()function
// calloc(n,size_of_block);
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,i;
    ptr = (int*)calloc(5,sizeof(int));
    printf("Enter any five data:");
    for(i=0;i<5;i++)
    scanf("%d",(ptr+i));
    printf("Now the entered elements are :\n ");
    for(i=0;i<5;i++)
    printf("%d\t",*(ptr+i));
    free(ptr);
    return 0;
}