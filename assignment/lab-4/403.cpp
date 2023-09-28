class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nqe;
        stack<int> st;
        
          int n=nums.size();
        for(int i=2*nums.size()-1; i>=0; i--){
            while(!st.empty() && nums[i%n]>=st.top()){
                st.pop();
            }
            if(i<n){
                if(st.empty()==false){   
                nqe.push_back(st.top());
               }     else nqe.push_back(-1);
            }
            st.push(nums[i%n]);  
        }
        reverse(nqe.begin(),nqe.end());
            return nqe;
    }
};