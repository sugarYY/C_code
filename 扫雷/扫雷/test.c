#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*****************************\n");
	printf("*********  1. play  *********\n");
	printf("*********  0. exit  *********\n");
	printf("*****************************\n");
}

//��Ϸ��Ʋ���
void game()
{
	//���� 
	char mine[ROWS][COLS] = { 0 };
	//չʾ
	char show[ROWS][COLS] = { 0 };
	srand((unsigned int)time(NULL));//����������������

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//PrintBoard(mine, ROW, COL);//�����ӡ
	PrintBoard(show, ROW, COL);

	//1.����
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);//test

	//2.ɨ��
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}