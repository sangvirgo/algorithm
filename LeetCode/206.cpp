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
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=nullptr) {
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(), v.end());
        ListNode* temp2=head;
        int i=0;
        while(temp2!=nullptr) {
            temp2->val=v[i];
            temp2=temp2->next;
            i++;
        }
        return temp2;
    }
};

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}