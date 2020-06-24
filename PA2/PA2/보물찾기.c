#include "function.h"
int main()
{
	int select, px, py, bx, by, i, moving;	// px,py �÷��̾� ��ǥ bx, by ���� ��ǥ
	char move;	// �÷��̾� �̵� �Է� 
	int flag, trap, fx[50], fy[50], tx[treasure], ty[treasure];	// fx, fy ��� ��ǥ tx, ty ���� ��ǥ 
	int score = 0;

	printf("*----------------------*\n");
	printf("| ���̵��� �����ϼ���  |\n");
	printf("*----------------------*\n");
	printf("\n       1. �ʱ�\n       2. �߱�\n       3. ���\n       4. ����\n       5. ������ \n");
	scanf("%d", &select);

	if (select == 4)
	{
		level(select);
		printf("*----------------------*\n");
		printf("| ���̵��� �����ϼ���  |\n");
		printf("*----------------------*\n");
		printf("\n       1. �ʱ�\n       2. �߱�\n       3. ���\n       4. ����\n       5. ������ \n");
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
			{// ���� ���
				fx[i] = rand() % 47 + 1;
				fy[i] = rand() % 18 + 1;
				gotoxy(fx[i], fy[i]);
				printf(FLAG);
			}
			for (i = trap; i <= (flag - treasure); i++)
			{// �Ϲ� ���
				fx[i] = rand() % 47 + 1;
				fy[i] = rand() % 18 + 1;
				gotoxy(fx[i], fy[i]);
				printf(FLAG);
			}
			{// ū ���� 50��
				tx[0] = rand() % 47 + 1;
				ty[0] = rand() % 18 + 1;
				gotoxy(tx[0], ty[0]);
				printf(FLAG);
			}
			for (i = 1; i < 5; i++)
			{// ���� ���� 10��
				tx[i] = rand() % 47 + 1;
				ty[i] = rand() % 18 + 1;
				gotoxy(tx[i], ty[i]);
				printf(TREASURE);
			}

			px = 2; py = 2;
			while (moving > 0)	// ���� �̵� Ƚ���� 0�̸� ���� �ܰ� �����
			{// ����� �̵�
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
				{// ���� ���� ã���� �� 
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
				{// ù��° ��Ģ - ���� �ʱ�ȭ
					gotoxy(52, 6);
					printf("������ �ʱ�ȭ �˴ϴ�. \n");
					score = 0;
				}
				if (px == fx[1] && py == fy[1])
				{// �ι�° ��Ģ - ���� �Ͻ� ����
					for (i = 5; i > 0; i--)
					{
						gotoxy(52, 6);
						Sleep(1000);
						printf("10�ʰ� ������ ����ϴ�.");
						gotoxy(52, 7);
						printf("���� �ð� : %d ��", i);
					}
				}
				if (px == fx[2] && py == fy[2])
				{// ����° ��Ģ - ��� ���ġ 
					system("cls");
					map();
					gotoxy(52, 6);
					printf("����� ���ġ �մϴ�. \n");
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
					{// �׹�° ��Ģ - �̵� Ƚ�� - 50
						gotoxy(52, 6);
						printf("�̵� Ƚ���� ���� �˴ϴ�. \n");
						moving -= 50;
					}
					if (trap > 4)
					{
						if (px == fx[4] && py == fy[4])
						{// �ټ���° ��Ģ - �������� ������ ����
							gotoxy(52, 6);
							printf("������������ ��ߢ��� �����մϴ�.\n");
							for (i = 1; i < 5; i++)
							{
								gotoxy(tx[i], ty[i]);
								printf("��");
							}
						}
					}
				}
				if (px == fx[8] && py == fx[8])
				{// �̵� ��� - ���� �߰�
					gotoxy(52, 6);
					printf("���� ����� ã�ҽ��ϴ�! ");
					gotoxy(52, 7);
					printf("������ 100�� �߰��˴ϴ�. ");
					gotoxy(52, 8);
					printf("�������� �ѹ�¦ �� ����������! ");
					score += 100;
				}
				if (px == fx[13] && py == fy[13])
				{
					gotoxy(52, 6);
					printf("�������� ������ ���� �� �ִ��! ");
				}
				if (px == fx[28] && py == fy[28])
				{
					gotoxy(52, 6);
					printf("���� ���� ������ 777���̶��ϴ�. ");
					score += 7;
					printf("���ʽ� ���� 7�� ȹ��!");
				}
				if (px == tx[0] && py == ty[0])
				{// ���� ã���� �� 
					score += 50;
					system("cls");
					printf("\n\n�����մϴ�! ������ ã�ҽ��ϴ�! \n\n���� ������ %d �� �Դϴ�. \n\n���� �ܰ�� �̵��մϴ�. \n\n", score);
					Sleep(3000); system("cls");
					select++;
					break;
				}
				gotoxy(52, 2);
				printf("���� : %d ��", score);
				gotoxy(52, 4);
				printf("���� �̵� Ƚ�� : %d ��", moving);
			}
		}
	} while (select <= 3);

	if (select == 4 && score >= 150)
	{// ������
		printf("\n\n������ 150���� �Ѿ����ϴ�. \n\n���������� �����ϴ�. \n\n");
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
		{// ����� �̵�
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
			{// ù��°�� ����� ���� ã���� ����
				score = 777;
				system("cls");
				printf("\n\n�����մϴ�! �ְ��� ������ ã�ҽ��ϴ�!\n\n");
				Sleep(3000); system("cls");
				break;
			}
		}
	}
	printf("\n\n��� �ܰ踦 �Ϸ��߽��ϴ�. \n\n���� ���� %d �� �Դϴ�. \n\n������ �����մϴ�.\n\n", score);

	return 0;
}