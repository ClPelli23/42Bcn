#include <unistd.h>

int	main()
{
	char	str[] = "Hola mundo\n";
	write(1, str, sizeof(str)-1);
	return 0;
}

