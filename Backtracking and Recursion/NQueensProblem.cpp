/*
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

 

Example 1:


Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
Example 2:

Input: n = 1
Output: [["Q"]]

*/




class Solution {
public:
    
    bool issafe(int row, int col, vector<string> board, int n) {
        // check upper diagonal
        int duprow = row;
        int dupcol = col; 
        
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;  //checking upper diagonal
            row--;
            col--;
        }
        
        
        col = dupcol; 
        row = duprow;
        while(col>=0) {
            if(board[row][col] == 'Q') return false;    //----------- this diagonal
            col--; 
        }
    
        row = duprow;
        col = dupcol; 
        while(row<n && col>=0) {
            if(board[row][col] == 'Q') return false;   //lower diagonal
            row++;
            col--; 
        }
        
        return true; 
    }
    
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n)
    {
        if(col == n) {
            ans.push_back(board); 
            return; 
        }
    
        
        for(int row=0;row<n;row++)
        {
            if(issafe(row,col,board,n))  //checking whether the step is safe or not
               {
                   board[row][col]='Q';  //assigning this position as q
                   solve(col+1,board,ans,n);//recursive call to next col
                   board[row][col]='.';  //removing as we need to backtrack
               }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};
