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
```python
def backtrack(current_state, choices):
    if is_valid_solution(current_state):
        add_to_result(current_state)
        return
    
    for choice in choices:
        make_choice(choice)
        backtrack(new_state, new_choices)
        undo_choice(choice)  # Backtrack
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
```python
def binary_search(nums, target):
    left, right = 0, len(nums) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1
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
```python
# Dummy node pattern
dummy = ListNode(0)
dummy.next = head
current = dummy

# Two pointers pattern
slow = fast = head
while fast and fast.next:
    slow = slow.next
    fast = fast.next.next

# Reversal pattern
prev, current = None, head
while current:
    next_temp = current.next
    current.next = prev
    prev = current
    current = next_temp
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
```python
# Monotonic Stack (Next Greater Element)
def next_greater_elements(nums):
    stack = []
    result = [-1] * len(nums)
    
    for i in range(len(nums)):
        while stack and nums[stack[-1]] < nums[i]:
            result[stack.pop()] = nums[i]
        stack.append(i)
    
    return result

# Deque for Sliding Window Maximum
from collections import deque

def max_sliding_window(nums, k):
    dq = deque()
    result = []
    
    for i in range(len(nums)):
        # Remove indices outside window
        while dq and dq[0] <= i - k:
            dq.popleft()
        
        # Remove smaller elements
        while dq and nums[dq[-1]] <= nums[i]:
            dq.pop()
        
        dq.append(i)
        
        if i >= k - 1:
            result.append(nums[dq[0]])
    
    return result
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
```python
# Tree Traversals
def inorder(root):
    if not root: return []
    return inorder(root.left) + [root.val] + inorder(root.right)

def level_order(root):
    if not root: return []
    queue = [root]
    result = []
    
    while queue:
        level_size = len(queue)
        level = []
        
        for _ in range(level_size):
            node = queue.pop(0)
            level.append(node.val)
            
            if node.left: queue.append(node.left)
            if node.right: queue.append(node.right)
        
        result.append(level)
    
    return result

# LCA Template
def lowest_common_ancestor(root, p, q):
    if not root or root == p or root == q:
        return root
    
    left = lowest_common_ancestor(root.left, p, q)
    right = lowest_common_ancestor(root.right, p, q)
    
    if left and right: return root
    return left or right
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
```python
import heapq

# Min Heap (default)
min_heap = []
heapq.heappush(min_heap, 5)
min_val = heapq.heappop(min_heap)

# Max Heap (negate values)
max_heap = []
heapq.heappush(max_heap, -5)
max_val = -heapq.heappop(max_heap)

# Heap from list
nums = [3, 1, 4, 1, 5]
heapq.heapify(nums)  # O(n) operation
```

#### **⏱️ Time Allocation**: 3-4 weeks

### G. Graphs
**🎯 Goal**: Master graph representations, traversals, and shortest path algorithms

#### **Graph Representations**
```python
# Adjacency List (Most Common)
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D'],
    'C': ['A', 'D'],
    'D': ['B', 'C']
}

# Adjacency Matrix
n = 4  # number of vertices
adj_matrix = [[0] * n for _ in range(n)]
adj_matrix[0][1] = 1  # Edge from 0 to 1

# Edge List
edges = [(0, 1), (1, 2), (2, 3)]
```

#### **Core Algorithms**
```python
# DFS Template
def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    
    visited.add(start)
    print(start)
    
    for neighbor in graph[start]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited)

# BFS Template
from collections import deque

def bfs(graph, start):
    visited = set()
    queue = deque([start])
    visited.add(start)
    
    while queue:
        vertex = queue.popleft()
        print(vertex)
        
        for neighbor in graph[vertex]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)

# Dijkstra's Algorithm
import heapq

def dijkstra(graph, start):
    distances = {node: float('infinity') for node in graph}
    distances[start] = 0
    pq = [(0, start)]
    
    while pq:
        current_distance, current = heapq.heappop(pq)
        
        if current_distance > distances[current]:
            continue
            
        for neighbor, weight in graph[current].items():
            distance = current_distance + weight
            
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(pq, (distance, neighbor))
    
    return distances
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
```python
class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n
        self.components = n
    
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        px, py = self.find(x), self.find(y)
        if px == py:
            return False
        
        if self.rank[px] < self.rank[py]:
            px, py = py, px
        
        self.parent[py] = px
        if self.rank[px] == self.rank[py]:
            self.rank[px] += 1
        
        self.components -= 1
        return True
```

