# Trees

Comprehensive notes covering tree theory, visual intuition, core implementations in C++, and curated practice.

## 1. Why Trees Matter
- Trees model hierarchical data (DOM, file systems, network routing, search structures) and appear in most SDE-1 interviews.
- Fundamental to derive recursion, dynamic programming on graphs, and advanced data structures like heaps, tries, and segment trees.

## 2. Terminology & Properties
```
        A
       / \
      B   C
     / \   \
    D   E   F
```
- `Root`: node without parent (`A`).
- `Leaf`: node without children (`D`, `E`, `F`).
- `Height`: edges on longest downward path (height of `A` is 2).
- `Depth`: edges from root to node (depth of `E` is 2).
- `Binary tree`: each node has ≤2 children.
- `Full`: every node has 0 or 2 children. `Perfect`: full and all leaves at same depth.

**Reading**
- CLRS, Chapter 12 (Tree Basics).
- "Grokking Algorithms" Chapter 6 for recursion intuition.
- MIT OCW 6.006, Lecture 6 (Tree traversals & recursion).

## 3. Traversal Patterns
Traversal = visiting nodes in an order that supports a computation.

### 3.1 Depth-First Traversals (DFS)
```
Preorder (root-left-right):  A B D E C F
Inorder  (left-root-right):  D B E A C F
Postorder(left-right-root):  D E B F C A
```
```cpp
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void preorder(TreeNode* root, vector<int>& out) {
    if (!root) return;
    out.push_back(root->val);
    preorder(root->left, out);
    preorder(root->right, out);
}

void inorder(TreeNode* root, vector<int>& out) {
    if (!root) return;
    inorder(root->left, out);
    out.push_back(root->val);
    inorder(root->right, out);
}

void postorder(TreeNode* root, vector<int>& out) {
    if (!root) return;
    postorder(root->left, out);
    postorder(root->right, out);
    out.push_back(root->val);
}
```

### 3.2 Breadth-First Traversal (BFS / Level Order)
```
Level 0: A
Level 1: B C
Level 2: D E F
```
```cpp
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> levels;
    if (!root) return levels;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        vector<int> cur;
        cur.reserve(n);
        for (int i = 0; i < n; ++i) {
            TreeNode* node = q.front();
            q.pop();
            cur.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        levels.push_back(move(cur));
    }
    return levels;
}
```

**Reading**
- TopCoder tutorial: "Traversing Trees Recursively".
- USACO Guide (Bronze/Silver) tree traversal notes.

