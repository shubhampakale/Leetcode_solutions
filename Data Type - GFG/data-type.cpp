//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string data_type) 
    {
        // your code here
        if (data_type == "Character") {
        return sizeof(char);
    } else if (data_type == "Integer") {
        return sizeof(int);
    } else if (data_type == "Long") {
        return sizeof(long);
    } else if (data_type == "Float") {
        return sizeof(float);
    } else if (data_type == "Double") {
        return sizeof(double);
    } else {
        return -1;  // Return -1 for unknown data types
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends