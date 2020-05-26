#include <iostream>
using namespace std;

void show(int[]);

int main()
{
	int nums[] =  {9, 6, 2, 7, 1, 8, 6, 3, 0};
	for (int i = 0; i < 9; ++i)
	{
		for (int j = i + 1; j < 9; ++j)
		{
			if (nums[i] > nums[j])
			{
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}
	show(nums);
	system("pause");
}

void show(int nums[])
{
	for (int i = 0; i < 9; ++i)
	{
		cout << nums[i] << '\t';
	}
}