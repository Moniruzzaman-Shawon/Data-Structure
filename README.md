# Basic Data Structure

## Time and Space Complexity

```cpp
int main()
{
  // Sum of 1 to 100
  // -------One way-------
  int n;
  cin >> n;
  int sum = 0;
  // for(int i = 1; i <= n; i++) {
  //   sum += i;
  // }

  // ------Another way------
  // Using formula
  // sum = (n * (n + 1)) / 2;

  cout << sum;

  return 0;
}
```

## Time Complexity
Time complexity is a measure of how long it takes an algorithm to run based on the size of the input data. It's a way to evaluate and compare algorithms without considering factors like the programming language or hardware. The same code can take different times on different devices based on their configuration or power.

## Asymptotic Notations

There are mainly three asymptotic notations:

1. **Big-O Notation (O-notation)** -> **WORST CASE**
2. **Omega Notation (Ω-notation)** -> **BEST CASE**
3. **Theta Notation (Θ-notation)** -> **AVERAGE CASE**

---

## Rules to Calculate Time Complexity

1. Always take the **worst case**.
2. Ignore the constant (e.g., `n`, `2n`, `3n` => We’ll take only `n`; not the constant number).

---

## Common Time Complexities

| Complexity Type         | Notation       | Description                                                                 |
|-------------------------|----------------|-----------------------------------------------------------------------------|
| **Linear Complexity**   | `O(n)`         | Time grows linearly with input size.                                        |
| **Logarithmic Complexity** | `O(logN)`    | Time grows logarithmically (e.g., `i *= const` or `i /= const`).            |
| **Square Root Complexity** | `O(sqrt(N))` | Time grows proportionally to the square root of input size.                 |
| **Quadratic Complexity** | `O(n^2)`      | Time grows quadratically (e.g., nested loops).                              |
| **Linearithmic Complexity** | `O(NlogN)` | Time grows in proportion to `NlogN` (e.g., nested loops with multiplication or division). |

---

## Best to Worst Complexity

1. **Constant**: `O(1)`
2. **Linear**: `O(N)`
3. **Logarithmic**: `O(logN)`
4. **Square Root**: `O(sqrt(N))`
5. **Quadratic**: `O(N*N)`
6. **Linearithmic**: `O(NlogN)`


## Space Complexity
Space complexity is the amount of memory an algorithm or data structure needs to solve a problem, as a function of the input's characteristics. Space complexity depends on the array.

If we take an input in an array, it allocates memory. (Space Complexity)

In a 2D array, space complexity will be O(N*N).

## STL Vector
STL - Standard Template Library. Vector is an STL dynamic array. In C++, a vector is a dynamic array with the ability to resize itself automatically when an element is inserted or deleted. It is part of the Standard Template Library (STL) and provides various useful functions for data manipulation. It is a shortcut process for dynamic arrays.

## Vector Built-in Functions
### Initialization

| Name                          | Details                                                                 | Time Complexity |
|-------------------------------|-------------------------------------------------------------------------|-----------------|
| `vector<type> v;`             | Construct a vector with 0 elements.                                     | O(1)            |
| `vector<type> v(N);`          | Construct a vector with N elements.                                     | O(N)            |
| `vector<type> v(N, V);`       | Construct a vector with N elements and the value will be V.             | O(N)            |
| `vector<type> v(v2);`         | Construct a vector by copying another vector `v2`.                      | O(N)            |
| `vector<type> v(A, A+N);`     | Construct a vector by copying all elements from an array `A` of size `N`.| O(N)            |

### Capacity

| Name                | Details                                                                 | Time Complexity |
|---------------------|-------------------------------------------------------------------------|-----------------|
| `v.size()`          | Returns the size of the vector.                                         | O(1)            |
| `v.max_size()`      | Returns the maximum size that the vector can hold.                      | O(1)            |
| `v.capacity()`      | Returns the current available capacity of the vector.                   | O(1)            |
| `v.clear()`         | Clears the vector elements. Do not delete the memory, only clear the value. | O(N)         |
| `v.empty()`         | Return true/false if the vector is empty or not.                        | O(1)            |
| `v.resize()`        | Change the size of the vector.                                          | O(K); where K is the difference between new size and current size. |

