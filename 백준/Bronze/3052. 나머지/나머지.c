#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int ary[10];
	int a, flag;
	int num = 0;
	
	for (int i = 0; i < 10; i++)
	{
		flag = 0;
		scanf("%d", &a);
		ary[i] = a % 42;

		for (int j = 0; j <= i; j++)
		{
			if (i != j)
			{
				//printf("ary i : %d\n", ary[i]);
				//printf("ary j : %d\n", ary[j]);
				if (ary[i] != ary[j])
				{
					flag = 1;
					//printf("flag : 1\n");
				}
				else
				{
					flag = 0;
					//printf("flag : 1\n");
					break;
				}
			}
		}
		if (flag == 1) {
			num++;
			//printf("num++\n");
		}
	}
	printf("%d", num + 1);



	return 0;
}