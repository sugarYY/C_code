#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ
//1.�����������һ������
//2.��Ҳ�����

void menu()
{
	printf("********************************\n");
	printf("*********   1.start   **********\n");
	printf("*********   0.exit    **********\n");
	printf("********************************\n");
}
void game()
{
	int guess =0;
	//���������
	int ret = rand()%100+1;
	//������
	
	while (1)
	{
		printf("��������µ����֣�>");
	    scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess == ret)
		{
			printf("�¶���\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				//������
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	}while(input);
	return 0;
}