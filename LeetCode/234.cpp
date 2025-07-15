#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100
const int MOD = 1e9 + 7;
/*

*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slowNode=head;
        ListNode* fastNode=head;
        while(fastNode->next!=nullptr && fastNode->next->next!=nullptr) {
            slowNode=slowNode->next;
            fastNode=fastNode->next->next;
        }
        ListNode* checkNode=head;
        ListNode* reverseNodee=reverseNode(slowNode->next);
        while(reverseNodee!=nullptr) {
            if(checkNode->val!=reverseNodee->val) return false;
            checkNode=checkNode->next;
            reverseNodee=reverseNodee->next;
        }
        return true;
    }

private: 
    ListNode* reverseNode(ListNode* head) {
        ListNode* pre=nullptr;
        ListNode* current = head;
        while(current!=nullptr) {
            ListNode* nextNode=current->next;
            current->next=pre;
            pre=current;
            current=nextNode;
        }
        return pre;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}