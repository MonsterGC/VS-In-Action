#include <iostream>
using namespace std;

void swap(int[], int, int);
void show(int[]);

int main()
{
	int nums[10], num = 0;
	while (num < 10)
	{
		int tmp;
		cin >> tmp;
		nums[num] = tmp;
		++num;
	}

	// 选择排序
	for (int i = 0; i < 9; ++i)
	{
		int tmp = i;
		for (int j = i + 1; j < 10; ++j)
		{
			if (nums[j] < nums[tmp])
			{
				tmp = j;
			}
		}
		swap(nums, i, tmp);
	}

	show(nums);
	system("pause");
}
void swap(int nums[], int x, int y)
{
	int tmp = nums[x];
	nums[x] = nums[y];
	nums[y] = tmp;
}
void show(int nums[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << nums[i] << '\t';
	}
}