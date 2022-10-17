#define _CRT_SECURE_NO_WARNINGS

char* my_strcat(char *p1,char *p2)
{
	char* ret = p1;
	while (*p1)
	{
		p1++;
	}
	while (*p1++ = *p2++);
	return ret;
}