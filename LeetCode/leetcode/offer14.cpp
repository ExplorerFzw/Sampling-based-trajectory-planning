#include"offer14.h"
#include<math.h>
using namespace std;
int Solution::cuttingRope(int n){
        int dp[100] = {0};
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                int temp = max(dp[j],j) * max(dp[i-j],i-j);
                dp[i] = max(dp[i],temp);
            }
        }
        return dp[n];
}


