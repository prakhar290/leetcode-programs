//question//


You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* temp1 = l1;
        struct ListNode* temp2 = l2;
        ListNode *dummy = new ListNode(0);
        ListNode* l3 = dummy;
        int len1,len2;
        len1 = findlength(l1);
        len2 = findlength(l2);
        int carry = 0;
        while(temp1!=NULL || temp2!=NULL)
        {
            int a,b;
            if(temp1!=NULL)
            {
               a = temp1->val;
            }
            else
            {
                a = 0;
            }
            if(temp2!=NULL)
            {
                b = temp2->val;
            }
            else
            {
                b = 0;
            }
            int sum = a+b+carry;
            carry = sum/10;
            sum = sum%10;
            l3->next = new ListNode(sum);
            l3 = l3->next;
            if(temp1!=NULL)
            {
                temp1 = temp1->next;
            }
            if(temp2!=NULL)
            {
                temp2 = temp2->next;
            }
        }
        if(carry!=0)
        {
            l3->next = new ListNode(carry);    
        }
        return dummy->next;
            
    }
};