#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

bool searchNode(Node* root, int data) {
    if (root == NULL) {
        return false;
    }

    if (data == root->data) {
        return true;
    } else if (data < root->data) {
        return searchNode(root->left, data);
    } else {
        return searchNode(root->right, data);
    }
}

Node* checkMIN(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = checkMIN(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void inOrder(Node* root) {
    if (root == NULL) {
        return;
    }

    // left->root->right
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main() {
    Node* root = NULL;
    int choice, data;

    
    while (true) {
        cout << "Binary Search Tree:\n";
        cout << "1. Insert a node\n";
        cout << "2. Search for a node\n";
        cout << "3. Delete a node\n";
        cout << "4. in-order traversal\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter data to insert: ";
            cin >> data;
            root = insertNode(root, data);
            cout << data << " inserted.\n";
            break;
        case 2:
            cout << "Enter data to search: ";
            cin >> data;
            if (searchNode(root, data)) {
                cout << data << " found in the BST.\n";
            } else {
                cout << data << " not found in the BST.\n";
            }
            break;
        case 3:
            cout << "Enter value to delete: ";
            cin >> data;
            root = deleteNode(root, data);
            cout << data << " deleted (if it existed).\n";
            break;
        case 4:
            cout << "In-order traversal: ";
            inOrder(root);
            cout << endl;
            break;
        case 5:
            cout << "Exit program!\n";
            return 0;
        default:
            cout << "Invalid choice... Try again!\n";
        }
    }

    return 0;
}
