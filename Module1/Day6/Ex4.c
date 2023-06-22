#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int compareDescending(const void *a, const void *b) {
    float marksA = ((struct Student *)a)->marks;
    float marksB = ((struct Student *)b)->marks;

    if (marksA > marksB)
        return -1;
    else if (marksA < marksB)
        return 1;
    else
        return 0;
}

void sortStructArrayDescending(struct Student *students, int numStudents) {
    qsort(students, numStudents, sizeof(struct Student), compareDescending);
}

int main() {
    struct Student students[] = {
        {1001, "Aron", 100.0},
        {1002, "Bob", 90.5},
        {1003, "Claire", 95.25}
    };
    int numStudents = sizeof(students) / sizeof(struct Student);

    printf("Before sorting:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    sortStructArrayDescending(students, numStudents);

    printf("\nAfter sorting in descending order based on marks:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
