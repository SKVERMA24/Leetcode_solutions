class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> vecg;
        int a ,b ;
        int n = grid.size();


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                vecg.push_back(grid[i][j]);
            }
        }

        sort(vecg.begin(), vecg.end());


        for (int i = 1; i < n * n; i++) {
            if (vecg[i] == vecg[i - 1]) {
                a = vecg[i]; 
                vecg.erase(vecg.begin()+i);
                break;
            }
        }

        for (int i = 0; i <( n * n-1); i++) {
            
            if (vecg[i] != i+1 ) {
                b = i + 1; 
             break;
            }
            else{
                b = n*n;
            }
        }

        return {a, b};
    }
};
