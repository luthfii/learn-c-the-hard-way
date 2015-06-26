#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	if(argc == 1)
	{
		printf("YOu only have one argument. you sucked \n");
	} else if (argc > 1 && argc < 4)
		{
			printf("Here is your arguments : \n");
			for (i = 0; i < argc; i++)
			{
				printf("%s \n",argv[i]);
			}
		} else {
			printf("You have too many arguments. you sucked \n");
		}
		
	return 0;
}
