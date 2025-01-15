#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar()
{
	char a;

	/* seed the randomizer */
	srand((unsigned)time(NULL));
	int r = rand() % 26 + 65;
	return (char)r;
}
