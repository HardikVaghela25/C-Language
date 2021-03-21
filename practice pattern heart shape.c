#include<stdio.h>

void display(char c,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%c",c);
    }
}

int main()
{
   int n;
   printf("enter no of rows:");
   scanf("%d",&n);

   for(int i=n; i>=1; i--)
   {
       display(' ' , (2*n)-1);

       printf("\n");
   }
}
