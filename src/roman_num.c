#include <stdio.h>

#include "roman_num.h"
#include "roman_map.h"

int roman_to_dec(char *roman, int n) {

	if (n == 0) {
		return -1;
	} else if (n == 1) {
		return map(roman[0]);
	}

	int prev = map(roman[0]);
	int curr;
	int res = 0;
	
	for (int i = 1; i < n; i++) {
		curr = map(roman[i]);
		if (prev < curr) {
			res -= prev;
		} else {
			res += prev;
		}

		prev = curr;
	}

	res += prev;

	return res;
}
