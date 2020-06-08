//201007
//Question 05

#include <stdio.h>
#include <stdlib.h>

void pauseTillEnter( FILE *in ){
  int ch;

  do
    ch = fgetc ( in ); 
  while ( ch != EOF && ch != '\n' ); 
  clearerr ( in );

  printf ( "Press [Enter] to continue . . ." );
  fflush ( stdout );
  getchar();
}

void playRPS(){
	int r = (rand() % 3) + 1;
	int response;
	printf("Play Rock Paper Scissors\n");
	printf("1. Rock\n");
	printf("2. Paper\n");
	printf("3. Scissor\n");
	printf("Enter your choice: ");
	scanf("%d", &response);
	printf("My choice: %d\n", r);

	if (response == r){
		printf("Tied\n");
		pauseTillEnter( stdin );
		playRPS();
	}else if (response == 1 && r == 3 || response == 2 && r == 1 || response == 3 && r == 2){
		printf("You won!!!\n");
		pauseTillEnter( stdin );
		playRPS();
	}else if (response == 1 && r == 2 || response == 2 && r == 3 || response == 3 && r == 1){
		printf("You lost\n");
		pauseTillEnter( stdin );
		playRPS();
	}else{
		printf("Invalid choice\n");
	}

}

int main(){
	playRPS();

	return 0;
}