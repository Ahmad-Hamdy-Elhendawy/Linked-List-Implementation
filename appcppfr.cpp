#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

bool IsEmpty(Node* head)
{
    return (head == NULL);
}

Node* Find(Node* head, int value)
{
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->value == value)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

void Start(Node*& head, int value)
{
    Node* newnode = new Node();
    newnode->value = value;
    newnode->next = head;
    head = newnode;
}

void After(Node*& head, int value)
{
    if (IsEmpty(head))
    {
        cout << "List is empty. Cannot insert after." << endl;
        return;
    }

    int targetValue;
    cout << "What element do you wanna add after: ";
    cin >> targetValue;

    Node* prev = Find(head, targetValue);
    if (prev == NULL)
    {
        cout << "Target value not found." << endl;
        return;
    }

    Node* newnode = new Node();
    newnode->value = value;
    newnode->next = prev->next;
    prev->next = newnode;
}

void End(Node*& head, int value)
{
    Node* newnode = new Node();
    newnode->value = value;
    newnode->next = NULL;

    if (IsEmpty(head))
    {
        head = newnode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void Delete(Node*& head, int value)
{
    if (IsEmpty(head))
    {
        cout << "List is empty." << endl;
        return;
    }

    if (head->value == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* prev = head;
    Node* current = head->next;

    while (current != NULL && current->value != value)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Value not found." << endl;
        return;
    }

    prev->next = current->next;
    delete current;
}

void DeleteFirst(Node*& head)
{
    if (IsEmpty(head)) return;

    Node* deleted = head;
    head = deleted->next;
    delete deleted;
}

void Display(Node* head)
{
    if (IsEmpty(head))
    {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void DeleteLast(Node*& head)
{
    if (IsEmpty(head)) return;
    Node* current = head;
    Node* deleted = head;
    Node* prev = head;

    if (head->next == NULL)
    {
        
    }
    while (current != NULL)
    {
        prev = deleted;
        deleted = current;
        current = current->next;
    }
    prev->next = NULL;
    delete deleted;
}

int main()
{
    Node* head = nullptr;

    Start(head, 10);
    Start(head, 9);
    Start(head, 8);

    cout << "Initial list: ";
    Display(head);

    cout << "_______________________________" << endl;
    After(head, 200); // Will ask for input
    End(head, 1000);
    cout << "_______________________________" << endl;
    Delete(head, 9);
    DeleteFirst(head);
    DeleteLast(head);

    cout << "_______________________________" << endl;
    cout << "Final list: ";
    Display(head);

    return 0;
}
