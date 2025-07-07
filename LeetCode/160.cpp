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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Nếu một trong hai list rỗng, không thể có giao nhau
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        ListNode *ptrA = headA;
        ListNode *ptrB = headB;

        // Vòng lặp sẽ dừng khi ptrA == ptrB (hoặc cả hai cùng là nullptr)
        while (ptrA != ptrB) {
            // Nếu ptrA đến cuối, cho nó nhảy sang đầu của list B
            // Ngược lại, đi tiếp một bước
            ptrA = (ptrA == nullptr) ? headB : ptrA->next;
            
            // Tương tự với ptrB
            ptrB = (ptrB == nullptr) ? headA : ptrB->next;
        }
        
        // Trả về một trong hai con trỏ (chúng đang bằng nhau)
        // Nếu không có giao nhau, chúng sẽ cùng là nullptr ở đây
        return ptrA;
    }
};


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


return 0;
}