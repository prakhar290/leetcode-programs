//question//


Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 

Follow up: Could you do this in one pass?




//solution//


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
    int findlength(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head = head->next;
        }    
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
        struct ListNode* temp = head;
        int l=findlength(head);
        
        if(n==l)
        {
            struct ListNode* todelete = head;
            head = head->next;
            delete todelete;
            return head;

        }
        if(temp==NULL)
        {
            return head;
        }
        while(count!=l-n && temp!=NULL)
        {
            temp = temp->next;
            count++;
            
        }
        struct ListNode* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
        return head;
    }
};