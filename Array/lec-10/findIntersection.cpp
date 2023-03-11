#include <bits/stdtr1c++.h>
using namespace std;

// learning
/*
   nested loop
   intersection

*/

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

vector<int>  findIntersection(vector<int> &arr1, vector<int> &arr2){

    vector<int> ans;
    for(int i=0; i<arr1.size(); i++){

        int element = arr1[i];
        for(int j =0; j<arr2.size(); j++){
            if(element == arr1[j]){
                ans.push_back(element);
                arr2[j] = -123422;
            }
        }
    }


    return ans;


}


int main()
{


    vector<int> arr1(5);
    vector<int> arr2(4);
    vector<int> arr3;
    
    for(int i=0; i<arr1.size(); i++){

        cin>>arr2[i];
    }

    cout<<endl;

     for(int i=0; i<arr2.size(); i++){

        cin>>arr2[i];
    }

    arr3 = findIntersection(arr1,arr2);

    for(auto it: arr3){

        cout<<(it)<<" ";
    }




       
}