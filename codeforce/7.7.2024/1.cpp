#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
GG is a new coach in town ready to present several seminars during the week. Wanting to be very exclusive, he only allows people to enter whose name is a palindrome. Recall that a palindrome is a word that is read the same backwards. As you can imagine, this really narrows down how many people are able to enter.

As such, on Wednesday afternoons, he changes the entry requirements in order to gift the unwashed masses with his outstanding knowledge. The requirement becomes the following: you're able to enter only if you're able to find an existing palindrome of length greater than or equal to 2
 within your name.

For each person that will try to attend the seminar this Wednesday afternoon, help GG determine whether or not access will be granted.

Input
The first line contains a single integer n
 (1≤n≤3×105)
 — the amount of people that will try to attend the seminar.

The next n
 lines contain a single string s
 (1≤|s|≤20)
 — their names. The names consist only of lowercase letters of the English alphabet.

Output
For each person, print out yes if access is granted, no otherwise.

Example
inputCopy
3
hannah
vieira
limevaz
outputCopy
yes
yes
no



15
hannah
vieira
limevaz
dfhjjghsafklj
sdghsjafhaw
sdgfakldfh
jshdjfasfhjsdg
shfjdhjkaw
sjdfhjkashf
sdhfjadsafjawf
dshfdhfeieakjsfh
hdgjksdhfjlsadf
bdjkhgsjflsjd
jhitughkwrfrsdlkg
vbvfhaejwkrhrefhdsjfh
 
*/

bool isPalindrome(string s) {
    int r=s.length()-1, l=0;
    while(l<r) {
        if(s[r]!=s[l]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
clock_t start, end;
start=clock();
    

unsigned int n; cin >> n;
cin.ignore();
int cnt=0;
while(n--) {
    string s; cin >> s;
    bool found=false;
    for(int j=0; j<s.length()-1; j++) {
        for(int i=2; i<=s.length()-j; i++) {
            if(isPalindrome(s.substr(j, i))) {
                found=true;
                break;
            }
        }
        if(found) break;
    }
        if (found) {
            cout << ++cnt<< "yes" << endl;
        } else {
            cout << ++cnt<< "no" << endl;
        }
}
end=clock();
double timeTaken=double(end-start)/double(CLOCKS_PER_SEC);
cout << "\nTime taken by program is: " << fixed << setprecision(20) << timeTaken << endl;

return 0;
}