#include <iostream>
using namespace std;

int main() {
    int box[100], n;
    bool flag = 1;

    cin >> n;
    for(int i = 0; i < n; ++i) { cin >> box[i]; }

    for (int i = 0; flag; ++i) {
        flag = 0;
        for (int j = n - 1; j >= i + 1; --j) {
            if (box[j] < box[j-1]) {
                swap(box[j], box[j-1]);
                flag = 1;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        cout << box[i];
    }
    return 0;
}