#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
----------------------------------------theory---------------------------------
--------------------------------------------------------------------------------
chu trinh euler la chu trinh di qua moi canh cua do thi dung mot lan
do thi co chu trinh euler duoc goi la do thi euler

do thi co duong di euler duoc goi la do thi nua euler, do thi euler se la do thi 
nua euler
---------------------------------------------------------------------------------



---------------------------------------------------------------------------------
-----------------dieu kien co chu trinh euler va duong di euler-----------------
---------------------------------------------------------------------------------
do thi VO HUONG co chu trinh euler: 
+cach dinh bac khac 0 lien thong voi nhau
+so bac cua moi dinh la so chan

do thi VO HUONG co duong di euler:
+cach dinh bac khac 0 lien thong voi nhau
+co hai dinh bat le(bat dau tu dinh bac le 1 va ket thuc o dinh bac le 2)
---------------------------------------------------------------------------------
do thi CO HUONG co chu trinh euler:
+cac dinh co bac khac 0 cua do thi cung mot tp lien thong yeu
+so bac vao cua moi dinh bang so bac ra cua moi dinh

do thi CO HUONG co duong di euler:
+cac dinh co bac khac 0 cua do thi cung mot tp lien thong yeu 
+ton tai 2 dinh u, v ma deg+(u) - deg-(u) = 1 va deg-(v) - deg+(v) = 1
*/

/*
THUAT TOAN TIM CHU TRINH EULER
1. Kiem tra dieu kien co chu trinh euler
2. Tim chu trinh euler
2.1. Chon mot dinh bat ki cua do thi lam dinh xuat phat
2.2. Kiem tra xem co canh nao
di qua dinh xuat phat khong, neu co thi chon mot canh do lam canh xuat phat
2.3. Lap lai buoc 2 cho den khi khong con canh nao di qua dinh xuat phat
2.4. Ket thuc
*/

int egdes, vertices;
set<int> adj[MAX];
int degree[MAX];

void init() {
    cin >> vertices >> egdes;
    for(int i=0; i<egdes; i++) {
        int x, y; cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
        degree[x]++;
        degree[y]++;
    }
}

void eulerPath(int v) {
    stack<int> st;
    vector<int> result;
    st.push(v);
    while(!st.empty()) {
        int x = st.top();
        if(!adj[x].empty()) {
            int y=*adj[x].begin();
            st.push(y);
            adj[x].erase(y);
            adj[y].erase(x);
        } else {
            result.push_back(x);
            st.pop();
        }
    }
    reverse(result.begin(), result.end());
    for(auto it: result ) {
        cout << it << " ";
    }
}

int main() {
init();
eulerPath(1);
return 0;
}


/*
5 6
1 2 
2 3
3 1
2 4
4 5
2 5
*/