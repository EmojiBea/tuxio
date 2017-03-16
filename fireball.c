#include <curses.h>

struct fireball
{
		  int x;
		  int y;
};

struct fireball makeFireball(int y, int x)
{
	struct fireball fireball;
	move(y-2, x+3);
	addch('*');
	fireball.y = y-2;
	fireball.x = x+3;
	return fireball;
}

struct fireball moveFireball(struct fireball *fireball)
{
	struct fireball ball = *fireball;
	mvaddch(ball.y, ball.x, ' '); //delete current fireball
	mvaddch(ball.y, ball.x+1, '*'); //draw new fireball
	ball.x++;							//update fireball pos
	return ball;
}


