#include<stdio.h> 
#include<conio.h>
int main()
{
           int a,b,rem,i;
           printf("   Give the First number for the Range :   \n");
           scanf("%d",&a);
           printf("   Give the Final number for the Range :   \n");
           scanf("%d",&b);
           printf("\n The Even numbers between %d and %d are ",f1,f2); 
           for(i=f1; i<=f2; ++i) 
           {
               rem = i % 2;
               if(rem == 0)
               printf("\n  %d",i);
           }
    return 0; 
    } 
