#include <stdio.h>

#define HELLOWORLD "Hello World!\n"

#define avg(a,b) ((float) a + b)/2

#ifdef DEBUG
#define DEBUG_PRINT(...) printf(__VA_ARGS__);
#else
#define DEBUG_PRINT(...) // Nothing to see here folks!
#endif

void main(){
	printf(HELLOWORLD);
	printf("The average of 1 and 2 is %f\n", avg(1,2));
#ifdef DEBUG
	printf("I'm enabled debugging mode!\n");
#else
	printf("Not in debugging mode\n");
#endif
	DEBUG_PRINT("I'm using a variable macro here. %d\n", 2)
}
