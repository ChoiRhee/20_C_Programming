/* 
메뉴에 따라 학생 정보 삽입, 검색 및 리스트 출력 프로그램 작성
1. 학생 등록 - 1명씩, 배열 크기만큼 등록되면 더이상 불가능 출력
2. 학생 검색 - 이름을 통한 검색, 이름 같은 학생 모두 출력, 없으면 해당 학생이 없습니다. 
3. 학생 리스트 출력 - 현재까지 등록된 모든 학생 출력
4. 끝내기 
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
	printf("1. 학생등록 \n2. 학생검색 \n3. 리스트출력 \n4. 끝내기\n");
	printf("********************\n");
	printf("메뉴를 선택하세요: ");
}
void insert_student(struct student stu[], int *count)
{
	int i = *count;

	if (i < 5)
	{
		printf("이름: ");
		gets_s(stu[i].name, 20);
		printf("학번: ");
		scanf("%d", &stu[i].num); getchar();
		printf("전공: ");
		gets_s(stu[i].major, 20);
		i++;
	}
	if (i >= 5)
		printf("더 이상 입력할 수 없습니다. \n");
	*count = i;
}
void search_student(struct student stu[], int count)
{
	int c = 0;	//비교 횟수
	char n[20];		//입력 받은 이름
	
	printf("이름을 입력하세요: ");
	gets_s(n, 20);

	for (int i = 0; i < count; i++)
	{
		if (!strcmp(stu[i].name, n))
		{
			printf("\n%s ( %d ) \n", stu[i].name, stu[i].num);
			printf("전공: %s\n", stu[i].major);
			c++;
		}
		else
			continue;
	}
	if (c == 0)
		printf("해당 학생이 없습니다. \n");
}
void show_list(struct student*stu, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("\n%s ( %d ) \n", stu[i].name, stu[i].num);
		printf("전공: %s\n", stu[i].major);
	}
}