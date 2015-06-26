#include <stdio.h>

int test()
{
	printf("test\n");
	return 0;
}

int main()
{
	int i;
	
	i = test();
	
	if (!i)	
	{
		printf("benar \n");
	}else {
		printf("salah \n");
	}
	return 0;
	
}
