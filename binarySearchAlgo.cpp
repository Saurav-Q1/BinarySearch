#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int left,int right,int x){
    while(left<=right){
        int mid = left + (right - left) / 2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int num;
    int myarr[5];
    int output;
    cout << "Enter 10 numbers in Asending order " << endl;
    for (int i = 0; i < 5;i++){
        cin >> myarr[i];
    }
    cout << "Enter a number you want to search " << endl;
    cin >> num;
    output = binarysearch(myarr,0,9,num);
    if(output==-1){
        cout << "the number is not found" << endl;
    }
    else{
        cout << "The number found in index = " << output << endl;
    }
    return 0;
}