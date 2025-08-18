class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low=1,high=nums.size()-1;
        
       

        while(low<=high){
            int mid=(low+high)/2;
            int count = 0;
             for (int num : nums) {
        if (num <= mid) 
        count++;
}
            if(count>mid){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
