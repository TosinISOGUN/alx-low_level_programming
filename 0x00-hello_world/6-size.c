#include <stdio.h>

int main(void)
{
char c;
int d;
long int ld;
long long int lld;
float f;
printf("Size of char in %d\n", (unsigned long)sizeof(c));
printf("Size of int in %d\n", (unsigned long)sizeof(d));
printf("Size of long int in %d\n", (unsigned long)sizeof(ld));
printf("Size of long long int in %d\n", (unsigned long)sizeof(lld));
printf("Size of float in %d\n", (unsigned long) sizeof(f));          

return (0);
}	
