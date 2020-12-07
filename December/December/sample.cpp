#include <stdio.h>

int main5() {
	char names[][5] = { "aa","bb","cccc","dd" };

	printf("%d\n", &names[3]);
	printf("%d\n", &names[3][0]);

	printf("%s\n", names[3]);
//	printf("%s", names[3][0]); (°á°ú¾È¶ä)

	printf("%c\n", names[3]);
	printf("%c\n", names[3][0]);

	return 0;
}