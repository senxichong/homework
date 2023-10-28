#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string>
#include<iostream>
void check(char a[], char word[]) {
	int i = 0;
	int j = 0;
	int k = 0;
	int flag = 0;

	while (a[i] != '\0') {//检查是否一致
		if (a[i] == word[j]) {
			j++;
			
			if (word[j] == '\0') {
				flag = 1;
				break;
			}
		}
		else {
			j = 0;
		}
		i++;
	}
	if (flag == 1) {
		printf("存在");
	}
	else {
		printf("不存在");
	}
}
int main() {
	int i = 0;
	char c;
	char a[100];
	char word[100];
	printf("请输入单词：\n");
	scanf("%s", word);
	printf("请输入文本：\n");
	while ((c = getchar()) !=EOF) {
		a[i] = c;
		i++;
		
	}
	a[i] = '\0';
	

	check(a, word);
	getchar();
	return 0;
}