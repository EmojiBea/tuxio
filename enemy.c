#include <stdlib.h>
#include <curses.h>

struct enemy
{
	int x;
	int y;
	int isDead;
};

void drawEnemy(struct enemy enemy)
{
	int x = enemy.x;
	int y = enemy.y;
	move(y, x);
	addstr("|=|");
	move(y-1, x+1);
	addstr("^");
	enemy.isDead = 0;
}

struct enemy makeEnemy()
{
	struct enemy enemy;
	enemy.x = COLS-3;
	enemy.y = rand() % LINES-3;
	drawEnemy(enemy);
	return enemy;
}

void eraseEnemy(struct enemy enemy)
{
	int x = enemy.x;
	int y = enemy.y;
	move(y-1, x);
	addstr("   ");
	move(y, x);
	addstr("   ");
	enemy.isDead = 1;
}

struct enemy moveEnemy(struct enemy *enemyp)
{
	struct enemy enemy= *enemyp;
	eraseEnemy(enemy);
	if(!enemy.isDead)
	{
		enemy.x--;
		if(((rand()%2)%2 == 0) && enemy.y != LINES-3)
			enemy.y++;
		else if(enemy.y != 2)
			enemy.y--;
		drawEnemy(enemy);
		if(enemy.x > 1)
			enemy.isDead = 0;
	}
	return enemy;
}
