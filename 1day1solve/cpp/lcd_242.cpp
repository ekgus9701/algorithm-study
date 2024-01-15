class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<char> v1;
        vector<char> v2;

        for(int i=0;i<s.size();i++){
            v1.push_back(s[i]);
        }

        for(int i=0;i<t.size();i++){
            v2.push_back(t[i]);
        }

        if(v1.size()!=v2.size()) return false;

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]) return false;
        }

        return true;



       
        return false;
        
    }
};
