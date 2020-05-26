        #include <iostream>

        using namespace std;

        int main() {
            int a, n, c = 0, cur = -1, mx = -1;

            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++) {
                cin >> a;
                arr[i] = a;
                if (a == 1) c++;
            }
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0) {
                    cur = max(1, cur+1);
                } else {
                    cur--;
                    cur = max(cur, -1);
                }
                mx = max(cur, mx);
            }
            cout << c+mx << endl;

            return 0;
        }
