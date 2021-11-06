/**
 * Definition for singly-linked list
 * struct ListNode {
 *   int val ;
 *   ListNode *next ;
 *   ListNode() : val(0), next(nullptr) {} //First Node
 *   ListNode(int x) : val(x), next(nullptr) {} //End Node
 *   ListNode(int x, ListNode *next) : val(x), next(next) {} //General Node
 * }
**/

class Solution {
  public:
    // Solution 1: Iterative
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode dummy(0) ;
      ListNode* tail=&dummy ;
      while(l1 && l2) {
        if( l1->val < l2->val ) {
          tail->next = l1 ;
          l1 = l1->next ;
        }
        else {
          tail->next = l2 ;
          l2 = l2->next ;
        }
        tail = tail->next ;
      }

      if(l1) tail->next = l1 ;
      if(l2) tail->next = l2 ;

      return dummy.next ;
    }


    // Solution 2: Recursive
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      // If one of the list is empty, return the other one
      if(!l1 || !l2) return l1 ? l1 : l2 ;
      // The smaller one becomes the head
      if(l1->val < l2->val) {
        l1->next = mergeTwoLists(l1->next, l2) ;
        return l1 ;
      }
      else {
        l2->next = mergeTwoLists(l1, l2->next) ;
        return l2 ;
      }
    }
};
