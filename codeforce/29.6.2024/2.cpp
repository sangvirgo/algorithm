#include <bits/stdc++.h>
  using namespace std;
  #define MAX 100

  string theDuck(int L, int R) {
    vector<string> S(20);
    string result="ahihidongoc";
    S[1]="a", S[2]="hihi", S[3]="dongoc";

    for(int i=4; i<20; i++) {
        S[i] = S[i - 3] + S[i - 2] + S[i - 1];
        result += S[i];
    }

    return result.substr(L -1, R-L+1);
  }

  int main() {
    clock_t start, end;
    start=clock();
    int L, R;
    cin >> L >> R;


    string s = theDuck(L, R);

    cout << s;

  end=clock();
  double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
  cout << "\nTime taken by program is: " << fixed << setprecision(20)<< time_taken << endl;
    return 0;
  }