#include<stdio.h>

int main(){
    int binary[20];
   int n,i=0,j,count=0,a,b;

   printf("enter n: ");
   scanf("%d",&n);

    while(n>0)
  {
    binary[i]=n%2;
    n=n/2;
    i++;
  }
  for(j=i-1;j>=0;j--)
 {
   printf("%d",binary[j]);
 } 
printf("\n");
printf("The lenght of bits is %d so the inversion of bits can be performed between 1 to %d\n",i,i);
   printf("invert start from: ");
   scanf("%d",&a);
   

   printf("invert till: ");
   scanf("%d",&b);

 if(a>b || a>i || b>i)
 {
  printf("Enter valid input");
 } 
 else
 {
  for(j=i-b;j<=i-a;j++)
  if(binary[j]==0)
  {
    binary[j]=1;
  }
  else
  {
    binary[j]=0;
  }
 }
for(j=i-1;j>=0;j--)
 {
   printf("%d",binary[j]);
 } 
 

return 0;
}

