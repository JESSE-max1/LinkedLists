class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        int len = findlen(head);
        k = k%len;
        if(k == 0)return head;
        int p = len-k,i = 0;
        ListNode* temp=head, *prev = NULL;
        while(i<p){
            i++;
            prev = temp;
            temp=temp->next;
        }
        prev->next = NULL;
        prev = temp;
        while(temp->next != NULL) temp = temp->next;
        temp->next = head;
        head = prev;
        return head;

    }
    int findlen(ListNode* head){
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        return n;
    }
};
