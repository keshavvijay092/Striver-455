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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>>qt;

        for(int i=0;i<lists.size();i++)
        {
        ListNode* current = lists[i]; 
        while(current)
         {    
            qt.push(current->val);     
            current = current->next;   
        }

        }
    
    if (qt.empty()) {
        return nullptr;
    }
        
        ListNode* head = new ListNode(qt.top());
        qt.pop();
        ListNode* temp = head;
        while(!qt.empty())
        {
           ListNode* newNode = new ListNode(qt.top());
           qt.pop();
           temp->next = newNode;
           temp = newNode;
        }

        return head;


    }
};