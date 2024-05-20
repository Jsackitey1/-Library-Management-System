#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_USERS 100

struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

struct User {
    int id;
    char name[50];
    int borrowed_books[MAX_BOOKS];
};

struct Book librarybooks[100];
struct User libraryusers[100];
int bookcount = 0;
int usercount = 0;

void addbook() {
    struct Book newbook;
    printf("Enter book ID: ");
    scanf("%d", &newbook.id);
    printf("Enter book title: ");
    scanf("%s", newbook.title);
    printf("Enter book author: ");
    scanf("%s", newbook.author);
    printf("Enter number of copies: ");
    scanf("%d", &newbook.quantity);
    librarybooks[bookcount++] = newbook;
    printf("Book added successfully.\n");
}

void adduser() {
    struct User newuser;
    printf("Enter user ID: ");
    scanf("%d", &newuser.id);
    printf("Enter user name: ");
    scanf("%s", newuser.name);
    libraryusers[usercount++] = newuser;
    printf("User added successfully.\n");
}

void setup() {
    struct Book nobook = { 0, "", "", 0 };
    for (int i = 0; i < MAX_BOOKS; i++) {
        librarybooks[i] = nobook;
    }
    for (int i = 0; i < MAX_USERS; i++) {
        libraryusers[i].id = i + 1;
        strcpy(libraryusers[i].name, "User");
        for (int j = 0; j < MAX_BOOKS; j++) {
            libraryusers[i].borrowed_books[j] = 0;
        }
    }
}

int main() {
    setup();
    int choice;

    do {
        printf("1. Add Book\n2. Add User\n3. Quit\n\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addbook();
                break;
            case 2:
                adduser();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != 3);
    return 0;
}
