class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> numIndexMap; 
            
           
            for (int i = 0; i < nums.size(); i++) {
                numIndexMap[nums[i]] = i;
            }
    
        
            for (int j = 0; j < nums.size(); j++) {
                int complement = target - nums[j];
                if (numIndexMap.find(complement) != numIndexMap.end() && numIndexMap[complement] != j) {
                    return {j, numIndexMap[complement]};
                }
            }
    
            return {}; 
        }
    };
    