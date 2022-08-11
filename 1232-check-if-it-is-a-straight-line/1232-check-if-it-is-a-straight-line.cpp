class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
      float y = coordinates[1][1]-coordinates[0][1];
        float x=coordinates[1][0]-coordinates[0][0];
        
       // float m=(x==0)?0:y/x;
        
        for(int i=2;i<coordinates.size();i++)
        {
            
//             float tempx=coordinates[i][0]-coordinates[i-1][0];
//              float tempy = coordinates[i][1]-coordinates[i-1][1];
//             float tempm=(tempx)?(tempy/tempx):0;
        
//             if(m!=tempm)
            if(x*(coordinates[i][1]-coordinates[0][1])!=(coordinates[i][0]-coordinates[0][0])*y)
            
                return false;
        }
        return true;
        
    }
};