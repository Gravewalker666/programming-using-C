// 19000073
// Question 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Book {
	int accessionNo; 
	char title[50];
	char author[50];
	bool isIssued;
	struct Book* next;
};

struct Library {
	int numberOfBooks;
	struct Book* head;
} library = {0, NULL};

void displaySubMenu();
void displayMainMenu();
void displayBookInformation();
void displayBookInformationByAuthor();
void addNewBook();
void displayTotalNumberOfBooks();
void countBooksByTitle();

int main () {
	displayMainMenu();
	return 0;
}

void displayBookInformation () {
	int accessionNo = 0;
	printf("Enter accession number: ");
	scanf("%d", &accessionNo);
	struct Book* ptr = library.head;
	while (ptr) {
		if (ptr->accessionNo ==  accessionNo) {
			printf("\nBook Information:\n");
			printf("- Acession number: %d\n", ptr->accessionNo);
			printf("- Title: %s\n", ptr->title);
			printf("- Author: %s\n", ptr->author);
			printf("- Issued: %s\n", ptr->isIssued ? "true" : "false");
			return;
		}
		ptr = ptr->next;
	}
	printf("Couldn't find a book by accession number: %d\n", accessionNo);
}

void displayBookInformationByAuthor () {
	char author[50] = "";
	printf("Enter author: ");
	fflush(stdin);
	fgets(author, 50, stdin);
	strtok(author, "\n");
	struct Book* ptr = library.head;
	int bookCount = 0;
	while (ptr) {
		if (!strcmp(ptr->author, author)) {
			bookCount++;
			printf("\nBook Information:\n");
			printf("- Acession number: %d\n", ptr->accessionNo);
			printf("- Title: %s\n", ptr->title);
			printf("- Author: %s\n", ptr->author);
			printf("- Issued: %s\n", ptr->isIssued ? "true" : "false");
		}
		ptr = ptr->next;
	}
	if (bookCount) {
		printf("Number of books by %s: %d\n", author, bookCount);
	} else {
		printf("Couldn't find any book by %s\n", author);
	}
}

void addNewBook() {
	printf("Add new book:\n");
	struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));
	newBook->accessionNo = ++library.numberOfBooks;
	newBook->isIssued = false;
	newBook->next = library.head;
	printf("- Enter title: ");
	fflush(stdin);
	fgets(newBook->title, 50, stdin);
	printf("- Enter author: ");
	fflush(stdin);
	fgets(newBook->author, 50, stdin);
	strtok(newBook->title, "\n");
	strtok(newBook->author, "\n");
	library.head = newBook;
	printf("Succesfully added new book! Id: %d\n", newBook->accessionNo);
}

void displayTotalNumberOfBooks () {
	printf("Total number of books: %d\n", library.numberOfBooks);
}

void issueABook () {
	int accessionNo = 0;
	printf("Enter accession number: ");
	scanf("%d", &accessionNo);
	struct Book* ptr = library.head;
	while (ptr) {
		if (ptr->accessionNo == accessionNo) {
			if (ptr->isIssued) {
				printf("Requested book is already issued\n");
				return;
			}
			ptr->isIssued = true;
			printf("\nSuccesfully issued book,\n");
			printf("- Acession number: %d\n", ptr->accessionNo);
			printf("- Title: %s\n", ptr->title);
			printf("- Author: %s\n", ptr->author);
			printf("- Issued: %s\n", ptr->isIssued ? "true" : "false");
			return;
		}
		ptr = ptr->next;
	}
	printf("Couldn't find a book by accession number: %d\n", accessionNo);
}

void countBooksByTitle () {
	char title[50] = "";
	printf("- Enter title: ");
	fflush(stdin);
	fgets(title, 50, stdin);
	strtok(title, "\n");
	struct Book* ptr = library.head;
	int bookCount = 0;
	while (ptr) {
		if (!strcmp(ptr->title, title)) bookCount++;
		ptr = ptr->next;
	}
	if (bookCount) {
		printf("Number of books by title \"%s\": %d\n", title, bookCount);
	} else {
		printf("Couldn't find any book by title \"%s\"\n", title);
	}
}

void displaySubMenu () {
	printf("Enter '1' to quit, '2' to go back to main menu\n");
	int command;
	printf("Enter command: ");
	scanf("%d", &command);
	switch (command) {
		case 1:
			exit(1);
		case 2:
			displayMainMenu();
			break;
		default:
			printf("--------- Invalid input! ---------\n");
			displaySubMenu();
	}
}

void displayMainMenu () {
	int command;
	printf("--------- Welcome to Library Menu ---------\n");
	printf("1. Display Book Information\n");
	printf("2. Add a new book\n");
	printf("3. Search books by author\n");
	printf("4. Show number of books by title\n");
	printf("5. Show total number of books in the libarary\n");
	printf("6. Issue a book\n");
	printf("7. Quit\n");
	printf("Enter command: ");
	scanf("%d", &command);

	switch (command) {
		case 1:
			displayBookInformation();
			displaySubMenu();
			break;
		case 2:
			addNewBook();
			displaySubMenu();
			break;
		case 3:
			displayBookInformationByAuthor();
			displaySubMenu();
			break;
		case 4:
			countBooksByTitle();
			displaySubMenu();
			break;
		case 5:
			displayTotalNumberOfBooks();
			displaySubMenu();
			break;
		case 6: 
			issueABook();
			displaySubMenu();
			break;
		case 7:
			exit(1);
		default:
			printf("--------- Invalid input! ---------\n");
			displayMainMenu();
	}
}
