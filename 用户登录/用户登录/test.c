#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����)

int main()
{
	char passw[] = "12345";
	char test[20] = "0";
	int count = 0;//������¼��¼����
	
	while (count < 3)
	{
		printf("����������->");
		scanf("%s", &test);
		if (strcmp(passw, test) == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
			count++;
		}
		
	}
	if (3 == count)
	{
		printf("�˳�����\n");
	}
	return 0;
}