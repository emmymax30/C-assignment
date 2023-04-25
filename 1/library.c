#include <stdio.h>
#include <string.h>

int check_password(char *password) {
    char *actual_password = "Jefferson1234";
    
    if (strcmp(password, actual_password) == 0) {
        return 1; // Password matches
    } else {
        return 0; // Password does not match
    }
}

