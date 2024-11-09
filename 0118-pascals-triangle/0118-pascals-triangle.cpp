class Solution {
public:
    vector<int> triangle (int row){
        long long ans = 1;
        vector<int> ansrow ;
        ansrow.push_back(1);
        for(int col = 1;col < row;col++){
            ans = ans*(row-col);
            ans = ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row= 1;row<=numRows;row++){
             ans.push_back(triangle(row));
        } 
        return ans;
    }
};