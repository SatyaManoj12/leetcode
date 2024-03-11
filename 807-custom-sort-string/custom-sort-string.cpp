class Solution {
public:
    string customSortString(string order, string s){
        map<char, int> A;
        for (int i = 0; i < s.size(); i++)
            A[s[i]]++;
        string S = "";
        for (int i = 0; i < order.size(); i++) {
            if (A.find(order[i])!=A.end()) {
                while (A[order[i]] != 0) {
                    S += order[i];
                    A[order[i]]--;
                }
            }
        }
        for (auto it : A) {
            if (A[it.first] != 0) {
                while (A[it.first] != 0) {
                    S += it.first;
                    A[it.first]--;
                }
            }
        }
        return S;
    }
};