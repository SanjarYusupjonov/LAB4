#include <iostream>
using namespace std;

int main(){
    int n,v; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> v;

    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == v)
            index = i;
    }

    for (int i = 1; i < index; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }


    for (int i = index + 2; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= index + 1 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (int d:arr) {
        cout << d << " ";
    }

    return 0;
}