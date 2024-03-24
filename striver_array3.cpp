#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/*
    MISSING NUMBER
brute --> for each element 1-> N, loop over array and check if exists or not using flag
better --> using hashing, declare hash array and increment for each element then iterate hash array 1 -> N to find answer
optimal --> sum -> calculate sum 1 to N and for array then subtract
            xor -> loop 0 to n, xor for all array and i+1 to n then for n then xor both xor1 and xor2
    CONSECUTIVE ONE COUNT
brute --> iterate array then cnt 1s and max for cnt and maxi
better -->
optimal -->
    NUMBER THAT APPEARS ONCE
brute --> for each element in array find its cnt and if cnt = 1 break and return that
better --> using hashing via array or map, hasharray size is max_element + 1, then iterate hasharray and for v[i] check if == 1 return;
    using map, iterate array and for each increment then iterate map and when .second is 1 give us .first
optimal --> xor, for all elements in array iterate and do xor will automatically get missing one
*/

void print_vector(vector<int> &v)
{
    cout << "Vector : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int get_missing_number(vector<int> &v, int N)
{
    int n = v.size();
    /*  Brute --> loop for all numbers 1 -> N in array
     for (int i = 1; i <= N; i++)
     {
         bool flag = 0;
         int mis_num = i;
         for (int j = 0; j < n; j++)
         {
             if (mis_num == v[j]){
                 flag = 1;
                 break;
             }
         }
         if (flag == 0){
             return i;
         }
     }
     return -1;
     */

    /*  Better --> use hashing
    int hash_arr[N+1] = {0};
    for(int i = 0; i < n; i++){
        hash_arr[v[i]]++;
    }
    for(int i = 1; i <= N; i++){
        if (hash_arr[i] == 0){
            return i;
        }
    }
    return -1;
    */

    /*  Optimal --> Use SUM or XOR
    // Sum
    int sm = N*(N+1)/2, sm_arr = 0;
    for (int i = 0;i < n; i++){
        sm_arr += v[i];
    }
    int ans = sm-sm_arr;
    return ans;
     */

    // XOR
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = v[i] ^ xor2;
        xor1 = (i + 1) ^ xor1;
    }
    xor1 = xor1 ^ N;
    int ans = xor1 ^ xor2;
    return ans;
}

int get_consecutive_one(vector<int> &v)
{

    /* Iterate over array and update max and cnt
     */
    int n = v.size(), cnt = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        maxi = max(cnt, maxi);
    }
    return maxi;
}

int get_single_element(vector<int> &v)
{
    int n = v.size();
    /*  Brute --> iterate over array and for each element count, then return one for which count is 1
    for (int i = 0; i < n; i++){
        int ele = v[i],cnt=0;
        for(int j = 0;j<n;j++){
            if(v[j] == ele){
                cnt++;
            }
        }
        if (cnt == 1){
            return v[i];
    }
}
return -1;
 */

    /*  Better --> using hashing or map
     int maxi = v[0];
    for (int i = 0; i < n; i++){
        maxi = max(maxi,v[i]);
    }
    int hash_arr[maxi+1] = {0};
    for(int i=0;i<n;i++){
        hash_arr[v[i]]++;
    }
    for(int i=0;i<=maxi;i++){
        if(hash_arr[v[i]] == 1){
            return v[i];
        }
    }
        return -1;
         map<int,int> mpp;
         for(int i = 0; i < n; i++){
             mpp[v[i]]++;
         }
         for(auto it : mpp){
             if (it.second == 1){
                 return it.first;
             }
         }
         return -1;
         */

    /*  Optimal --> using XOR
     */
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ v[i];
    }
    return xor1;
}

int main()
{
    vector<int> v_mn = {4, 1, 3, 2, 6, 5, 8, 7};
    vector<int> v_c1 = {0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1};
    vector<int> v_se = {5, 3, 4, 2, 3, 5, 4};

    cout << "Missing Number = " << get_missing_number(v_mn, 9) << endl;
    cout << "Consective One Count : " << get_consecutive_one(v_c1) << endl;
    cout << "Single Element : " << get_single_element(v_se) << endl;

    return 0;
}