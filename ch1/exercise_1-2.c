#include <stdio.h>

int main()
{
	// This will give out a warning message.
	// But it will be compiled without errors.
	// It will print out "hello,c world".
	printf("hello,\c world\n");  
}
