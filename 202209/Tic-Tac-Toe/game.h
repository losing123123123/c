#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define LOW 3
#define COL 3


void Display();
void Game();

//��ӡ����
void Print(char data[LOW][COL],int low, int col);

//��ʼ������
void Init(char data[], int low, int col);

//���
void Player(char data[LOW][COL], int low, int col);

//����
void Computer(char data[LOW][COL], int low, int col);