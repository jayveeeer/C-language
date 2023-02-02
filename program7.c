#include <stdio.h>

int main() {
   char str[50];
   int length=0,i=0,j=0;
   printf("Enter string: ");
   gets(str);
   
   while(i<=str[length]!='\0')
   {
     length++;
     i++;
   }
   

   
  
  printf("Length of string is %d\n",length);
  
    return 0;
}