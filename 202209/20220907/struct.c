/*�ṹ��*/
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
	struct stu s = { "����",20,130.0,175.0,95.0 };  //�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %.2f %.2f %.2f\n", s.name, s.age, s.height, s.weight, s.scores);//�ṹ�����.��Ա����

	struct stu* p = &s;
	printf("%s %d %.2f %.2f %.2f\n", (*p).name,(*p).age,(*p).height,(*p).weight,(*p).scores);

	printf("%s %d %.2f %.2f %.2f\n", p->name, p->age, p->height, p->weight, p->scores); //�ṹ��ָ��->��Ա������

	return 0;
}