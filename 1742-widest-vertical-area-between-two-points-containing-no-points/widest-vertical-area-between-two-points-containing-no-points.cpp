class Solution {
public:
bool compare(const vector<int> &a, const vector<int> &b) {
       // return accumulate(a.begin(), a.end(), 0) < accumulate(b.begin(), b.end(), 0);
       return a[0]<b[0];
        }
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxi=0;
    sort(points.begin(), points.end());
for (int i=0;i<points.size()-1;i++)
{
    maxi = max(maxi,points[i+1][0]-points[i][0]);
}
return maxi;


    }
};