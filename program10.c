#include<stdio.h>
#include<string.h>

 int main()
{
    char str[50],sub[50];
    int i,j=0,a,b;

    printf("Enter string:");
    gets(str);

    printf("Enter substring:");
    gets(sub);

    a=strlen(str);
    b=strlen(sub);
    
    for (i = 0 ; i<a; i++)
    {
      while(j<b)
        {
         if(str[i]==sub[j])
          {
          
            j++;
          }

         else
         {
            j=0;
           
         }
         break;
        } 
      
        
    }    
      
if (j == b)
 {
   printf("Search Sucessfull");
 }
else
 {
  printf("search unsucessfull");
 }

return 0;

}