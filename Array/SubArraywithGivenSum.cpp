 vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        if(s==0)
        return{-1};
       int start = 0;
       long long sum = 0;
       for(int end=0; end<n; ++end)
       {
           sum += arr[end];
           while(sum > s)
           {
               sum -= arr[start++];
           }
           if(sum == s)
           {
               return {start+1, end+1};
           }
       }
       return {-1};
    }