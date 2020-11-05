#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

const char* Play (int i)
{
	const char* play[] = { "scissors","hummer","peper" };
	return play[i];
}

int Player(int select)
{
		return select-1;	
}

void select()
{
	struct Select
	{
		int select;
		int again;

	}select;

	srand(time(NULL));

	do
	{
		printf("1.scissors\n2.hummer\n3.peper\n4.exit\nPlease select : ");
		scanf_s("%d", &select.select);

		int com = rand() % 3;

		if (select.select >= 1 && select.select <= 3)
		{
			printf("\nPlayer : %s\tVS\tComputer : %s\n", Play(Player(select.select)), Play(com));

				if (Player(select.select) == 0 && com == 1) printf("You : Loss\n\n");
				if (Player(select.select) == 0 && com == 2)printf("You : Won\n\n");
				if (Player(select.select) == 0 && com == 0)printf("You : Tie\n\n");


				if (Player(select.select) == 1 && com == 1)printf("\nYou : Tie\n\n");
				if (Player(select.select) == 1 && com == 2)printf("\nYou : Loss\n\n");
				if (Player(select.select) == 1 && com == 0)printf("\nYou : Won\n\n");

				if (Player(select.select) == 2 && com == 1)printf("\nYou : Won\n\n");
				if (Player(select.select) == 2 && com == 2)printf("\nYou : Tie\n\n");
				if (Player(select.select) == 2 && com == 0)printf("\nYou : Loss\n\n");
		}

		if (select.select == 4)
		{
			break;
		}

		else
		{
			printf("\nTry again\n1.Yes\n2.No\nPlease select : ");
			scanf_s("%d", &select.again);

			if (select.again != 2 && select.again != 1)
			{
				while (select.again != 1 && select.again != 2)
				{
					printf("\nTry again\n1.Yes\n2.No\nPlease select : ");
					scanf_s("%d", &select.again);

					if (select.again == 2)
					{
						break;
					}
				}
			}

			if (select.again == 2)
			{
				break;
			}
		}

	} while (select.select != 4);
}



void main_2()
{
	select();
}

