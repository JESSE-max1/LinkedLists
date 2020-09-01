//floyd cycle detection
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;

    }
};

// removing the loop

class Node{
public:
    int data;
    Node* next;
    bool visited
};

Node* temp = head;
while(temp != NULL && !visited)
{
    prev = temp;
    temp = temp->next;
}
if(temp != NULL)
{
    prev->next = NULL;
}