**Practice (Traversal Essentials, 2E/5M/3H)**
- *Easy*: [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/), [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)
- *Medium*: [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/), [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/), [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/), [Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/), [Binary Tree Longest Consecutive Sequence](https://leetcode.com/problems/binary-tree-longest-consecutive-sequence/)
- *Hard*: [Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/), [Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/), [Recover a Tree From Preorder Traversal](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/)

## 4. Binary Tree Algorithms
Key questions revolve around aggregating metrics or finding paths.

### 4.1 Height, Balanced Check, Diameter
```
Height(A)=3
Balance: |height(left) - height(right)| <= 1 for every node.
```
```cpp
int height(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

pair<bool,int> checkBalanced(TreeNode* root) {
    if (!root) return {true, 0};
    auto [leftOk, leftH] = checkBalanced(root->left);
    auto [rightOk, rightH] = checkBalanced(root->right);
    bool ok = leftOk && rightOk && abs(leftH - rightH) <= 1;
    return {ok, 1 + max(leftH, rightH)};
}

int diameterHelper(TreeNode* root, int& best) {
    if (!root) return 0;
    int lh = diameterHelper(root->left, best);
    int rh = diameterHelper(root->right, best);
    best = max(best, lh + rh);
    return 1 + max(lh, rh);
}

int diameterOfBinaryTree(TreeNode* root) {
    int best = 0;
    diameterHelper(root, best);
    return best;
}
```

### 4.2 Path Sums & Traversal Based DP
```cpp
bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    if (!root->left && !root->right) return targetSum == root->val;
    int next = targetSum - root->val;
    return hasPathSum(root->left, next) || hasPathSum(root->right, next);
}

void pathSumDFS(TreeNode* root, int target, vector<int>& cur, vector<vector<int>>& ans) {
    if (!root) return;
    cur.push_back(root->val);
    if (!root->left && !root->right && target == root->val) {
        ans.push_back(cur);
    } else {
        pathSumDFS(root->left, target - root->val, cur, ans);
        pathSumDFS(root->right, target - root->val, cur, ans);
    }
    cur.pop_back();
}
```

### 4.3 Lowest Common Ancestor (Binary Tree)
```
        3
       / \
      5   1
     / \ / \
    6  2 0  8
      / \
     7   4
```
- LCA(5,1)=3, LCA(5,4)=5.
```cpp
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) return root;
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);
    if (left && right) return root;
    return left ? left : right;
}
```

**Reading**
- CP-Algorithms: "Diameter of a Tree" and "Lowest Common Ancestor" articles.
- NeetCode YouTube playlist on tree patterns.

**Practice (Binary Tree Algorithms, 2E/5M/3H)**
- *Easy*: [Path Sum](https://leetcode.com/problems/path-sum/), [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
- *Medium*: [Path Sum II](https://leetcode.com/problems/path-sum-ii/), [Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/), [Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/), [House Robber III](https://leetcode.com/problems/house-robber-iii/), [Pseudo-Palindromic Paths in a Binary Tree](https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/)
- *Hard*: [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/), [Binary Tree Cameras](https://leetcode.com/problems/binary-tree-cameras/), [Recover a Tree From Preorder Traversal](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/)

## 5. Binary Search Trees (BST)
BST property: left subtree values < node < right subtree values.

### 5.1 Operations
```cpp
TreeNode* bstInsert(TreeNode* root, int key) {
    if (!root) return new TreeNode(key);
    if (key < root->val) root->left = bstInsert(root->left, key);
    else if (key > root->val) root->right = bstInsert(root->right, key);
    return root;
}

TreeNode* bstSearch(TreeNode* root, int key) {
    if (!root || root->val == key) return root;
    if (key < root->val) return bstSearch(root->left, key);
    return bstSearch(root->right, key);
}

TreeNode* findMin(TreeNode* root) {
    while (root && root->left) root = root->left;
    return root;
}

TreeNode* bstDelete(TreeNode* root, int key) {
    if (!root) return nullptr;
    if (key < root->val) root->left = bstDelete(root->left, key);
    else if (key > root->val) root->right = bstDelete(root->right, key);
    else {
        if (!root->left) {
            TreeNode* right = root->right;
            delete root;
            return right;
        }
        if (!root->right) {
            TreeNode* left = root->left;
            delete root;
            return left;
        }
        TreeNode* succ = findMin(root->right);
        root->val = succ->val;
        root->right = bstDelete(root->right, succ->val);
    }
    return root;
}
```

### 5.2 Validation & Inorder Traversal
- Inorder traversal of BST yields sorted sequence.
```cpp
bool isValidBST(TreeNode* root, long low = LONG_MIN, long high = LONG_MAX) {
    if (!root) return true;
    if (root->val <= low || root->val >= high) return false;
    return isValidBST(root->left, low, root->val) && isValidBST(root->right, root->val, high);
}
```

**Reading**
- CLRS Chapter 12 (Binary Search Trees).
- Stanford CS106B lecture notes: "Binary Search Trees".
- AlgoExpert blog: BST insert/delete animations.

**Practice (BST Focus, 2E/5M/3H)**
- *Easy*: [Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/), [Minimum Absolute Difference in BST](https://leetcode.com/problems/minimum-absolute-difference-in-bst/)
- *Medium*: [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/), [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/), [Lowest Common Ancestor of a BST](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/), [Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/), [Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)
- *Hard*: [Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/), [Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/), [Closest Binary Search Tree Value II](https://leetcode.com/problems/closest-binary-search-tree-value-ii/)

## 6. Balanced BST Overview (AVL)
Maintains height difference ≤1 via rotations.
```
          y                              x
         / \                           /   \
        x   T3   Right rotate (y)     T1    y
       / \       -------------->           / \
      T1  T2                               T2 T3
```

```cpp
struct AVLNode {
    int val;
    AVLNode *left;
    AVLNode *right;
    int height;
    AVLNode(int x) : val(x), left(nullptr), right(nullptr), height(1) {}
};

int nodeHeight(AVLNode* node) {
    return node ? node->height : 0;
}

int balanceFactor(AVLNode* node) {
    return node ? nodeHeight(node->left) - nodeHeight(node->right) : 0;
}

AVLNode* rotateRight(AVLNode* y) {
    AVLNode* x = y->left;
    AVLNode* T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = 1 + max(nodeHeight(y->left), nodeHeight(y->right));
    x->height = 1 + max(nodeHeight(x->left), nodeHeight(x->right));
    return x;
}

AVLNode* rotateLeft(AVLNode* x) {
    AVLNode* y = x->right;
    AVLNode* T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = 1 + max(nodeHeight(x->left), nodeHeight(x->right));
    y->height = 1 + max(nodeHeight(y->left), nodeHeight(y->right));
    return y;
}

AVLNode* avlInsert(AVLNode* node, int key) {
    if (!node) return new AVLNode(key);
    if (key < node->val) node->left = avlInsert(node->left, key);
    else if (key > node->val) node->right = avlInsert(node->right, key);
    else return node; // duplicates ignored

    node->height = 1 + max(nodeHeight(node->left), nodeHeight(node->right));
    int balance = balanceFactor(node);

    if (balance > 1 && key < node->left->val) return rotateRight(node);
    if (balance < -1 && key > node->right->val) return rotateLeft(node);
    if (balance > 1 && key > node->left->val) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }
    if (balance < -1 && key < node->right->val) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }
    return node;
}
```

**Reading**
- VisuAlgo AVL simulator.
- GeeksforGeeks: "AVL Tree Insertion".
- Cornell CS 4.3 notes on rotations.

**Practice (Balanced Trees & Rotations, 2E/5M/3H)**
- *Easy*: [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/), [Same Tree](https://leetcode.com/problems/same-tree/)
- *Medium*: [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/), [Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/), [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/), [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/), [Balance a Binary Search Tree](https://leetcode.com/problems/balance-a-binary-search-tree/)
- *Hard*: [Maximum Sum BST in Binary Tree](https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/), [Number of Ways to Reorder Array to Get Same BST](https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/), [Build Binary Expression Tree From Infix Expression](https://leetcode.com/problems/build-binary-expression-tree-from-infix-expression/)

## 7. Advanced Patterns

### 7.1 Lowest Common Ancestor with Preprocessing
- Binary Lifting or Euler Tour + RMQ for repeated queries.
- Use adjacency list + DFS to compute `up[node][k]`.

### 7.2 Tree Dynamic Programming
- Subtree DP: compute answers bottom-up storing state per node.
- Rerooting DP: maintain global answer while moving root.

### 7.3 Trees as Graphs
- Trees are acyclic graphs; algorithms like DFS order, BFS levels, union-find apply directly.

**Reading**
- CP-Algorithms: "Binary Lifting" and "Tree DP".
- "Competitive Programmer's Handbook" by Antti Laaksonen, Chapter 10.

**Practice (Advanced & DP on Trees, 2E/5M/3H)**
- *Easy*: [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/), [Univalued Binary Tree](https://leetcode.com/problems/univalued-binary-tree/)
- *Medium*: [House Robber III](https://leetcode.com/problems/house-robber-iii/), [Longest Univalue Path](https://leetcode.com/problems/longest-univalue-path/), [Binary Tree Colorings](https://leetcode.com/problems/flip-equivalent-binary-trees/), [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/), [Amount of Time for Binary Tree to Be Infected](https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/)
- *Hard*: [Tree Diameter](https://leetcode.com/problems/tree-diameter/), [Sum of Distances in Tree](https://leetcode.com/problems/sum-of-distances-in-tree/), [Longest Path With Different Adjacent Characters](https://leetcode.com/problems/longest-path-with-different-adjacent-characters/)

## 8. Supplementary Variants
- **Tries**: prefix trees for strings. Key problems: [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/), [Word Search II](https://leetcode.com/problems/word-search-ii/).
- **Segment Trees & Fenwick Trees**: range queries; see cp-algorithms Segment Tree chapter.
- **Binary Indexed Tree on Trees (Euler Tour)**: flatten tree to array for subtree queries.

## 9. Implementation Checklist
- Define `TreeNode` struct and helper constructors.
- Practice recursion and iterative traversals with explicit stack/queue.
- Re-run problems after 24h with blank editor.
- Benchmark with sample inputs to validate logic.

## 10. Additional Reference Material
- Tech Interview Handbook: Tree patterns section.
- NeetCode Pro roadmap (Trees module).
- AlgoExpert Tree Crash Course.
- Codeforces EDU module on Trees.
