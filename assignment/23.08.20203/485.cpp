class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count=0;
        int cnt = 0;

        for (int i=0; i<nums.size(); i++){

            if (nums[i]==1){
                count++;
                cnt = max(cnt,count);
            }
            else {
                count=0;
            }
        }
        return cnt;
    }
};