// Problem: 1232. Check If It Is a Straight Line
// Difficulty: Easy
// Approach: Used cross multiplication instead of division to avoid
//           floating point errors.
//           If dy1*dx2 == dy2*dx1 for all points -> straight line!
// Runtime: 0ms | Beats 100%

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int n = coordinates.size();

        int d_y = coordinates[1][1] - coordinates[0][1];
        int d_x = coordinates[1][0] - coordinates[0][0];

        for(int i = 2; i < n; i++){

            int d_y_i = coordinates[i][1] - coordinates[0][1];
            int d_x_i = coordinates[i][0] - coordinates[0][0];

            if(d_y_i * d_x != d_y * d_x_i){
                return false;
            }
        }
        return true;
    }
};