struct enemy
{
	int x;
	int y;
	int isDead;
};

struct enemy makeEnemy();

void drawEnemy(struct enemy enemy);

void eraseEnemy(struct enemy enemy);

struct enemy moveEnemy(struct enemy *enemyp);
