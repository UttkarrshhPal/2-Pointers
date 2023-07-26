//Using 2-Pointers
#include<iostream>
using namespace std;
void moveZeros(int arr[],int n)
{
    int l = 0;
    int r = 1;
    while(r<n)
    {
        if(arr[l]!=0){
            l++;
            r++;
        }
        else if(arr[r]==0){
            r++;
        }
        else{
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
        }

    }
}
int main()
{
     int arr[] = {0,1,0,3,12};
     int n = 5;
     moveZeros(arr,n);
     for(int i = 0;i<n;i++)cout<<arr[i]<<" ";
}