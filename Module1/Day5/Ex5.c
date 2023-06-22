#include <stdio.h>
#include<string.h>
struct Person {
    char name[50];
    int age;
};

void swapPersons(struct Person *person1, struct Person *person2) {
    char tempName[50];
    strcpy(tempName, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, tempName);
    
    int tempAge = person1->age;
    person1->age = person2->age;
    person2->age = tempAge;
}

int main() {
    struct Person person1, person2;
   
    printf("Enter name for person 1: ");
    scanf("%s", person1.name);
    printf("Enter age for person 1: ");
    scanf("%d", &person1.age);
    
    printf("Enter name for person 2: ");
    scanf("%s", person2.name);
    printf("Enter age for person 2: ");
    scanf("%d", &person2.age);
    
    printf("\nInitial values:\n");
    printf("Person 1: %s, %d years old\n", person1.name, person1.age);
    printf("Person 2: %s, %d years old\n", person2.name, person2.age);
    
    swapPersons(&person1, &person2);
    
    printf("\nSwapped values:\n");
    printf("Person 1: %s, %d years old\n", person1.name, person1.age);
    printf("Person 2: %s, %d years old\n", person2.name, person2.age);
    
    return 0;
}
