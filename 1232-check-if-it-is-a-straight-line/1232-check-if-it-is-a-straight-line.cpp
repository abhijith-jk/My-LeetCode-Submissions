class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x_diff = coordinates[1][0] - coordinates[0][0];
        int y_diff = coordinates[1][1] - coordinates[0][1];
        
        int curr_Xdiff, curr_Ydiff;
        for(int i = 2; i<coordinates.size(); i++){
            curr_Xdiff = coordinates[i][0] - coordinates[i-1][0];
            curr_Ydiff = coordinates[i][1] - coordinates[i-1][1];
            
            if(y_diff*curr_Xdiff != x_diff*curr_Ydiff)
                return false;
        }
        return true;
    }
};

// condition for straight line is (X2 - X1) and (Y2-Y1) should always be consistent for all points, hence we check whether the Ydifference/currentXdifference is = Xdifference/currentYdifferrence, if the difference stayed consistent, then it'll cancel out and be 1 and we return true, else we return false.