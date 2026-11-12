//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", &p.gender);

    printf("\nName: %s", p.name);
    printf("\nAge: %d", p.age);

    if (p.gender == MALE)
        printf("\nGender: Male");
    else if (p.gender == FEMALE)
        printf("\nGender: Female");
    else if (p.gender == OTHER)
        printf("\nGender: Other");
    else
        printf("\nInvalid Gender");

    return 0;
}