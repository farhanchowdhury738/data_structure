#include <iostream>
using namespace std;

struct Date{
    int date;
    int mon;
    int year;
};

struct Student{
    int id;
    string name;
    float cgpa;
    Date date[100];

};

void allStudent(Student student[], int n){
for(int i=0;i<n;i++){
        cout << "ID: " << student[i].id << ", Name: " 
    << student[i].name << ", CGPA: " << student[i].cgpa << endl;
}
}

void show(Student &student){

    cout << "ID: " << student.id << ", Name: " 
    << student.name << ", CGPA: " << student.cgpa << ", Date: "<<
    student.date->date << "-"<<
    student.date->mon << "-"<<
    student.date->year << endl;

}

void findProbation(Student student[] , int n){
    cout << "\nStudents with CGPA below 2.5:\n";
    for (int i = 0; i < n; i++) {
        if (student[i].cgpa < 2.5) {
            show(student[i]);
        }
    }
}

// sort for binary search student target sutude find;
void sortStudentsID(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (students[j].id > students[j + 1].id) {
                Student tmp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tmp;
            }
        }
    }
}

// Search
void SearchiID(Student students[], int n, int search) {
    int st = 0, end = n - 1;
    while (st <= end) {
        int mid = (st + end) / 2;

        if (students[mid].id == search) {
            cout << "\nStudent found:\n";
            show(students[mid]);
            return;
        } else if (students[mid].id < search) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << "\nStudent with ID " << search << " not found.\n";
}

int main()
{
    //cout<<"Hello World!"<<endl;

    int n;
    cin>>n;

    Student student[n];

    for (int i = 0; i < n; i++) {

        cin >> student[i].id;
        //cout << "Name: ";
        cin.ignore(); // To ignore newline character
        getline(cin, student[i].name);
        //cout << "CGPA: ";
        cin >> student[i].cgpa;
        //cout<< "Date(dd-mm-yy); ";
        cin>>student[i].date->date;
        cin>>student[i].date->mon;
        cin>>student[i].date->year;

    }

    // sorting id
    sortStudentsID(student,n);

    //findProbation(student, n);

    //allStudent(student,n);

    // Search for a student by ID
    int targetID;
    cin >> targetID;
    SearchiID(student, n, targetID);

    return 0;
}