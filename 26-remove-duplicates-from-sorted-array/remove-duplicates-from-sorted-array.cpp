class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int i =0;
        for(int num:nums){
            if(freq[num]>0){
                nums[i++] = num;
                freq[num]=0;
            }
        }
        return i;
    }
    
};