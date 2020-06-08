//201007
//Question 12

#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

int isEmpty(){
	return top == -1;
}

int pop(){
	if(isEmpty()){
		printf("Error: Stack is empty\n");
		return -1;
	}
	return stack[top--];
}

void push(char c){
	if(top == MAX -1){
		printf("Error: Stack is full\n");
		return;
	}
	stack[++top] = c;
}


int main(){
	char str[100] = "CS 2020 - CSC1202";
	for (int i = 0; i < strlen(str); ++i){
		push(str[i]);
	}

	for (int i = 0; i < strlen(str); ++i){
		str[i] = pop();
	}

	printf("%s\n", str);
	return 0;
}