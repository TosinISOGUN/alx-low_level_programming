#include<stdio.h>
int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

 /* sizeof evaluates the size of a variable */
 	printf("Size of char in %d", (unsigned long) sizeof(c));
	printf("Size of int in %d", (unsigned long) sizeof(d));
	printf("Size of long int in %d", (unsigned long) sizeof(ld));
	printf("Size of long long int in %d", (unsigned long) sizeof(lld));        
        printf("Size of float in %d",(unsigned long) sizeof(f));          

 	return 0;
}	
