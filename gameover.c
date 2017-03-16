#include <curses.h>
#include <unistd.h>

int sleeptime = 1000000;

void gameover()
{
	move((LINES/2) - 2, (COLS/2)-5);
	addstr("*************");
	refresh();
	usleep(sleeptime);
	move((LINES/2)-1, (COLS/2)-5);
	addstr("*           *");
	refresh();
	usleep(sleeptime);
	move((LINES/2), (COLS/2) - 5);
	addstr("* GAME OVER *");
	refresh();
	usleep(sleeptime);
	move((LINES/2)+1, (COLS/2)-5);
	addstr("*           *");
	refresh();
	usleep(sleeptime);
	move((LINES/2)+2, (COLS/2)-5);
	addstr("*************");
	move(LINES+1, COLS+1);
	refresh();
	int i;
	for(i = 0; i < 100; i++)
		pause();
}
