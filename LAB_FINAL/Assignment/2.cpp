#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> customerQueue;
    int option;
    string customerName;

    while (true) {

        cout << "\nTicket Counter System\n";
        cout << "1. Join the Queue\n";
        cout << "2. Serve the Next Customer\n";
        cout << "3. Display the Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter customer name: ";
                cin >> customerName;
                customerQueue.push(customerName);
                cout << customerName << " joined the queue.\n";
                break;
            
            case 2:
                if (!customerQueue.empty()) {
                    cout << "Serving " << customerQueue.front() << endl;
                    customerQueue.pop();
                } else {
                    cout << "Queue is empty, no one to serve.\n";
                }
                break;
            
            case 3:
                if (customerQueue.empty()) {
                    cout << "Current Queue: Empty\n";
                } else {
                    cout << "Current Queue: ";
                    queue<string> tempQueue = customerQueue;
                    while (!tempQueue.empty()) {
                        cout << tempQueue.front();
                        tempQueue.pop();
                        if (!tempQueue.empty()) cout << ", ";
                    }
                    cout << endl;
                }
                break;
            
            case 4:
                cout << "Exit program!\n";
                return 0;
            
            default:
                cout << "Invalid option! Please enter a number between 1 and 4.\n";
        }
    }

    return 0;
}
