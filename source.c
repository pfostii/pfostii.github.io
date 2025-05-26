#include <string.h>

typedef struct {
    const char* username;
    const char* password;
} User;

int check_login(const char* user, const char* pass) {
    User users[] = {
        {"Philipp", "Mikisek"},
        {"fabian.danek01@gmail.com", "adgjlsfhK46"},
        {"aaaaaaaa", "aaaaaaaa"},
        {"Fabian", "Danek2024"}
    };
    
    int num_users = sizeof(users) / sizeof(users[0]);

    for (int i = 0; i < num_users; ++i) {
        if (strcmp(user, users[i].username) == 0 &&
            strcmp(pass, users[i].password) == 0) {
            return 1; // Zugang erlaubt
        }
    }
    return 0; // Kein Zugriff
}

