#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int	ft_compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

bool	containsDuplicate(int* nums, int numsSize) {
	int	i = 0;

	qsort(nums, numsSize, sizeof(int), ft_compare);
	while (i < numsSize - 1)
	{
		if (nums[i] == nums[i + 1])
			return (true);
		i++;
	}
	return (false);
}

/*
int	main(void)
{
	int	arr[] = {6, 2, 3, 4, 5, 6, 1};
	int dup = containsDuplicate(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d", dup);
	return (0);
}
*/