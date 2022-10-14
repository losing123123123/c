#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define mine_count 10

#define ROWS ROW+2
#define COLS COL+2

void Game();

void Display();

void Init(char data[ROWS][COLS], int rows, int cols , char symbol);

void Print(char data[ROWS][COLS], int row, int col);

void Setmine(char mine[ROWS][COLS],int row,int col);

void Findmine(char mine[ROWS][COLS], char data[ROWS][COLS],int row, int col);