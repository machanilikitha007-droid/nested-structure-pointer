#include <stdio.h>

struct Department
{
    char name[30];
    int floor;
};

struct Employee
{
    int id;
    char name[30];
    struct Department department;
};

int main()
{
    struct Employee employee = {
        501,
        "Arun",
        {"Software", 3}
    };

    struct Department *deptPtr = &employee.department;

    printf("Employee ID: %d\n", employee.id);
    printf("Employee Name: %s\n", employee.name);
    printf("Department: %s\n", deptPtr->name);
    printf("Department Floor: %d\n", deptPtr->floor);

    return 0;
}
