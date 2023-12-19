#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool isAnagram(char* s, char* t) {
    int	hash[26] = {0};
	int	i = 0;
	while (s[i] && t[i])
	{
		hash[s[i] - 'a']++;
		hash[t[i] - 'a']--;
		i++;
	}
	if (s[i] != 0 || t[i] != 0)
		return (0);
	i = 0;
	while (i < 26)
	{
		if (hash[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", isAnagram("anagram", "nagram"));
	return (0);
}
*/