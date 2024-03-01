class Solution {
public:
    string maximumOddBinaryNumber(string str) {

        string temp_1 ="", temp_0="";
        int one = 0;

        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='1')
            {
                one++;
                temp_1+='1';
            }
            else
            {
                temp_0+='0';
            }
        }

        if(one>1)
        {
            temp_1.erase(temp_1.length()-1, 1);
            string res = temp_1+temp_0+'1';
            return res;
        }
        else
        {
            string res = temp_0 + temp_1;
            return res;
        }
    }
};