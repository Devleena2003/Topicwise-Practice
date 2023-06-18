int maxReachable=0;
for(int i=0;i<n;i++){
    maxReachable=max(maxReachable,arr[i]+i);
    if(i>=maxReachable)
    return 0;
    if(maxReachable>=(n-1))
    return 1;
}