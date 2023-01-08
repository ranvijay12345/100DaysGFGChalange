
class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        map<int, int> ump;
        for(int i=0;i<n;i++)
        {
            ump[arr[i]%k]++;
        }
        long long res=0;
        for(auto x: ump)
        {
            res=res+(x.second*(x.second-1))/2;
        }
        return res;
    }
};