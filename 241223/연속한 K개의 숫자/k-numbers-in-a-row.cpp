#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int main() {
    int n, k, b;
    cin >> n >> k >> b;
    vector<int> prefix(n + 1, 0);

    while(b--){
        int x;
        cin >> x;
        prefix[x] = 1;
    }

    for(int i = 1; i <= n; i++){
        prefix[i] += prefix[i-1];
    }

    int answer = INT_MAX;
    for(int i = k; i <= n; i++){
        answer = min(answer, prefix[i] - prefix[i - k]);
    }

    cout << answer;

    return 0;
}