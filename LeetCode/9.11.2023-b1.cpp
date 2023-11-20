#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    // Constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=new ListNode(0);
        ListNode* current=temp;

        // duyet qua tung list 1 va list 2 de so sanh gia tri can tim

        while (list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val) {
                current->next=list1;
                list1=list1->next;
            }
            else {
                current->next=list2;
                list2=list2->next;
            }
            // dich chuyen current di mot doan
            current=current->next;
        }
        

            // truong hop dac biet
            if(list1!=NULL) {
                current->next=list1;
            }
            else {
                current->next=list2;
            }

            ListNode* result=temp->next;
            delete temp;

            return result;
    }
};