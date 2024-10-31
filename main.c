#include <stdio.h>
#include "libft.h"
/*
int main()
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('9'));
}

int main()
{
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('9'));
}

int main()
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('-'));
}

int main()
{
	printf("%d\n", ft_isascii(35));
	printf("%d\n", ft_isascii(128));
}

int main()
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint(31));
}

int main()
{
	printf("%ld\n", ft_strlen("hilal"));
	printf("%ld\n", ft_strlen(""));
}

int main()
{
	char a[] = "hilalalpagut";

	ft_memset(a, 4, 4);
	printf("%s\n", a);
}
int main()
{
	//int a[3] = {1, -42, 783};
	int a[3] = {1, 456, 783};
	//783 yerine 1071 yaz
	//1 , 456, 1071
	ft_memset(&a[2], 4, 2);
	ft_memset(a, 4, 10);
	ft_memset(a, 47, 9);
	ft_memset(a, 0, 8);
	ft_memset(a, 1, 6);
	ft_memset(a, 200, 5);
	ft_memset(a, 0, 4);
	ft_memset(a, 1, 1);
	ft_memset(a, 255, 8);
	ft_memset(a, 214, 5);
	ft_memset(a, 0, 4);
	ft_memset(a, 1, 1);
	
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
}


int main()
{
	unsigned char a[] = "hilal";
	ft_bzero(&a[1], 4);
	printf("%s", a);
}

int main()
{
	unsigned char s[] = "hilal";
	unsigned char d[] = "alpagut";
	ft_memcpy(d, s, 3);
	printf("%s", d);
	
}
int main()
{
	int s[] = {1,2,3,4,5};
	int d[] = {5,6,7,8};
	ft_memmove(d, s, 16);
	printf("%d", d[0]);
	printf("%d", d[1]);
	printf("%d", d[2]);
	printf("%d", d[3]);
	printf("%d", d[4]);
}
int main()
{
	int s[] = {1,2,3,4,5};
	ft_memcpy(s, s+2, 16);
	printf("%d", s[0]);
	printf("%d", s[1]);
	printf("%d", s[2]);
	printf("%d", s[3]);
	printf("%d", s[4]);
}

int main()
{
	char d[] = "hilal";
	char s[] = "alpagut";
	printf("%zu",ft_strlcpy(d, s, 6));
	printf("%s", d);
}
int main()
{
	char d[] = "hilal";
	char s[] = "alpagut";
	printf("%zu\n", ft_strlcat(d, s, 8));
	printf("%s\n", d);
}
*/

/*
int main()
{
	char **arr = ft_split("Hello!", ' ');
	printf("%s", arr[0]);
}

*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **result;
    char *str = "Hello, world! This is a test.";
    char delimiter = ' ';
    int i;
	result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^",'^');
    if (!result) {
        printf("Error allocating memory.\n");
        return 1;}
        // Print the split results
    for (i = 0; result[i] != NULL; i++) {
        printf("result[%d]: %s\n", i, result[i]);
        free(result[i]);  // Free each allocated substring
    } 
    free(result);  // Free the array of pointer    return 0;
}
*/
/* 
void __attribute__((destructor))on_exit(void)
{
	system("leaks a.out");
}
 */