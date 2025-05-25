#include <string.h>

int check_login(const char* user, const char* pass) {
    if (strcmp(user, "admin") == 0 && strcmp(pass, "geheim") == 0) {
        return 1; // Ja
    } else {
        return 0; // Kein Zugriff
    }
}
