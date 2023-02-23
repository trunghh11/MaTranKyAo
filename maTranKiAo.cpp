#include <iostream>
#include <map>
#include <string>
using namespace std;

// int main() {
//     int n; cin >> n;
//     while (n > 10000) {
//         cout << "Nhập n <= 10000: ";
//         cin >> n;
//     }
//     map<int,int> mp;
//     for (int i = 0; i < n; i++) {
//         int x; cin >> x;
//         mp[x]++;
//         if (mp[x] >= 2) {
//             cout << "Yes" << endl;
//             return 0;
//         }
//     }
//     cout << "No" << endl;
//     return 0;
// }

// int main() {
//     string s; cin >> s;
//     while (s.length() > 100) {
//         cout << "Nhập xâu s có độ dài <= 100: "; cin >> s;
//     }
//     string a = s;
//     reverse(a.begin(), a.end());
//     if (a == s) cout << "Yes" << endl;
//     else cout << "No" << endl;
//     return 0;

// }


int main(){
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }
    
    int cnt = 1,row = n, col = n/2;
    int i = 0, j = n/2;
    a[i][j] = cnt;
    while (cnt < n*n) {
        cnt++;
        if (row == 0) row += n;
        i = (row -1)% n;
        j = (col + 1)% n;
        if (a[i][j] == 0 ) {
            a[i][j] = cnt;
            row--;
            col++;
        }
        else {
            i = (row + 1)%n;
            j = col % n;
            a[i][j] = cnt;
            row++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++ ) {
           cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    
}