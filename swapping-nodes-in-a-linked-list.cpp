//question//


You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]
Example 2:

Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
Example 3:

Input: head = [1], k = 1
Output: [1]
Example 4:

Input: head = [1,2], k = 1
Output: [2,1]
Example 5:

Input: head = [1,2,3], k = 2
Output: [1,2,3]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 105
0 <= Node.val <= 100



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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=1;
        struct ListNode* temp = head;
        int swap;
        struct ListNode* node1;
        struct ListNode* node2;
        int length = findlength(head);
        cout<<"length: "<<length;
        while(temp!=NULL)
        {
            if(count==k)
            {
                node1 = temp;
            }
            if(count==length-k+1)
            {
                node2 = temp;
            }
            count++;
            temp = temp->next;
        }
        swap = node1->val;
        node1->val = node2->val;
        node2->val = swap;
        return head;
    }
};