#include <unistd.h>

int main(void)
{
	write (1, "aBcDeFgHiJkLmNoPqRsTuWxYz\n", 27);
	return 0;
}
