class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int manhattanDist = 0, smallestMD = INT_MAX, index = -1;
        for(int i = 0; i<points.size(); i++){
            if(x==points[i][0] || y==points[i][1]){   // checking in the 2D array if the either the first or second element matches x or y respectively
                manhattanDist = abs(x - points[i][0]) + abs(y - points[i][1]); //calculating md as per the question
                if( smallestMD > manhattanDist ){         // if the current MD is less than the current smallestMD, then the current MD becomes the smallestMD
                    smallestMD = manhattanDist;
                    index = i;                            //index is stored in a variable so that it doesn't return something else
                }     
            }      
        }
        return index;
    }
};

// class Solution {
// public:
//     int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
//         int small=INT_MAX;
//         int index=-1;
//         for(int i=0;i<points.size();i++){
//             if(points[i][0]==x || points[i][1]==y){
//                 int m_d=abs(x-points[i][0]) + abs(y-points[i][1]);
//                 if(m_d<small){
//                     small=m_d;
//                     index=i;  
//                 }
//             } 
//         }
//         return index;
//     }
// };