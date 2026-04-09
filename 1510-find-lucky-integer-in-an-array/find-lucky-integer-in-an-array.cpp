class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        int n = arr.size();

        for(int i=0;i<n;i++){
            if(m.count(arr[i])){
                m[arr[i]]++;
            } else {
                m[arr[i]] = 1;
            }
        }
        int maxNum = 0;
        for(auto el : m){
            if(el.first == el.second){
                maxNum = max(maxNum, el.second);
            }
        }

        return maxNum == 0 ? -1 : maxNum;
    }
};