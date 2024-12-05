#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
    string dob;

    void setData(int id,  string &name, double salary,  string &dob) {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->dob = dob;
    }

    void dis() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << ", DOB: " << dob << endl;
    }
};

double avg(Employee employees[], int n) {
    double totalSalary = 0;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        totalSalary += employees[i].salary;
        cnt++;
    }
    return totalSalary / cnt;
}

int main() {
    int n;
    cin >> n;

    Employee employees[n];
    
    for (int i = 0; i < n; ++i) {
        int id;
        string name, dob;
        double salary;
        
        cin >> id;
        cin.ignore();
        getline(cin, name);
        cin >> salary;
        cin >> dob;
        
        employees[i].setData(id, name, salary, dob);
    }
    
    cout << "\nEmployee Details:" << endl;
    for (int i = 0; i < n; ++i) {
        employees[i].dis();
    }

    double averageSalary = avg(employees, n);
    cout << "\nAverage salary: " << averageSalary << endl;

    return 0;
}
