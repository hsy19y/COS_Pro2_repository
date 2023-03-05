#include <stdio.h>

int main()
{
    char* s1 = "Hello";
	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("%s\n", s1);
	
	return 0;
}
-------------------------------
int main_2()
{
	char* s1 = malloc(sizeof(char) * 10);

	printf("문자열을 입력하시오: ");
	scanf("%s", s1);
	printf("%s\n", s1);
	free(s1);

	return 0;
}
