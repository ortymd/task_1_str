#include <func.h>
#include <string.h>

void process(char *s1, char *s2)
{
	char *ch = s2;
	char *found = 0;

	while(*ch != '\0')
	{
		if((found = find(ch, s1)))
		{
			strcpy(found, found+1);
		}
		++ch;
	}
}

char* find( char *ch, char *s)
{
	char *found = s;
	while( *found != '\0')
	{
		if(*ch == *found)	
			break;

		++found;
	}

 	return found;
}
