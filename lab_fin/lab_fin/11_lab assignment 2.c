/* 
�޴��� ���� �л� ���� ����, �˻� �� ����Ʈ ��� ���α׷� �ۼ�
1. �л� ��� - 1��, �迭 ũ�⸸ŭ ��ϵǸ� ���̻� �Ұ��� ���
2. �л� �˻� - �̸��� ���� �˻�, �̸� ���� �л� ��� ���, ������ �ش� �л��� �����ϴ�. 
3. �л� ����Ʈ ��� - ������� ��ϵ� ��� �л� ���
4. ������ 
*/
#include <stdio.h>
#include <stdlib.h>
void show_menu();
void insert_student(struct student*, int*);
void search_student(struct student*, int);
void show_list(struct student*, int);
struct student {
	char name[20];
	int num;
	char major[20];
};
int main()
{
	struct student stu[5];
	int count = 0, select;

	while (1)
	{
		show_menu();
		scanf("%d", &select);
		getchar();

		if (select == 4)
			break;
		switch (select)
		{
		case 1:
			insert_student(&stu, &count); break;
		case 2: 
			search_student(&stu, count); break;
		case 3: 
			show_list(&stu, count); break;
		}
	}
	return 0;
}
void show_menu()
{
	printf("********************\n");
	printf("1. �л���� \n2. �л��˻� \n3. ����Ʈ��� \n4. ������\n");
	printf("********************\n");
	printf("�޴��� �����ϼ���: ");
}
void insert_student(struct student stu[], int *count)
{
	int i = *count;

	if (i < 5)
	{
		printf("�̸�: ");
		gets_s(stu[i].name, 20);
		printf("�й�: ");
		scanf("%d", &stu[i].num); getchar();
		printf("����: ");
		gets_s(stu[i].major, 20);
		i++;
	}
	if (i >= 5)
		printf("�� �̻� �Է��� �� �����ϴ�. \n");
	*count = i;
}
void search_student(struct student stu[], int count)
{
	int c = 0;	//�� Ƚ��
	char n[20];		//�Է� ���� �̸�
	
	printf("�̸��� �Է��ϼ���: ");
	gets_s(n, 20);

	for (int i = 0; i < count; i++)
	{
		if (!strcmp(stu[i].name, n))
		{
			printf("\n%s ( %d ) \n", stu[i].name, stu[i].num);
			printf("����: %s\n", stu[i].major);
			c++;
		}
		else
			continue;
	}
	if (c == 0)
		printf("�ش� �л��� �����ϴ�. \n");
}
void show_list(struct student*stu, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("\n%s ( %d ) \n", stu[i].name, stu[i].num);
		printf("����: %s\n", stu[i].major);
	}
}