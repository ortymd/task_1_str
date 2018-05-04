#include <stdio.h>
#include <func.h>

int main(int argc, char **argv)
{
	if(argc < 3)
	{
		printf("Usage:\n main str1 str2");
		return 1;
	}

	char *s1 = argv[0];
	char *s2 = argv[1];

	process(s1,s2);	// delete from s1 all symbols that are in s2

	return 0;
}

