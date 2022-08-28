class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string str="";
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        // string ans;
        // for(int i=n-1,j=m-1;i>=0||j>=0||carry;i--,j--)
        
        while(j>=0 || i>=0|| carry)
            
        {
            int x=0;
                if(i>=0 )
                {
                    x+= (num1[i]-'0');
                    i--;
                }
            if(j>=0)
            {
               x +=(num2[j]-'0');
                j--;
            }
            
               x+=carry;// stoi(num1[i])+ stoi(num2[j])+carry;
            carry=x/10;
            x=x%10;
           str=str+ to_string(x);
           
            
                        
            
        }
        // if(carry!=0)
        // {
        //     ans.push_back(carry);
        // }
        
        reverse(str.begin(),str.end());
        return str;
        
    }
};