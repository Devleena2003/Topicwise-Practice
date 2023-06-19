 long long trappingWater(int arr[], int n){
        // code here
            int left[n], right[n];
        long long res = 0;
        int maxLeft = 0, maxRight = 0;
        for (int i = 0; i < n; i++) {
            maxLeft = max(maxLeft, arr[i]);
            left[i] = maxLeft;
        }
        for (int i = n - 1; i >= 0; i--) {
            maxRight = max(maxRight, arr[i]);
            right[i] = maxRight;
        }
        for (int i = 0; i < n ; i++) {
            res += (min(left[i], right[i]) - arr[i]);
        }
        return res;
    }