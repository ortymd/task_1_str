#include <func.h>
#include <stdio.h>
#include <string.h>

void test1()
{
	printf("test1\n");
	char *s1 = "ab";
	char *s2 = "b";

	process (s1, s2);
	if (strcmp(s1,"a") != 0)
	{
		printf ("FAILED\n");
	}
	else
	{
		printf ("SUCCESS\n");
	}
}

int main()
{
	test1();
	return 0;
}
