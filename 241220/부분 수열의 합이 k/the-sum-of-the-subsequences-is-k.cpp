#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> nums[i];
        nums[i] += nums[i - 1];
    }

    int count = 0;
    int right = 0;
    int left = 0;

    while(right <= n){
        int target = nums[right] - nums[left];
        if(target < k){
            right++;
        }
        else if(target > k){
            left++;
        }
        else{
            count++;
            left++;
        }
    }

    cout << count;

    return 0;
}