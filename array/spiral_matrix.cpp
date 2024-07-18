class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        int rs = 0, re = n - 1, cs = 0, ce = m - 1, cnt = 0;
        vector<int> ans;
        while (cnt <= (m * n) - 1)
        {
            // first row
            for (int i = cs; cnt < n * m && i <= ce; i++)
            {
                ans.push_back(matrix[rs][i]);
                cnt++;
            }
            rs++;
            // last col
            for (int i = rs; cnt < n * m && i <= re; i++)
            {
                ans.push_back(matrix[i][ce]);
                cnt++;
            }
            ce--;
            // last row
            for (int i = ce; cnt < n * m && i >= cs; i--)
            {
                ans.push_back(matrix[re][i]);
                cnt++;
            }
            re--;
            // first col
            for (int i = re; cnt < n * m && i >= rs; i--)
            {
                ans.push_back(matrix[i][cs]);
                cnt++;
            }
            cs++;
        }
        return ans;
    }
};