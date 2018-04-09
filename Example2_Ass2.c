#include<stdio.h>
int main(int argc, char*argv[], char*env[])
{
	char c1 = 'S';
	char c2 = 'a';
	char c3 = 'm';
	char c4 = 'a';
	char c5 = 'n';
	char c6 = 't';
	char c7 = 'h';
	char c8 = 'a';
	char name[9] = "";
	sprintf(name, "%c%c%c%c%c%c%c%c",c1,c2,c3,c4,c5,c6,c7,c8);
	printf("%s\n",name);
	return 0;
}

