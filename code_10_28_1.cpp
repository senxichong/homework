#include<stdio.h>
int main() {
	int c;
	char s[1000];
	int i=0;


	while ((c = getchar()) != EOF) {
		s[i] = c;
		i++;

	}
	s[i] = '\0';
	int j = 0;
	for (j = 0; j < i; j++) {
		if (s[j] == ' ' && s[j + 1] == ' ') {

		}
		else {
			putchar(s[j]);
		}

	}
	return 0;
}