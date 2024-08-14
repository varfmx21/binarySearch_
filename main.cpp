#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> vec, int target) {
    int lo = 0;
    int hi = vec.size()-1;

    while (lo <= hi) {

        int mid = lo + (hi - lo) / 2;

        if (vec[mid] == target) {
            return mid;
        }

        if (vec[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }

    }
    return -1;
}

int main() {

    vector<int> vec = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78}; 
    int target = 78;

    int index = binarySearch(vec, target);

    if (index != -1) {
        cout<<"Elemento encontrado en el indice: "<<index<<'\n';
    } else {
        cout<<"Elemento no encontrado."<<'\n';
    }

    return 0;
};