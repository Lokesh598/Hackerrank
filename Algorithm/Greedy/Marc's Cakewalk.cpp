long marcsCakewalk(vector<int> calorie) {
    vector<int> arr = calorie;
    
    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    long total = 0;
    long power = 0;
    for(int i = 0; i<arr.size(); i++) {
        power = pow(2,i);
        total += (power * arr[i]);
        power = 0;
    }
    return total;
}
