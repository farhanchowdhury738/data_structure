#include <iostream>
using namespace std;

struct Node {
    int id;
    Node* left;
    Node* right;
};

class Inventory {

    Node* root;

    Node* insert(Node* node, int id) {
        if (!node) {
            Node* newNode = new Node{id, NULL, NULL};
            return newNode;
        }
        if (id < node->id) {
            node->left = insert(node->left, id);
        } else if (id > node->id) {
            node->right = insert(node->right, id);
        }
        return node;
    }

    Node* findMin(Node* node) {
        while (node && node->left) {
            node = node->left;
        }
        return node;
    }

    Node* remove(Node* node, int id) {
        if (!node) return node;

        if (id < node->id) {
            node->left = remove(node->left, id);
        } else if (id > node->id) {
            node->right = remove(node->right, id);
        } else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* temp = findMin(node->right);
            node->id = temp->id;
            node->right = remove(node->right, temp->id);
        }
        return node;
    }

    void inOrder(Node* node) {
        if (node) {
            inOrder(node->left);
            cout << node->id << " ";
            inOrder(node->right);
        }
    }

    int findMinValue(Node* node) {
        Node* temp = findMin(node);
        return temp ? temp->id : -1;
    }

    int findMaxValue(Node* node) {
        while (node && node->right) {
            node = node->right;
        }
        return node ? node->id : -1;
    }

public:
    Inventory()  { root=NULL;}

    void insert(int id) {
        root = insert(root, id);
        cout << "Inserted: " << id << endl;
    }

    void remove(int id) {
        root = remove(root, id);
        cout << "Removed: " << id << endl;
    }

    void display() {
        cout << " ID in sorted order: ";
        inOrder(root);
        cout << endl;
    }

    void findMinMax() {
        int min = findMinValue(root);
        int max = findMaxValue(root);

        cout << "Smallest ID: " << min << endl;
        cout << "Largest ID: " << max << endl;
    }
};

int main() {
    Inventory inventory;

    inventory.insert(50);
    inventory.insert(30);
    inventory.insert(70);
    inventory.insert(20);
    inventory.insert(40);
    inventory.insert(60);
    inventory.insert(80);

    inventory.display();

    inventory.findMinMax();

    inventory.remove(50);
    inventory.display();

    return 0;
}
