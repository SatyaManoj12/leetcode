class Solution:
    def firstUniqChar(self, s: str) -> int:
        a={}
        for i in s:
            if i not in a:
                a[i]=1
            else :
                a[i]+=1
        for i in a:
            if a[i]==1:
                    return s.index(i)
        return -1
       
        