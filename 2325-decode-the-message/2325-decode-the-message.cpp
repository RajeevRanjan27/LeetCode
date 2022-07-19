class Solution {
public:
    string decodeMessage(string key, string message) {
        
        
        char arr[128]={},original='a';
        string ans=message;
        for(int i=0;key[i]!='\0';i++)
        {
            if(isalpha(key[i])&&arr[key[i]]==0)
            {
                arr[key[i]]=original++;
            }
        }
        for(int i=0;message[i]!='\0';i++)
        {  
            if(message[i]==' ')
            {
                ans[i]=message[i];
            }
            else
            {
                ans[i]=arr[message[i]];
            
            }
        }
        return ans;
        
    }
};