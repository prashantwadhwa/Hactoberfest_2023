

#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        //solve this using maxheap
        
        priority_queue<int> maxh;
        for(int i=l; i<l+k-1; i++){
            maxh.push(arr[i]);
            //check for size of k
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        return maxh.top();
    }
};


 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
