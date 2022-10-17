#define _CRT_SECURE_NO_WARNINGS

int my_strcmp(char* p1, char* p2)
{
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	return *p1 - *p2;
}