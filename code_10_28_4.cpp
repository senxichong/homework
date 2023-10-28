#include<stdio.h>
int main() {
	char s[1000];
	int i = 0;
	int c;
	while ((c=getchar())!=EOF)
	{
		s[i] = c;
		i++;
	}
	int j = 0;
	for (j=0;j<=i; j++) {
		printf("%c", s[i - j]);
	}
	return 0;

}