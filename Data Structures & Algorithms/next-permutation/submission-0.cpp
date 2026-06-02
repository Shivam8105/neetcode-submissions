class Solution {
public:
void reverse(int i, int j, vector<int>& nums){
    while(i < j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int idx = -1;

        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                idx = i;
                break;
            }
        }

        if(idx == -1){
            reverse(0,n - 1,nums);
            return;
        }

        for(int i = n - 1; i > idx; i--){
            if(nums[i] > nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        reverse(idx + 1,n - 1,nums);
    }
};