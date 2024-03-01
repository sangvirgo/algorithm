#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

typedef struct Node* node;

void Initialize(node &head) {
    head=nullptr;
}

node CreateNode(int x) {
    node temp=new Node();
    temp->data=x;
    temp->next=nullptr;
    return temp;
}

bool IsEmpty(node a) {
    return a==nullptr;
}

int SortElement(node a) {
    int cnt=0;
    while (a!=nullptr)
    {
        cnt++;
    }
    return cnt;
}

// insert

void InsertFirst(node &a, int x) {
    node temp=CreateNode(x);
    if(a==nullptr) {
        a=temp;
    } else {
        temp->next=a;
        a=temp;
    }
}

void InsertAfter(node &a, int x) {
    node temp=CreateNode(x);
    if(a==nullptr) {
        a=temp;
    } else {
        node p=a;
        while (p->next!=nullptr)
        {
            p=p->next;
        }
        p->next=temp;
    }
}


// show list

void ShowList(node a) {
    if(a==nullptr) {
        cout << "----------------------------------" << endl;
        cout << "Empty linked list" << endl;
        cout << "----------------------------------" << endl;
        return;
    } else {
    cout << "----------------------------------" << endl;
    while(a!=nullptr) {
        cout << a->data << " ";
        a=a->next;
    }
    cout << endl;
    cout << "----------------------------------" << endl;
    }
}

// vi

void Search(node a, int x) {
    node p=a;
    int ok=0, pos=1;

    while(p!=nullptr && ok==0) {
        if(p->data==x) {
            ok=1;
            break;
        } else {
            pos++;
            p=p->next;
        }
    }

    if(ok) {
    cout << "----------------------------------" << endl;
    cout <<  "Found in location: " << pos << endl;
    cout << "----------------------------------" << endl;
    } else {
    cout << "----------------------------------" << endl;
    cout <<  "Not found!" << endl;
    cout << "----------------------------------" << endl;
    }
}

// vii

void DeleteFirst(node &a) {
    if(a==nullptr) {
        return;
    } else if(a->next==nullptr) {
        delete a;
        a=nullptr;
    } else {
        node temp=a;
        a=a->next;
        delete temp;
    }
}

void DeleteAfter(node &a) {
    if(a==nullptr) {
        return;
    } else if(a->next==nullptr) {
        delete a;   
        a=nullptr;
    } else {
        node temp=a;
        while(temp->next->next!=nullptr) {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
}

void ClearList(node &a) {
    while (a != nullptr) {
        DeleteFirst(a);
    }
}


void QuickSort(vector<int> &a, int left, int right) {
    if(left>=right) return;
    
    // choose a random latch element
    int randomIndex=rand() % (right-left+1) +left;
    int pivot=a[randomIndex];

    int i=left, j=right;
    while(i<=j) {
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
        if(i<=j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    QuickSort(a, left, j);
    QuickSort(a, i, right);
}

void Sort(node &a) {
    // Chuyển dữ liệu từ danh sách liên kết sang mảng
    vector<int> arr;
    for (node p = a; p != nullptr; p = p->next) {
        arr.push_back(p->data);
    }

    // Sắp xếp mảng
    if (!arr.empty()) {
        QuickSort(arr, 0, arr.size() - 1);

        // Chuyển dữ liệu từ mảng đã sắp xếp về danh sách liên kết
        int i = 0;
        for (node p = a; p != nullptr; p = p->next) {
            p->data = arr[i];
            i++;
        }
    }
}

bool Palindrome( int a){
    if(a>=0 && a<=9) return true;

    int sum=0, p=a;
    while(p!=0) {
        int temp=a%10;
        sum+=sum*10+temp;
        p/=10;
    }
    return (a==sum);
}

bool Armtrong(int a) {
    int countSizeOfNum=0;
    int origin=a, p=a;
    while(a!=0) {
        countSizeOfNum++;
        a/=10;
    }

    int sum=0;
    while(p!=0) {
        sum+=pow(p%10, countSizeOfNum);
        p/=10;
    }
    return (sum==origin);
}

void SplitList(node &a, node &l1, node &l2, node &l3) {
    Initialize(l1);
    Initialize(l2);
    Initialize(l3);

    node p=a;
    while (p!=nullptr)
    {
        if(Palindrome(p->data)) {
            InsertFirst(l1, p->data);
            p=p->next;
        } else if(Armtrong(p->data)) {
            InsertFirst(l2, p->data);
            p=p->next;
        } else {
            InsertFirst(l3, p->data);
            p=p->next;
        }
    }
    
}

int main() {
    node head, is_Palindrome, is_Armtrong, is_Other;
    Initialize(head);
    while (1)
    {
        cout << "-------------Menu-----------------" << endl;

        cout << "0. Thoat\n";

        cout << "1. Chen phan tu vao dau danh sach lien ket\n";

        cout << "2. Chen phan tu vao cuoi danh sach lien ket\n";

        cout << "3. Duyet danh sach lien ket\n";   

        cout << "4. Tim kiem phan tu trong danh sach lien ket\n";  

        cout << "5. Xoa phan tu dau trong danh sach lien ket\n";  

        cout << "6. Xoa phan tu cuoi trong danh sach lien ket\n";  

        cout << "7. Xoa danh sach lien ket\n";  

        cout << "8. Sort danh sach lien ket\n";  

        cout << "9. Chia danh sach lien ket thanh ba dslk khac\n";  

        cout << "10. Duyet danh sach lien ket chua so Palindrome\n";   

        cout << "11. Duyet danh sach lien ket chua so Armstrong\n";   

        cout << "12. Duyet danh sach lien ket chua cac so con lai\n";

        cout << "13. Xoa toan bo danh sach lien ket\n";     

        cout << "----------------------------------" << endl;

        cout << "Moi nhap lua chon: ";

        int choice; cin >> choice;

        if(choice==0) {
            break;
        }
        else if(choice==1) {
            int x; cout << "Nhap vao gia tri can chen: "; cin >> x;
            InsertFirst(head, x);
        }
        else if(choice==2) {
            int x; cout << "Nhap vao gia tri can chen: "; cin >> x;
            InsertAfter(head, x);
        }
        else if(choice==3) {
            ShowList(head);
        }
        else if(choice==4) {
            int x; cout << "Nhap vao phan tu can tim: "; cin >> x;
            Search(head, x);
        }
        else if(choice==5) {
            DeleteFirst(head);
        }
        else if(choice==6) {
            DeleteAfter(head);
        }
        else if(choice==7) {
            ClearList(head);
        }
        else if(choice==8) {
            Sort(head);
        } 
        else if(choice==9) {
            SplitList(head, is_Palindrome, is_Armtrong, is_Other);
        } 
        else if(choice==10) {
        cout << "---------Palindrome----------" << endl;
        ShowList(is_Palindrome);
        }
        else if(choice==11) {
        cout << "---------Armstrong----------" << endl;
        ShowList(is_Armtrong);
        }
        else if(choice==12) {
        cout << "---------Other Number----------" << endl;
        ShowList(is_Other);
        }
        else if(choice==13) {
        cout <<"Deleted!!!!";
        ClearList(is_Palindrome);
        ClearList(is_Armtrong);
        ClearList(is_Other);
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    
}