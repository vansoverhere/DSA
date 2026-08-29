class Solution {

private:
    void combinations(int indx, string digits, vector<string>&ans, string output, string mapping[]){
        if(indx==digits.size()){
            ans.push_back(output);
            return;
        }

        int num=digits[indx]-'0';
        string val=mapping[num];

        for(int i=0; i<val.size(); i++){
            output.push_back(val[i]);
            combinations(indx+1,digits,ans,output,mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        string output="";
        vector<string> ans;

        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        combinations(0, digits, ans, output, mapping );

        return ans;
    }
};