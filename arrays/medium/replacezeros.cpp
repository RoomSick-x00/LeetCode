#include <bits/stdc++.h>
using namespace std;

void setZeroes_BruteForce(vector<vector<int>> &matrix)
{
    // Your code goes here
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    if (matrix[i][k] != 0)
                    {
                        matrix[i][k] = -1;
                    }
                }
                for (int k = 0; k < m; k++)
                {
                    if (matrix[k][j] != 0)
                    {
                        matrix[k][j] = -1;
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
}

void setZeros_better(vector<vector<int>> &matrix){
    // Your code goes here
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> row(n, 0);
    vector<int> col(n, 0);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                row[i] = -1;
                col[j] = -1;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(row[i] == -1){
            for(int j=0; j<m; j++){
                matrix[i][j] = 0;
            }
        }
        if(col[i] == -1){
            for(int j=0; j<m; j++){
                matrix[j][i] = 0;
            }
        }
    }
}

void setZeros_optimized(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j!=0){
                    matrix[0][j] = 0;
                }
                else{
                    col0 =0;
                }
            }
        }
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }
    if(matrix[0][0] == 0){
        for(int j=0; j<m; j++){
            matrix[0][j] = 0;
        }
    }
    if(col0 == 0){
        for(int i=0; i<n; i++){
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{0, 0, 1}, {3, 1, 4}, {2, 4, 3}};
    int n = matrix.size();
    int m = matrix[0].size();
    setZeros_optimized(matrix);
    // setZeroes_BruteForce(matrix);
    // setZeros_better(matrix);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}