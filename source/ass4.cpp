#include <set>
#include <vector>
#include "point.hpp"
#include <iostream>
#include <cmath>
#include <iterator>

std::vector<point> point_vec;
/* //method to compare points of x coordinate
int comparePoints_x(point const& a, point const& b){
    return a.x - b.x;
}
//method to compare points of y coordinate
int comparePoints_y(point const& a, point const& b){
    return a.y - b.y;
}
float distance(point const& a, point const& b){
    return sqrt(pow(comparePoints_x(a,b))+ pow(comparePoints_y(a,b)));
}
float min(float x, float y){
    return (x<y)? x : y;
}
float bruteForce(std::vector<point> point_vev, int n){
    float min;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j<n;++j){
            if(distance(point_vec[i],point_vec[j])<min){
                min = distance(point_vec[i],point_vec[j]);
            }
        }
    }
    return min;
}
float closest_y(std::vector<point> vec_y, int size, float dist){
    float min = dist;
    qsort(vec_y,size,sizeof(point),comparePoints_y());
    for(int i = 0;i<size;++i){
        for(distance(vec_y[i],vec_y[j])<min){
            min = distance(vec_y[i], vec_y[j]);
        }
    }
    return min;
}
float closest_x(std::vector<point> vec_x, int size){
    if(size <=3){
        return bruteForce(vec_x,size);
    }
    int mid = size/2;
    point mid_p = vec_x[mid];
    float
} */
    point find_closest_pair(std::vector<point> x_vec, std::vector<point> y_vec){
    int m = floor(x_vec.size()/2);
    int l_x=(x_vec[m].x+ x_vec[m+1].x)/2;
    std::vector<point> x_lvec = x_vec[m];
    std::vector<point> x_rvec;
    x_lvec = x_vec.
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