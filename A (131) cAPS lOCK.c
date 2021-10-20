#include <stdio.h>
#include <string.h>

int main() {

   char s[1000];
   int i;

   scanf("%s",s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] +32;
      }
   }

   if(s[0]>=90)
   {
     s[0] -= 32;
   }

   printf("%s", s);
   return 0;
}
