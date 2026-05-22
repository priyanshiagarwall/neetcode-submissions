class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n1;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n2;i++){
            char ch=t[i];
            if(mp.find(ch)!=mp.end()){
                mp[ch]--;
                if(mp[ch]==0) mp.erase(ch);
            }
            else return false;
        }
        return (mp.size()>0) ? false : true;
    }
};
