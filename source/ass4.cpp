#include <set>
#include <vector>
#include "point.hpp"
#include <iostream>
#include <cmath>
#include <iterator>
#include <algorithm>

//method to compare points of x coordinate
int comparePoints_x(point const& a, point const& b){
    return a.x - b.x;
}
//method to compare points of y coordinate
int comparePoints_y(point const& a, point const& b){
    return a.y - b.y;
}
float distance(point const& a, point const& b){
    return sqrt(pow(comparePoints_x(a,b),2)+ pow(comparePoints_y(a,b),2));
}

std::pair<point,point> find_closest_pair(std::vector<point> x_vec, std::vector<point> y_vec){
    int m = floor(x_vec.size()/2);
    int l_x=(x_vec[m].x+ x_vec[m+1].x)/2;
    std::vector<point> x_lvec;
    std::vector<point> x_rvec;
    for(int i=0; i<m; i++){
        x_lvec.push_back(x_vec[i]);
    }
    for(int j = m+1; j<x_vec.size();j++){
        x_rvec.push_back(x_vec[j]);
    }
    std::pair<point,point> left_pair = find_closest_pair(x_lvec,y_vec);
    std::pair<point,point> right_pair = find_closest_pair(x_rvec,y_vec);
}  

std::pair<point,point> combine(std::vector<point> y_vec, std::vector<point> x_lvec, std::pair<point,point> left_pair,std::pair<point,point> right_pair){
    float d1 = distance(x_lvec.front(),x_lvec.back());
}


/* void merge(std::vector<point> left_vec, std::vector<point> right_vec){
    std::vector<point> new_vec;
    while(!left_vec.empty() && !right_vec.empty()){
        if(left_vec.begin()<=right_vec.begin()){
            
        }
    }
}
void merge(std::vector<int> vec, int p, int r, int q){
    int n1 = p - q + 2;
    int n2 = r - q + 1;
    int i,j,k;

    std::vector<int> left_vec{n1};
    std::vector<int> right_vec{n2};

    for(i = 0; i<n1; i++){
        left_vec[i]= vec[p+i-1];
    }
    //left_vec[n1] = infinite;
    for(j = 0; j<n2; j++){
        right_vec[i]= vec[q+j];
    }
    //left_vec[n2] = infinite;
    i = 1;
    j = 1;
    for(k=p;k<=r;k++){
        if(left_vec[i]<=right_vec){
            vec[k]=left_vec[i];
            i++;
        }
        else{
            vec[k]=right_vec[j];
            j++;
        }
    }
}
//mergesort method
void mergeSort(std::vector<int> vec, int p, int r){
    if(p < r){
        int q = ((p+r)/2);
        mergeSort(vec,p,q);
        mergeSort(vec,q+1,r);

        merge(vec,p, r, q);
    }
    
} */
int main(){
    std::vector<int> test{1,2,7,9,3,4};
    
    return 0;
}