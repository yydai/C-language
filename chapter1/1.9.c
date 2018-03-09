#include <stdio.h>

#define MAXLINE 1000

int y_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
	int len;
	int max;
	char line[MAXLINE]; // current input line
	char longest[MAXLINE]; // current longest line

	max = 0;
	while ((len=y_getline(line, MAXLINE)) > 0) {
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int y_getline(char s[], int lim){
	int c, i;

	for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i ++)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		i ++;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i = 0;
	while((to[i] = from[i]) != '\0')
		i ++;
}
