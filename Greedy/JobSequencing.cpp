 vector<int> JobScheduling(Job arr[], int n) 
    { 
       
       sort(arr,arr+n,comp);
        vector<int>cpu(n,-1);
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead)-1;j>=0;j--){
                if(cpu[j]==-1){
                    cpu[j]=i;
                    break;
                }
            }
        }
        
        int ct=0;
        int ans=0;
        for(int j=0;j<n;j++){
            if(cpu[j]!=-1){
                ct+=1;
                ans+=arr[cpu[j]].profit;
            }
        }
        return vector<int>({ct,ans});
    } 