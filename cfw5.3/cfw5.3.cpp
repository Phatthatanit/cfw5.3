#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char a[100];
int i, x, c, b;
void numi() {
	for (c = 1; c <= i; c++) {
		for (b = 1; b <= c; b++) {
			printf("%d ", b);
		}
		printf("\n");
	}

}
void numx() {
	for (c = 1; c <= x; c++) {
		for (b = 1; b <= c; b++) {
			printf("%d ", b);
		}
		printf("\n");
	}

}

void name() {
	printf("Enter your nickname1 : ");
	scanf("%s", &a);
	for (i = 1; a[i] != '\0'; i++) {
	}
	printf("Enter your nickname2 : ");
	scanf("%s", &a);
	for (x = 1; a[x] != '\0'; x++) {
	}
	if (x == i) {
		printf("nickname1 = nickname2");
	}
	else if (x > i) {
		printf("nickname2 > nickname1\n");
		numx();
	}
	else if (x < i) {
		printf("nickname1 > nickname2\n");
		numi();
	}
} 

int main() {
	name();
	return 0;
}
