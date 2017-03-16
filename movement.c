#include <curses.h>

int right(int y, int x)
{
	if(x < COLS - 3)
	{
	eraseTBig(y, x);
	drawTBig(y, x+1);
	x++;
	}
	return x;

}

int left(int y, int x)
{
	if(x > 0)
	{
	eraseTBig(y, x);
	drawTBig(y, x-1);
	x--;
	}
	return x;
}

int up(int y, int x)
{
	if(y > 4)
	{
	eraseTBig(y, x);
	drawTBig(y-1, x);
	y--;
	}
	return y;
}

int down(int y, int x)
{
	if(y < 46)
	{
	eraseTBig(y, x);
	drawTBig(y+1, x);
	y++;
	}	
	return y;
}
