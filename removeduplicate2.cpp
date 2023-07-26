// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=list&envId=rnmonoyc

#include<iostream>
using namespace std;
void removeDuplicates(int arr[],int n)
{
    int l = 0;
    int r = 1;
    int counter = 0;
    while(r<n){
        if(arr[l]==arr[r] &&counter==0)
        {
            arr[++l]=arr[r++];//pushing both elements
            counter++;
        }
        else if(arr[l]==arr[r]&&counter==1)
        {
             r++;
        }
        else
        {
            arr[++l]=arr[r++];
            counter=0;
        }
    }
}
int main()
{
    int arr[] = {1,1,1,2,2,3};
    int n=6;
    removeDuplicates(arr,n);
    for(int i = 0;i<n;i++)cout<<arr[i]<<" ";
}