class Solution {
public:
    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            string a=strs[i];
            int n=a.size();
            ans+=to_string(n);
            ans+='#';
            ans+=a;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;

        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int len=stoi(s.substr(i,j-i));

            string start=s.substr(j+1,len);
            res.push_back(start);

            i=j+1+len;
        }
        return res;
    }
};