### Modifiers

| Name                                                      | Details                                                                 | Time Complexity       |
|-----------------------------------------------------------|-------------------------------------------------------------------------|-----------------------|
| `v =` or `v.assign()`                                     | Assign another vector.                                                  | O(N) if sizes are different, O(1) otherwise. |
| `v.push_back()`                                           | Add an element to the end.                                              | O(1)                  |
| `v.pop_back()`                                            | Remove the last element.                                                | O(1)                  |
| `v.insert()`                                              | Insert elements at a specific position.                                 | O(N+K); where K is the number of elements to be inserted. |
| `v.erase()`                                               | Delete elements from a specific position.                               | O(N+K); where K is the number of elements to be deleted. |
| `replace(v.begin(), v.end(), value, replace_value)`        | Replace all the value with replace_value. Not under a vector.           | O(N)                  |
| `find(v.begin(), v.end(), V)`                             | Find the value V. Not under a vector.                                   | O(N)                  |

### Element Access

| Name                | Details                                                                 | Time Complexity |
|---------------------|-------------------------------------------------------------------------|-----------------|
| `v[i]`             | Access the ith element.                                                 | O(1)            |
| `v.at(i)`          | Access the ith element.                                                 | O(1)            |
| `v.back()`         | Access the last element.                                                | O(1)            |
| `v.front()`        | Access the first element.                                               | O(1)            |

### Iterators

| Name                | Details                                                                 | Time Complexity |
|---------------------|-------------------------------------------------------------------------|-----------------|
| `v.begin()`         | Pointer to the first element.                                           | O(1)            |
| `v.end()`           | Pointer to the last element.                                            | O(1)            |
Prefix Sum

## Prefix Sum

Prefix Sum Array – Implementation and Applications in Competitive Programming.

For example:

```
3
3
4
7
3
10
2
12
5
17
3-3; 3+4=7; 7+3=10; 10+2=12......(This is called prefix sum)
```
Linked List
Two problems in an array (Array is a data structure):

Fixed Size

Sequential memory allocation

In C++, a linked list is a linear data structure that allows the users to store data in non-contiguous memory locations. A linked list is defined as a collection of nodes where each node consists of two members which represent its value and a next pointer which stores the address for the next node.

## Dynamic Node
Dynamic Memory: In dynamic allocation, the allocation and deallocation of the memory happen at runtime. That is, the memory must be allocated or de-allocated by the program all through the run-time of a C++ program. So the programmer is required to deallocate the dynamically allocated memory which is not in use.

```
void printLinkedList(Node* head) {
  Node* temp = head; // Take the head in temp

  // When the temp will be null, then no more value to the next to be linked
  while (temp != NULL) {
    cout << temp->val << " "; // Print the next value of temp
    temp = temp->next;
  }
}
```
Reference of a Pointer

void fun(int* &p) // & is for reference
If a pointer is passed to a function as a parameter and tried to be modified, then the changes made to the pointer do not reflect back outside that function. This is because only a copy of the pointer is passed to the function. It can be said that “pass by pointer” is passing a pointer by value. In most cases, this does not present a problem. But the problem comes when you modify the pointer inside the function. Instead of modifying the variable, you are only modifying a copy of the pointer, and the original pointer remains unmodified.

## Doubly Linked List
A Doubly Linked List (DLL) is a two-way list in which each node has two pointers, the next and previous, that have reference to both the next node and previous node respectively. Unlike a singly linked list where each node only points to the next node, a doubly linked list has an extra previous pointer that allows traversal in both the forward and backward directions.

## Comparison of All Operation's Complexity Between Array, Singly, and Doubly Linked List

