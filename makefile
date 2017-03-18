tuxio: main.c setup.c cleanup.c tuxio.c set_ticker.c movement.c
	gcc -o tuxio main.c setup.c cleanup.c tuxio.c set_ticker.c movement.c gameover.c fireball.c fireball.h icespike.c icespike.h enemy.c highscore.c highscore.h -lcurses -g
