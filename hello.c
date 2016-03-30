#include <hello.h>
#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "a te";
	char s2[] = " test";

	int i = findMatch(s1, (int)strlen(s1), s2, (int)strlen(s2));
	printf("Match was found at position %d\n", i);

	return 0;
}


