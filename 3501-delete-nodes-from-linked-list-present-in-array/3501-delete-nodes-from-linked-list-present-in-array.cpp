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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

          unordered_set<int>st ;
          for(auto x : nums)
          {
            st.insert(x);
          }
          ListNode* newHead = new ListNode(-1);
          ListNode* temp = newHead ;

          while(head) // head will contiue to  run until it reaches to the end 
          {
            if(st.count(head->val) == 0) // here we will check if the current value of head is present in the set
            {
                newHead->next = new ListNode(head->val); // if it is not present , then we will add the the head value to the newnNode 
                newHead = newHead-> next ;
            }
            head = head->next ; // if it is present in the set , we will ignore it and  pass on to the next node 
          }      
       return temp->next ;
    }
};