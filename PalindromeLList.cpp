class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)return true;
        ListNode *slow(head),*fast(head);
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast) slow = slow->next; //if odd move one step
        ListNode* pre(NULL), *cur(slow),*next;
        while(cur){
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        while(pre){
            if(pre->val != head->val)return false;
            pre = pre->next;
            head= head->next;
        }
        return true;
    }
};
