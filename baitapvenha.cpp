#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


struct Profile {
    char name[30];
    char birthday[30];
    char phone[20];
} student;

void addStudent() {
	bool isValidName = false;
	
    while (!isValidName) {
        printf("Enter student's name:");
        fgets(student.name, sizeof(student.name), stdin);
        int d = strlen(student.name) -1;
        if (d < 3) {
            printf("The name is too short, please enter name's length between 3-15 characters\n");
        } else if (d > 15) {
            printf("The name is too long, please enter name's length between 3-15 characters\n");
        } else {
            isValidName = true;
        }
    }
    printf("Enter student's birthday:");
    fgets(student.birthday, sizeof(student.birthday), stdin);
    printf("Enter student's phone number:");
    fgets(student.phone, sizeof(student.phone), stdin);

	FILE *sl;
    sl = fopen("profile.txt", "a");
    fprintf(sl, "Student's name: %s", student.name);
    fprintf(sl, "Student's birthday: %s", student.birthday);
    fprintf(sl, "Student's phone number: %s\n", student.phone);
    fclose(sl);
}

void showStudent() {
    char list[100];
    FILE *sl;
    sl = fopen("profile.txt", "r");
    printf("All students profile:\n");
    while (fgets(list, sizeof(list), sl)) {
        printf("%s", list);
    }
    fclose(sl);
}


int main() {
    
    while (true) {
        int choice;
        printf("-----------------Menu-----------------\n");
        printf("1. Show student list.\n");
        printf("2. Add new student.\n");
        printf("3. Exit.\n");
        printf("--------------------------------------\n");
        printf("Please enter your choice: \n");
        scanf("%d", &choice);
        getchar();
        if (choice == 3) {
            printf("End program.");
            break;
        }
        switch (choice) {
            case 1:
                printf("Show student list.\n");
                showStudent();
                break;
            case 2:
                addStudent();
                break;
            default:
                printf("Please enter a number from 1 to 3.\n");
                break;
        }
    }
}
