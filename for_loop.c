 //for loop
 #include<stdio.h>
 #include<conio.h>
 //finding the higest co-ordinate point
 int greatest(int arr[],int n){
    int max,i;
    max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
 }
 
 int main()
 {
    int i,j,n,g1,g2,k,temp;
    //getting the nuber of ponint to be plotted
    printf("Enter the nuber of point you want to show : ");
    scanf("%d",&n);
    //getting co-ordinates
    int xaxis[n],yaxis[n];
    for(i=0;i<n;i++)
    {
             printf("\nEnter co-ordinate of %d point (X,Y)axis : ",(i+1));
             scanf("%d%d",&xaxis[i],&yaxis[i]);

    }
    //calling to find greatest co-ordinate
    g1 = greatest(xaxis,n);
    g2 = greatest(yaxis,n);
    //plotting the reference horizontal line
       printf("\n The points are :\n");
      for(i=0;i<50;i++){
    printf("_");
}
//plotting the co-ordinate with * symbol
    for(i=0;i<=g1;i++)
{
    for(j=0;j<=g2;j++)
    { for(k = 0;k<n;k++){
        temp = 0;
            if(xaxis[k]==i&&yaxis[k]==j){
                printf("*"); 
                temp = 1;
             }
         }
         if(temp == 0){
                printf(" ");
            
         }
    }
    printf("\n");
}  

       
 return 0;
}