| Operation               | Array | Singly | Doubly |
|-------------------------|-------|--------|--------|
| Insert at Head          | O(N)  | O(1)   | O(1)   |
| Insert at Tail          | O(1)  | O(1)   | O(1)   |
| Insert at any Position  | O(N)  | O(N)   | O(N)   |
| Delete at Head          | O(N)  | O(1)   | O(1)   |
| Delete at Tail          | O(1)  | O(N)   | O(1)   |
| Delete at any Position  | O(N)  | O(N)   | O(N)   |

### List Constructors

| Name                                      | Details                                                                 | Time Complexity |
|-------------------------------------------|-------------------------------------------------------------------------|-----------------|
| `list<type> myList;`                      | Construct a list with 0 elements.                                       | O(1)            |
| `list<type> myList(N);`                   | Construct a list with N elements and the value will be garbage.         | O(N)            |
| `list<type> myList(N, V);`                | Construct a list with N elements and the value will be V.               | O(N)            |
| `list<type> myList(list2);`               | Construct a list by copying another list `list2`.                       | O(N)            |
| `list<type> myList(A, A+N);`              | Construct a list by copying all elements from an array `A` of size `N`. | O(N)            |
| `list<type> myList(v.begin(), v.end());`  | Construct a list by copying all elements from a vector `v`.             | O(N)            |

### Capacity

| Name                | Details                                                                 | Time Complexity |
|---------------------|-------------------------------------------------------------------------|-----------------|
| `myList.size()`     | Returns the size of the list.                                           | O(1)            |
| `myList.max_size()` | Returns the maximum size that the list can hold.                        | O(1)            |
| `myList.clear()`    | Clears the list elements.                                               | O(N)            |
| `myList.empty()`    | Return true/false if the list is empty or not.                          | O(1)            |
| `myList.resize()`   | Change the size of the list.                                            | O(K); where K is the difference between new size and current size. |

### Modifiers

| Name                                                      | Details                                                                 | Time Complexity       |
|-----------------------------------------------------------|-------------------------------------------------------------------------|-----------------------|
| `myList =` or `myList.assign(list2.begin(), list2.end())` | Assign another list.                                                   | O(N)                  |
| `myList.push_back()`                                      | Add an element to the tail/back of the list.                           | O(1)                  |
| `myList.push_front()`                                     | Add an element to the head/front of the list.                          | O(1)                  |
| `myList.pop_back()`                                       | Delete the tail/back of the list.                                      | O(1)                  |
| `myList.pop_front()`                                      | Delete the head/front of the list.                                     | O(1)                  |
| `myList.insert()`                                         | Insert elements at a specific position.                                | O(N+K); where K is the number of elements to be inserted. |
| `myList.erase()`                                          | Delete elements from a specific position.                              | O(N+K); where K is the number of elements to be deleted. |
| `replace(myList.begin(), myList.end(), value, replace_value)` | Replace all the value with replace_value. Not under a list STL.      | O(N)                  |
| `find(myList.begin(), myList.end(), V)`                   | Find the value V. Not under a list STL.                                | O(N)                  |

## Operations
| Name                          | Details                                                                 | Time Complexity       |
|-------------------------------|-------------------------------------------------------------------------|-----------------------|
| `myList.remove(V)`            | Remove the value V from the list.                                       | `O(N)`                |
| `myList.sort()`               | Sort the list in ascending order.                                       | `O(NlogN)`            |
| `myList.sort(greater<type>())`| Sort the list in descending order.                                      | `O(NlogN)`            |
| `myList.unique()`             | Deletes the duplicate values from the list. You must sort the list first.| `O(N)`, with sort `O(NlogN)` |
| `myList.reverse()`            | Reverse the list.                                                       | `O(N)`                |
## Element Access
| Name                     | Details                          | Time Complexity |
|--------------------------|----------------------------------|-----------------|
| `myList.back()`          | Access the tail/back element.    | `O(1)`          |
| `myList.front()`         | Access the head/front element.   | `O(1)`          |
| `next(myList.begin(), i)`| Access the ith element.          | `O(N)`          |

