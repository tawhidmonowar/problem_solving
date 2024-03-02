class Solution {
public:
    bool isPalindromic(string str)
    {
        string temp = str;
        reverse(str.begin(), str.end());
        return (temp==str)? true : false;
    }

    string converting_to_base(int base, int number)
    {
        string res="";
        stringstream ss;

        while(number>0)
        {
            ss << (number%base);
            string temp;
            ss >> temp;
            res += temp;
            number = number/base;
            ss.clear();
        }

        reverse(res.begin(),res.end());
        return res;
    }

    bool isStrictlyPalindromic(int number) {
        for(int i=2; i<number-1; i++)
        {
            string base_str = converting_to_base(i,number);
            if(isPalindromic(base_str))
            {
                continue;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};