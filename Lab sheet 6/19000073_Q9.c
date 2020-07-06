// 19000073
// Question 09

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) { 
    char temp = *x; 
    *x = *y; 
    *y = temp; 
}

void permute(char* str, int x, int l) {
	if (l == x) {
		printf("%s\n", str);
	} else { 
		for (int i = x; i < l; ++i) {
			swap(str+x, str+i);
			permute(str, x+1, l);
			swap(str+x, str+i);
		}
	}
}

int main() { 
    char str[] = "abc";
    permute(str, 0, strlen(str));
    
    return 0; 
}
