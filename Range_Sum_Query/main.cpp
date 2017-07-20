#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
    vector<int> array;
    vector<int> segtree;

    NumArray(vector<int> nums) {
        array = vector<int>(nums.size());
        //segtree stores information from 1
        segtree = vector<int>(4 * nums.size());
        for(int i=0;i<nums.size();i++){
            array[i] = nums[i];
        }
        cout<<"Array size:"<<nums.size()<<endl;
        if(nums.size() > 0)
            buildTree(1, 0, nums.size()-1);
    }

    void buildTree(int node, int begin, int end){
        if(begin == end){
            // leaf node
            segtree[node] = array[begin];
            return;
        }

        int mid = (begin+end) / 2;
        buildTree(2 * node, begin, mid);
        buildTree(2 * node + 1, mid + 1, end);

        segtree[node] = segtree[2 * node] + segtree[2 * node + 1];
    }

    void show(){
        for(int i = 0;i < array.size();i++){
            cout<<array[i]<<' ';
        }
        cout<<endl;
        for(int i = 1;i < 2 * array.size();i++){
            cout<<segtree[i]<<' ';
        }
        cout<<endl;
    }


    void update(int i, int val) {
        if(i < 0 or i >= array.size())
            return;

        array[i] = val;
        update(1, 0, array.size()-1, i, val);
    }

    void update(int node, int begin, int end, int i,int val){
        if(begin == end){
            if(begin == i)
                segtree[node] = val;
            return;
        }

        int mid = (begin + end) / 2;
        if(i <= mid)
            update(2 * node, begin,mid, i, val);
        else
            update(2 * node + 1, mid + 1, end, i, val);

        segtree[node] = segtree[2 * node] + segtree[2 * node + 1];
    }

    int sumRange(int i, int j) {
        return sumRange(1, 0, array.size()-1 , i ,j);
    }

    int sumRange(int node,int begin,int end,int i,int j){
        if(end < i or begin>j)
            return 0;
        if(begin>=i and end<=j){
            return segtree[node];
        }

        int mid = (begin + end) / 2;
        int lsum = sumRange(2 * node, begin, mid, i, j);
        int rsum = sumRange(2 * node + 1,mid + 1,end, i, j);
        return lsum + rsum;
    }

};

// int main(){
// /**
//  * Your NumArray object will be instantiated and called as such:
//  * NumArray obj = new NumArray(nums);
//  * obj.update(i,val);
//  * int param_2 = obj.sumRange(i,j);
//  */
//     vector<int> nums;
//     nums.push_back(-28);
//     nums.push_back(-39);
//     nums.push_back(53);
//     nums.push_back(65);
//     nums.push_back(11);
//     nums.push_back(-56);
//     nums.push_back(-65);
//     nums.push_back(-39);
//     nums.push_back(-43);
//     nums.push_back(97);
//     NumArray *obj = new NumArray(nums);
//     cout<<obj->sumRange(5,6)<<endl;
//     obj->update(9,27);
//     cout<<obj->sumRange(2,3)<<endl;
//     cout<<obj->sumRange(6,7)<<endl;
//     obj->update(1,-82);
//     obj->update(3,-72);
//     cout<<obj->sumRange(3,7)<<endl;
//     cout<<obj->sumRange(1,8)<<endl;

//     //obj->show();
//     obj->update(5,13);
//     obj->update(4,-67);

// }

