/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* firstmover = head;
        ListNode* secondmover = head;
        while(n!=0){
            firstmover =firstmover->next;
            n--;
        }
        if(firstmover == NULL) { // → added condition to remove head
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while(firstmover->next!=NULL)
            {
            firstmover = firstmover->next;
            secondmover = secondmover->next;
            }
        ListNode* temp = secondmover->next;
        secondmover->next= secondmover->next->next;
        delete temp;
        return head;
    }
};