#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int max1=0, max2=0;

    // solving with only one loop
    // time complexity n

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;

        if(i==2){
            if(arr[0]>arr[1]){
                max1=arr[0];
                max2=arr[1];
            }
            else{
                max2=arr[0];
                max1=arr[1];
            }
        }
        if(i>=2){
                if(arr[i]>max1){
                max2 = max1;
                max1=arr[i];
            }
            else{
                if(arr[i]>max2){
                    max2=arr[i];
                }
            }
        }
    }
    long long res = (long long) max1*max2;
    cout<<res<<endl;

}
