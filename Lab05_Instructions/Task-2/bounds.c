#include <stdlib.h>
#include <stdio.h>

#define FAST 1

/* From A. Fog: Example 14.4. */

int foo(int j, int size);

int main(int argc, char **argv)
{
<<<<<<< HEAD
    const int size = 16; 
    const int numiters = 100000000;
    int i,j;
    double list[size];
    for(j = 0; j<numiters; j++)
    {
       i = foo(j,size);
#if FAST 
       if ((unsigned int)(i) >= (unsigned int)(size))
       {
          printf("Error: Index out of range");
       }
=======
   const int size = 16;
   const int numiters = 100000000;
   int i, j;
   double list[size];
   for (j = 0; j < numiters; j++)
   {
      i = foo(j, size);
#if FAST
      if ((unsigned int)i >= (unsigned int)size)
      {
         printf("Error: Index out of range");
      }
>>>>>>> ae718f709779a651a188820c9e4d83e68f8e8f28
#else
      if (i < 0 || i >= size)
      {
         printf("Error: Index out of range");
      }
#endif
      else
      {
         list[i] += 1.0;
      }
   }
   return 0;
}

/* Pretend you don't know the definition of this function. */
int foo(int j, int size)
{
   return j % size;
}
