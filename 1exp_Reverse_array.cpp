#include<bits/stdc++.h>
using namespace std;


int main(){
    
    //INPUT
    //Number of elements
    int num;
    cout<<"Enter the number of input variables: ";
    cin>>num;

    //Dynamic Array creation
    int arr[num];
    for (int i=0; i<num ; i++){
        cin>>arr[i];
    }

    //Reversal of the array
    int flag = num/2;
    // // cout<<flag;  

    int i = 0;
    for (i; i < flag; i++)
    {
        // cout<<i<<" "<<num-i-1<<endl;
        swap(arr[i],arr[num-i-1]);
    }

    //Printing the reversed array
    cout<<"Elements in the reversed array are: ";
    for (auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}   