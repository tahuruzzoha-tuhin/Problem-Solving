class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a(2);
        for(int i=0;i<nums.size();i++){
            int y = target-nums[i];
            
            auto x = find(nums.begin(), nums.end(), y);
            if( x!= nums.end() &&  x- nums.begin()!= i){
                a[0] = i;
                a[1] = x- nums.begin();
                break;
            }
        }
        return a;
    }
};
