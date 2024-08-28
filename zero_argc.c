#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)

{
	int n;

	printf("argv is argv[]\n");
	
	while (*av != NULL)
	{
		printf("argv = %s\n", *av);
		av++;
	}
	return (0);

}
