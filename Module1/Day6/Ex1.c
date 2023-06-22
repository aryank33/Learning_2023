#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringToStruct(const char *input, struct Student *students, int numStudents) {
    const char *delim = " ";
    char *token;
    int i = 0;
    
    token = strtok((char*)input, delim);
    while (token != NULL && i < numStudents) {
        students[i].rollno = atoi(token);
        
        token = strtok(NULL, delim);
        strncpy(students[i].name, token, sizeof(students[i].name));
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        
        token = strtok(NULL, delim);
        students[i].marks = atof(token);
        
        token = strtok(NULL, delim);
        i++;
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); 
    
    struct Student *students = malloc(numStudents * sizeof(struct Student));
    
    char input[1000];
    printf("Enter the student details (rollno name marks) for %d students:\n", numStudents);
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 
    
    parseStringToStruct(input, students, numStudents);
    
    printf("Student details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
    
    free(students);
    
    return 0;
}
