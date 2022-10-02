/*结构体*/
#include<stdio.h>

struct stu
{

	char name[10];
	int age;
	float weight;
	float height;
	float scores;
};
int main()
{
	struct stu s = { "张三",20,130.0,175.0,95.0 };  //结构体的创建和初始化
	printf("%s %d %.2f %.2f %.2f\n", s.name, s.age, s.height, s.weight, s.scores);//结构体变量.成员变量

	struct stu* p = &s;
	printf("%s %d %.2f %.2f %.2f\n", (*p).name,(*p).age,(*p).height,(*p).weight,(*p).scores);

	printf("%s %d %.2f %.2f %.2f\n", p->name, p->age, p->height, p->weight, p->scores); //结构体指针->成员变量名

	return 0;
}