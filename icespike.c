#include <curses.h>

struct icespike 
{
		  int x;
		  int y;
};

struct icespike makeiceSpike(int y, int x)
{
	struct icespike icespike;
	move(y-2, x+3);
	addstr("->");
	icespike.y = y-2;
	icespike.x = x+3;
	return icespike;
}

struct icespike moveiceSpike(struct icespike *icespike)
{
	struct icespike spike = *icespike;
	move(spike.y, spike.x);
	addstr("  "); //delete current spike
	move(spike.y, spike.x+1);
   addstr("->"); //draw new spike
	spike.x++;							//update spike pos
	return spike;
}

void deleteSpike(struct icespike *icespike)
{
	struct icespike spike = *icespike;
	move(spike.y, spike.x);
	addstr("  ");
}
