Basic Data Structure

Time and Space Complexity

int main() {
  // Sum of 1 to 100
  int n;
  cin >> n;
  int sum = 0;
  
  // One way (loop)
  // for(int i = 1; i <= n; i++) {
  //   sum += i;
  // }
  
  // Another way (formula)
  // sum = (n * (n + 1)) / 2;
  
  cout << sum;
  return 0;
}

Time Complexity: Measures execution time based on input size.

Space Complexity: Measures memory usage.

Asymptotic Notations:

O (Big-O): Worst case.

Ω (Omega): Best case.

Θ (Theta): Average case.

Common Complexities:

O(1) - Constant

O(N) - Linear

O(logN) - Logarithmic

O(sqrt(N)) - Square root

O(N^2) - Quadratic

O(NlogN) - Linearithmic

STL Vector

Initialization:

vector<type> v;
vector<type> v(N);
vector<type> v(N, V);
vector<type> v(v2);
vector<type> v(A, A+N);

Capacity Functions:

v.size() - O(1)

v.max_size() - O(1)

v.capacity() - O(1)

v.clear() - O(N)

v.empty() - O(1)

v.resize() - O(K)

Modifiers:

v.assign(), v= - O(N)

v.push_back() - O(1)

v.pop_back() - O(1)

v.insert() - O(N+K)

v.erase() - O(N+K)

Prefix Sum

Example:

3 3
4 7
3 10
2 12
5 17

Prefix sum: 3, 3+4=7, 7+3=10, 10+2=12, ...

Linked List

Problems with Array:

Fixed size

Sequential memory allocation

Singly Linked List Operations:

void printLinkedList(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
}

Doubly Linked List Advantages:

Can traverse in both directions.

Insert/delete in O(1) at head/tail.

Stack (LIFO)

stack<int> st;
st.push(x);  // O(1)
st.pop();    // O(1)
st.top();    // O(1)
st.size();   // O(1)
st.empty();  // O(1)

Queue (FIFO)

queue<int> q;
q.push(x);  // O(1)
q.pop();    // O(1)
q.front();  // O(1)
q.back();   // O(1)
q.size();   // O(1)
q.empty();  // O(1)

Tree Data Structure

Types:

Binary Tree

Ternary Tree

N-ary Tree
