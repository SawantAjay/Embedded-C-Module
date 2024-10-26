/*Write functions to initialize and print details of an Employee and a Manager. 
Demonstrate the use of these functions in main.*/

#include <stdio.h>
#include <string.h>

// Define the Employee struct
struct Employee {
    char name[100];
    int employeeID;
    float salary;
};

// Define the Manager struct
struct Manager {
    struct Employee emp;  
    int numOfTeams;  // Additional field specific to Manager
};

// Function to initialize Employee
void initializeEmployee(struct Employee* e, char* name, int id, float salary) {
    strcpy(e->name, name);
    e->employeeID = id;
    e->salary = salary;
}

// Function to initialize Manager
void initializeManager(struct Manager* m, char* name, int id, float salary, int numOfTeams) {
    // Initialize the Employee part of the Manager
    initializeEmployee(&m->emp, name, id, salary);
    m->numOfTeams = numOfTeams;  // Initialize the Manager-specific field
}

// Function to print Employee details
void printEmployee(struct Employee e) {
    printf("Employee Name: %s\n", e.name);
    printf("Employee ID: %d\n", e.employeeID);
    printf("Salary: %.2f\n", e.salary);
}

// Function to print Manager details
void printManager(struct Manager m) {
    // Print Employee details first
    printEmployee(m.emp);
    // Then print Manager-specific details
    printf("Number of Teams: %d\n", m.numOfTeams);
}

int main() {
    // Declare an Employee and a Manager
    struct Employee emp1;
    struct Manager mgr1;

    // Initialize the Employee
    initializeEmployee(&emp1, "Ajay", 101, 60000.0);

    // Initialize the Manager
    initializeManager(&mgr1, "Amit", 102, 90000.0, 5);

    // Print the Employee details
    printf("Employee Details:\n");
    printEmployee(emp1);

    // Print the Manager details
    printf("\nManager Details:\n");
    printManager(mgr1);

    return 0;
}
