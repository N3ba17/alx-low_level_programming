#include"main.h"
/**
 * leet - elite level encryption
 * @v: value passed from user
 * Return: none
 */

char *leet(char *v)
{
	int l = 0;
	int x;
	int y;

	int va[10] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char arr[5] = {'4', '3', '0', '7', '1'};

	while (v[l] != '\0')
	{
		for (x = 0; x < 10; x++)
		{
			y = (x / 2);
			if (v[l] == va[x])
			{
				v[l] = arr[y];
			}
		}
		l++;
	}
	return (v);
}