| Name             | Details                          | Time Complexity |
|------------------|----------------------------------|-----------------|
| `myList.begin()` | Pointer to the first element.    | `O(1)`          |
| `myList.end()`   | Pointer to the last element.     | `O(1)`          |

## Stack

Stacks are a type of container adaptors with LIFO (Last In First Out) type of working.

## Stack Built-in Functions
| Name       | Details                                      | Time Complexity |
|------------|----------------------------------------------|-----------------|
| `st.push()`| Add an element to the tail/back of the stack. | `O(1)`          |
| `st.pop()` | Delete the last value of the stack.          | `O(1)`          |
| `st.top()` | Access the last element of the stack.        | `O(1)`          |
| `st.size()`| Returns the size of the stack.               | `O(1)`          |
| `st.empty()`| Return true/false if the stack is empty or not. | `O(1)`          |

## Queue Built-in Functions
| Name      | Details                                      | Time Complexity |
|-----------|----------------------------------------------|-----------------|
| `q.push()`| Add an element to the tail/back of the queue. | `O(1)`          |
| `q.pop()` | Delete the first value of the queue.         | `O(1)`          |
| `q.front()`| Access the first element of the queue.       | `O(1)`          |
| `q.size()`| Returns the size of the queue.               | `O(1)`          |
| `q.empty()`| Return true/false if the queue is empty or not. | `O(1)`          |
| `q.back()`| Access the last element of the queue.        | `O(1)`          |
Tree Data Structure
Types of Tree Data Structures
Tree data structure can be classified into three types based upon the number of children each node of the tree can have. The types are:

## Binary Tree: 
In a binary tree, each node can have a maximum of two children linked to it. Some common types of binary trees include full binary trees, complete binary trees, balanced binary trees, and degenerate or pathological binary trees. Examples of Binary Trees are Binary Search Tree and Binary Heap.

## Ternary Tree: 
A Ternary Tree is a tree data structure in which each node has at most three child nodes, usually distinguished as “left”, “mid” and “right”.

N-ary Tree or Generic Tree: Generic trees are a collection of nodes where each node is a data structure that consists of records and a list of references to its children (duplicate references are not allowed). Unlike the linked list, each node stores the address of multiple nodes.

## Binary Tree Input
    Level Wise

    Depth Wise

##### Preorder: ROOT -> LEFT -> RIGHT
                        1
                       / \
                      2   5
                     / \   \
                    3   4   6

##### Inorder: LEFT -> ROOT -> RIGHT
                        4
                       / \
                      2   5
                     / \   \
                    1   3   6

##### Postorder: LEFT -> RIGHT -> 
                        6
                       / \
                      3   5
                     / \   \
                    1   2   4

## Level Order Traversal (Breadth First Search or BFS) of Binary Tree
Level Order Traversal technique is defined as a method to traverse a Tree such that all nodes present in the same levels are traversed completely before traversing the next level.

## Binary Search Tree (BST)
BST -> Binary Tree + Binary Search. A binary tree where we can apply binary search is called BST (Binary Search Tree).

A Binary Search Tree (or BST) is a data structure used in computer science for organizing and storing data in a sorted manner. Each node in a Binary Search Tree has at most two children, a left child and a right child, with the left child containing values less than the parent node and the right child containing values greater than the parent node. This hierarchical structure allows for efficient searching, insertion, and deletion operations on the data stored in the tree.

All values of the left subtree < node->val

All values of the right subtree > node->val

## Heap
A Heap is a complete binary tree data structure that satisfies the heap property: for every node, the value of its children is greater than or equal to its own value. Heaps are usually used to implement priority queues, where the smallest (or largest) element is always at the root of the tree.

## Complete Binary Tree
A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.


---

## Happy Coding! 🚀

Keep learning, keep building, and keep pushing your limits. The world of programming is vast and full of opportunities. Enjoy the journey, and remember: **Every bug you fix makes you a better developer!**

---

© 2025 Your Moniruzzaman Shawon. All rights reserved.
