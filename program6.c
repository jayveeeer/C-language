#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char str[50],a,i,j;
   int x,y;
   
   printf("Enter string: ");
   gets(str);
   a=strlen(str);
   


 for(i=1;i<=a-1;i++)
 {
    if(str[i]==45)
       {
         
         {
            x=str[i-1];
            y=str[i+1];

            for(j=x;j<=y;j++)
            {
                printf("%c",j);
            }
         }
       }
       else
       {
          continue;
       }
 } 




   return 0;
}   