#include <set>
#include <vector>
#include "point.hpp"
#include <iostream>
#include <cmath>
#include <iterator>

std::set<point> point_set;
//method to compare points of x coordinate
int comparePoints_x(point const& a, point const& b){
    return a.x < b.x;
}
//method to compare points of y coordinate
int comparePoints_y(point const& a, point const& b){
    return a.y < b.y;
}
point divide_conquer(std::set<point> const& s){
    std::set<int> x_set;
    std::set<int> y_set;
    //create two seperate containers 
    //sorting x and y coordinates each
    for(auto& x : s){
        x_set.insert(x.x);
        y_set.insert(x.y);
    }
    std::set<int>x_r;
    std::set<int>x_r;
}
//method to find distance of points
int distance(point const& a, point const& b){
    return sqrt((pow(a.x - b.x))+pow(a.y - b.y));
}
//method to merge left and right
void merge(std::vector<int> vec, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int i,j,k;

    std::vector<int> left_vec{n1};
    std::vector<int> right_vec{n2};

    for(i = 0; i<n1; i++){
        left_vec[i]= vec[left+i];
    }
    for(j = 0; j<n2; j++){
        right_vec[j]= vec[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2){
        if(left_vec[i]<=right_vec[j]){
            vec[k] = left_vec[i];
            i++;
        }
        else{
            vec[k] = right_vec[j];
            j++;
        }
        k++;  
    }
    while (i < n1){
        vec[k] = left_vec[i];
        i++;
        k++;
    }
    while (j < n2){
        vec[k] = right_vec[j];
        j++;
        k++;
    }
}
//mergesort method
void mergeSort(std::vector<int> sort, int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;
        mergeSort(sort,left,mid);
        mergeSort(sort,mid+1, right);

        merge(sort,left, mid, right);
    }
    
}
int main(){
    
    return 0;
}