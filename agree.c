#include <stdio.h>

int main() {
	char c;
	printf("Are you agree? ");
	scanf("%c", &c);
	if (c == 'y' || c == 'Y') {
		printf("Agreed.\n");
	} else if (c == 'n' || c == 'N') {
		printf("Disagreed.\n");
	}

	return 0;
}

