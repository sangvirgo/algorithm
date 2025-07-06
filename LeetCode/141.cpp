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
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr) {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) return true;
        }
        return false;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}