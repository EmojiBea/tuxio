#include <curses.h>

void drawTBig(int y, int x)
{
	move(y, x);
	addstr("//");
	move(y-1, x);
	addstr(" |");
	move(y-2, x);
	addstr("/T\\");
	move(y-3, x);
	addstr(" O");
}

void eraseTBig(int y, int x)
{
	move(y, x);
	addstr("   ");
	move(y-1, x);
	addstr("   ");
	move(y-2, x);
	addstr("   ");
	move(y-3, x);
	addstr("   ");
}
