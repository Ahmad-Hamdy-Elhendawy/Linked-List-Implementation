
Functions:
----------

1. class Node:
   - Represents a single node in the linked list.
   - Members: `int value` and `Node* next`.

2. bool IsEmpty(Node* head):
   - Returns true if the list is empty (head is NULL), otherwise false.

3. Node* Find(Node* head, int value):
   - Searches for a node with the given value.
   - Returns a pointer to the node if found, otherwise NULL.

4. void Start(Node*& head, int value):
   - Inserts a node at the beginning of the list.

5. void After(Node*& head, int value):
   - Inserts a node with the given value after a node specified by user input.
   - Prompts the user to enter the target value after which to insert.

6. void End(Node*& head, int value):
   - Appends a node with the given value at the end of the list.

7. void Delete(Node*& head, int value):
   - Deletes the first occurrence of the node with the specified value.

8. void DeleteFirst(Node*& head):
   - Deletes the first node in the list.

9. void DeleteLast(Node*& head):
   - Deletes the last node in the list.

10. void Display(Node* head):
    - Displays all node values in the list from head to tail.

main():
-------
Demonstrates all major functionalities:
- Creates a list and adds three nodes using Start.
- Displays the list.
- Adds a node after a specific node (via user input).
- Adds a node to the end of the list.
- Deletes a specific node, the first node, and the last node.
- Displays the final state of the list.

Note:
-----
This program is written in modern C++ style with manual memory management using `new` and `delete`.
