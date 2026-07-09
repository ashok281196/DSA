# 🚀 SDE-1 Roadmap

A structured preparation plan for **SDE-1 roles**, covering **DSA, OOP, System Fundamentals, Development, and Interview Prep**.

---

## 1. Foundations

### Programming Language Mastery (Choose One)
**🎯 Goal**: Achieve fluency in syntax, libraries, and idioms

#### **C++ Focus Areas**
- STL containers (vector, map, set, queue, stack, priority_queue)
- Algorithms library (sort, binary_search, lower_bound, upper_bound)
- Memory management, pointers, references
- **Practice Problems**: [LeetCode C++ Tag](https://leetcode.com/problemset/all/?page=1&topicSlugs=array&languageTags=cpp)

#### **Java Focus Areas**  
- Collections Framework (ArrayList, HashMap, TreeSet, PriorityQueue)
- String manipulation, StringBuilder
- OOP concepts, interfaces, abstract classes
- **Practice Problems**: [LeetCode Java Tag](https://leetcode.com/problemset/all/?page=1&topicSlugs=array&languageTags=java)

#### **Python Focus Areas**
- Data structures (list, dict, set, deque, heapq)
- List comprehensions, lambda functions
- Built-in functions (zip, enumerate, sorted, filter)
- **Practice Problems**: [LeetCode Python Tag](https://leetcode.com/problemset/all/?page=1&topicSlugs=array&languageTags=python)

### Time & Space Complexity Analysis
**🎯 Goal**: Analyze and optimize algorithm efficiency

#### **Key Concepts**
- **Big-O Notation**: Upper bound analysis (worst-case)
- **Big-Θ Notation**: Tight bound analysis (average-case)
- **Big-Ω Notation**: Lower bound analysis (best-case)
- **Common Complexities**: O(1), O(log n), O(n), O(n log n), O(n²), O(2ⁿ)

#### **Practice Exercises**
- Analyze time complexity of nested loops
- Calculate space complexity of recursive algorithms
- Compare iterative vs recursive solutions
- **Resource**: [Big-O Cheat Sheet](https://www.bigocheatsheet.com/)

### Mathematical Foundations
**🎯 Goal**: Master mathematical concepts for competitive programming

#### **Number Theory**
- **GCD/LCM**: Euclidean algorithm, applications in fraction problems
- **Modular Arithmetic**: (a + b) % m, (a * b) % m, modular exponentiation
- **Prime Numbers**: Sieve of Eratosthenes, prime factorization
- **Practice**: [Project Euler](https://projecteuler.net/), [SPOJ Math Problems](https://www.spoj.com/problems/tag/math)

#### **Combinatorics & Probability**
- **Permutations**: nPr = n!/(n-r)!
- **Combinations**: nCr = n!/(r!(n-r)!)
- **Probability**: Basic events, conditional probability
- **Applications**: Dynamic programming, graph problems
- **Practice Problems**:
  - [Unique Paths](https://leetcode.com/problems/unique-paths/)
  - [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

#### **📚 Recommended Study Time**: 2-3 weeks (1-2 hours/day)

---

## 2. Data Structures & Algorithms (DSA)

### A. Arrays & Strings
**🎯 Goal**: Master array manipulation and string processing techniques

#### **Core Concepts**
- **Array Traversals**: Forward, reverse, diagonal, spiral
- **In-place Operations**: Rotations, reversals, partitioning
- **Subarrays**: Contiguous vs non-contiguous, maximum/minimum sum
- **Prefix/Suffix Techniques**: Cumulative sums, difference arrays

#### **Advanced Patterns**
- **Two Pointers**: Fast-slow, left-right, sliding window
- **Sliding Window**: Fixed size, variable size, max/min in window
- **Pattern Matching**: KMP algorithm, Rabin-Karp hashing
- **String Algorithms**: Palindrome detection, anagram checking

#### **🔥 Must-Solve Problems** (25 problems)
**Easy (8 problems)**
- [Two Sum](https://leetcode.com/problems/two-sum/)
- [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
- [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- [Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
- [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)
- [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
- [Plus One](https://leetcode.com/problems/plus-one/)

**Medium (12 problems)**
- [3Sum](https://leetcode.com/problems/3sum/)
- [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
- [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
- [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)
- [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)
- [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
- [Rotate Image](https://leetcode.com/problems/rotate-image/)
- [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)
- [Group Anagrams](https://leetcode.com/problems/group-anagrams/)
- [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
- [Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)
- [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

**Hard (5 problems)**
- [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)
- [First Missing Positive](https://leetcode.com/problems/first-missing-positive/)
- [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)
- [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)
- [Edit Distance](https://leetcode.com/problems/edit-distance/)

#### **⏱️ Time Allocation**: 3-4 weeks

### B. Recursion & Backtracking
**🎯 Goal**: Master recursive thinking and systematic exploration

#### **Recursion Fundamentals**
- **Base Cases**: Termination conditions, edge case handling
- **Recursive Relations**: Breaking problems into subproblems
- **Memoization**: Top-down dynamic programming approach
- **Tail Recursion**: Space optimization techniques

#### **Backtracking Framework**
```cpp
void backtrack(State& currentState, const std::vector<Choice>& choices, std::vector<State>& results) {
    if (isValidSolution(currentState)) {
        results.push_back(currentState);
        return;
    }

    for (const auto& choice : choices) {
        applyChoice(currentState, choice);
        backtrack(currentState, nextChoices(currentState), results);
        revertChoice(currentState, choice); // Backtrack
    }
}
```

#### **🔥 Must-Solve Problems** (20 problems)
**Easy (6 problems)**
- [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)
- [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [Power of Two](https://leetcode.com/problems/power-of-two/)
- [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)
- [Same Tree](https://leetcode.com/problems/same-tree/)
- [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

**Medium (10 problems)**
- [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)
- [Permutations](https://leetcode.com/problems/permutations/)
- [Permutations II](https://leetcode.com/problems/permutations-ii/)
- [Combinations](https://leetcode.com/problems/combinations/)
- [Subsets](https://leetcode.com/problems/subsets/)
- [Subsets II](https://leetcode.com/problems/subsets-ii/)
- [Word Search](https://leetcode.com/problems/word-search/)
- [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)
- [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)
- [Combination Sum](https://leetcode.com/problems/combination-sum/)

**Hard (4 problems)**
- [N-Queens](https://leetcode.com/problems/n-queens/)
- [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)
- [Word Search II](https://leetcode.com/problems/word-search-ii/)
- [Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)

#### **🧠 Key Patterns**
1. **Choice-Explore-Unchoose**: Standard backtracking template
2. **State Space Tree**: Visualizing all possible solutions
3. **Pruning**: Early termination to optimize performance
4. **Permutation vs Combination**: Order matters vs doesn't matter

#### **⏱️ Time Allocation**: 2-3 weeks

### C. Searching & Sorting
**🎯 Goal**: Master efficient search and sort algorithms

#### **Binary Search Mastery**
- **Template Pattern**:
```cpp
int binarySearch(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
```

#### **Binary Search Variations**
- **Find First/Last Occurrence**: Lower bound, upper bound
- **Rotated Arrays**: Modified binary search
- **Search in 2D Matrix**: Row-wise and column-wise
- **Peak Finding**: Local maxima in arrays

#### **Sorting Algorithms Comparison**
| Algorithm | Time (Best) | Time (Avg) | Time (Worst) | Space | Stable |
|-----------|-------------|------------|--------------|-------|--------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | No |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | No |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | No |
| Counting Sort | O(n+k) | O(n+k) | O(n+k) | O(k) | Yes |

#### **🔥 Must-Solve Problems** (18 problems)
**Easy (6 problems)**
- [Binary Search](https://leetcode.com/problems/binary-search/)
- [Search Insert Position](https://leetcode.com/problems/search-insert-position/)
- [First Bad Version](https://leetcode.com/problems/first-bad-version/)
- [Sqrt(x)](https://leetcode.com/problems/sqrtx/)
- [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)
- [Arranging Coins](https://leetcode.com/problems/arranging-coins/)

**Medium (8 problems)**
- [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
- [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
- [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)
- [Merge Intervals](https://leetcode.com/problems/merge-intervals/)
- [Sort Colors](https://leetcode.com/problems/sort-colors/)
- [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
- [Find Peak Element](https://leetcode.com/problems/find-peak-element/)

**Hard (4 problems)**
- [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)
- [Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)
- [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)
- [Aggressive Cows](https://www.spoj.com/problems/AGGRCOW/) (SPOJ)

#### **⏱️ Time Allocation**: 2-3 weeks

### D. Linked Lists
**🎯 Goal**: Master pointer manipulation and linked list algorithms

#### **Core Concepts**
- **Node Structure**: Data and next pointer management
- **Dummy Nodes**: Simplifying edge cases
- **Two Pointers**: Fast-slow technique, cycle detection
- **Pointer Manipulation**: Insertion, deletion, reversal

#### **Essential Patterns**
```cpp
struct ListNode {
    int val;
    ListNode* next;
    explicit ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* attachDummy(ListNode* head) {
    auto* dummy = new ListNode(0);
    dummy->next = head;
    return dummy;
}

ListNode* findMiddle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    while (current) {
        ListNode* nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }
    return prev;
}
```

#### **🔥 Must-Solve Problems** (16 problems)
**Easy (7 problems)**
- [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
- [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
- [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)
- [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)
- [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
- [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)

**Medium (7 problems)**
- [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
- [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
- [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)
- [Rotate List](https://leetcode.com/problems/rotate-list/)
- [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)
- [Sort List](https://leetcode.com/problems/sort-list/)
- [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)

**Hard (2 problems)**
- [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)
- [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)

#### **🧠 Key Techniques**
1. **Floyd's Cycle Detection**: Fast-slow pointers
2. **Merge Sort on Lists**: O(n log n) sorting
3. **Dummy Node Usage**: Simplifying insertion/deletion
4. **Multiple Pointers**: Maintaining references for complex operations

#### **⏱️ Time Allocation**: 1-2 weeks

### E. Stacks & Queues
**🎯 Goal**: Master LIFO/FIFO data structures and their applications

#### **Stack Applications**
- **Expression Evaluation**: Infix, postfix, prefix
- **Parentheses Matching**: Balanced brackets validation
- **Function Call Management**: Call stack simulation
- **Undo Operations**: Reversible action tracking

#### **Queue Applications**
- **BFS Traversal**: Level-order tree/graph traversal
- **Scheduling**: Task queue management
- **Buffering**: Data stream processing
- **Cache Implementation**: LRU, LFU caches

#### **Advanced Patterns**
```cpp
#include <vector>
#include <stack>
#include <deque>

std::vector<int> nextGreaterElements(const std::vector<int>& nums) {
    std::stack<int> indices;
    std::vector<int> result(nums.size(), -1);

    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        while (!indices.empty() && nums[indices.top()] < nums[i]) {
            result[indices.top()] = nums[i];
            indices.pop();
        }
        indices.push(i);
    }
    return result;
}

std::vector<int> maxSlidingWindow(const std::vector<int>& nums, int k) {
    std::deque<int> dq;
    std::vector<int> result;

    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }
        while (!dq.empty() && nums[dq.back()] <= nums[i]) {
            dq.pop_back();
        }
        dq.push_back(i);

        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }
    return result;
}
```

#### **🔥 Must-Solve Problems** (20 problems)
**Easy (6 problems)**
- [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
- [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)
- [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)
- [Min Stack](https://leetcode.com/problems/min-stack/)
- [Baseball Game](https://leetcode.com/problems/baseball-game/)
- [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)

**Medium (10 problems)**
- [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)
- [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/)
- [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)
- [Decode String](https://leetcode.com/problems/decode-string/)
- [Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/)
- [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/)
- [Online Stock Span](https://leetcode.com/problems/online-stock-span/)
- [Design Circular Queue](https://leetcode.com/problems/design-circular-queue/)
- [Simplify Path](https://leetcode.com/problems/simplify-path/)
- [LRU Cache](https://leetcode.com/problems/lru-cache/)

**Hard (4 problems)**
- [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)
- [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/)
- [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)
- [Basic Calculator](https://leetcode.com/problems/basic-calculator/)

#### **🔧 Implementation Tips**
1. **Stack**: Use list in Python, vector in C++, ArrayDeque in Java
2. **Queue**: Use deque in Python, queue in C++, LinkedList in Java
3. **Priority Queue**: heapq in Python, priority_queue in C++, PriorityQueue in Java
4. **Monotonic Structures**: Maintain increasing/decreasing order

#### **⏱️ Time Allocation**: 2-3 weeks

### F. Trees
**🎯 Goal**: Master tree traversals, BST operations, and tree algorithms

#### **Tree Fundamentals**
- **Binary Tree Properties**: Height, depth, balanced vs unbalanced
- **Traversal Methods**: Inorder, preorder, postorder, level-order
- **BST Properties**: Left < Root < Right invariant
- **Tree Construction**: From traversals, from arrays

#### **Essential Algorithms**
```cpp
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root, std::vector<int>& result) {
    if (!root) {
        return;
    }
    inorderTraversal(root->left, result);
    result.push_back(root->val);
    inorderTraversal(root->right, result);
}

std::vector<int> inorder(TreeNode* root) {
    std::vector<int> result;
    inorderTraversal(root, result);
    return result;
}

std::vector<std::vector<int>> levelOrder(TreeNode* root) {
    std::vector<std::vector<int>> levels;
    if (!root) {
        return levels;
    }
    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        std::vector<int> level;
        level.reserve(levelSize);
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);

            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        levels.push_back(level);
    }
    return levels;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) {
        return root;
    }

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if (left && right) {
        return root;
    }
    return left ? left : right;
}
```

#### **🔥 Must-Solve Problems** (25 problems)
**Easy (10 problems)**
- [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)
- [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)
- [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)
- [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
- [Same Tree](https://leetcode.com/problems/same-tree/)
- [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)
- [Path Sum](https://leetcode.com/problems/path-sum/)
- [Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)
- [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
- [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)

**Medium (12 problems)**
- [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)
- [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)
- [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)
- [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
- [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)
- [Path Sum II](https://leetcode.com/problems/path-sum-ii/)
- [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)
- [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)
- [House Robber III](https://leetcode.com/problems/house-robber-iii/)
- [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)
- [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)
- [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)

**Hard (3 problems)**
- [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)
- [Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)
- [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) (Iterative)

#### **Advanced Topics**
- **Tries**: Prefix trees for string operations
- **Segment Trees**: Range query optimization
- **Heaps**: Priority queue implementation
- **AVL/Red-Black Trees**: Self-balancing BSTs

#### **Heap Operations**
```cpp
#include <queue>
#include <vector>
#include <algorithm>

void heapExamples() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    minHeap.push(5);
    int minVal = minHeap.top();
    minHeap.pop();

    std::priority_queue<int> maxHeap;
    maxHeap.push(5);
    int maxVal = maxHeap.top();
    maxHeap.pop();

    std::vector<int> nums{3, 1, 4, 1, 5};
    std::make_heap(nums.begin(), nums.end()); // O(n) heapify
}
```

#### **⏱️ Time Allocation**: 3-4 weeks

### G. Graphs
**🎯 Goal**: Master graph representations, traversals, and shortest path algorithms

#### **Graph Representations**
```cpp
#include <unordered_map>
#include <vector>
#include <utility>

void graphRepresentations() {
    std::unordered_map<char, std::vector<char>> adjacencyList{
        {'A', {'B', 'C'}},
        {'B', {'A', 'D'}},
        {'C', {'A', 'D'}},
        {'D', {'B', 'C'}}
    };

    const int n = 4;
    std::vector<std::vector<int>> adjacencyMatrix(n, std::vector<int>(n, 0));
    adjacencyMatrix[0][1] = 1; // Edge from 0 to 1

    std::vector<std::pair<int, int>> edgeList{{0, 1}, {1, 2}, {2, 3}};
}
```

#### **Core Algorithms**
```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <queue>
#include <limits>
#include <functional>

using Graph = std::unordered_map<int, std::vector<int>>;

void dfs(const Graph& graph, int start, std::unordered_set<int>& visited) {
    if (visited.count(start)) {
        return;
    }
    visited.insert(start);
    std::cout << start << '\n';
    for (int neighbor : graph.at(start)) {
        dfs(graph, neighbor, visited);
    }
}

void bfs(const Graph& graph, int start) {
    std::unordered_set<int> visited{start};
    std::queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        std::cout << vertex << '\n';

        for (int neighbor : graph.at(vertex)) {
            if (!visited.count(neighbor)) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
}

using WeightedGraph = std::unordered_map<int, std::unordered_map<int, int>>;

std::unordered_map<int, int> dijkstra(const WeightedGraph& graph, int start) {
    std::unordered_map<int, int> distances;
    for (const auto& entry : graph) {
        distances[entry.first] = std::numeric_limits<int>::max();
    }
    distances[start] = 0;

    using Node = std::pair<int, int>; // (distance, node)
    auto cmp = [](const Node& lhs, const Node& rhs) { return lhs.first > rhs.first; };
    std::priority_queue<Node, std::vector<Node>, decltype(cmp)> pq(cmp);
    pq.emplace(0, start);

    while (!pq.empty()) {
        auto [currentDistance, current] = pq.top();
        pq.pop();

        if (currentDistance > distances[current]) {
            continue;
        }

        for (const auto& [neighbor, weight] : graph.at(current)) {
            int distance = currentDistance + weight;
            if (distance < distances[neighbor]) {
                distances[neighbor] = distance;
                pq.emplace(distance, neighbor);
            }
        }
    }

    return distances;
}
```

#### **🔥 Must-Solve Problems** (22 problems)
**Easy (6 problems)**
- [Find the Town Judge](https://leetcode.com/problems/find-the-town-judge/)
- [Find Center of Star Graph](https://leetcode.com/problems/find-center-of-star-graph/)
- [Number of Provinces](https://leetcode.com/problems/number-of-provinces/)
- [Find if Path Exists in Graph](https://leetcode.com/problems/find-if-path-exists-in-graph/)
- [All Paths From Source to Target](https://leetcode.com/problems/all-paths-from-source-to-target/)
- [Flood Fill](https://leetcode.com/problems/flood-fill/)

**Medium (12 problems)**
- [Number of Islands](https://leetcode.com/problems/number-of-islands/)
- [Clone Graph](https://leetcode.com/problems/clone-graph/)
- [Course Schedule](https://leetcode.com/problems/course-schedule/)
- [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)
- [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)
- [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)
- [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)
- [Evaluate Division](https://leetcode.com/problems/evaluate-division/)
- [Network Delay Time](https://leetcode.com/problems/network-delay-time/)
- [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/)
- [Accounts Merge](https://leetcode.com/problems/accounts-merge/)
- [Word Ladder](https://leetcode.com/problems/word-ladder/)

**Hard (4 problems)**
- [Word Ladder II](https://leetcode.com/problems/word-ladder-ii/)
- [Minimum Cost to Make at Least One Valid Path in a Grid](https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/)
- [Critical Connections in a Network](https://leetcode.com/problems/critical-connections-in-a-network/)
- [Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) (Premium)

#### **Advanced Graph Algorithms**
- **Union-Find (Disjoint Set)**: Connected components, cycle detection
- **Topological Sort**: DAG ordering, dependency resolution
- **Minimum Spanning Tree**: Kruskal's and Prim's algorithms
- **Strongly Connected Components**: Tarjan's and Kosaraju's algorithms

#### **Union-Find Template**
```cpp
#include <vector>
#include <numeric>
#include <algorithm>

class UnionFind {
public:
    explicit UnionFind(int n) : parent(n), rank(n, 0), components(n) {
        std::iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool unite(int x, int y) {
        int px = find(x);
        int py = find(y);
        if (px == py) {
            return false;
        }

        if (rank[px] < rank[py]) {
            std::swap(px, py);
        }

        parent[py] = px;
        if (rank[px] == rank[py]) {
            ++rank[px];
        }

        --components;
        return true;
    }

    int count() const {
        return components;
    }

private:
    std::vector<int> parent;
    std::vector<int> rank;
    int components;
};
```

#### **⏱️ Time Allocation**: 3-4 weeks

### H. Dynamic Programming (DP)
**🎯 Goal**: Master systematic problem-solving with memoization and tabulation

#### **DP Problem Identification**
1. **Optimal Substructure**: Solution depends on solutions to subproblems
2. **Overlapping Subproblems**: Same subproblems solved multiple times
3. **Decision Making**: Choose between multiple options at each step

#### **DP Approaches**
```cpp
#include <unordered_map>
#include <vector>

int fibMemoHelper(int n, std::unordered_map<int, int>& memo) {
    if (memo.count(n)) {
        return memo[n];
    }
    if (n <= 1) {
        return n;
    }
    memo[n] = fibMemoHelper(n - 1, memo) + fibMemoHelper(n - 2, memo);
    return memo[n];
}

int fibMemo(int n) {
    std::unordered_map<int, int> memo;
    return fibMemoHelper(n, memo);
}

int fibTab(int n) {
    if (n <= 1) {
        return n;
    }
    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int fibOptimized(int n) {
    if (n <= 1) {
        return n;
    }
    int prev2 = 0;
    int prev1 = 1;
    for (int i = 2; i <= n; ++i) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return prev1;
}
```

#### **Classic DP Patterns**

**1. Linear DP**
- Fibonacci, Climbing Stairs, House Robber
- 1D state, previous state dependency

**2. Grid DP**
- Unique Paths, Minimum Path Sum
- 2D state, multiple directions

**3. Subsequence DP**
- Longest Increasing Subsequence (LIS)
- Longest Common Subsequence (LCS)

**4. Knapsack DP**
- 0/1 Knapsack, Unbounded Knapsack
- Subset Sum, Partition Equal Subset Sum

**5. String DP**
- Edit Distance, Palindrome problems
- Pattern matching with DP

#### **🔥 Must-Solve Problems** (25 problems)
**Easy (8 problems)**
- [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)
- [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)
- [House Robber](https://leetcode.com/problems/house-robber/)
- [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
- [Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/)
- [Is Subsequence](https://leetcode.com/problems/is-subsequence/)
- [Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

**Medium (13 problems)**
- [Unique Paths](https://leetcode.com/problems/unique-paths/)
- [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)
- [Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/)
- [Coin Change](https://leetcode.com/problems/coin-change/)
- [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)
- [House Robber II](https://leetcode.com/problems/house-robber-ii/)
- [Decode Ways](https://leetcode.com/problems/decode-ways/)
- [Word Break](https://leetcode.com/problems/word-break/)
- [Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)
- [Target Sum](https://leetcode.com/problems/target-sum/)
- [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/)
- [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/)
- [Maximal Square](https://leetcode.com/problems/maximal-square/)

**Hard (4 problems)**
- [Edit Distance](https://leetcode.com/problems/edit-distance/)
- [Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/)
- [Wildcard Matching](https://leetcode.com/problems/wildcard-matching/)
- [Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)

#### **DP Optimization Techniques**
1. **Space Optimization**: Reduce 2D DP to 1D
2. **Rolling Array**: Use only necessary rows/columns
3. **State Compression**: Use bit manipulation for states
4. **Monotonic Queue/Stack**: Optimize range queries

#### **Common DP Templates**
```cpp
#include <vector>
#include <string>
#include <algorithm>

int knapsack(const std::vector<int>& weights, const std::vector<int>& values, int capacity) {
    const int n = static_cast<int>(weights.size());
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            if (weights[i - 1] <= w) {
                dp[i][w] = std::max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}

int lcs(const std::string& text1, const std::string& text2) {
    const int m = static_cast<int>(text1.size());
    const int n = static_cast<int>(text2.size());
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}
```

#### **⏱️ Time Allocation**: 4-5 weeks

### I. Other Important Topics
**🎯 Goal**: Master advanced techniques and mathematical algorithms

#### **Bit Manipulation**
```cpp
#include <cstdint>

bool isOdd(int x) { return (x & 1) != 0; }
int removeRightmostSetBit(int x) { return x & (x - 1); }
int setBit(int x, int i) { return x | (1 << i); }
int clearBit(int x, int i) { return x & ~(1 << i); }
int toggleBit(int x, int i) { return x ^ (1 << i); }
int rightmostSetBit(int x) { return x & -x; }
int divideByTwo(int x) { return x >> 1; }
int multiplyByTwo(int x) { return x << 1; }

int countBits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        ++count;
    }
    return count;
}

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
```

**Key Problems**:
- [Single Number](https://leetcode.com/problems/single-number/)
- [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [Counting Bits](https://leetcode.com/problems/counting-bits/)
- [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)

#### **Greedy Algorithms**
**Greedy Choice Property**: Locally optimal choice leads to globally optimal solution

```cpp
#include <vector>
#include <tuple>
#include <algorithm>
#include <queue>
#include <string>
#include <unordered_map>

struct Activity {
    int start;
    int finish;
    int index;
};

std::vector<Activity> activitySelection(std::vector<Activity> activities) {
    std::sort(activities.begin(), activities.end(), [](const Activity& a, const Activity& b) {
        return a.finish < b.finish;
    });

    std::vector<Activity> selected;
    if (activities.empty()) {
        return selected;
    }

    selected.push_back(activities.front());
    int lastFinish = activities.front().finish;

    for (std::size_t i = 1; i < activities.size(); ++i) {
        if (activities[i].start >= lastFinish) {
            selected.push_back(activities[i]);
            lastFinish = activities[i].finish;
        }
    }

    return selected;
}

std::vector<std::pair<char, std::string>> huffmanCoding(const std::unordered_map<char, int>& freq) {
    struct Node {
        int weight;
        std::vector<std::pair<char, std::string>> codes;
    };

    struct Compare {
        bool operator()(const Node& a, const Node& b) const {
            return a.weight > b.weight;
        }
    };

    std::priority_queue<Node, std::vector<Node>, Compare> heap;
    for (const auto& [symbol, weight] : freq) {
        heap.push(Node{weight, {{symbol, std::string()}}});
    }

    while (heap.size() > 1) {
        Node lo = heap.top();
        heap.pop();
        Node hi = heap.top();
        heap.pop();

        for (auto& entry : lo.codes) {
            entry.second.insert(entry.second.begin(), '0');
        }
        for (auto& entry : hi.codes) {
            entry.second.insert(entry.second.begin(), '1');
        }

        Node merged;
        merged.weight = lo.weight + hi.weight;
        merged.codes.reserve(lo.codes.size() + hi.codes.size());
        merged.codes.insert(merged.codes.end(), lo.codes.begin(), lo.codes.end());
        merged.codes.insert(merged.codes.end(), hi.codes.begin(), hi.codes.end());
        heap.push(std::move(merged));
    }

    auto codes = heap.top().codes;
    std::sort(codes.begin(), codes.end(), [](const auto& lhs, const auto& rhs) {
        if (lhs.second.size() == rhs.second.size()) {
            return lhs.first < rhs.first;
        }
        return lhs.second.size() < rhs.second.size();
    });
    return codes;
}
```

**Key Problems**:
- [Jump Game](https://leetcode.com/problems/jump-game/)
- [Gas Station](https://leetcode.com/problems/gas-station/)
- [Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/)

#### **Advanced Mathematics**

**Modular Arithmetic**
```cpp
#include <vector>

const int MOD = 1'000'000'007;

long long powerMod(long long base, long long exp, long long mod) {
    long long result = 1 % mod;
    base %= mod;
    while (exp > 0) {
        if (exp & 1LL) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

long long modInverse(long long a, long long mod = MOD) {
    return powerMod(a, mod - 2, mod);
}

std::vector<int> sieve(int n) {
    std::vector<bool> isPrime(n + 1, true);
    if (n >= 0) {
        isPrime[0] = false;
    }
    if (n >= 1) {
        isPrime[1] = false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    std::vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
```

**Number Theory Problems**:
- [Count Primes](https://leetcode.com/problems/count-primes/)
- [Happy Number](https://leetcode.com/problems/happy-number/)
- [Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)

#### **Two Pointers Advanced Patterns**
```cpp
#include <vector>

void sortColors(std::vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = static_cast<int>(nums.size()) - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            std::swap(nums[low++], nums[mid++]);
        } else if (nums[mid] == 1) {
            ++mid;
        } else {
            std::swap(nums[mid], nums[high--]);
        }
    }
}

int findDuplicate(const std::vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}
```

#### **⏱️ Time Allocation**: 2-3 weeks

---

## 3. Core CS Concepts

### A. Object-Oriented Programming (OOP)
**🎯 Goal**: Master OOP principles and design patterns

#### **Core Principles**
- **Encapsulation**: Data hiding and access control
- **Abstraction**: Interface vs implementation separation  
- **Inheritance**: Code reuse through class hierarchies
- **Polymorphism**: Method overriding and dynamic dispatch

#### **Advanced OOP Concepts**
```cpp
#include <iostream>

class BankAccount {
public:
    void deposit(double amount) {
        if (amount > 0.0) {
            balance_ += amount;
        }
    }

    double getBalance() const {
        return balance_;
    }

private:
    double balance_ = 0.0;
};

class Animal {
public:
    virtual ~Animal() = default;
    virtual void makeSound() const = 0;

    void eat() const {
        std::cout << "Animal is eating\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow!\n";
    }
};
```

#### **Essential Design Patterns**

**1. Singleton Pattern**
```cpp
class Singleton {
public:
    static Singleton& instance() {
        static Singleton instance;
        return instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() = default;
};
```

**2. Factory Pattern**
```cpp
#include <iostream>
#include <memory>
#include <string>
#include <algorithm>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override { std::cout << "Circle\n"; }
};

class Rectangle : public Shape {
public:
    void draw() const override { std::cout << "Rectangle\n"; }
};

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(std::string type) {
        std::transform(type.begin(), type.end(), type.begin(), [](unsigned char c) { return std::tolower(c); });
        if (type == "circle") {
            return std::make_unique<Circle>();
        }
        if (type == "rectangle") {
            return std::make_unique<Rectangle>();
        }
        return nullptr;
    }
};
```

**3. Observer Pattern**
```cpp
#include <vector>
#include <memory>
#include <string>

class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(const std::string& message) = 0;
};

class Subject {
public:
    void addObserver(const std::shared_ptr<Observer>& observer) {
        observers_.push_back(observer);
    }

    void notifyObservers(const std::string& message) {
        for (const auto& observer : observers_) {
            if (observer) {
                observer->update(message);
            }
        }
    }

private:
    std::vector<std::shared_ptr<Observer>> observers_;
};
```

#### **Interview Topics**
- Method overloading vs overriding
- Abstract classes vs interfaces
- Static vs instance methods
- Access modifiers (public, private, protected)
- Composition vs inheritance

### B. Operating Systems
**🎯 Goal**: Understand system-level concepts for efficient programming

#### **Process Management**
- **Process vs Thread**: Memory space, creation overhead
- **Process States**: New, Ready, Running, Waiting, Terminated
- **Scheduling Algorithms**: FCFS, SJF, Round Robin, Priority
- **Context Switching**: Save/restore CPU state

#### **Synchronization**
```cpp
#include <mutex>
#include <thread>
#include <semaphore>
#include <vector>

std::mutex mutex;
int sharedResource = 0;

void threadFunction() {
    std::lock_guard<std::mutex> lock(mutex);
    ++sharedResource; // Critical section
}

std::counting_semaphore<1> semaphore(1);

void producer() {
    semaphore.acquire();
    // Produce item
    semaphore.release();
}

void runThreads() {
    std::vector<std::thread> workers;
    for (int i = 0; i < 4; ++i) {
        workers.emplace_back(threadFunction);
    }
    for (auto& worker : workers) {
        worker.join();
    }
}
```

#### **Deadlock Prevention**
- **Mutual Exclusion**: Resource can't be shared
- **Hold and Wait**: Process holds resources while waiting
- **No Preemption**: Resources can't be forcibly taken
- **Circular Wait**: Circular chain of waiting processes

#### **Memory Management**
- **Paging**: Fixed-size blocks, page tables
- **Segmentation**: Variable-size segments
- **Virtual Memory**: Disk storage extension
- **Cache**: Locality of reference principles

#### **Common Interview Questions**
1. Difference between process and thread?
2. What is a deadlock? How to prevent it?
3. Explain virtual memory concept
4. What are semaphores and mutexes?
5. Producer-consumer problem solution

### C. Database Management Systems (DBMS)
**🎯 Goal**: Master database design and query optimization

#### **Database Normalization**
- **1NF**: No repeating groups, atomic values
- **2NF**: 1NF + no partial dependencies
- **3NF**: 2NF + no transitive dependencies
- **BCNF**: 3NF + every determinant is a candidate key

#### **SQL Mastery**
```cpp
#include <string>
#include <vector>

const std::string joinQuery = R"(SELECT e.name, d.department_name
FROM employees e
INNER JOIN departments d ON e.dept_id = d.id;)";

const std::string subquery = R"(SELECT name FROM employees
WHERE salary > (SELECT AVG(salary) FROM employees);)";

const std::string windowFunction = R"(SELECT name, salary,
       RANK() OVER (PARTITION BY dept_id ORDER BY salary DESC) AS rank
FROM employees;)";

const std::vector<std::string> indexStatements = {
    "CREATE INDEX idx_employee_name ON employees(name);",
    "CREATE INDEX idx_name_dept ON employees(name, dept_id);"
};
```

#### **ACID Properties**
- **Atomicity**: All or nothing execution
- **Consistency**: Database integrity maintained
- **Isolation**: Concurrent transactions don't interfere
- **Durability**: Committed changes persist

#### **Transaction Isolation Levels**
1. **Read Uncommitted**: Dirty reads possible
2. **Read Committed**: No dirty reads
3. **Repeatable Read**: No phantom reads
4. **Serializable**: Highest isolation level

#### **NoSQL vs SQL**
| Feature | SQL | NoSQL |
|---------|-----|-------|
| Schema | Fixed | Flexible |
| ACID | Strong | Eventual consistency |
| Scaling | Vertical | Horizontal |
| Use Cases | Complex queries | Big data, real-time |

#### **CAP Theorem**
- **Consistency**: All nodes see same data
- **Availability**: System remains operational
- **Partition Tolerance**: Works despite network failures
- **Rule**: Can only guarantee 2 out of 3

### D. Computer Networks
**🎯 Goal**: Understand network protocols and web technologies

#### **OSI vs TCP/IP Model**
| OSI Layer | TCP/IP Layer | Protocols |
|-----------|--------------|-----------|
| Application | Application | HTTP, HTTPS, FTP, SMTP |
| Presentation | Application | SSL/TLS |
| Session | Application | TCP, UDP |
| Transport | Transport | TCP, UDP |
| Network | Internet | IP, ICMP |
| Data Link | Network Interface | Ethernet, WiFi |
| Physical | Network Interface | Cables, Radio |

#### **HTTP vs HTTPS**
```cpp
#include <iostream>

void printHttpExample() {
    std::cout << "HTTP Request:\n"
              << "GET /api/users HTTP/1.1\n"
              << "Host: example.com\n"
              << "User-Agent: Mozilla/5.0\n"
              << "Accept: application/json\n\n"
              << "HTTP Response:\n"
              << "HTTP/1.1 200 OK\n"
              << "Content-Type: application/json\n"
              << "Content-Length: 123\n\n"
              << "{\"users\": [...]}\n";
}
```

#### **TCP vs UDP**
| Feature | TCP | UDP |
|---------|-----|-----|
| Connection | Connection-oriented | Connectionless |
| Reliability | Reliable | Unreliable |
| Speed | Slower | Faster |
| Use Cases | Web, Email | Gaming, Streaming |

#### **Load Balancing**
- **Round Robin**: Requests distributed equally
- **Least Connections**: Route to server with fewest connections
- **IP Hash**: Route based on client IP
- **Geographic**: Route based on location

### E. System Design Fundamentals
**🎯 Goal**: Design scalable and reliable systems

#### **Scalability Patterns**
- **Horizontal Scaling**: Add more servers
- **Vertical Scaling**: Upgrade server hardware
- **Load Balancing**: Distribute requests
- **Caching**: Store frequently accessed data

#### **Caching Strategies**
```cpp
#include <string>
#include <unordered_map>

struct User {
    int id;
    std::string name;
};

std::unordered_map<std::string, User> cache;
User fetchFromDatabase(int userId);
void persistToDatabase(int userId, const User& user);

User getUser(int userId) {
    const std::string cacheKey = "user:" + std::to_string(userId);
    if (auto it = cache.find(cacheKey); it != cache.end()) {
        return it->second;
    }

    User user = fetchFromDatabase(userId);
    cache[cacheKey] = user; // TTL handling would be added in a production cache
    return user;
}

void updateUser(int userId, const User& userData) {
    persistToDatabase(userId, userData);
    const std::string cacheKey = "user:" + std::to_string(userId);
    cache[cacheKey] = userData;
}
```

#### **Database Scaling**
- **Replication**: Master-slave, master-master
- **Sharding**: Horizontal partitioning
- **Federation**: Split databases by function
- **Denormalization**: Trade storage for performance

#### **Microservices vs Monolith**
| Aspect | Monolith | Microservices |
|--------|----------|---------------|
| Deployment | Single unit | Independent services |
| Scaling | Scale entire app | Scale individual services |
| Technology | Single stack | Polyglot architecture |
| Complexity | Lower | Higher |

#### **API Design**
```cpp
#include <string>
#include <vector>

struct Endpoint {
    std::string method;
    std::string path;
    std::string description;
};

const std::vector<Endpoint> apiEndpoints = {
    {"GET", "/api/users", "Get all users"},
    {"GET", "/api/users/123", "Get specific user"},
    {"POST", "/api/users", "Create new user"},
    {"PUT", "/api/users/123", "Update user"},
    {"DELETE", "/api/users/123", "Delete user"}
};

struct HttpStatus {
    int code;
    std::string reason;
};

const std::vector<HttpStatus> httpStatusCodes = {
    {200, "OK"},
    {201, "Created"},
    {400, "Bad Request"},
    {401, "Unauthorized"},
    {404, "Not Found"},
    {500, "Internal Server Error"}
};
```

#### **⏱️ Time Allocation**: 4-5 weeks total

---

## 4. Development Skills

### **Git & GitHub Mastery**
**🎯 Goal**: Master version control and collaborative development

#### **Essential Git Commands**
```cpp
#include <string>
#include <vector>

struct CommandGroup {
    std::string title;
    std::vector<std::string> commands;
};

const std::vector<CommandGroup> gitCommands = {
    {"Repository Setup", {
        "git init  # Initialize repository",
        "git clone <url>  # Clone remote repository",
        "git remote add origin <url>  # Add remote"
    }},
    {"Basic Workflow", {
        "git status  # Check working directory status",
        "git add .  # Stage all changes",
        "git add <file>  # Stage specific file",
        "git commit -m 'message'  # Commit with message",
        "git push origin <branch>  # Push to remote branch",
        "git pull origin <branch>  # Pull from remote branch"
    }},
    {"Branching", {
        "git branch  # List branches",
        "git branch <name>  # Create new branch",
        "git checkout <branch>  # Switch to branch",
        "git checkout -b <name>  # Create and switch to branch",
        "git merge <branch>  # Merge branch into current",
        "git branch -d <name>  # Delete branch"
    }},
    {"Advanced Operations", {
        "git rebase <branch>  # Rebase current branch",
        "git cherry-pick <commit>  # Apply specific commit",
        "git reset --hard <commit>  # Reset to specific commit",
        "git stash  # Temporarily save changes",
        "git stash pop  # Apply stashed changes"
    }}
};
```

#### **GitHub Workflow**
1. **Fork** repository to your account
2. **Clone** your fork locally
3. Create **feature branch** for changes
4. Make changes and **commit**
5. **Push** to your fork
6. Create **Pull Request** to original repository
7. Address **review feedback**
8. **Merge** after approval

#### **Git Best Practices**
- Write descriptive commit messages
- Keep commits small and focused
- Use branching strategy (GitFlow, GitHub Flow)
- Review code before merging
- Use `.gitignore` for build artifacts

### **Linux Command Line Essentials**
**🎯 Goal**: Navigate and manage Linux systems efficiently

#### **File System Navigation**
```cpp
#include <string>
#include <vector>

struct ShellCommandGroup {
    std::string title;
    std::vector<std::string> commands;
};

const std::vector<ShellCommandGroup> filesystemCommands = {
    {"Navigation", {
        "pwd  # Print working directory",
        "ls -la  # List files with details",
        "cd /path/to/directory  # Change directory",
        "cd ..  # Go to parent directory",
        "cd ~  # Go to home directory"
    }},
    {"File Operations", {
        "touch file.txt  # Create empty file",
        "mkdir directory  # Create directory",
        "mkdir -p path/to/dir  # Create nested directories",
        "cp source destination  # Copy file/directory",
        "mv source destination  # Move/rename file",
        "rm file.txt  # Remove file",
        "rm -rf directory  # Remove directory recursively"
    }}
};
```

#### **File Content Management**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> fileContentCommands = {
    "cat file.txt  # Display file content",
    "less file.txt  # View file with pagination",
    "head -n 10 file.txt  # First 10 lines",
    "tail -n 10 file.txt  # Last 10 lines",
    "tail -f log.txt  # Follow file changes",
    "grep 'pattern' file.txt  # Search in file",
    "grep -r 'pattern' directory  # Recursive search",
    "find /path -name '*.txt'  # Find files by name",
    "find /path -type f -size +1M  # Find large files"
};
```

#### **Process Management**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> processCommands = {
    "ps aux  # List all processes",
    "ps aux | grep python  # Find specific processes",
    "top  # Real-time process viewer",
    "htop  # Enhanced process viewer",
    "kill <PID>  # Terminate process",
    "kill -9 <PID>  # Force kill process",
    "killall python  # Kill all python processes",
    "nohup command &  # Run command in background",
    "jobs  # List background jobs",
    "fg %1  # Bring job to foreground"
};
```

#### **Permissions & Ownership**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> permissionCommands = {
    "chmod 755 file.txt  # Set file permissions",
    "chmod +x script.sh  # Make file executable",
    "chown user:group file.txt  # Change ownership",
    "sudo command  # Run as superuser",
    "su - username  # Switch user"
};
```

#### **SSH & Remote Access**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> sshCommands = {
    "ssh user@hostname  # Connect to remote server",
    "ssh-keygen -t rsa  # Generate SSH key pair",
    "ssh-copy-id user@hostname  # Copy public key to server",
    "scp file.txt user@host:/path  # Copy file to remote",
    "rsync -av source/ dest/  # Synchronize directories"
};
```

### **Build Tools & Package Management**

#### **Maven (Java)**
```cpp
#include <string>

const std::string pomXml = R"(<!-- pom.xml structure -->
<project>
    <groupId>com.example</groupId>
    <artifactId>my-app</artifactId>
    <version>1.0.0</version>
    
    <dependencies>
        <dependency>
            <groupId>junit</groupId>
            <artifactId>junit</artifactId>
            <version>4.13.2</version>
            <scope>test</scope>
        </dependency>
    </dependencies>
    
    <build>
        <plugins>
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-compiler-plugin</artifactId>
                <version>3.8.1</version>
                <configuration>
                    <source>11</source>
                    <target>11</target>
                </configuration>
            </plugin>
        </plugins>
    </build>
</project>)";
```

```cpp
#include <string>
#include <vector>

const std::vector<std::string> mavenCommands = {
    "mvn clean compile  # Clean and compile",
    "mvn test  # Run tests",
    "mvn package  # Create JAR file",
    "mvn install  # Install to local repository",
    "mvn dependency:tree  # Show dependency tree"
};
```

#### **Gradle (Java/Kotlin)**
```cpp
#include <string>

const std::string buildGradle = R"(// build.gradle
plugins {
    id 'java'
    id 'application'
}

repositories {
    mavenCentral()
}

dependencies {
    implementation 'com.google.guava:guava:30.1-jre'
    testImplementation 'junit:junit:4.13.2'
}

application {
    mainClass = 'com.example.App'
})";
```

```cpp
#include <string>
#include <vector>

const std::vector<std::string> gradleCommands = {
    "gradle build  # Build project",
    "gradle test  # Run tests",
    "gradle run  # Run application",
    "gradle clean  # Clean build directory"
};
```

#### **pip/virtualenv (Python)**
```cpp
#include <string>
#include <vector>

struct PythonWorkflow {
    std::string title;
    std::vector<std::string> commands;
};

const std::vector<PythonWorkflow> pythonCommands = {
    {"Virtual Environment", {
        "python -m venv myenv  # Create virtual environment",
        "source myenv/bin/activate  # Activate (Linux/Mac)",
        "myenv\\Scripts\\activate  # Activate (Windows)",
        "deactivate  # Deactivate environment"
    }},
    {"Package Management", {
        "pip install package  # Install package",
        "pip install -r requirements.txt  # Install from file",
        "pip freeze > requirements.txt  # Generate requirements file",
        "pip list  # List installed packages",
        "pip show package  # Show package details",
        "pip uninstall package  # Uninstall package"
    }}
};
```

#### **npm (JavaScript/Node.js)**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> npmCommands = {
    "npm init  # Initialize package.json",
    "npm install package  # Install package locally",
    "npm install -g package  # Install package globally",
    "npm install --save-dev package  # Install as dev dependency",
    "npm run script  # Run package script",
    "npm test  # Run tests",
    "npm start  # Start application",
    "npm audit  # Check for vulnerabilities"
};
```

### **Unit Testing Frameworks**

#### **JUnit (Java)**
```cpp
#include <cassert>
#include <stdexcept>
#include "calculator.h"

void testAddition() {
    Calculator calculator;
    int result = calculator.add(2, 3);
    assert(result == 5);
}

void testDivisionByZero() {
    Calculator calculator;
    bool threw = false;
    try {
        calculator.divide(10, 0);
    } catch (const std::invalid_argument&) {
        threw = true;
    }
    assert(threw);
}

void runCalculatorTests() {
    testAddition();
    testDivisionByZero();
}
```

#### **PyTest (Python)**
```cpp
#include <vector>
#include <tuple>
#include <cassert>
#include <stdexcept>
#include "calculator.h"

void testAdditionCase(int a, int b, int expected) {
    Calculator calculator;
    assert(calculator.add(a, b) == expected);
}

void testDivisionThrows() {
    Calculator calculator;
    bool threw = false;
    try {
        calculator.divide(10, 0);
    } catch (const std::runtime_error&) {
        threw = true;
    } catch (const std::invalid_argument&) {
        threw = true;
    }
    assert(threw);
}

void runParameterizedAdditionTests() {
    const std::vector<std::tuple<int, int, int>> cases = {
        {2, 3, 5},
        {0, 0, 0},
        {-1, 1, 0}
    };
    for (const auto& [a, b, expected] : cases) {
        testAdditionCase(a, b, expected);
    }
}
```

#### **Google Test (C++)**
```cpp
#include <gtest/gtest.h>
#include <memory>
#include <tuple>
#include "calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    void SetUp() override {
        calculator = std::make_unique<Calculator>();
    }

    std::unique_ptr<Calculator> calculator;
};

TEST_F(CalculatorTest, Addition) {
    EXPECT_EQ(5, calculator->add(2, 3));
}

TEST_F(CalculatorTest, DivisionByZero) {
    EXPECT_THROW(calculator->divide(10, 0), std::invalid_argument);
}

class CalculatorAdditionTest : public ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(CalculatorAdditionTest, MatchesExpectedSum) {
    const auto [a, b, expected] = GetParam();
    Calculator calculator;
    EXPECT_EQ(expected, calculator.add(a, b));
}

INSTANTIATE_TEST_SUITE_P(
    ParameterizedAddition,
    CalculatorAdditionTest,
    ::testing::Values(
        std::make_tuple(2, 3, 5),
        std::make_tuple(0, 0, 0),
        std::make_tuple(-1, 1, 0)
    )
);
```

### **CI/CD Fundamentals**

#### **GitHub Actions**
```cpp
#include <string>

const std::string githubActionsWorkflow = R"(# .github/workflows/ci.yml
name: CI/CD Pipeline

on:
  push:
    branches: [ main, develop ]
  pull_request:
    branches: [ main ]

jobs:
  test:
    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v3

    - name: Set up Java
      uses: actions/setup-java@v3
      with:
        java-version: '11'
        distribution: 'temurin'

    - name: Cache Maven dependencies
      uses: actions/cache@v3
      with:
        path: ~/.m2
        key: ${{ runner.os }}-m2-${{ hashFiles('**/pom.xml') }}

    - name: Run tests
      run: mvn clean test

    - name: Generate test report
      uses: dorny/test-reporter@v1
      if: success() || failure()
      with:
        name: Maven Tests
        path: target/surefire-reports/*.xml
        reporter: java-junit

    - name: Build application
      run: mvn clean package

    - name: Upload artifacts
      uses: actions/upload-artifact@v3
      with:
        name: jar-artifact
        path: target/*.jar

  deploy:
    needs: test
    runs-on: ubuntu-latest
    if: github.ref == 'refs/heads/main'

    steps:
    - name: Deploy to staging
      run: echo "Deploying to staging environment"
)";
```

### **Cloud Computing Basics**

#### **AWS Fundamentals**
- **S3**: Object storage for static files, backups
- **EC2**: Virtual servers for applications
- **RDS**: Managed relational databases
- **Lambda**: Serverless functions
- **CloudFront**: Content delivery network
- **IAM**: Identity and access management

#### **Docker Essentials**
```cpp
#include <string>

const std::string dockerfile = R"(# Dockerfile
FROM openjdk:11-jre-slim

COPY target/app.jar /app/app.jar

WORKDIR /app

EXPOSE 8080

ENTRYPOINT ["java", "-jar", "app.jar"]
)";
```

```cpp
#include <string>
#include <vector>

struct DockerCommandGroup {
    std::string title;
    std::vector<std::string> commands;
};

const std::vector<DockerCommandGroup> dockerCommands = {
    {"Docker Commands", {
        "docker build -t myapp .  # Build image",
        "docker run -p 8080:8080 myapp  # Run container",
        "docker ps  # List running containers",
        "docker stop <container-id>  # Stop container",
        "docker images  # List images",
        "docker rmi <image-id>  # Remove image"
    }},
    {"Docker Compose", {
        "docker-compose up  # Start services",
        "docker-compose down  # Stop services",
        "docker-compose logs  # View logs"
    }}
};
```

#### **⏱️ Time Allocation**: 3-4 weeks

---

## 5. Soft Skills & Interview Preparation

### **Technical Communication**
**🎯 Goal**: Explain complex technical concepts clearly and confidently

#### **Coding Interview Communication Framework**
1. **Clarify Requirements**
   - Ask about input constraints
   - Confirm expected output format
   - Check edge cases
   - Discuss time/space complexity expectations

2. **Think Out Loud**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> thinkingPhrases = {
    "Let me think about this step by step...",
    "I'll start with a brute force approach and then optimize...",
    "The key insight here is...",
    "Let me trace through an example..."
};
```

3. **Explain Your Approach**
   - High-level strategy first
   - Break down into steps
   - Discuss trade-offs
   - Mention alternative approaches

4. **Code with Commentary**
```cpp
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen; // value -> index mapping
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int complement = target - nums[i];
        if (auto it = seen.find(complement); it != seen.end()) {
            return {it->second, i};
        }
        seen[nums[i]] = i;
    }
    return {};
}
```

5. **Test Your Solution**
   - Walk through with given examples
   - Test edge cases
   - Verify time/space complexity

#### **Problem-Solving Template**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> problemSolvingTemplate = {
    "1. UNDERSTAND",
    "   - Restate the problem",
    "   - Ask clarifying questions",
    "   - Identify constraints",
    "",
    "2. PLAN",
    "   - Brainstorm approaches",
    "   - Choose optimal strategy",
    "   - Estimate complexity",
    "",
    "3. IMPLEMENT",
    "   - Start with pseudocode",
    "   - Code incrementally",
    "   - Handle edge cases",
    "",
    "4. VERIFY",
    "   - Test with examples",
    "   - Check edge cases",
    "   - Optimize if needed"
};
```

### **Behavioral Interview Preparation**
**🎯 Goal**: Demonstrate soft skills and cultural fit using structured storytelling

#### **STAR Method Framework**
- **Situation**: Set the context and background
- **Task**: Describe your responsibility/challenge
- **Action**: Explain what you specifically did
- **Result**: Share the outcome and lessons learned

#### **Essential Behavioral Questions & Example Responses**

**1. "Tell me about a challenging project you worked on"**
```cpp
#include <string>

const std::string challengingProjectStory = R"(SITUATION: During my final semester, our team of 4 was tasked 
with building a distributed chat application for 500+ concurrent users.

TASK: I was the backend lead responsible for designing the 
message queuing system and ensuring real-time message delivery.

ACTION: I researched different architectures and chose Redis pub/sub 
with WebSockets. I implemented connection pooling, message persistence, 
and handled edge cases like network failures. When we hit scalability 
issues during testing, I refactored to use message partitioning.

RESULT: We successfully delivered the project with 99.9% uptime 
during demo week. The application handled 800+ concurrent users 
without performance degradation. I learned the importance of 
load testing early and how to design for scalability from the start.)";
```

**2. "Describe a time when you had to learn a new technology quickly"**
```cpp
#include <string>

const std::string learningTechnologyStory = R"(SITUATION: Two weeks into my internship, the team decided to 
migrate our REST API from Python Flask to Node.js Express.

TASK: As the newest team member, I volunteered to learn Node.js 
and help with the migration to prove my adaptability.

ACTION: I created a learning plan: completed Node.js tutorials 
in evenings, built a small CRUD API over the weekend, and pair 
programmed with senior developers. I documented my learning and 
shared it with the team.

RESULT: I successfully migrated 3 API endpoints within a week 
and became the go-to person for JavaScript questions. The migration 
improved API response time by 40%. I developed confidence in 
learning new technologies quickly.)";
```

#### **Common Behavioral Question Categories**

**Leadership & Teamwork**
- Tell me about a time you led a team
- Describe a conflict you resolved with a teammate
- How do you handle disagreements in technical decisions?

**Problem Solving**
- Tell me about a complex problem you solved
- Describe a time when you failed and what you learned
- How do you approach debugging a complex issue?

**Growth & Learning**
- Tell me about a time you received difficult feedback
- Describe how you stay updated with technology trends
- What's the most challenging bug you've ever fixed?

**Communication**
- Tell me about a time you had to explain technical concepts to non-technical stakeholders
- Describe a time you had to give constructive feedback
- How do you ensure clear communication in remote teams?

### **Company-Specific Preparation**

#### **FAANG Companies Focus Areas**

**Google**
- Googleyness: Collaboration, adaptability, learning
- Technical: Algorithms, system design, code quality
- Leadership: Taking initiative, driving results

**Amazon**
- Leadership Principles: Customer obsession, ownership, bias for action
- Technical: Scalability, operational excellence
- Behavioral: Think big, deliver results, earn trust

**Meta (Facebook)**
- Move fast: Rapid iteration, taking risks
- Be bold: Innovation, challenging status quo
- Focus on impact: User value, measurable results

**Apple**
- Attention to detail: Quality, user experience
- Innovation: Creative problem solving
- Collaboration: Cross-functional teamwork

**Netflix**
- Culture: Freedom and responsibility, keeper test
- Performance: High standards, context not control
- Innovation: Rapid iteration, data-driven decisions

#### **Startup vs Big Tech**

**Startup Interview Focus**
- Scrappiness and resourcefulness
- Wearing multiple hats
- Moving fast with limited resources
- Direct impact on business metrics
- Cultural fit and passion

**Big Tech Interview Focus**
- Scalability and reliability
- Code quality and best practices
- System design and architecture
- Leadership and mentorship
- Process and documentation

### **Mock Interview Strategy**

#### **Practice Schedule** (8 weeks before interviews)
- **Weeks 1-2**: Daily coding problems (1-2 hours)
- **Weeks 3-4**: Mock technical interviews (2-3 per week)
- **Weeks 5-6**: System design practice (1 design per day)
- **Weeks 7-8**: Behavioral prep and final reviews

#### **Mock Interview Platforms**
- **Pramp**: Free peer-to-peer mock interviews
- **InterviewBit**: AI-powered coding practice
- **LeetCode Mock**: Company-specific interview simulations
- **Interviewing.io**: Anonymous interviews with engineers

#### **Self-Assessment Checklist**
```cpp
#include <string>
#include <vector>

struct ChecklistSection {
    std::string title;
    std::vector<std::string> items;
};

const std::vector<ChecklistSection> selfAssessmentChecklist = {
    {"Technical Skills", {
        "Can solve medium problems in 30-45 minutes",
        "Explain time/space complexity confidently",
        "Code cleanly with proper variable names",
        "Handle edge cases systematically",
        "Optimize solutions when prompted"
    }},
    {"Communication", {
        "Think out loud clearly",
        "Ask clarifying questions",
        "Explain approach before coding",
        "Walk through test cases",
        "Admit when stuck and ask for hints"
    }},
    {"Behavioral", {
        "Have 5-7 STAR stories prepared",
        "Show growth mindset and learning",
        "Demonstrate leadership and teamwork",
        "Express genuine interest in company/role",
        "Ask thoughtful questions about team/culture"
    }}
};
```

### **Portfolio Projects**
**🎯 Goal**: Demonstrate practical skills through real-world applications

#### **Project Ideas by Category**

**Full-Stack Web Application**
- **E-commerce Platform**: User auth, product catalog, payment integration
- **Social Media Clone**: Posts, comments, real-time messaging, file uploads
- **Task Management Tool**: Teams, projects, deadlines, notifications
- **Learning Management System**: Courses, progress tracking, video streaming

**System Design Projects**
- **URL Shortener**: High throughput, analytics, custom domains
- **Chat Application**: Real-time messaging, file sharing, group chats
- **Content Delivery Network**: Caching, geographic distribution
- **Distributed File Storage**: Replication, sharding, metadata management

**Mobile Applications**
- **Expense Tracker**: Receipt scanning, categorization, budget alerts
- **Fitness App**: Workout tracking, progress visualization, social features
- **Weather App**: Location services, offline caching, push notifications
- **Recipe Sharing**: Image recognition, ingredient lists, cooking timers

**Data Science/ML Projects**
- **Recommendation System**: Collaborative filtering, content-based filtering
- **Sentiment Analysis**: Text processing, model training, API deployment
- **Image Classification**: CNN training, transfer learning, model optimization
- **Time Series Forecasting**: Stock prices, weather prediction, sales forecasting

#### **Project Development Framework**
1. **Planning Phase**
   - Define requirements and user stories
   - Choose technology stack
   - Design database schema
   - Create wireframes/mockups

2. **Implementation Phase**
   - Set up development environment
   - Implement core features first
   - Add tests as you develop
   - Use version control effectively

3. **Deployment Phase**
   - Deploy to cloud platform (AWS, Heroku, Netlify)
   - Set up CI/CD pipeline
   - Configure monitoring and logging
   - Optimize for performance

4. **Documentation Phase**
   - Write comprehensive README
   - Document API endpoints
   - Include setup instructions
   - Add screenshots/demos

#### **GitHub Portfolio Optimization**
```cpp
#include <string>
#include <vector>

const std::vector<std::string> projectReadmeTemplate = {
    "# Project README Template",
    "",
    "## 🚀 Project Name",
    "Brief description of what the project does and why it's useful.",
    "",
    "## ✨ Features",
    "- Feature 1 with brief explanation",
    "- Feature 2 with brief explanation",
    "- Feature 3 with brief explanation",
    "",
    "## 🛠️ Tech Stack",
    "- **Frontend**: React, TypeScript, Tailwind CSS",
    "- **Backend**: Node.js, Express, MongoDB",
    "- **Deployment**: AWS EC2, Docker, Nginx",
    "",
    "## 📋 Prerequisites",
    "- Node.js 16+",
    "- MongoDB 4.4+",
    "- Docker (optional)",
    "",
    "## 🚀 Quick Start",
    "```bash",
    "# Clone repository",
    "git clone https://github.com/username/project-name.git",
    "",
    "# Install dependencies",
    "npm install",
    "",
    "# Set up environment variables",
    "cp .env.example .env",
    "",
    "# Start development server",
    "npm run dev",
    "```",
    "",
    "## 🏗️ Architecture",
    "High-level architecture diagram and explanation of system components.",
    "",
    "## 🧪 Testing",
    "```bash",
    "# Run unit tests",
    "npm test",
    "",
    "# Run integration tests",
    "npm run test:integration",
    "",
    "# Check code coverage",
    "npm run test:coverage",
    "```",
    "",
    "## 📚 API Documentation",
    "Link to API documentation (Swagger, Postman collection, etc.)",
    "",
    "## 🤝 Contributing",
    "Guidelines for contributing to the project.",
    "",
    "## 📄 License",
    "MIT License - see LICENSE file for details."
};
```

#### **⏱️ Time Allocation**: 4-6 weeks for preparation, ongoing for projects

---

## 📅 Suggested Timeline (Flexible)

- **Months 1-3** → Master DSA basics (Arrays → Graphs)  
- **Months 4-5** → DP + advanced problems + OS & DBMS  
- **Months 6-7** → OOP, networking, intro system design  
- **Months 8-9** → Projects + Git/Linux/Testing + mock interviews  
- **Ongoing** → Daily DSA revision & problem solving

---

✅ By completing this roadmap, you’ll be well-prepared for **SDE-1 roles** across service-based companies, startups, and product companies.

---

## 📚 Comprehensive Resource Library

### **Online Learning Platforms**

#### **Algorithm & Data Structure Courses**
- **Coursera**: Algorithms Specialization by Princeton
- **edX**: MIT Introduction to Computer Science
- **Udemy**: Master the Coding Interview Data Structures + Algorithms
- **Educative**: Grokking the Coding Interview Patterns
- **AlgoExpert**: Curated problems with video explanations

#### **System Design Resources**
- **Educative**: Grokking the System Design Interview
- **System Design Primer**: GitHub repository by donnemartin
- **High Scalability**: Real-world architecture case studies
- **AWS Architecture Center**: Cloud design patterns
- **Designing Data-Intensive Applications**: Book by Martin Kleppmann

#### **CS Fundamentals**
- **Operating Systems**: Three Easy Pieces (free online book)
- **Database Systems**: Stanford CS145 lectures
- **Computer Networks**: Kurose & Ross textbook
- **CLRS**: Introduction to Algorithms (comprehensive reference)

### **Practice Platforms & Tools**

#### **Coding Practice**
| Platform | Strengths | Best For |
|----------|-----------|----------|
| **LeetCode** | Large problem set, company tags | Interview prep, mock contests |
| **HackerRank** | Skill assessments, certificates | Portfolio building, skill validation |
| **CodeSignal** | Real interview simulations | Company-specific practice |
| **InterviewBit** | Structured learning paths | Systematic skill building |
| **Pramp** | Free mock interviews | Behavioral and technical practice |

#### **System Design Practice**
- **Excalidraw**: Free diagramming tool
- **Draw.io**: Professional diagram creation
- **Whimsical**: Collaborative design tool
- **Miro**: Team brainstorming and design

#### **Development Tools**
```cpp
#include <string>
#include <vector>

struct ToolCategory {
    std::string title;
    std::vector<std::string> items;
};

const std::vector<ToolCategory> developmentSetup = {
    {"Code Editor", {
        "Visual Studio Code (free, extensive extensions)",
        "IntelliJ IDEA (Java development)",
        "PyCharm (Python development)"
    }},
    {"Terminal Enhancement", {
        "Oh My Zsh (shell enhancement)",
        "Homebrew (macOS package manager)",
        "Windows Subsystem for Linux (WSL)"
    }},
    {"Browser Extensions", {
        "LeetCode Timer (track solving time)",
        "GitHub File Icons (better repository navigation)",
        "JSON Formatter (API response formatting)"
    }}
};
```

### **Books & References**

#### **Algorithm & Problem Solving**
1. **"Cracking the Coding Interview"** by Gayle McDowell
   - 189 programming questions and solutions
   - Interview strategies and behavioral prep

2. **"Elements of Programming Interviews"** by Aziz, Lee, Prakash
   - 300+ problems with detailed solutions
   - Available in Java, Python, C++

3. **"Algorithm Design Manual"** by Steven Skiena
   - Practical algorithm design techniques
   - Real-world problem examples

4. **"Competitive Programming 3"** by Steven Halim
   - Advanced algorithms and techniques
   - Contest-style problem solving

#### **System Design & Architecture**
1. **"Designing Data-Intensive Applications"** by Martin Kleppmann
   - Database internals and distributed systems
   - Modern architecture patterns

2. **"System Design Interview"** by Alex Xu
   - Step-by-step system design framework
   - Real interview examples

3. **"Clean Architecture"** by Robert Martin
   - Software architecture principles
   - Design patterns and best practices

4. **"Building Microservices"** by Sam Newman
   - Microservice architecture patterns
   - Service decomposition strategies

### **YouTube Channels & Video Resources**

#### **Algorithm Tutorials**
- **NeetCode**: LeetCode solutions with clear explanations
- **Back To Back SWE**: Data structure and algorithm tutorials
- **mycodeschool**: Fundamental CS concepts
- **Abdul Bari**: Detailed algorithm explanations
- **Tushar Roy**: Complex algorithms simplified

#### **System Design**
- **Gaurav Sen**: System design concepts and examples
- **Tech Dummies**: Architecture deep dives
- **Success in Tech**: Interview preparation tips
- **Engineering with Utsav**: Practical system design

#### **Web Development**
- **Traversy Media**: Full-stack development tutorials
- **The Net Ninja**: Framework-specific tutorials
- **Academind**: Modern web development practices
- **Fireship**: Quick technology overviews

### **Company-Specific Resources**

#### **Big Tech Preparation**
- **Google**: Google Tech Dev Guide, Codelabs
- **Amazon**: Amazon Leadership Principles, Bar Raiser process
- **Meta**: Engineering Blog, React documentation
- **Apple**: Human Interface Guidelines, Swift documentation
- **Microsoft**: Azure documentation, .NET tutorials

#### **Startup Preparation**
- **Y Combinator**: Startup School, founder stories
- **First Round Review**: Company culture insights
- **AngelList**: Startup job listings and culture research
- **TechCrunch**: Industry news and trends

### **Community & Networking**

#### **Online Communities**
- **LeetCode Discuss**: Problem-specific discussions
- **Reddit**: r/cscareerquestions, r/algorithms
- **Stack Overflow**: Technical Q&A platform
- **GitHub**: Open source contribution opportunities
- **Discord**: Programming communities and study groups

#### **Professional Networks**
- **LinkedIn**: Professional networking and job opportunities
- **AngelList**: Startup ecosystem networking
- **Meetup**: Local tech meetups and events
- **Eventbrite**: Tech conferences and workshops

### **Tracking Progress & Assessment**

#### **Progress Tracking Template**
```cpp
#include <string>

const std::string weeklyProgressTemplate = R"(## Weekly Progress Report

### Problems Solved This Week
- Easy: X problems
- Medium: Y problems  
- Hard: Z problems
- Total: X+Y+Z problems

### Topics Covered
- [ ] Topic 1: Concept mastered
- [ ] Topic 2: Need more practice
- [ ] Topic 3: Struggling, need review

### Mock Interview Results
- Technical: Score/10, Areas for improvement
- Behavioral: Feedback received

### Next Week Goals
- Target: X problems
- Focus areas: [List specific topics]
- Mock interviews: X scheduled)";
```

#### **Skill Assessment Checkpoints**
**Monthly Self-Assessment (Rate 1-5)**
- Problem solving speed: ___/5
- Code quality and readability: ___/5
- Algorithm optimization: ___/5
- System design thinking: ___/5
- Communication during interviews: ___/5
- Behavioral storytelling: ___/5

---

## ❓ Frequently Asked Questions

**Q: How long does it take to complete this roadmap?**
A: 6-9 months with consistent daily practice (1-2 hours). Can be accelerated to 4-6 months with intensive study (3+ hours daily).

**Q: Should I focus on one programming language or learn multiple?**
A: Master one language deeply first (Python/Java/C++), then consider others based on target companies and roles.

**Q: How many problems should I solve before applying?**
A: Aim for 200-300 problems across all difficulty levels, with strong focus on medium problems (60-70% of practice).

**Q: Is competitive programming necessary for SDE-1 roles?**
A: Not required, but helpful for algorithmic thinking. Focus on interview-style problems over contest problems.

**Q: How important are system design skills for SDE-1?**
A: Basic understanding is sufficient. Focus more on coding and CS fundamentals for junior roles.

**Q: Should I apply to companies while still learning?**
A: Start applying when you can solve 70% of medium problems confidently. Use early interviews as practice.

**Q: How do I prepare for company-specific interviews?**
A: Research company culture, recent projects, and technology stack. Practice problems tagged with company names on LeetCode.

**Q: What if I don't have a computer science degree?**
A: This roadmap is designed for all backgrounds. Focus extra time on CS fundamentals and build strong projects to demonstrate skills.

---

✅ **Success Metrics**: By completing this roadmap, you'll have:
- Solved 300+ algorithmic problems across all difficulty levels
- Built 2-3 substantial portfolio projects demonstrating full-stack skills
- Mastered core CS concepts with practical understanding
- Developed professional communication and interview skills
- Created a strong GitHub profile showcasing your technical abilities
- Gained confidence to tackle technical interviews at top tech companies

**🎯 Ready to land your dream SDE-1 role!**
