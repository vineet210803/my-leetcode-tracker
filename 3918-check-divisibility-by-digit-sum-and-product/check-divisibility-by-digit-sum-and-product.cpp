class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int x=n;
        while(n>=1){
            int num=n%10;
            sum+=num;
            mul*=num;
            n=n/10;
        }
        int ans=sum+mul;
        return x%ans==0;
    }
};