#### **⏱️ Time Allocation**: 3-4 weeks

### H. Dynamic Programming (DP)
**🎯 Goal**: Master systematic problem-solving with memoization and tabulation

#### **DP Problem Identification**
1. **Optimal Substructure**: Solution depends on solutions to subproblems
2. **Overlapping Subproblems**: Same subproblems solved multiple times
3. **Decision Making**: Choose between multiple options at each step

#### **DP Approaches**
```python
# Top-Down (Memoization)
def fib_memo(n, memo={}):
    if n in memo:
        return memo[n]
    if n <= 1:
        return n
    
    memo[n] = fib_memo(n-1, memo) + fib_memo(n-2, memo)
    return memo[n]

# Bottom-Up (Tabulation)
def fib_tab(n):
    if n <= 1:
        return n
    
    dp = [0] * (n + 1)
    dp[1] = 1
    
    for i in range(2, n + 1):
        dp[i] = dp[i-1] + dp[i-2]
    
    return dp[n]

# Space Optimized
def fib_optimized(n):
    if n <= 1:
        return n
    
    prev2, prev1 = 0, 1
    
    for i in range(2, n + 1):
        current = prev1 + prev2
        prev2, prev1 = prev1, current
    
    return prev1
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
```python
# 0/1 Knapsack
def knapsack(weights, values, capacity):
    n = len(weights)
    dp = [[0] * (capacity + 1) for _ in range(n + 1)]
    
    for i in range(1, n + 1):
        for w in range(1, capacity + 1):
            if weights[i-1] <= w:
                dp[i][w] = max(dp[i-1][w], 
                              dp[i-1][w-weights[i-1]] + values[i-1])
            else:
                dp[i][w] = dp[i-1][w]
    
    return dp[n][capacity]

# LCS Template
def lcs(text1, text2):
    m, n = len(text1), len(text2)
    dp = [[0] * (n + 1) for _ in range(m + 1)]
    
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if text1[i-1] == text2[j-1]:
                dp[i][j] = dp[i-1][j-1] + 1
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    
    return dp[m][n]
```

#### **⏱️ Time Allocation**: 4-5 weeks

### I. Other Important Topics
**🎯 Goal**: Master advanced techniques and mathematical algorithms

#### **Bit Manipulation**
```python
# Common Bit Operations
x & 1           # Check if odd
x & (x - 1)     # Remove rightmost set bit
x | (1 << i)    # Set i-th bit
x & ~(1 << i)   # Clear i-th bit
x ^ (1 << i)    # Toggle i-th bit
x & -x          # Get rightmost set bit
x >> 1          # Divide by 2
x << 1          # Multiply by 2

# Count set bits
def count_bits(n):
    count = 0
    while n:
        count += 1
        n &= n - 1  # Remove rightmost set bit
    return count

# Check if power of 2
def is_power_of_2(n):
    return n > 0 and (n & (n - 1)) == 0
```

**Key Problems**:
- [Single Number](https://leetcode.com/problems/single-number/)
- [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)
- [Counting Bits](https://leetcode.com/problems/counting-bits/)
- [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)

#### **Greedy Algorithms**
**Greedy Choice Property**: Locally optimal choice leads to globally optimal solution

```python
# Activity Selection
def activity_selection(start, finish):
    n = len(start)
    activities = list(zip(start, finish, range(n)))
    activities.sort(key=lambda x: x[1])  # Sort by finish time
    
    selected = [activities[0]]
    last_finish = activities[0][1]
    
    for i in range(1, n):
        if activities[i][0] >= last_finish:
            selected.append(activities[i])
            last_finish = activities[i][1]
    
    return selected

# Huffman Coding Concept
import heapq

def huffman_coding(freq):
    heap = [[weight, [[symbol, ""]]] for symbol, weight in freq.items()]
    heapq.heapify(heap)
    
    while len(heap) > 1:
        lo = heapq.heappop(heap)
        hi = heapq.heappop(heap)
        
        for pair in lo[1:]:
            pair[1] = '0' + pair[1]
        for pair in hi[1:]:
            pair[1] = '1' + pair[1]
        
        heapq.heappush(heap, [lo[0] + hi[0]] + lo[1:] + hi[1:])
    
    return sorted(heapq.heappop(heap)[1:], key=lambda p: (len(p[-1]), p))
