
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

// Abstract Class Due to P
class Employee {
protected:
    string m_name;

public:
    int m_id;
    Employee(string name, int id);
    virtual ~Employee() {

    }

    virtual void display(); // Virtual Function for Run Time Polymorphism
    virtual double calculateSalary() = 0; // Pure Virtual

    bool operator==(const Employee& other); // Operator Overload
    friend void printEmployeeID(const Employee& emp); //Friend
};


#endif //EMPLOYEE_H