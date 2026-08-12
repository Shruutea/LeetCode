class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0;i<n ;i++){
            if (i==n-1){
                arr[i] = -1;
            } else {
                int largest = arr[i+1];
                for(int j = i+1; j<n; j++){
                    if (arr[j] >= largest){
                        arr[i] = arr[j];
                        largest = arr[j];
                    }
                }
            }
        }
        return arr;
    }
};