```

**Key Problems**:
- [Jump Game](https://leetcode.com/problems/jump-game/)
- [Gas Station](https://leetcode.com/problems/gas-station/)
- [Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/)

#### **Advanced Mathematics**

**Modular Arithmetic**
```python
MOD = 10**9 + 7

# Modular Exponentiation
def power_mod(base, exp, mod):
    result = 1
    base = base % mod
    
    while exp > 0:
        if exp % 2 == 1:
            result = (result * base) % mod
        exp = exp >> 1
        base = (base * base) % mod
    
    return result

# Modular Inverse (using Fermat's Little Theorem)
def mod_inverse(a, mod):
    return power_mod(a, mod - 2, mod)

# Sieve of Eratosthenes
def sieve(n):
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False
    
    for i in range(2, int(n**0.5) + 1):
        if is_prime[i]:
            for j in range(i*i, n + 1, i):
                is_prime[j] = False
    
    return [i for i in range(2, n + 1) if is_prime[i]]
```

**Number Theory Problems**:
- [Count Primes](https://leetcode.com/problems/count-primes/)
- [Happy Number](https://leetcode.com/problems/happy-number/)
- [Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)

#### **Two Pointers Advanced Patterns**
```python
# Dutch National Flag (3-way partition)
def sort_colors(nums):
    low = mid = 0
    high = len(nums) - 1
    
    while mid <= high:
        if nums[mid] == 0:
            nums[low], nums[mid] = nums[mid], nums[low]
            low += 1
            mid += 1
        elif nums[mid] == 1:
            mid += 1
        else:
            nums[mid], nums[high] = nums[high], nums[mid]
            high -= 1

# Fast and Slow Pointers
def find_duplicate(nums):
    slow = fast = nums[0]
    
    # Find intersection point
    while True:
        slow = nums[slow]
        fast = nums[nums[fast]]
        if slow == fast:
            break
    
    # Find entrance to cycle
    slow = nums[0]
    while slow != fast:
        slow = nums[slow]
        fast = nums[fast]
    
    return fast
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
```java
// Example: Encapsulation
public class BankAccount {
    private double balance;  // Private data
    
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    
    public double getBalance() {
        return balance;
    }
}

// Example: Inheritance & Polymorphism
abstract class Animal {
    abstract void makeSound();  // Abstract method
    
    void eat() {  // Concrete method
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Woof!");
    }
}

class Cat extends Animal {
    @Override
    void makeSound() {
        System.out.println("Meow!");
    }
}
```

#### **Essential Design Patterns**

**1. Singleton Pattern**
```java
public class Singleton {
    private static volatile Singleton instance;
    
    private Singleton() {}
    
    public static Singleton getInstance() {
        if (instance == null) {
            synchronized (Singleton.class) {
                if (instance == null) {
                    instance = new Singleton();
                }
            }
        }
        return instance;
    }
}
```

**2. Factory Pattern**
```java
interface Shape {
    void draw();
}

class Circle implements Shape {
    public void draw() { System.out.println("Circle"); }
}

class Rectangle implements Shape {
    public void draw() { System.out.println("Rectangle"); }
}

class ShapeFactory {
    public static Shape getShape(String type) {
        switch (type.toLowerCase()) {
            case "circle": return new Circle();
            case "rectangle": return new Rectangle();
            default: return null;
        }
    }
}
```

**3. Observer Pattern**
```java
interface Observer {
    void update(String message);
}

class Subject {
    private List<Observer> observers = new ArrayList<>();
    
    public void addObserver(Observer observer) {
        observers.add(observer);
    }
    
    public void notifyObservers(String message) {
        for (Observer observer : observers) {
            observer.update(message);
        }
    }
}
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
```c
// Mutex Example
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_resource = 0;

void* thread_function(void* arg) {
    pthread_mutex_lock(&mutex);
    shared_resource++;  // Critical section
    pthread_mutex_unlock(&mutex);
    return NULL;
}

// Semaphore Example  
sem_t semaphore;
sem_init(&semaphore, 0, 1);  // Binary semaphore

