#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &v){

    for (int i = 1; i < v.size(); ++i) {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] < key){
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }

    for (int d:v) {
        cout << d << " ";
    }
}
int main(){
    int n; cin >> n;

    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        v.push_back(a);
    }
    insertionSort( v);
    return 0;
}
