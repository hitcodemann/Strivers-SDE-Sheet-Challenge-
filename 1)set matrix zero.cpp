#include <bits/stdc++.h>
vector<int> change(vector<vector<int>> &arr)
{
    int row_s = 0;
    int col_s = 0;
    int row_end = arr.size() - 1;
    int col_end = arr[0].size() - 1;
    vector<int> col_list;
    int p = row_s;
    while (p <= row_end)
    {
        for (int i = col_s; i <= col_end; i++)
        {
            if (arr[p][i] == 0)
            {
                col_list.push_back(i);
            }
        }
        p++;
    }
    int k = row_s;
    while (k <= row_end)
    {
        for (int i = col_s; i <= col_end; i++)
        {
            if (arr[k][i] == 0)
            {
                fill(arr[k].begin(), arr[k].end(), 0);
           }
        }
        k++;
        }
    return col_list;
}
void change_col(vector<vector<int>> &arr, vector<int> col_list)
{
    int q = 0;
    int c;
    while (q < col_list.size())
    {
        c = col_list[q];
        for (int i = 0; i < arr.size(); i++) // Use < instead of <=
        {
            arr[i][c] = 0;
        }
        q++;
    }
}
void setZeros(vector<vector<int>> &matrix)
{
    vector<int> list = change(matrix);
    change_col(matrix, list);
}
