#include "function.h"
int main()
{
	int select, px, py, bx, by, i, moving;	// px,py 플레이어 좌표 bx, by 이전 좌표
	char move;	// 플레이어 이동 입력 
	int flag, trap, fx[50], fy[50], tx[treasure], ty[treasure];	// fx, fy 깃발 좌표 tx, ty 보물 좌표 
	int score = 0;

	printf("*----------------------*\n");
	printf("| 난이도를 선택하세요  |\n");
	printf("*----------------------*\n");
	printf("\n       1. 초급\n       2. 중급\n       3. 고급\n       4. 설명\n       5. 끝내기 \n");
	scanf("%d", &select);

	if (select == 4)
	{
		level(select);
		printf("*----------------------*\n");
		printf("| 난이도를 선택하세요  |\n");
		printf("*----------------------*\n");
		printf("\n       1. 초급\n       2. 중급\n       3. 고급\n       4. 설명\n       5. 끝내기 \n");
		scanf("%d", &select);
	}
	do {
		system("cls");

		if (select == 1 || select == 2 || select == 3)
		{
			level(select);
			map();
			flags(select, &flag, &trap, &moving);

			for (i = 0; i < trap; i++)
			{// 함정 깃발
				fx[i] = rand() % 47 + 1;
				fy[i] = rand() % 18 + 1;
				gotoxy(fx[i], fy[i]);
				printf(FLAG);
			}
			for (i = trap; i <= (flag - treasure); i++)
			{// 일반 깃발
				fx[i] = rand() % 47 + 1;
				fy[i] = rand() % 18 + 1;
				gotoxy(fx[i], fy[i]);
				printf(FLAG);
			}
			{// 큰 보물 50점
				tx[0] = rand() % 47 + 1;
				ty[0] = rand() % 18 + 1;
				gotoxy(tx[0], ty[0]);
				printf(FLAG);
			}
			for (i = 1; i < 5; i++)
			{// 작은 보물 10점
				tx[i] = rand() % 47 + 1;
				ty[i] = rand() % 18 + 1;
				gotoxy(tx[i], ty[i]);
				printf(TREASURE);
			}

			px = 2; py = 2;
			while (moving > 0)	// 남은 이동 횟수가 0이면 같은 단계 재시작
			{// 사용자 이동
				gotoxy(px, py); printf(PLAYER);
				bx = px; by = py;
				if (_kbhit())
				{
					move = _getch();
					if (move == 224)
						move = _getch();
					switch (move)
					{
					case U:
						if (py > 1)
							py--; gotoxy(bx, by); printf("  "); moving--; break;
					case D:
						if (py < 18)
							py++; gotoxy(bx, by); printf("  "); moving--; break;
					case L:
						if (px > 1)
							px--; gotoxy(bx, by); printf("  "); moving--; break;
					case R:
						if (px < 47)
							px++; gotoxy(bx, by); printf("  "); moving--; break;
					}
					gotoxy(px, py); printf(PLAYER);
				}

				for (i = 1; i <= 5; i++)
				{// 작은 보물 찾았을 때 
					if (px == tx[i] && py == ty[i])
					{
						printf("X");
						px = rand() % 47 + 1;
						py = rand() % 18 + 1;
						gotoxy(px, py);
						score += 10;
					}
				}

				if (px == fx[0] && py == fy[0])
				{// 첫번째 벌칙 - 점수 초기화
					gotoxy(52, 6);
					printf("점수가 초기화 됩니다. \n");
					score = 0;
				}
				if (px == fx[1] && py == fy[1])
				{// 두번째 벌칙 - 게임 일시 정지
					for (i = 5; i > 0; i--)
					{
						gotoxy(52, 6);
						Sleep(1000);
						printf("10초간 게임이 멈춥니다.");
						gotoxy(52, 7);
						printf("남은 시간 : %d 초", i);
					}
				}
				if (px == fx[2] && py == fy[2])
				{// 세번째 벌칙 - 깃발 재배치 
					system("cls");
					map();
					gotoxy(52, 6);
					printf("깃발을 재배치 합니다. \n");
					for (i = 0; i < trap - 3; i++)
					{
						fx[i] = rand() % 47 + 1;
						fy[i] = rand() % 18 + 1;
						gotoxy(fx[i], fy[i]);
						printf(FLAG);
					}
					for (i = trap; i <= (flag - treasure - trap); i++)
					{
						fx[i] = rand() % 47 + 1;
						fy[i] = rand() % 18 + 1;
						gotoxy(fx[i], fy[i]);
						printf(FLAG);
					}
					{
						tx[0] = rand() % 47 + 1;
						ty[0] = rand() % 18 + 1;
						gotoxy(tx[0], ty[0]);
						printf(FLAG);
					}
					for (i = 1; i < 5; i++)
					{
						tx[i] = rand() % 47 + 1;
						ty[i] = rand() % 18 + 1;
						gotoxy(tx[i], ty[i]);
						printf(TREASURE);
					}
				}
				if (trap > 3)
				{
					if (px == fx[3] && py == fx[3])
					{// 네번째 벌칙 - 이동 횟수 - 50
						gotoxy(52, 6);
						printf("이동 횟수가 감소 됩니다. \n");
						moving -= 50;
					}
					if (trap > 4)
					{
						if (px == fx[4] && py == fy[4])
						{// 다섯번째 벌칙 - 작은보물 아이콘 변경
							gotoxy(52, 6);
							printf("작은보물★을 깃발▶로 변경합니다.\n");
							for (i = 1; i < 5; i++)
							{
								gotoxy(tx[i], ty[i]);
								printf("▶");
							}
						}
					}
				}
				if (px == fx[8] && py == fx[8])
				{// 이득 깃발 - 점수 추가
					gotoxy(52, 6);
					printf("좋은 깃발을 찾았습니다! ");
					gotoxy(52, 7);
					printf("점수가 100점 추가됩니다. ");
					gotoxy(52, 8);
					printf("보물섬에 한발짝 더 가까워졌어요! ");
					score += 100;
				}
				if (px == fx[13] && py == fy[13])
				{
					gotoxy(52, 6);
					printf("보물섬은 보물로 가득 차 있대요! ");
				}
				if (px == fx[28] && py == fy[28])
				{
					gotoxy(52, 6);
					printf("제일 좋은 보물은 777점이랍니다. ");
					score += 7;
					printf("보너스 점수 7점 획득!");
				}
				if (px == tx[0] && py == ty[0])
				{// 보물 찾았을 때 
					score += 50;
					system("cls");
					printf("\n\n축하합니다! 보물을 찾았습니다! \n\n현재 점수는 %d 점 입니다. \n\n다음 단계로 이동합니다. \n\n", score);
					Sleep(3000); system("cls");
					select++;
					break;
				}
				gotoxy(52, 2);
				printf("점수 : %d 점", score);
				gotoxy(52, 4);
				printf("남은 이동 횟수 : %d 번", moving);
			}
		}
	} while (select <= 3);

	if (select == 4 && score >= 150)
	{// 보물섬
		printf("\n\n총점이 150점을 넘었습니다. \n\n보물섬으로 떠납니다. \n\n");
		Sleep(2000);
		system("cls");
		map();

		for (i = 0; i < 30; i++)
		{
			fx[i] = rand() % 47 + 1;
			fy[i] = rand() % 18 + 1;
			gotoxy(fx[i], fy[i]);
			printf(TREASURE);
		}
		px = 2; py = 2;
		while (1)
		{// 사용자 이동
			gotoxy(px, py); printf(PLAYER);
			bx = px; by = py;
			if (_kbhit())
			{
				move = _getch();
				if (move == 224)
					move = _getch();
				switch (move)
				{
				case U:
					if (py > 1)
						py--; gotoxy(bx, by); printf("  "); break;
				case D:
					if (py < 18)
						py++; gotoxy(bx, by); printf("  "); break;
				case L:
					if (px > 1)
						px--; gotoxy(bx, by); printf("  "); break;
				case R:
					if (px < 47)
						px++; gotoxy(bx, by); printf("  "); break;
				}
				gotoxy(px, py); printf(PLAYER);
			}
			if (px == fx[0] && py == fy[0])
			{// 첫번째로 출력한 보물 찾으면 끝남
				score = 777;
				system("cls");
				printf("\n\n축하합니다! 최고의 보물을 찾았습니다!\n\n");
				Sleep(3000); system("cls");
				break;
			}
		}
	}
	printf("\n\n모든 단계를 완료했습니다. \n\n종료 점수 %d 점 입니다. \n\n게임을 종료합니다.\n\n", score);

	return 0;
}