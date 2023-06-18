   int minJumps(int arr[], int n){
        // Your code here
      int jump=0,pos=0,dest=0;

          for(int i=0;i<n-1;i++){

          dest=max(dest,arr[i]+i);

                  if(pos==i){

                    pos=dest;

                     jump++;

                      }
                }

            if(pos>=(n-1))

          return jump;

        else

        return -1;
    }