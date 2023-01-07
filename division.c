
#include<stdio.h>
#include<stdlib.h>
int main()
{
  while(1)
{
int a, b,c ;
 printf("Enter the first number\n");
 scanf("%d",&a);
printf("Enter the second number\n");
 scanf("%d",&b);
  if(a==b)
{
    c=a-b+1;
     printf("division is %d\n",c);
}
    else if(a<b && a>0 &&b>0)
    {
      c=0;
     printf("Division is %d\n",c);
    }
    else if(a>b && a>0 && b>0)
    {
      c=0;
      while(a>=b)
    {
       a=a-b;
       c=c+1;
    }
    printf("division is %d\n",c);
    }
    else if(a<0 && b<0)
    {
       a=-a;
        b=-b;
      if(a>b)
    {    c=0;
       while(a>=b)
    {
     a=a-b;
      c=c+1;     
    }
    printf("division is %d\n",c);
    }
     else
     {
      c=0;
     printf(" Division is %d\n",c);
    }   
    }
  else if(a<b && a<0 )
{
   a=-a;
   if(b<0 )
   {
    b=-b;
   }
   else 
   {
    b=b;
   }
   c=0;
 while(a>=b)
{
    a=a-b;
     c=c+1;
}
   printf("Division is % d\n",(-c));
 }

else if(a>b && b<0)
{
   b=-b;
  if(a<0)
{
   a=-a;
}
else 
{
   a=a;
}
   c=0;

 while(a>=b)
{
   a=a-b;
   c=c+1;
}
printf("division is %d\n",(-c));

}
}
}
