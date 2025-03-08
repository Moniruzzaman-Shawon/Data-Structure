#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val) {
    v.push_back(val); // Insert the value at the end
    int cur_idx = v.size() - 1; // Get the index of the last element
    while (cur_idx != 0) {
        int par_idx = (cur_idx - 1) / 2; // Find parent index
        if (v[par_idx] > v[cur_idx]) {
            swap(v[par_idx], v[cur_idx]); // Swap with parent 
            cur_idx = par_idx;
        } else {
            break;
        }
    }
}

void delete_heap(vector<int> &v) {
    if (v.empty()) return;
    v[0] = v.back(); // Replace root with the last element
    v.pop_back(); // Remove the last element
    int cur_idx = 0;
    int n = v.size();
    while (cur_idx < n) {
        int left = 2 * cur_idx + 1;
        int right = 2 * cur_idx + 2;
        int smallest = cur_idx;
        
        if (left < n && v[left] < v[smallest]) {
            smallest = left;
        }
        if (right < n && v[right] < v[smallest]) {
            smallest = right;
        }

        if (smallest != cur_idx) {
            swap(v[cur_idx], v[smallest]);
            cur_idx = smallest;
        } else {
            break;
        }
    }
}

void print_heap(const vector<int> &v) {
    if (v.empty()) {
        cout << "Empty" << endl;
    } else {
        cout << v[0] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insert_heap(v, val); 
    }

    int q;
    cin >> q;

    while (q--) {
        int command;
        cin >> command;
        
        if (command == 1) {
            print_heap(v);
        } else if (command == 2) {
            delete_heap(v);
            print_heap(v);
        } else if (command == 0) {
            int val;
            cin >> val;
            insert_heap(v, val);
            print_heap(v);
        }
    }

    return 0;
}
