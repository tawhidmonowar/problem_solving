class Solution {
public:
    string maximumOddBinaryNumber(string str) {

    int one = count(str.begin(),str.end(),'1');
    int zero = count(str.begin(),str.end(),'0');

    if(one>1)
    {
        one--;
        string temp_1(one,'1');
        string temp_0(zero,'0');
        string res = temp_1 + temp_0 + '1';
        return res;

    }
    else
    {
        string temp_0(zero,'0');
        string res = temp_0 + '1';
        return res;
    }
    }
};