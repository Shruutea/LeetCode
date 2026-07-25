class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> arr2;
        for (int i=0; i<n; i++){
            if (arr2.size()==n){
                break;
            }
            if (arr[i]==0){
                arr2.push_back(0);
                arr2.push_back(0);
            }else{
                arr2.push_back(arr[i]);
            }
        }
        for (int i=0; i<n; i++){
            arr[i]=arr2[i];
        }
    }
};