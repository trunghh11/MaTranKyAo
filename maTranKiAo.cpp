#include <iostream>
#include <map>
#include <string>
using namespace std;

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