void* producer(void* arg) {
    sem_wait(&semaphore);
    // Produce item
    sem_post(&semaphore);
    return NULL;
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
```sql
-- Join Operations
SELECT e.name, d.department_name
FROM employees e
INNER JOIN departments d ON e.dept_id = d.id;

-- Subqueries
SELECT name FROM employees 
WHERE salary > (SELECT AVG(salary) FROM employees);

-- Window Functions
SELECT name, salary,
       RANK() OVER (PARTITION BY dept_id ORDER BY salary DESC) as rank
FROM employees;

-- Indexing
CREATE INDEX idx_employee_name ON employees(name);
CREATE COMPOSITE INDEX idx_name_dept ON employees(name, dept_id);
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
```
HTTP Request:
GET /api/users HTTP/1.1
Host: example.com
User-Agent: Mozilla/5.0
Accept: application/json

HTTP Response:
HTTP/1.1 200 OK
Content-Type: application/json
Content-Length: 123

{"users": [...]}
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
```python
# Cache-Aside Pattern
def get_user(user_id):
    # Check cache first
    user = cache.get(f"user:{user_id}")
    if user is None:
        # Cache miss - fetch from database
        user = database.get_user(user_id)
        # Store in cache
        cache.set(f"user:{user_id}", user, ttl=3600)
    return user

# Write-Through Pattern
def update_user(user_id, user_data):
    # Update database
    database.update_user(user_id, user_data)
    # Update cache
    cache.set(f"user:{user_id}", user_data, ttl=3600)
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
```python
# RESTful API Design
GET    /api/users          # Get all users
GET    /api/users/123      # Get specific user
POST   /api/users          # Create new user
PUT    /api/users/123      # Update user
DELETE /api/users/123      # Delete user

# HTTP Status Codes
200 OK                     # Success
201 Created               # Resource created
400 Bad Request           # Client error
401 Unauthorized          # Authentication required
404 Not Found             # Resource not found
500 Internal Server Error # Server error
```

#### **⏱️ Time Allocation**: 4-5 weeks total

---

## 4. Development Skills

### **Git & GitHub Mastery**
**🎯 Goal**: Master version control and collaborative development

#### **Essential Git Commands**
```bash
# Repository Setup
git init                          # Initialize repository
git clone <url>                   # Clone remote repository
git remote add origin <url>       # Add remote

# Basic Workflow
git status                        # Check working directory status
git add .                         # Stage all changes
git add <file>                    # Stage specific file
git commit -m "message"           # Commit with message
git push origin <branch>          # Push to remote branch
git pull origin <branch>          # Pull from remote branch

# Branching
git branch                        # List branches
git branch <name>                 # Create new branch
git checkout <branch>             # Switch to branch
git checkout -b <name>            # Create and switch to branch
git merge <branch>                # Merge branch into current
git branch -d <name>              # Delete branch

# Advanced Operations
git rebase <branch>               # Rebase current branch
git cherry-pick <commit>          # Apply specific commit
git reset --hard <commit>         # Reset to specific commit
git stash                         # Temporarily save changes
git stash pop                     # Apply stashed changes
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
```bash
pwd                              # Print working directory
ls -la                           # List files with details
cd /path/to/directory            # Change directory
cd ..                            # Go to parent directory
cd ~                             # Go to home directory

# File Operations
touch file.txt                   # Create empty file
mkdir directory                  # Create directory
mkdir -p path/to/dir             # Create nested directories
cp source destination            # Copy file/directory
mv source destination            # Move/rename file
rm file.txt                      # Remove file
rm -rf directory                 # Remove directory recursively
```

#### **File Content Management**
```bash
cat file.txt                     # Display file content
less file.txt                    # View file with pagination
head -n 10 file.txt              # First 10 lines
tail -n 10 file.txt              # Last 10 lines
tail -f log.txt                  # Follow file changes
grep "pattern" file.txt          # Search in file
grep -r "pattern" directory      # Recursive search
find /path -name "*.txt"         # Find files by name
find /path -type f -size +1M     # Find large files
```

#### **Process Management**
```bash
ps aux                           # List all processes
ps aux | grep python             # Find specific processes
top                              # Real-time process viewer
htop                             # Enhanced process viewer
kill <PID>                       # Terminate process
kill -9 <PID>                    # Force kill process
killall python                  # Kill all python processes
nohup command &                  # Run command in background
jobs                             # List background jobs
fg %1                            # Bring job to foreground
```

#### **Permissions & Ownership**
```bash
chmod 755 file.txt               # Set file permissions
chmod +x script.sh               # Make file executable
chown user:group file.txt        # Change ownership
sudo command                     # Run as superuser
su - username                    # Switch user
```

#### **SSH & Remote Access**
```bash
ssh user@hostname                # Connect to remote server
ssh-keygen -t rsa                # Generate SSH key pair
ssh-copy-id user@hostname        # Copy public key to server
scp file.txt user@host:/path     # Copy file to remote
rsync -av source/ dest/          # Synchronize directories
```

### **Build Tools & Package Management**

#### **Maven (Java)**
```xml
<!-- pom.xml structure -->
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
</project>
```

```bash
mvn clean compile                # Clean and compile
mvn test                         # Run tests
mvn package                      # Create JAR file
mvn install                      # Install to local repository
mvn dependency:tree              # Show dependency tree
```

#### **Gradle (Java/Kotlin)**
```gradle
// build.gradle
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
}
```

```bash
gradle build                     # Build project
gradle test                      # Run tests
gradle run                       # Run application
gradle clean                     # Clean build directory
```

#### **pip/virtualenv (Python)**
```bash
# Virtual Environment
python -m venv myenv             # Create virtual environment
source myenv/bin/activate        # Activate (Linux/Mac)
myenv\Scripts\activate           # Activate (Windows)
deactivate                       # Deactivate environment

# Package Management
pip install package              # Install package
pip install -r requirements.txt # Install from file
pip freeze > requirements.txt   # Generate requirements file
pip list                         # List installed packages
pip show package                 # Show package details
pip uninstall package           # Uninstall package
```

#### **npm (JavaScript/Node.js)**
```bash
npm init                         # Initialize package.json
npm install package              # Install package locally
npm install -g package           # Install package globally
npm install --save-dev package   # Install as dev dependency
npm run script                   # Run package script
npm test                         # Run tests
npm start                        # Start application
npm audit                        # Check for vulnerabilities
```

### **Unit Testing Frameworks**

#### **JUnit (Java)**
```java
import org.junit.Test;
import org.junit.Assert;
import org.junit.Before;
import org.junit.After;

public class CalculatorTest {
    private Calculator calculator;
    
    @Before
    public void setUp() {
        calculator = new Calculator();
    }
    
    @Test
    public void testAddition() {
        int result = calculator.add(2, 3);
        Assert.assertEquals(5, result);
    }
    
    @Test(expected = IllegalArgumentException.class)
    public void testDivisionByZero() {
        calculator.divide(10, 0);
    }
    
    @After
    public void tearDown() {
        calculator = null;
    }
}
```

#### **PyTest (Python)**
```python
import pytest
from calculator import Calculator

class TestCalculator:
    def setup_method(self):
        self.calculator = Calculator()
    
    def test_addition(self):
        result = self.calculator.add(2, 3)
        assert result == 5
    
    def test_division_by_zero(self):
        with pytest.raises(ZeroDivisionError):
            self.calculator.divide(10, 0)
    
    @pytest.mark.parametrize("a,b,expected", [
        (2, 3, 5),
        (0, 0, 0),
        (-1, 1, 0)
    ])
    def test_addition_multiple(self, a, b, expected):
        assert self.calculator.add(a, b) == expected

# Run tests
# pytest -v                      # Verbose output
# pytest --cov=calculator        # Code coverage
# pytest -k "test_addition"      # Run specific tests
```

#### **Google Test (C++)**
```cpp
#include <gtest/gtest.h>
#include "calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    void SetUp() override {
        calculator = new Calculator();
    }
    
    void TearDown() override {
        delete calculator;
    }
    
    Calculator* calculator;
};

TEST_F(CalculatorTest, Addition) {
    EXPECT_EQ(5, calculator->add(2, 3));
}

TEST_F(CalculatorTest, DivisionByZero) {
    EXPECT_THROW(calculator->divide(10, 0), std::invalid_argument);
}

INSTANTIATE_TEST_SUITE_P(
    ParameterizedTest,
    CalculatorTest,
    ::testing::Values(
        std::make_tuple(2, 3, 5),
        std::make_tuple(0, 0, 0),
        std::make_tuple(-1, 1, 0)
    )
);
```

### **CI/CD Fundamentals**

#### **GitHub Actions**
```yaml
# .github/workflows/ci.yml
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
```dockerfile
# Dockerfile
FROM openjdk:11-jre-slim

COPY target/app.jar /app/app.jar

WORKDIR /app

EXPOSE 8080

ENTRYPOINT ["java", "-jar", "app.jar"]
```

```bash
# Docker Commands
docker build -t myapp .          # Build image
docker run -p 8080:8080 myapp    # Run container
docker ps                        # List running containers
docker stop <container-id>       # Stop container
docker images                    # List images
docker rmi <image-id>            # Remove image

# Docker Compose
docker-compose up                # Start services
docker-compose down              # Stop services
docker-compose logs              # View logs
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
   ```
   "Let me think about this step by step..."
   "I'll start with a brute force approach and then optimize..."
   "The key insight here is..."
   "Let me trace through an example..."
   ```

3. **Explain Your Approach**
   - High-level strategy first
   - Break down into steps
   - Discuss trade-offs
   - Mention alternative approaches

4. **Code with Commentary**
   ```python
   def two_sum(nums, target):
       """
       I'll use a hash map to store complements.
       Time: O(n), Space: O(n)
       """
       seen = {}  # complement -> index mapping
       
       for i, num in enumerate(nums):
           complement = target - num
           
           # Check if complement exists
           if complement in seen:
               return [seen[complement], i]
           
           # Store current number for future lookups
           seen[num] = i
       
       return []  # No solution found
   ```

5. **Test Your Solution**
   - Walk through with given examples
   - Test edge cases
   - Verify time/space complexity

#### **Problem-Solving Template**
```
1. UNDERSTAND
   - Restate the problem
   - Ask clarifying questions
   - Identify constraints

2. PLAN
   - Brainstorm approaches
   - Choose optimal strategy
   - Estimate complexity

3. IMPLEMENT
   - Start with pseudocode
   - Code incrementally
   - Handle edge cases

4. VERIFY
   - Test with examples
   - Check edge cases
   - Optimize if needed
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
```
SITUATION: During my final semester, our team of 4 was tasked 
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
load testing early and how to design for scalability from the start.
```

**2. "Describe a time when you had to learn a new technology quickly"**
```
SITUATION: Two weeks into my internship, the team decided to 
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
learning new technologies quickly.
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
```
Technical Skills:
□ Can solve medium problems in 30-45 minutes
□ Explain time/space complexity confidently
□ Code cleanly with proper variable names
□ Handle edge cases systematically
□ Optimize solutions when prompted

Communication:
□ Think out loud clearly
□ Ask clarifying questions
□ Explain approach before coding
□ Walk through test cases
□ Admit when stuck and ask for hints

Behavioral:
□ Have 5-7 STAR stories prepared
□ Show growth mindset and learning
□ Demonstrate leadership and teamwork
□ Express genuine interest in company/role
□ Ask thoughtful questions about team/culture
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
```markdown
# Project README Template

## 🚀 Project Name
Brief description of what the project does and why it's useful.

## ✨ Features
- Feature 1 with brief explanation
- Feature 2 with brief explanation
- Feature 3 with brief explanation

## 🛠️ Tech Stack
- **Frontend**: React, TypeScript, Tailwind CSS
- **Backend**: Node.js, Express, MongoDB
- **Deployment**: AWS EC2, Docker, Nginx

## 📋 Prerequisites
- Node.js 16+
- MongoDB 4.4+
- Docker (optional)

## 🚀 Quick Start
```bash
# Clone repository
git clone https://github.com/username/project-name.git

# Install dependencies
npm install

# Set up environment variables
cp .env.example .env

# Start development server
npm run dev
```

## 🏗️ Architecture
High-level architecture diagram and explanation of system components.

## 🧪 Testing
```bash
# Run unit tests
npm test

# Run integration tests
npm run test:integration

# Check code coverage
npm run test:coverage
```

## 📚 API Documentation
Link to API documentation (Swagger, Postman collection, etc.)

## 🤝 Contributing
Guidelines for contributing to the project.

## 📄 License
MIT License - see LICENSE file for details.
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
```bash
# Essential Development Setup
# Code Editor
- Visual Studio Code (free, extensive extensions)
- IntelliJ IDEA (Java development)
- PyCharm (Python development)

# Terminal Enhancement
- Oh My Zsh (shell enhancement)
- Homebrew (macOS package manager)
- Windows Subsystem for Linux (WSL)

# Browser Extensions
- LeetCode Timer (track solving time)
- GitHub File Icons (better repository navigation)
- JSON Formatter (API response formatting)
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
```markdown
## Weekly Progress Report

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
- Mock interviews: X scheduled
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
