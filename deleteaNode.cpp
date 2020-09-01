#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node **head_ref,int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deletenode(Node **head_ref, int key)
{
    Node* temp = *head_ref, *prev;
    if(temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
        return;
    prev->next = temp->next;
    free(temp);
}
void printlist(Node* node)
{
    while(node != NULL){
        cout << " " << node->data;
        node = node->next;
    }
}
int get_count(Node* head)
{
    int count = 0;
    Node* current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}
int main()
{
    Node* head = NULL;
    push(&head,1);
    push(&head,5);
    push(&head,9);
    push(&head,8);
    push(&head,0);
    cout << "created linked list: ";
    printlist(head);
    deletenode(&head,9);
    cout << "\nlinked list after deletion of 9: ";
    printlist(head);
    cout << "\ntotal No. of nodes is: " << get_count(head);
    cout << 7/10;
    return 0;
}
