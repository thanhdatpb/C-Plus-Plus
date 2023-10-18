#include <bits/stdc++.h>
using namespace std;
//Hàm tìm ki?m nhi phân
int binarySearch(int arr[], int left, int right, int x) {
    int middle;
 
    while(left <= right) {
        // L?y v? trí ? gi?a left và right
        middle = (left + right) / 2;
 
        // N?u ph?n t? ? gi?a b?ng x thì tr? v?
        // v? trí
        if (arr[middle] == x)
            return middle;
 
        // N?u x l?n hon ph?n t? ? gi?a thì
        // ch?c ch?n nó n?m bên ph?i.
        // Ch? d?nh left ph?n t? ? gi?a + 1
        if (x > arr[middle])
            left = middle + 1;
        else
            //Ngu?c l?i
            right = middle - 1;
    }
 
    //Tr? v? -1 n?u không tìm th?y gía tr? trong m?ng.
    return -1;
}
int main() {
    int arr[] = {15, 20, 25, 30, 31, 44, 66};
 
    //L?y ra d? dài c?a m?ng
    int n = sizeof(arr) / sizeof(arr[0]);
    //Ph?n t? c?n tìm
    int x = 25;
     
    // n -1 là v? trí cu?i cùng trong m?ng.
    int result = binarySearch(arr, 0, n-1, x);
 
    cout << result;
}
