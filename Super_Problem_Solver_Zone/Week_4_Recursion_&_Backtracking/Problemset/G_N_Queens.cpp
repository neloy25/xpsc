#include<bits/stdc++.h>
using namespace std;

#define vs vector<string>
#define vvs vector<vs>

class Solution {
    vvs ans;

    bool isSafe(vs & board, int row, int col, int n) {
        for(int i = 0; i < n; i++) {
            if(board[row][i] == 'Q') return false;
        }
        
        for(int i = 0; i < n; i++) {
            if(board[i][col] == 'Q') return false;
        }

        for(int i = row, j = col; i < n && j < n; i++, j++) {
            if(board[i][j] == 'Q') return false;
        }

        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if(board[i][j] == 'Q') return false;
        }

        for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if(board[i][j] == 'Q') return false;
        }

        for(int i = row, j = col; i < n && j >= 0; i++, j--) {
            if(board[i][j] == 'Q') return false;
        }

        return true;
    }

    void f(int row, vs &board, int n) {
        if(row == n) {
            ans.push_back(board);
            return;
        }

        for(int j = 0; j < n; j++) {
            if(isSafe(board, row, j , n)) {
                board[row][j] = 'Q';
                f(row + 1, board, n);
                board[row][j] = '.';
            }
        }
    }
public:
    vvs solveNQueens(int n) {
        vs board(n, string(n, '.'));
        f(0, board, n);
        return ans;
    }
};

int main() {
    Solution s;
    vvs ans = s.solveNQueens(1);

    for(auto v : ans) {
        for(auto st: v) {
            cout << st << " ";
        }
        cout << endl;
    }
    return 0;
}