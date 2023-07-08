class Solution {
public:
int combination(int n,int r){
        double ans=1,N=n;
        for(double i=1;i<=r;i++){
            ans*=(N-(i-1));
            ans/=i;
        }
        return ans;
    }
    int uniquePaths(int m, int n) {
        //Combinatrial solution 

        /*  
        Total_right_step_to_take = n-1    
        Total_down_step_to_take = m-1
        Total step = n-1+m-1 = m+n-2
        We want to choose m-1 down path from this total paths which is (m+n-2)C(m-1)
        which will also be equal to (m+n-2)C(n-1)
        Answer = (m+n-2)C(m-1) or (m+n-2)C(n-1)
        */

        return combination(m+n-2,min(n-1,m-1));
    }
};
