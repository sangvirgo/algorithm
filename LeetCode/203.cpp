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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* current = dummy;
        while(current->next!=nullptr) {
            if(current->next->val==val) {
                current->next=current->next->next;
            } else {
                current=current->next;
            }
        }
        return dummy->next;
    }
};


// Hàm phụ trợ để in danh sách liên kết
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Hàm phụ trợ để tạo danh sách liên kết từ một vector
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) {
        return nullptr;
    }
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (size_t i = 1; i < vals.size(); ++i) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution solution;

    // --- Trường hợp 1: Xóa phần tử ở giữa và cuối ---
    cout << "--- Kiem thu 1 ---" << endl;
    vector<int> vals1 = {1, 2, 6, 3, 4, 5, 6};
    ListNode* head1 = createList(vals1);
    int val_to_remove1 = 6;

    cout << "Danh sach goc: ";
    printList(head1);

    ListNode* result_head1 = solution.removeElements(head1, val_to_remove1);

    cout << "Danh sach sau khi sua: ";
    printList(result_head1);
    cout << "Ket qua mong muon: 1 -> 2 -> 3 -> 4 -> 5 -> NULL" << endl;

    // --- Trường hợp 2: Xóa phần tử ở đầu danh sách (code của bạn sẽ sai ở đây) ---
    cout << "\n--- Kiem thu 2 (loi xay ra o day) ---" << endl;
    vector<int> vals2 = {7, 7, 1, 2, 7};
    ListNode* head2 = createList(vals2);
    int val_to_remove2 = 7;

    cout << "Danh sach goc: ";
    printList(head2);

    ListNode* result_head2 = solution.removeElements(head2, val_to_remove2);

    cout << "Danh sach sau khi sua: ";
    printList(result_head2);
    cout << "Ket qua mong muon: 1 -> 2 -> NULL" << endl;

    return 0;
}