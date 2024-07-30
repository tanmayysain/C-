#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums){
    int left = 0;
    int right = nums.size()-1;
    int totalSum = 0;

    for(int num : nums){
        totalSum += num;
    }

    while(left<=right){
        int mid = left+(right-left)/2;
        int leftSum = totalSum - nums[mid];
        int rightSum = totalSum - nums[mid+1];

        if(leftSum == rightSum){
            return mid;
        }
        else if(leftSum>rightSum){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
}
 
int main(){
vector<int> nums = {1,7,3,6,5,6};
int pivot = pivotIndex(nums);

cout<<"Leftmost pivot " << pivot <<endl;

return 0;
 
}