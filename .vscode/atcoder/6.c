#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int idNumber;
    char address[100];
    char phoneNumber[20];
    float grades[5];
} Student;

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void addStudent(FILE *file) {
    int numStudents;
    fseek(file, 0, SEEK_SET);
    fread(&numStudents, sizeof(int), 1, file);

    if (numStudents >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    Student newStudent;

    printf("Enter student name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Enter student ID number: ");
    scanf("%d", &newStudent.idNumber);
    clearBuffer();

    printf("Enter student address: ");
    fgets(newStudent.address, sizeof(newStudent.address), stdin);
    newStudent.address[strcspn(newStudent.address, "\n")] = '\0';

    printf("Enter student phone number: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';

    printf("Enter student grades (5 grades): ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &newStudent.grades[i]);
    }
    clearBuffer();

    fseek(file, 0, SEEK_END);
    fwrite(&newStudent, sizeof(Student), 1, file);

    numStudents++;
    fseek(file, 0, SEEK_SET);
    fwrite(&numStudents, sizeof(int), 1, file);

    printf("Student added successfully.\n");
}

void searchStudent(FILE *file) {
    char search[50];
    printf("Enter the name or ID number to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    Student student;
    int numStudents;
    fseek(file, 0, SEEK_SET);
    fread(&numStudents, sizeof(int), 1, file);

    printf("Search Results:\n");
    for (int i = 0; i < numStudents; i++) {
        fread(&student, sizeof(Student), 1, file);

        if (strstr(student.name, search) != NULL ||
            student.idNumber == atoi(search)) {
            printf("Name: %s\n", student.name);
            printf("ID Number: %d\n", student.idNumber);
            printf("Address: %s\n", student.address);
            printf("Phone Number: %s\n", student.phoneNumber);
            printf("Grades: ");
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", student.grades[j]);
            }
            printf("\n\n");
        }
    }
}

void displayStudents(FILE *file) {
    Student student;
    int numStudents;
    fseek(file, 0, SEEK_SET);
    fread(&numStudents, sizeof(int), 1, file);

    printf("Total Students: %d\n", numStudents);

    printf("Student List:\n");
    for (int i = 0; i < numStudents; i++) {
        fread(&student, sizeof(Student), 1, file);

        printf("Name: %s\n", student.name);
        printf("ID Number: %d\n", student.idNumber);
        printf("Address: %s\n", student.address);
        printf("Phone Number: %s\n", student.phoneNumber);
        printf("Grades: ");
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", student.grades[j]);
        }
        printf("\n\n");
    }
}

void updateStudent(FILE *file) {
    int id;
    printf("Enter the ID number of the student to update: ");
    scanf("%d", &id);
    clearBuffer();

    Student student;
    int numStudents;
    fseek(file, 0, SEEK_SET);
    fread(&numStudents, sizeof(int), 1, file);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        fread(&student, sizeof(Student), 1, file);

        if (student.idNumber == id) {
            found = 1;
            printf("Enter updated student name: ");
            fgets(student.name, sizeof(student.name), stdin);
            student.name[strcspn(student.name, "\n")] = '\0';

            printf("Enter updated student address: ");
            fgets(student.address, sizeof(student.address), stdin);
            student.address[strcspn(student.address, "\n")] = '\0';

            printf("Enter updated student phone number: ");
            fgets(student.phoneNumber, sizeof(student.phoneNumber), stdin);
            student.phoneNumber[strcspn(student.phoneNumber, "\n")] = '\0';

            printf("Enter updated student grades (5 grades): ");
            for (int j = 0; j < 5; j++) {
                scanf("%f", &student.grades[j]);
            }
            clearBuffer();

            fseek(file, -(int)sizeof(Student), SEEK_CUR);
            fwrite(&student, sizeof(Student), 1, file);

            printf("Student updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Student with ID number %d not found.\n", id);
    }
}

void deleteStudent(FILE *file) {
    int id;
    printf("Enter the ID number of the student to delete: ");
    scanf("%d", &id);
    clearBuffer();

    Student student;
    int numStudents;
    fseek(file, 0, SEEK_SET);
    fread(&numStudents, sizeof(int), 1, file);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        fread(&student, sizeof(Student), 1, file);

        if (student.idNumber == id) {
            found = 1;
            fseek(file, -(int)sizeof(Student), SEEK_CUR);
            memset(&student, 0, sizeof(Student));
            fwrite(&student, sizeof(Student), 1, file);

            numStudents--;
            fseek(file, 0, SEEK_SET);
            fwrite(&numStudents, sizeof(int), 1, file);

            printf("Student deleted successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Student with ID number %d not found.\n", id);
    }
}

void displayGradeReport(FILE *file) {
    int id;
    printf("Enter the ID number of the student: ");
    scanf("%d", &id);
    clearBuffer();

    Student student;
    int numStudents;
    fseek(file, 0, SEEK_SET);
    fread(&numStudents, sizeof(int), 1, file);

    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        fread(&student, sizeof(Student), 1, file);

        if (student.idNumber == id) {
            found = 1;
            printf("Name: %s\n", student.name);
            printf("ID Number: %d\n", student.idNumber);

            float total = 0.0;
            for (int j = 0; j < 5; j++) {
                total += student.grades[j];
            }
            float average = total / 5.0;

            printf("Grade Point: %.2f\n", average);
            break;
        }
    }

    if (!found) {
        printf("Student with ID number %d not found.\n", id);
    }
}

void calculateClassAverage(FILE *file) {
    Student student;
    int numStudents;
    fseek(file, 0, SEEK_SET);
    fread(&numStudents, sizeof(int), 1, file);

    if (numStudents == 0) {
        printf("No students in the system.\n");
        return;
    }

    float total = 0.0;
    for (int i = 0; i < numStudents; i++) {
        fread(&student, sizeof(Student), 1, file);
        for (int j = 0; j < 5; j++) {
            total += student.grades[j];
        }
    }

    float average = total / (numStudents * 5.0);
    printf("Class Average Grade: %.2f\n", average);
}

int main() {
    FILE *file = fopen("students.dat", "r+");

    if (file == NULL) {
        file = fopen("students.dat", "w+");
        int numStudents = 0;
        fwrite(&numStudents, sizeof(int), 1, file);
    }

    int choice;
    do {
        printf("Student Grading System\n");
        printf("1. Add a new student to the system\n");
        printf("2. Search for a student by name or ID number\n");
        printf("3. Display all students in the system\n");
        printf("4. Update a student's information\n");
        printf("5. Delete a student from the system\n");
        printf("6. Display the grade report for a student\n");
        printf("7. Calculate the class average grade\n");
        printf("8. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearBuffer();

        switch (choice) {
            case 1:
                addStudent(file);
                break;
            case 2:
                searchStudent(file);
                break;
            case 3:
                displayStudents(file);
                break;
            case 4:
                updateStudent(file);
                break;
            case 5:
                deleteStudent(file);
                break;
            case 6:
                displayGradeReport(file);
                break;
            case 7:
                calculateClassAverage(file);
                break;
            case 8:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 8);

    fclose(file);

    return 0;
}
