#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int cp = 0;
	//��Ʊ
	int dn = 0;
	//��ţ
	while (cp == 0 && dn == 0)
	{
		printf("���Ʊ\n");
		//�ж��Ƿ��в�Ʊ
		printf("�Ƿ��в�Ʊ(1/0)\n");
		scanf("%d", &cp);
		if (cp == 1)
		{
			break;
		}
		else
		{
			printf("��ʵѧϰ\n");
			//�ж��Ƿ��Ϊ��ţ
			printf("�Ƿ��Ϊ��ţ(1/0)\n");
			scanf("%d", &dn);
			if (dn == 1)
			{
				break;
			}
		}
	}
	if (cp == 1 || dn == 1)
	{
		printf("Ӯȡ�׸���\n");
	}
	return 0;
}