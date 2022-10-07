#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
/*
int main()
{
	//test1();
	//test2();
	//test3();


	
	int x, y = 6, z = 5;
	x = y == z;
	printf("%d\n", x);

	

	return 0;
}*/

#include <stdio.h>
#include <string.h>
void fun(char* fname, char* st) {
	FILE* myf;
	int i;
	myf = fopen(fname, "w");
	for (i = 0; i < strlen(st); i++) fputc(st[i], myf);
	fclose(myf);
}

int main() {
	fun("test.txt", "new world");
	fun("test.txt", "hello,");
	return 0;
}