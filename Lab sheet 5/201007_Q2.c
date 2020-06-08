//201007
//Question 02

#include <stdio.h>

void add(int m1[3][3], int m2[3][3]){
	printf("--------------\n");
	printf("Addition: \n");
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("%3d", m1[i][j] + m2[i][j]);
		}
		printf("\n");
	}
} 

void subs(int m1[3][3], int m2[3][3]){
	printf("--------------\n");
	printf("Substraction: \n");
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("%3d", m1[i][j] - m2[i][j]);
		}
		printf("\n");
	}
}

void mul(int m1[3][3], int m2[3][3]){
	printf("--------------\n");
	printf("Multiplication: \n");
	for (int l = 0; l < 3; ++l){
		for (int i = 0; i < 3; ++i){
			int s = 0;
			for (int j = 0; j < 3; ++j){
				s += m1[l][j] * m2[j][i];
			}
			printf("%4d ", s);
		}
		printf("\n");
	}
}

int main(){
	int m1[3][3] = {
		{3, 5, 7},
		{1, 6, 5},
		{4, 9, 8}
	};
	int m2[3][3] = {
		{6, 0, 2},
		{4, 7, 1},
		{7, 2, 1}
	};

	add(m1, m2);
	subs(m1, m2);
	mul(m1, m2);

	return 0;
}
