#include <stdio.h>
#include <string.h>

int main()
 
  {
   char cp[6]="-12345";
//  char cp1[6];
//  extern size_t strlcpy(char *dst, const char *src, size_t siz);
   long int i;
  char *cp1;

   i =strtol(cp, &cp1, 10);
   printf ("%ld \r\n", i);
//   strlcpy(cp1, cp, 4);
    if (*cp1)
        printf("fail string \r\n");
  }
