#include <iostream>
using namespace std;

struct date
{
    /* data */
    int date;
    string month;
    int year;
};


struct emp
{
    string name;
    int id;
    float sal;
    date dd;
};


int main()
{   
    int n=3;
    emp ep[n];
    for(int i=0;i<n;i++){
        cin>>ep[i].name;
        cin>>ep[i].id;
        cin>>ep[i].sal;
        cin>>ep[i].dd.date;
        cin>>ep[i].dd.month;
        cin>>ep[i].dd.year;
    }

    for(int i=0;i<n;i++){
        cout<<"ID #"<<ep[i].id<<" ";
        cout<<"Name: "<<ep[i].name<<" ";
        cout<<"Sal: "<<ep[i].sal<<"__";
        cout<<"Join: ";
        cout<<ep[i].dd.date<<" ";
        cout<<ep[i].dd.month<<" ";
        cout<<ep[i].dd.year<<endl;
    }
    

    return 0;
}