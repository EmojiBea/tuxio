#include <stdlib.h>

void cleanup()
{
	int status = system("xset r rate");
	endwin();
	exit(0);
}
