//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& v, int n) 
    { 
        // code here 
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int t = v[i][j];
                v[i][j] = v[j][i];
                v[j][i] = t;
            }
        }
        int i=0, j=n-1;
        while(i<j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    } 
};




//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends