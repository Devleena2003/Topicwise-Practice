 int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      int count=1;
      int maxCount=INT_MIN;
      for(int i=1;i<N;i++){
          if(arr[i]-arr[i-1]==1)
          count++;
          else if(arr[i]-arr[i-1]==0)
          continue;
          else{
              maxCount=max(count,maxCount);
              count=1;
          }
      }
      maxCount=max(count,maxCount);
      return maxCount;
    }