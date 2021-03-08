#include <iostream>
using namespace std;
int main(int argc, char **argv) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int low;
    cin >> low;

    int high;
    cin >> high;

    for (int num = low; num <= high; num++) {
        int count = 0;
        // try to divide n and increase count
        for (int div = 2; div * div <= num; div++) {
            if (num % div == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            cout << num << endl;
        }

    }


}
