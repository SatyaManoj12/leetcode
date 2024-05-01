class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0,j=0;
        while (j < word.size()) {
            if(word[j]==ch)
            {
                while(i<=j)
                {
                    swap(word[i],word[j]);;
                    i++;
                    j--;
                }
                break;
            }
            j++;
        }
        return word;
    }
};