class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1||nums.size()==2){
            return 0;
        }else if(nums[0]==nums[nums.size()-1]){
            return 0;
        }else{
        int elements=nums.size()-2;
        bool frontSameCheck=true;
        bool backSameCheck=true;
        for(int i=0;i<nums.size()-1;i++){
            if(frontSameCheck==true&&nums[i]==nums[i+1]){
                elements-=1;
                frontSameCheck=true;
            }else{
                frontSameCheck=false;
            }
            if(backSameCheck==true&&nums[nums.size()-1-i]==nums[nums.size()-2-i]){
                elements-=1;
                backSameCheck=true;
            }else{backSameCheck=false;

            }
            }
            return elements;
        }
        }
        
    };