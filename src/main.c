#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "roman_num.h"

int main(int argc, char **argv) {
	
	if (argc < 2) {
		printf("Input value...\n");
		return 1;
	}

	char *roman = argv[1];
	int n = strlen(roman);

	int result = roman_to_dec(roman, n);

	printf("%d\n", result);

	return 0;
}
