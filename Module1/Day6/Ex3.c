#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStructArray(const struct Student *students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

int main() {
    struct Student students[] = {
        {1001, "Aron", 100.0},
        {1002, "Bob", 90.5},
        {1003, "Claire", 95.25}
    };
    int numStudents = sizeof(students) / sizeof(struct Student);

    displayStructArray(students, numStudents);

    return 0;
}
