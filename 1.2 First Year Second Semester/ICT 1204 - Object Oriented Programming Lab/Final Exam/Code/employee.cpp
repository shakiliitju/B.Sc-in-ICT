#include<iostream>

using namespace std;

class Employee
{
    string name;
    int age;
    string designation;
    int salary;
public:
    Employee()
    {
        string temp;
        cout<<"Enter detail of employee:"<<endl;
        cout<<"Name: ";
        getline(cin,name);
        cout<<"Age: ";
        cin>>age;
        cout<<"Designation: ";
        cin>>designation;
        cout<<"Salary: ";
        cin>>salary;
        getline(cin,temp);

        cout<<"Detail of employee:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Designation: "<<designation<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    for(int i = 0; i < 2; i++)
        Employee a;

}
