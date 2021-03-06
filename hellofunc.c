#include <stdio.h>
#include <hello.h>

int findMatch(const char* s1, int len1, const char* s2, int len2) {
	int match = 0, start;
	for (start = 0; start < len1; start++) {
		if (memcmp(&s1[start], s2, sizeof(char)*((len1 - start < len2) ? len1 - start : len2)) == 0) {
			match = 1;
			break;
		}
	}
	return (match) ? start : -1;
}
