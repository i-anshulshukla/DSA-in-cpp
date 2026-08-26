class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        
        while(end>start){
            int middle=start+((end-start)/2);
            if(arr[middle]>arr[middle+1]&&arr[middle]>arr[middle-1]){
                return middle;
            }
            if(arr[middle+1]>arr[middle]){
                start=middle+1;
            }else{
                end=middle-1;
            }
        }
        return end;
    }
};