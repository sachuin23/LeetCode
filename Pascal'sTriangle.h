/*
 Author:     Annie Kim, anniekim.pku@gmail.com
 Date:       Apr 16, 2013
 Problem:    Pascal's Triangle
 Difficulty: Easy
 Source:     http://leetcode.com/onlinejudge#question_118
 Notes:
 Given numRows, generate the first numRows of Pascal's triangle.
 For example, given numRows = 5,
 Return
 [
      [1],
     [1,1],
    [1,2,1],
   [1,3,3,1],
  [1,4,6,4,1]
 ]

 Solution: .....
 */

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> pascal;
        for (int i = 0; i < numRows; ++i)
        {
            vector<int> row;
            row.push_back(1); // first 1
            for (int j = 1; j < i; ++j)
                row.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
            if (i > 0)
                row.push_back(1); // last 1
            pascal.push_back(row);
        }
        return pascal;
    }
};