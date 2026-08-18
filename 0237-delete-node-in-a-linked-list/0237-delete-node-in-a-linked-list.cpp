/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // Variable needed to traverse = temp
        ListNode* temp = node->next;

        // variable needed to store the previous value = hold
        ListNode* hold1 = node;
        // variable needed to store the previous hold1 such as when it takes the
        // value upto the end we can drop it
        ListNode* hold2 = NULL;

        // variable needed to swap the values = a
        int a;

        // Now we have to do the traverse
        while (temp != NULL || hold1->next != NULL) {
            
            // Swapping process
            a = hold1->val;
            hold1->val = temp->val;
            temp->val = a;

            // Move hold2 now
            // BCZ I WANT IT TO BE PRESENT 1 STEP BACK
            // OF hold1
            hold2 = hold1;

            // NOW MOVE THE HOLD1 TO NEXT LOCATION
            hold1 = hold1->next;
            // NOW MOVE THE TEMP TO NEXT LOCATION
            temp = temp->next;
        }

        // DELETE THE HOLD1 FORM THE MEMORY 
        delete (hold1);

        // AND AS HOLD2 WAS JUST 1 STEP BACK OF THE 
        // HOLD1 NOW IT MEANS IT IS THE LAST ELEMENT
        // WHICH WILL POINT TO THE NULL 
        hold2->next = NULL;
    }
};