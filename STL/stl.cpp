#include<bits/stdc++.h>

using namespace std;
 //pairs

// int main()
// {


//     //pairs
//     pair<int ,int> p = {1,2};

//     cout<<p.first<<" "<<p.second<<endl;

//     pair<int,pair<int ,int >> p1 = {1,{2,3}};//nested pair
//     cout<<p1.first<<" "<<p1.second.second;


//     // array of pair

//     pair<int,int > arr[] = {{1,2},{2,3},{3,4}};

    
//     cout<<arr[1].first<<" "<<arr[1].second;

//         


        
// }


// vectors

int main(){
    // vector<int > v;
    // v.push_back(1);
    // v.emplace_back(2);
    
    // cout<<v[1];

    vector<pair<int ,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    // vector<int> v(5,100);//{78,78,78,78,78}

    vector<int> v(5,34);//size 5 array{0,0,0,0,0,0}
    v.push_back(45);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    // iteration


    vector<int>::iterator it = v.begin();

    /* v.begin points to the memory addres of 0 index of elemnet in 
    vector, as we write it++ it moves to the next index address of the vector.
    to print the value of that memory address simply write the 
    *(it) it will print the value */

    it++;

    // cout<<*(it)<<endl;

    it  = it  + 4;

    // cout<<*(it)<<endl;

    // vector<int >::iterator it = v.end();
    /* v.end() points to the memory location right after the 
    last element of that vector*/

    // vector<int >::iterator i = v.rend();//right after

    // vector<int >::iterator it = v.rbegin();
    /* reverse iterator it points to the last element of the vector
    */


//    cout<<v[0] << " " <<v.at(0)<<endl;
//    cout<< v.back() <<" ";

        for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
            cout<<*(it)<<" ";

        }

        for(auto it = v.begin(); it != v.end(); it++){

            /* c++ will take care of data type of it 
            it will assign the datatype automatically*/
            cout<<endl;

            cout<<*(it)<<" ";
        }

        // for each loop

        for(auto it:v){
            cout<< it <<" ";

        }

        // deletion in a vector


        // erase function 

        // erase in vector 

        v.erase(v.begin()+1);
        //{10,20,30,40} it will delete 20 

        cout<<endl;

        for(auto it:v){
            cout<< it <<" ";

        }


        cout<<endl;

        v.erase(v.begin()+1,v.begin()+4);
    // {34,34,34,34,45}


        for(auto it:v){
            cout<< it <<" ";

        }


        // insert function 

    cout<<endl;
        vector<int> shiv(2,100);

        cout<<shiv[1]<<endl;
        
        
        shiv.insert(v.begin(),300);
        shiv.insert(shiv.begin()+1 ,2,10);


        

        for(auto ite:shiv){
            cout<< ite <<" ";

        }
















 





}