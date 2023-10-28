#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

	int c;
	int i=0;
	char s[1000];

	while ((c = getchar()) != EOF) {

		s[i] = c;
        i++;
		

	}
	s[i] = '\0';
     printf("%d\n",strlen(s));
	 i--;

	while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')) {
		s[i] = '\0';
		i--;
		if(s[i]!=' '&&s[i]!='\t'&&s[i]!='\n')break;
	}
	printf("%d\n",strlen(s));

	printf("%s", s);
	return 0;

}


