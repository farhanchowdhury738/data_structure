#include <iostream>
using namespace std;

struct Product {
    int id;
    string name;
    float price;
    int quantity;
};

struct Node {
    Product data;
    Node* next;

    Node(int id, string name, float price, int quantity) {
        data.id = id;
        data.name = name;
        data.price = price;
        data.quantity = quantity;
        this->next = nullptr;
    }
};

void insert(Node*& head, int id, string name, float price, int quantity) {
    Node* newNode = new Node(id, name, price, quantity);
    newNode->next = head;
    head = newNode;
}

float price_diff(Node* head) {
    if (head == nullptr) return 0;
    
    float max_price = head->data.price;
    float min_price = head->data.price;
    Node* tmp = head;

    while (tmp != nullptr) {
        if (tmp->data.price > max_price)
            max_price = tmp->data.price;
        else if (tmp->data.price < min_price)
            min_price = tmp->data.price;

        tmp = tmp->next;
    }

    return max_price - min_price;
}

float totalStockLevel(Node* head) {
    float total = 0;
    Node* tmp = head;
    while (tmp != nullptr) {
        total += tmp->data.price * tmp->data.quantity;
        tmp = tmp->next;
    }
    return total;
}

void findAffordableProducts(Node* head) {
    Node* tmp = head;
    while (tmp != nullptr) {
        if (tmp->data.price <= 50)
            cout << tmp->data.name << endl;

        tmp = tmp->next;
    }
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "- ID: " << temp->data.id
             << ", Name: " << temp->data.name
             << ", Price: $" << temp->data.price
             << ", Stock: " << temp->data.quantity
             << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = nullptr;

    insert(head, 101, "Laptop", 799.99, 10);
    insert(head, 102, "Notebook", 2.99, 100);
    insert(head, 103, "Pen", 1.50, 200);
    insert(head, 104, "Headphones", 49.99, 25);

    display(head);

    cout << "Price difference between the most expensive and cheapest product: $"
         << price_diff(head) << endl;

    cout << "Total stock value of all products: $"
         << totalStockLevel(head) << endl;

    findAffordableProducts(head);

    return 0;
}
