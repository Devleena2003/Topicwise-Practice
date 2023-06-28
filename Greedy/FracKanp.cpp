  static bool comp(Item a, Item b){
        double r1=(double)a.value/(double)a.weight;
          double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,&comp);
        int currW=0;
        double finalVal=0.0;
        for(int i=0;i<n;i++){
            if(currW+arr[i].weight<=W){
                currW+=arr[i].weight;
                finalVal+=arr[i].value;
            }
            else{
                int remain=W-currW;
                finalVal= finalVal+(double)arr[i].value/(double)arr[i].weight*remain;
                break;
            }
        }
        return finalVal;
    }