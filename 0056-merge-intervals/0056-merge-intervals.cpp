class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>MergeInterval;
        if(intervals.size()==0){
            return MergeInterval;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>tempinterval=intervals[0];
        for(auto it:intervals){
            if(it[0]<=tempinterval[1]){
                tempinterval[1]=max(it[1],tempinterval[1]);
            }
            else{
                MergeInterval.push_back(tempinterval);
                tempinterval=it;
            }
        }
        MergeInterval.push_back(tempinterval);
        return MergeInterval;
    }
};