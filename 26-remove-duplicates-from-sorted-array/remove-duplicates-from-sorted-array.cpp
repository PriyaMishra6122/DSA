class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        for(int num: nums){
           if(find(temp.begin(), temp.end(), num) == temp.end()){
            temp.push_back(num);
           }
        }
        for(int i =0; i<temp.size();i++){
            nums[i] = temp[i];

        }
        return temp.size();
    }
};