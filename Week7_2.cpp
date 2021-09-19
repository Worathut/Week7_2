#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int time, hour, min, sec;
	scanf("%d", &time);
	sec = time % 60;
	min = time / 60;
	hour = min / 60;
	min = min % 60;
	printf("%d:%d:%d", hour, min, sec);
}