Singly Linked List -->

Insert Tail
Insert at any Position
Insert at Head

Delete any Position
Delete head



// Create
class Node{
	public:
      int val;
      Node *next;
      Node(int val){
          this->val = val;
          this->next = NULL;
      }
};

// insert Tail
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL){
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;  // tmp ekhon last node e
}

// insert any position
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// insert head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

// delete given position
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++){
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head)

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}






