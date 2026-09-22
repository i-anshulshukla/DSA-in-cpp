class Solution {
public:
    long long int reverse(long long int x) {
        long long int ans=0;
    long long int countFor=x;
    long long int count=1;
    while(countFor/10!=0){
        countFor/=10;
        count++;
    }
    //reverse
    while(x/10!=0||x%10!=0){
        long long int multiply=1;
        for(int i=1;i<count;i++){
            multiply*=10;
        }
        ans+=(x%10)*multiply;
        x=x/10;
        count-=1;
    }
    if(ans<-2147483648||ans>2147483647){return 0;}
      
       return ans; 
    }
    
};
