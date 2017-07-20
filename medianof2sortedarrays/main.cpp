#include <iostream>
#include <vector>


using namespace std;

double findMedianSortedArrays(vector<int>& nums1,int s1,vector<int>& nums2,int s2,int k) {
    //len1 always smaller than len2
    int len1 = nums1.size()-s1;
    int len2 = nums2.size()-s2;

    if(len1 > len2){
        return findMedianSortedArrays(nums2,s2,nums1,s1,k);
    }
    if(len1 == 0){
        return nums2[s2 + k - 1];
    }
    if(k == 1){
        return min(nums1[s1],nums2[s2]);
    }


    int mid = k/2;
    int start1 = min(len1,mid);
    int start2 = k - start1;

    if(nums1[s1+start1-1] > nums2[s2+start2-1]){
        return findMedianSortedArrays(nums1,s1,nums2,s2+start2,k-start2);
    }else if(nums1[s1+start1-1] < nums2[s2+start2-1]){
        return findMedianSortedArrays(nums1,s1+start1,nums2,s2,k-start1);
    }else{
        return nums1[s1+start1-1];
    }
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int len1 = nums1.size();
    int len2 = nums2.size();

    int middle = (len1+len2) / 2;
    if( (len1+len2) % 2 != 0){
        return findMedianSortedArrays(nums1,0,nums2,0,middle);
    }else{
        double v1 = findMedianSortedArrays(nums1,0,nums2,0,middle);
        double v2 = findMedianSortedArrays(nums1,0,nums2,0,middle+1);
        double v3 = (v1+v2) / 2.0;
        return v3;
    }
}





int main()
{
    vector<int> num1;
    vector<int> num2;

    int len1 = num1.size();
    int len2 = num2.size();

    num1.push_back(1);
    num1.push_back(2);

    num2.push_back(3);
    num2.push_back(4);


    cout<<findMedianSortedArrays(num1,num2);


}
