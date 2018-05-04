#include <func.h>
#include <string.h>

void process(char *s1, char *s2)
{
	char *ch = s2;

	while(*ch != '\0')
	{
		rm_from_str(ch, s1);
		++ch;
	}
}

void rm_from_str( char *ch, char *s)
{
	char *found = s;
	while( *found != '\0')
	{
		if(*ch == *found)	
		{
			strcpy(found,found+1);
		}
		else
		{
			++ch;
		}
		++found;
	}
}
