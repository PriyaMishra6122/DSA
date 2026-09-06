class Solution {
    public int[] findErrorNums(int[] nums) {
        int n = nums.length;
        HashMap<Integer, Integer> map = new HashMap<>();
         int duplicate=0;
         int missing=0 ;
         for(int num : nums){
         if(map.containsKey(num)){
            duplicate = num;
         }else{
           map.put(num,1); 
         }
         } 
         for(int i =1;i<=n;i++){
            if(!map.containsKey(i)){
                 missing = i;
            }
         }
         return new int[]{duplicate,missing};
    }
}