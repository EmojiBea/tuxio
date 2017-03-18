#include <stdio.h>
#include <stdlib.h>

int hiscore(int score)
{
	FILE *file = fopen("hiscore", "r");
	int length;
	char *buffer = 0;
	int hscore = 0;
	char scorestr[3];
	
	fseek(file, 0, SEEK_END);
	length = ftell(file);
	fseek(file, 0, SEEK_SET);
	buffer = malloc(length);
	if(buffer)
		fread(buffer, 1, length, file);
	fclose(file);
	
	if(buffer)
		hscore = atoi(buffer);
	
	if(score > hscore)
	{
		hscore = score;
		file = fopen("hiscore", "w+");
		sprintf(scorestr, "%d", hscore);
		fputs(scorestr, file);
		fclose(file);
	}
	return hscore;
}
