#include<pwd.h>
#include <sys/types.h>
#include<stdio.h>
#include<stdlib.h>

int userName(void)
{
	struct passwd *pw;
	char *user = NULL;
	pw = getpwuid(geteuid());
	if(pw)
		user = pw->pw_name;
	else if((user = getenv("USER")) == NULL)
	{
		fprintf(stderr, "I don't know!\n");
		return 1;
	}
	printf("%s\n", user);
	return 0;
}
int main(int argc, char **argv)
{
	if(argc > 1)
	{
		fprintf(stderr, "Usage: whoami\n");
		return 1;
	}
	return userName();
}
