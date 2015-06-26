#include <stdio.h>

int main(int argc, char *argv[])
{
	
	// go through each string in argv
	int i = 0; 
	while(i < argc)
	{
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}
	
	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas", NULL
	};
	
	int num_states = 4;
	
	for (i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	
			}
	return 0;

}
