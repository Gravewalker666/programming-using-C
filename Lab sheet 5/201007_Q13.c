//201007
//Question 13

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
	char p[100] = "{()[]}[]";
	int f = 1;

	for (int i = 0; i < strlen(p); ++i){
		if(p[i] == '{') push('}');
		if(p[i] == '(') push(')');
		if(p[i] == '[') push(']');
		if(p[i] == '}' || p[i] == ')' || p[i] == ']'){
			char t = pop();
			if(t != p[i]){
				f = 0;
				break;
			} 
		}
	}

	if(isEmpty() && f){
		printf("Parenthesis are balanced in %s\n", p);
	}else{
		printf("Parenthesis are not balanced in %s\n", p);
	}
	return 0;
}