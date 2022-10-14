#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define LOW 3
#define COL 3


void Display();
void Game();

//打印棋盘
void Print(char data[LOW][COL],int low, int col);

//初始化数据
void Init(char data[], int low, int col);

//玩家
void Player(char data[LOW][COL], int low, int col);

//电脑
void Computer(char data[LOW][COL], int low, int col);