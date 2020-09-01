#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int countint(Node* head, int key)
{
    Node* current= head;
    int count = 0;
    while(current != NULL){
        if(current->data == key)
            count++;
        current = current->next;
    }
    return count;
}

bool search(Node* head,int x)
{
    Node* current = head;
    while(current != NULL){
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}

int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,1);
    push(&head,1);
    push(&head,5);
    push(&head,1);
    push(&head,1);

    cout << "No of 1s in the list is: " << countint(head,1);
    search(head,5)? cout << "\nYes" : cout << "\No";
    return 0;
}
