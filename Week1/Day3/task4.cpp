/*Given an array of integers arr, a lucky integer is an integer which has a frequency in the array equal to its value.

Return a lucky integer in the array. If there are multiple lucky integers return the largest of them. 
If there is no lucky integer return -1. */

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>h;
        for(int i=0;i<arr.size();i++){
            if(h.find(arr[i])==h.end()){
                h[arr[i]]=1;
            }else
                h[arr[i]]++;
        }
        int ans=-1;
        for(auto it=h.begin();it!=h.end();it++){
            if(it->first==it->second and it->first>ans){
                ans=it->first;
            }
        }
        return ans;
    }
};