#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> p = {-2,1,-3,4,-1,2,1,-5,4};
    int sum =0;
    int maxi = p[0];
    //int n = sizeof(arr)/sizeof(int);
    for(int i =0; i<p.size(); i++)
    {
       sum = sum+p[i];
       maxi = max(maxi,sum);
       if(sum<0)
       {
        sum =0;
       }
    }
    cout<<"The answer of the kadens algo is "<<maxi<<endl;;
    //cout<<"The time complexity is 0(n)"<<endl;
    return 0;
}