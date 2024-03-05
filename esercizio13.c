#include <stdio.h>
int main()
{
    int a;
    printf ("scrivi un numeri");
    scanf ("%d",&a);
   int b;
   printf ("scrivi un altro numero");
   scanf ("%d",&b);
   int c;
   printf ("scrivi un unltimo numero");
   scanf ("%d", &c);

   if (a-b==b-c)
   {
    printf ("siiii");
   }
   else 
   {
    printf ("noooo");
   }
}