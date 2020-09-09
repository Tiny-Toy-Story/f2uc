#include <stdio.h>
#include <f2uc.h>

float test[100];

int main()
{
   unsigned char *ptr;
   float *f;
   bool dump;

   for (auto i = 0; i < 100; i++)
   {
      test[i] = i * 0.1 + i;
   }

   float2uc(test, &ptr, sizeof(test), dump = true);
   uc2float(ptr, &f, sizeof(test), dump = true);

   return 0;
}
