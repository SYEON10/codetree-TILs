#include <iostream>
#include <vector>
using namespace std;

int CountPoints(const vector<int> &nums, int start, int end){
    int left = 0, right = nums.size();
    while(left < right){
        int mid = (left + right) / 2;
        if(nums[mid] < start){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }

    int begin = right;
    left = 0;
    right = nums.size();

    while(left < right){
        int mid = (left + right) / 2;
        if(nums[mid] < end){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }

    int last = left;

    return last - begin + 1;
}

int main() {
    
    int n, q;
    cin >> n >> q;

    vector<int> nums(n, 0);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for(int i = 0; i < q; i++){
        int start, end;
        cin >> start >> end;

        cout << CountPoints(nums, start, end) << '\n';
    }
    
    return 0;
}