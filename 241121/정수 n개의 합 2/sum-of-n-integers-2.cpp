#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;
    vector<int> prefix_sum(n + 1, 0);

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        prefix_sum[i] = prefix_sum[i-1] + x;
    }

    int answer = numeric_limits<int>::lowest();

    for(int i = k; i <= n; i++){
        answer = max(answer, prefix_sum[i] - prefix_sum[i - k]);
    }

    cout << answer;

    return 0;
}