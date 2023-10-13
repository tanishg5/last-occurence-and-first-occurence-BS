/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int binarysearch( int n , vector<int>v , int target ) {  // first occ
    int start = 0 ; 
    int end = n-1;
    int res = -1 ;
    while(start<=end) {
        int mid = start + (end-start)/2;
        if(target == v[mid])  {
            res = mid;
            end = mid - 1; 
        }
        else if (v[mid] > target) end = mid - 1;
        else start = mid + 1 ;
    }
   return res; 
}

int binarysearch1( int n , vector<int>v , int target ) { // last occ
    int start = 0 ; 
    int end = n-1;
    int res = -1 ;
    while(start<=end) {
        int mid = start + (end-start)/2;
        if(target == v[mid])  {
            res = mid;
            start = mid + 1; 
        }
        else if (v[mid] > target) end = mid - 1;
        else start = mid + 1 ;
    }
   return res; 
}

int main() {
    int n ; 
    cin>>n;
    int target ; 
    cin>>target;
    vector<int>v={1,2,5,5,5,6,7,8};
    int first = binarysearch( n, v , target );
    int last =  binarysearch1(n,v,target);
    cout<<last-first+1<<endl; // frequency of searched element in sorted array 
}