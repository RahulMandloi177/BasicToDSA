#include<bits/stdc++.h>
using namespace std;

int findSubarraySum(int arr[],int n,int sum)
{
    map<int,int> prevsum;

    int result=0;
    
    int currentSum=0;

    for(int i=0;i<n;i++)
    {
        currentSum+=arr[i];

    if(currentSum==sum)
    {
        result++;
    }

    if(prevsum.find(currentSum-sum) !=prevsum.end())
      result+=(prevsum[currentSum-sum]);

    prevsum[currentSum]++;
    }
    return result;  
}
int main()
{
    int arr[] = { 1,-1,1,-1};
    int sum = 0;
    int n = 4;
    cout << findSubarraySum(arr, n, sum);
    return 0;
}

