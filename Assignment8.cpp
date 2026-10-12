//8 inheritance
#include <iostream>
#include <string>
using namespace std;

// This class stores basic information about an employee
class basicinfo
{
    string name;
    int age;

public:
    // Take name and age from the user
    void acceptbasicinfo()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    // Show the employee's basic information
    void dispbasicinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// This class stores department information
class deptinfo
{
    string namedept;
    string network;

public:
    // Take department and network details from the user
    void acceptdeptinfo()
    {
        cout << "Enter department: ";
        cin >> namedept;

        cout << "Enter network: ";
        cin >> network;
    }

    // Show department and network details
    void dispdeptinfo()
    {
        cout << "Department: " << namedept << endl;
        cout << "Network: " << network << endl;
    }
};

// Employee inherits information from both classes
// This is an example of multiple inheritance
class employee : public basicinfo, public deptinfo
{
public:
    // Take all the employee details
    void acceptempinfo()
    {
        acceptbasicinfo();
        acceptdeptinfo();
    }

    // Display all the employee details
    void dispempinfo()
    {
        dispbasicinfo();
        dispdeptinfo();
    }
};

int main()
{
    // Creating two employee objects
    employee e1, e2;

    // Taking details of first employee
    cout << "Enter details of Employee 1\n";
    e1.acceptempinfo();

    // Showing details of first employee
    cout << "\nEmployee 1 Details:\n";
    e1.dispempinfo();

    // Taking details of second employee
    cout << "\nEnter details of Employee 2\n";
    e2.acceptempinfo();

    // Showing details of second employee
    cout << "\nEmployee 2 Details:\n";
    e2.dispempinfo();

    return 0;
}
