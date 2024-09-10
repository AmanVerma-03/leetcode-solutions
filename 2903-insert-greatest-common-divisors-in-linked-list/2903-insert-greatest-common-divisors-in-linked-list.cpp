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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       ListNode* temp = head ;
       while(temp != nullptr && temp ->next != nullptr)
       {
        int first = temp->val  ;
        int second = temp->next->val ;
        int gcdvalue = gcd(first , second);
         // Create a new node with the GCD value
        ListNode* newnode = new ListNode(gcdvalue);

        // Insert the new node between temp and temp->next
        newnode->next =  temp->next  ;
         temp->next = newnode ;

         // move temp to the next original node (skip the inserted gcd node)
        temp = newnode->next ;
       }
       return head ;
    }
    private : int gcd(int first , int second)
    {
        if(second == 0)
        return first ;
    
        return gcd(second , first % second) ;
    }
};