#include<iostream>
using namespace std;

// bool checkTwoSum(int arr[] , int n,int target){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i] + arr[j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }


pair<int,int> checkTwoSum(int arr[] , int n,int target){
    pair<int,int> ans = make_pair(-1,-1);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    int arr [] = {10,5,20,15,30};
    int size = 5;
    int target = 50;
    // bool check = checkTwoSum(arr,size,target);
    pair<int,int> ans = checkTwoSum(arr,size,target);
    // if(check){
    //     cout << "pair found";
    // }else{
    //     cout << "pair not found";
    // }
    if(ans.first == -1 && ans.second == -1){
        cout << "pair not found";
    }else{
        cout << ans.first << "," << ans.second << endl;
    }
    return 0;
}