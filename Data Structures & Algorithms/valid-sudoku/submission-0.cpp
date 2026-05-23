class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector< unordered_set<char>> rows(9) ;
       vector< unordered_set<char>> cols (9); 
       vector <unordered_set<char>> squares(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c=board[i][j];
                if(c=='.')continue;
                if(rows[i].count(c))return false;
                if(cols[j].count(c))return false;
                int box=(i/3)*3+(j/3);
                if(squares[box].count(c))return false;

                rows[i].insert(c);
                cols[j].insert(c);
                squares[box].insert(c);
            }
        }
        return true;
    }
};