#include<stdio.h>

int main(){
    int binary[20];
   int n,i=0,j,count=0;

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

for(j=0;j<=i;j++)  
{
  if(binary[j]==1)
  count++;
  else
   continue;
}

printf(" %d",count);


   

    return 0;
}
