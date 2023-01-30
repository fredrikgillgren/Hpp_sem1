#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   int i;
   int a = 1, b = 2, c = 3, d = 1;
   float x = 0.1, y = 0.5, z = 0.33;
   printf("%d %d %d %d, %f %f %f\n", a, b, c, d, x, y, z);

   for (i=0; i<50000000; i++)
   {
      c = d+d;
      b = (unsigned)c >> 15;
      a = (unsigned)b << 16;
      d = (unsigned)b << a;

      z = 0.33;
      y = z + z ;
      x = y * 0.75;
      z = x * 0.75;
   }
   printf("%d %d %d %d, %f %f %f\n", a, b, c, d, x, y, z);
   return 0;
}
