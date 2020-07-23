// 19000073
// Question 02

#include <stdio.h>

struct distance {
	int feet;
	int inch;
} d[2];

struct distance add(struct distance d1, struct distance d2) {
	struct distance dCombined; 

	dCombined.feet = (d1.feet + d2.feet) + (d1.inch + d2.inch)/12;
	dCombined.inch = (d1.inch + d2.inch)%12;

	return dCombined;
}

int main () {
	for (int i = 0; i < 2; ++i){
		int f = 0, in = 0; 
		printf("Distance %d,\n", i+1);
		printf("Feet: ");
		scanf("%d", &f);
		printf("Inch: ");
		scanf("%d", &in);

		d[i].feet = f + in/12;
		d[i].inch = in%12;
	}

	struct distance newD = add(d[0], d[1]);
	printf("Distance 1 + Distance 2 : Feet %d Inch %d\n", newD.feet, newD.inch);

	return 0;
}