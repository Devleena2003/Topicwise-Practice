 int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        if(n==0)
        return -1;
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++){
            if(array[i]==i+1)
            continue;
         return {i+1};    
        }
       