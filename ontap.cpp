#include <bits/stdc++.h>
using namespace std;
//H�m t�m ki?m nhi ph�n
int binarySearch(int arr[], int left, int right, int x) {
����int middle;
�
����while(left <= right) {
��������// L?y v? tr� ? gi?a left v� right
��������middle = (left + right) / 2;
�
��������// N?u ph?n t? ? gi?a b?ng x th� tr? v?
��������// v? tr�
��������if (arr[middle] == x)
������������return middle;
�
��������// N?u x l?n hon ph?n t? ? gi?a th�
��������// ch?c ch?n n� n?m b�n ph?i.
��������// Ch? d?nh left ph?n t? ? gi?a + 1
��������if (x > arr[middle])
������������left = middle + 1;
��������else
������������//Ngu?c l?i
������������right = middle - 1;
����}
�
����//Tr? v? -1 n?u kh�ng t�m th?y g�a tr? trong m?ng.
����return -1;
}
int main() {
����int arr[] = {15, 20, 25, 30, 31, 44, 66};
�
����//L?y ra d? d�i c?a m?ng
����int n = sizeof(arr) / sizeof(arr[0]);
����//Ph?n t? c?n t�m
����int x = 25;
�����
����// n -1 l� v? tr� cu?i c�ng trong m?ng.
����int result = binarySearch(arr, 0, n-1, x);
�
����cout << result;
}
