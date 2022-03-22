int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());// first sort the array
    
    int minimumDifference = INT_MAX;

for (int i = 0; i < arr.size() - 1; i++) {
    int difference = arr[i + 1] - arr[i];
    
    if (difference < minimumDifference) {
        minimumDifference = difference;
        
        if (minimumDifference == 0) {
            return 0;
        }
    }
}

return minimumDifference; 
}
