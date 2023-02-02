#include<stdio.h>

int main(){
   int a[50],n,i,n1,count=0;

   printf("Enter number of integers in array: ");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
     printf("Enter value of a[%d]:",i);
     scanf("%d",&a[i]);
    }

    printf("Enter number to find in array:");
    scanf("%d",&n1);

    for(i=0;i<n;i++)
   {
     if(a[i]==n1)
     {
        printf("the value is present at index value: %d",i);
        count++;
        break;
     }
      
      
    }
    if(count==0)
    {
        printf("value not found");
    }
      
    return 0;
}