#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input data for employees
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", &employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display data for employees with even ID and salary > 50000
    printf("\nEmployees with even ID and salary > 50000:\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (employees[i].id % 2 == 0 && employees[i].salary > 50000) {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n");
        }
    }

    return 0;
}
