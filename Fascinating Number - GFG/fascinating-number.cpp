//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) 
	{
	    // code here
	    if(n<3)
	    {
	        return false;
	    }
	    
	    int n2 = n*2;
	    int n3 = n*3;
	    
	    string result = to_string(n) + to_string(n2)+to_string(n3);
	    
	    if(result.length()!=9)
	    {
	        return false;
	    }
	    
	    unordered_set<char> digitSet;
        for (char digit : result) 
        {
            if (digit == '0' || digitSet.find(digit) != digitSet.end()) 
            {
                return false;
            }
        digitSet.insert(digit);
        }
	    
        return true;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends