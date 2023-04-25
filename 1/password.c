#include <stdio.h>
#include "library.h"

int main() {
	char password[100];
	printf("Enter password: ");
	scanf("%s", password);

	if (check_password(password)) {
		printf("Password Correct.\n");
	} else {
		printf("Password Incorrect.\n");
	}
	
	return 0;
}
