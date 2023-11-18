#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
	srand(time(NULL));
	int i;
	for (i = 0;i < 35;i++)
	{
		printf("--");
	}
	printf("\n");
	printf("| MARRY |");
	int sum = 0;
	int getScoreM1, getScoreM2;
	int scoreMarry[22];
	int j = 0;
	for (i = 0;i < SIZE - 1;i++)
	{
		getScoreM1 = rand() % (11 + 0);
		scoreMarry[j] = getScoreM1;
		j++;
		if (getScoreM1 == 10)
		{
			printf("X    |");
			scoreMarry[j] = 0;
			j++;
		}
		else
		{
			printf("%d ", getScoreM1);
		}
		int upperM = 11 - getScoreM1;
		if (getScoreM1 < 10)
		{
			getScoreM2 = rand() % (upperM)+0;
			scoreMarry[j] = getScoreM2;
			j++;
			if (getScoreM1 + getScoreM2 == 10 || getScoreM2 == 10)
			{
				printf("/  |");
			}
			else
			{
				printf("%d  |", getScoreM2);
			}
		}
	}
	int getScoreM3;
	getScoreM1 = rand() % (11 + 0);
	scoreMarry[j] = getScoreM1;
	j++;
	int upperM = 11 - getScoreM1;
	if (getScoreM1 == 10)
	{
		printf("X ");
		getScoreM2 = rand() % (11 + 0);
		scoreMarry[j] = getScoreM2;
		j++;
		if (getScoreM2 == 10)
		{
			printf("X ");
			getScoreM3 = rand() % (11 + 0);
			scoreMarry[j] = getScoreM3;
			j++;
			if (getScoreM3 == 10)
			{
				printf("X |");
			}
			else
			{
				printf("%d   |", getScoreM3);
			}
		}
		else
		{
			printf("%d ", getScoreM2);
			int upperM2 = 11 - getScoreM2;
			getScoreM3 = rand() % (upperM2);
			scoreMarry[j] = getScoreM3;
			j++;
			if (getScoreM2 + getScoreM3 == 10)
			{
				printf("/ |");
			}
			else
			{
				printf("%d |", getScoreM3);
			}
		}
	}
	else
	{
		printf("%d ", getScoreM1);
	}
	if (getScoreM1 < 10)
	{
		getScoreM2 = rand() % (upperM)+0;
		scoreMarry[j] = getScoreM2;
		j++;
		if (getScoreM1 + getScoreM2 == 10 || getScoreM2 == 10)
		{
			printf("/ ");
			getScoreM3 = rand() % (11 + 0);
			scoreMarry[j] = getScoreM3;
			j++;
			if (getScoreM3 == 10)
			{
				printf("X |");
			}
			else
			{
				printf("%d |", getScoreM3);
			}
		}
		else
		{
			printf("%d   |", getScoreM2);
		}
	}
	printf("\n");
	for (i = 0;i < 35;i++)
	{
		printf("--");
	}
	printf("\n");
	//scoreMarry
	printf("|       |");
	for (i = 0;i < 18;i++)
	{
		sum += scoreMarry[i];
		if (scoreMarry[i] == 0 && scoreMarry[i + 1] == 10)//spare
		{
			sum = sum + scoreMarry[i + 2];
		}
		else if (scoreMarry[i] == 10 && scoreMarry[i + 2] == 10)
		{
			sum = sum + scoreMarry[i + 2] + scoreMarry[i + 4];
		}
		else if (scoreMarry[i] == 10 && scoreMarry[i - 1] != 0)//strike
		{
			sum = sum + scoreMarry[i + 2] + scoreMarry[i + 3];
		}
		else if (scoreMarry[i] + scoreMarry[i + 1] == 10)//spare
		{
			sum = sum + scoreMarry[i + 2];
		}
		if (i % 2 != 0)
		{
			if (sum < 10)
			{
				printf("%d    |", sum);
			}
			else if (sum >= 100)
			{
				printf("%d  |", sum);
			}
			else
			{
				printf("%d   |", sum);
			}
		}
	}
	if (scoreMarry[18] == 10 || scoreMarry[18] + scoreMarry[19] == 10)
	{
		sum = sum + scoreMarry[18] + scoreMarry[19] + scoreMarry[20];
	}
	else
	{
		sum = sum + scoreMarry[18] + scoreMarry[19];
	}
	if (sum < 10)
	{
		printf("%d    |", sum);
	}
	else if (sum >= 100)
	{
		printf("%d   |", sum);
	}
	else
	{
		printf("%d    |", sum);
	}
	printf("\n");
	//harry
	for (i = 0;i < 35;i++)
	{
		printf("--");
	}
	printf("\n");
	printf("| HARRY |");
	int getScoreH1, getScoreH2;
	int scoreHarry[22];
	int sum1 = 0;
	j = 0;
	for (i = 0;i < SIZE - 1;i++)
	{
		getScoreH1 = rand() % (11 + 0);
		scoreHarry[j] = getScoreH1;
		j++;
		if (getScoreH1 == 10)
		{
			printf("X    |");
			scoreHarry[j] = 0;
			j++;
		}
		else
		{
			printf("%d ", getScoreH1);
		}
		int upperH = 11 - getScoreH1;
		if (getScoreH1 < 10)
		{
			getScoreH2 = rand() % (upperH)+0;
			scoreHarry[j] = getScoreH2;
			j++;
			if (getScoreH1 + getScoreH2 == 10 || getScoreH2 == 10)
			{
				printf("/  |");
			}
			else
			{
				printf("%d  |", getScoreH2);
			}
		}
	}
	int getScoreH3;
	getScoreH1 = rand() % (11 + 0);
	scoreHarry[j] = getScoreH1;
	j++;
	int upperH = 11 - getScoreH1;
	if (getScoreH1 == 10)
	{
		printf("X ");
		getScoreH2 = rand() % (11 + 0);
		scoreHarry[j] = getScoreH2;
		j++;
		if (getScoreH2 == 10)
		{
			printf("X ");
			getScoreH3 = rand() % (11 + 0);
			scoreHarry[j] = getScoreH3;
			j++;
			if (getScoreH3 == 10)
			{
				printf("X |");
			}
			else
			{
				printf("%d   |", getScoreH3);
			}
		}
		else
		{
			printf("%d ", getScoreH2);
			int upperH2 = 11 - getScoreH2;
			getScoreH3 = rand() % (upperH2);
			scoreHarry[j] = getScoreH3;
			j++;
			if (getScoreH2 + getScoreH3 == 10)
			{
				printf("/ |");
			}
			else
			{
				printf("%d |", getScoreH3);
			}
		}
	}
	else
	{
		printf("%d ", getScoreH1);
	}
	if (getScoreH1 < 10)
	{
		getScoreH2 = rand() % (upperH)+0;
		scoreHarry[j] = getScoreH2;
		j++;
		if (getScoreH1 + getScoreH2 == 10 || getScoreH2 == 10)
		{
			printf("/ ");
			getScoreH3 = rand() % (11 + 0);
			scoreHarry[j] = getScoreH3;
			j++;
			if (getScoreH3 == 10)
			{
				printf("X |");
			}
			else
			{
				printf("%d |", getScoreH3);
			}
		}
		else
		{
			printf("%d   |", getScoreH2);
		}
	}
	printf("\n");
	for (i = 0;i < 35;i++)
	{
		printf("--");
	}
	printf("\n");
	printf("|       |");
	for (i = 0;i < 18;i++)
	{
		sum1 += scoreHarry[i];
		if (scoreHarry[i] == 0 && scoreHarry[i + 1] == 10)//spare
		{
			sum1 = sum1 + scoreHarry[i + 2];
		}
		else if (scoreHarry[i] == 10 && scoreHarry[i + 2] == 10)
		{
			sum1 = sum1 + scoreHarry[i + 2] + scoreHarry[i + 4];
		}
		else if (scoreHarry[i] == 10 && scoreHarry[i - 1] != 0)//strike
		{
			sum1 = sum1 + scoreHarry[i + 2] + scoreHarry[i + 3];
		}
		else if (scoreHarry[i] + scoreHarry[i + 1] == 10)//spare
		{
			sum1 = sum1 + scoreHarry[i + 2];
		}
		if (i % 2 != 0)
		{
			if (sum1 < 10)
			{
				printf("%d    |", sum1);
			}
			else if (sum1 >= 100)
			{
				printf("%d  |", sum1);
			}
			else
			{
				printf("%d   |", sum1);
			}
		}
	}
	if (scoreHarry[18] == 10 || scoreHarry[18] + scoreHarry[19] == 10)
	{
		sum1 = sum1 + scoreHarry[18] + scoreHarry[19] + scoreHarry[20];
	}
	else
	{
		sum1 = sum1 + scoreHarry[18] + scoreHarry[19];
	}
	if (sum1 < 10)
	{
		printf("%d    |", sum1);
	}
	else if (sum1 >= 100)
	{
		printf("%d   |", sum1);
	}
	else
	{
		printf("%d    |", sum1);
	}
	printf("\n");

	return 0;
}