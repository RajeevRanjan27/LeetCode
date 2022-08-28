class Solution {
public:
    
    string fin="";
    
    void add(string str1,string str2)
    {
        string res="";
        int i=str1.size()-1;
        int j=str2.size()-1;
        int carry=0;
        while(i>=0||j>=0||carry)
        {
            int sum=0;
            if(i>=0)
            {
                sum+=str1[i]-'0';
                i--;
                
            }
            if(j>=0)
            {
                sum+=str2[j]-'0';
                j--;
            }
            sum+=carry;
            carry=sum/10;
            sum%=10;
            res+=to_string(sum);
        }
        reverse(res.begin(),res.end());
        fin=res;
        return;
    
    }
    
    
    string multiply(string num1, string num2) {
        
      if(num1=="0"||num2=="0")
      {
          return "0";
      }
      //string str= to_string(x);
        int a=num1.size()-1;
        int b=num2.size()-1;
        
       
        string cnt="";
        for(int i=a;i>=0;i--)
        {
            string temp="";
             int curr=0;
                int x=0;
            for(int j=b;j>=0||curr;j--)
            {
               if(j>=0)
               {x=(num1[i]-'0')*(num2[j]-'0');}
                x+=curr;
                curr=x/10;
                x=x%10;
                temp+=to_string(x);
                x=0;
                
            }
            reverse(temp.begin(),temp.end());
            temp+=cnt;
            cnt+="0";
            add(temp,fin);
          //  cout<<fin<<"\n";
            
        }
        return fin;
    }
};