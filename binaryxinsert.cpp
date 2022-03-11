#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int j = 1; j < n; j++) {
        if (a[j] < a[j - 1]){
            int start = 0, end = j - 1;
            while (start + 1 < end) {
                int i = (end - start + 1)/2;
                if (a[j] < a[i]) {end = i;}
                else {start = i;};
            };
            if (a[j] < a[start]) {end = start;};
            int temp = a[j];
            for (int x = j; x > end; x--) {
                a[x] = a[x-1];
            };
            a[end] = temp;
        }
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}