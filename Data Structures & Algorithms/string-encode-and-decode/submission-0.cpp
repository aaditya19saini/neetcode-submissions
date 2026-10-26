class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(const string& s :strs){ //takes each string in the strs, one at a time and refer it to as s
            res.append(to_string(s.size()));  //to_string=converts the number(size) into a string 
            res.push_back('#');
            res.append(s);

        } 
        return res;


    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){j++;} //finding the delimiter
        
        int length=stoi(s.substr(i,j-i));
        i=j+1;
        j=i+length;
        res.push_back(s.substr(i,length));
        i=j;

    }
    return res;}
};
