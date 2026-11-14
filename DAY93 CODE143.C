#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[100];
    int n, i, max = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of students\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%49s %d %d",
              s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n",
           s[max].name, s[max].marks);

    return 0;
}
