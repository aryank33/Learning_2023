#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int searchStructArrayByName(const struct Student *students, int numStudents, const char *name) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1; 
}

int main() {
    struct Student students[] = {
        {1001, "Aron", 100.0},
        {1002, "Bob", 90.5},
        {1003, "Claire", 95.25}
    };
    int numStudents = sizeof(students) / sizeof(struct Student);

    const char *searchName = "Bob";
    int searchIndex = searchStructArrayByName(students, numStudents, searchName);

    if (searchIndex != -1) {
        printf("Student '%s' found at index %d\n", searchName, searchIndex);
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[searchIndex].rollno, students[searchIndex].name, students[searchIndex].marks);
    } else {
        printf("Student '%s' not found\n", searchName);
    }

    return 0;
}
