#include <stdio.h>
#include <string.h>

int main() {
    char username[30];
    char password[30];

    char correctUsername[] = "admin";
    char correctPassword[] = "password123";

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Incorrect username or password.\n");
    }

    return 0;
}
