#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class person
{
public:
    char name[10];
    int code;
    void getp()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "\nEnter Code : ";
        cin >> code;
    }
};
class account : virtual public person
{
public:
    double pay;
    void getac()
    {
        cout << "\nEnter Salary : ";
        cin >> pay;
    }
};

class admin : virtual public person
{
public:
    double exp;
    void getad()
    {
        cout << "\nEnter Experience : ";
        cin >> exp;
    }
};
class employee : public account, public admin
{
public:
    void disp()
    {

        cout << "\nCode\t\t: " << code;
        cout << "\nSalary\t\t: " << pay;
        cout << "\nExperience\t: " << exp;
    }
};
int main()
{
    employee e1;
    e1.getp();
    e1.getac();
    e1.getad();
    e1.disp();
    getch();
}