// Định nghĩa node của Binary Tree
class TreeNode {
    constructor(val, left = null, right = null) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

// ===== DEPTH-FIRST SEARCH (DFS) =====

// 1. INORDER TRAVERSAL (Left-Root-Right)
// Recursive approach
function inorderRecursive(root) {
    const result = [];
    
    function traverse(node) {
        if (node === null) return;
        
        traverse(node.left);    // Duyệt left subtree
        result.push(node.val);  // Thăm root
        traverse(node.right);   // Duyệt right subtree
    }
    
    traverse(root);
    return result;
}

// Iterative approach using stack
function inorderIterative(root) {
    const result = [];
    const stack = [];
    let current = root;
    
    while (current !== null || stack.length > 0) {
        // Đi đến node trái nhất
        while (current !== null) {
            stack.push(current);
            current = current.left;
        }
        
        // Xử lý node hiện tại
        current = stack.pop();
        result.push(current.val);
        
        // Chuyển sang right subtree
        current = current.right;
    }
    
    return result;
}

// 2. PREORDER TRAVERSAL (Root-Left-Right)
// Recursive approach
function preorderRecursive(root) {
    const result = [];
    
    function traverse(node) {
        if (node === null) return;
        
        result.push(node.val);  // Thăm root
        traverse(node.left);    // Duyệt left subtree
        traverse(node.right);   // Duyệt right subtree
    }
    
    traverse(root);
    return result;
}

// Iterative approach using stack
function preorderIterative(root) {
    if (root === null) return [];
    
    const result = [];
    const stack = [root];
    
    while (stack.length > 0) {
        const node = stack.pop();
        result.push(node.val);
        
        // Push right first, then left (vì stack là LIFO)
        if (node.right) stack.push(node.right);
        if (node.left) stack.push(node.left);
    }
    
    return result;
}

// 3. POSTORDER TRAVERSAL (Left-Right-Root)
// Recursive approach
function postorderRecursive(root) {
    const result = [];
    
    function traverse(node) {
        if (node === null) return;
        
        traverse(node.left);    // Duyệt left subtree
        traverse(node.right);   // Duyệt right subtree
        result.push(node.val);  // Thăm root
    }
    
    traverse(root);
    return result;
}

// Iterative approach using two stacks
function postorderIterative(root) {
    if (root === null) return [];
    
    const result = [];
    const stack1 = [root];
    const stack2 = [];
    
    // Sử dụng 2 stack để reverse thứ tự
    while (stack1.length > 0) {
        const node = stack1.pop();
        stack2.push(node);
        
        if (node.left) stack1.push(node.left);
        if (node.right) stack1.push(node.right);
    }
    
    while (stack2.length > 0) {
        result.push(stack2.pop().val);
    }
    
    return result;
}

// ===== BREADTH-FIRST SEARCH (BFS) =====

// LEVEL ORDER TRAVERSAL
function levelOrder(root) {
    if (root === null) return [];
    
    const result = [];
    const queue = [root];
    
    while (queue.length > 0) {
        const node = queue.shift();
        result.push(node.val);
        
        if (node.left) queue.push(node.left);
        if (node.right) queue.push(node.right);
    }
    
    return result;
}

// Level order với từng level riêng biệt
function levelOrderByLevels(root) {
    if (root === null) return [];
    
    const result = [];
    const queue = [root];
    
    while (queue.length > 0) {
        const levelSize = queue.length;
        const currentLevel = [];
        
        for (let i = 0; i < levelSize; i++) {
            const node = queue.shift();
            currentLevel.push(node.val);
            
            if (node.left) queue.push(node.left);
            if (node.right) queue.push(node.right);
        }
        
        result.push(currentLevel);
    }
    
    return result;
}

// ===== THUẬT TOÁN LIÊN QUAN KHÁC =====

// 1. Tìm chiều cao của cây
function maxDepth(root) {
    if (root === null) return 0;
    
    const leftDepth = maxDepth(root.left);
    const rightDepth = maxDepth(root.right);
    
    return Math.max(leftDepth, rightDepth) + 1;
}

// 2. Kiểm tra cây có cân bằng không
function isBalanced(root) {
    function getHeight(node) {
        if (node === null) return 0;
        
        const leftHeight = getHeight(node.left);
        const rightHeight = getHeight(node.right);
        
        // Nếu subtree không cân bằng, trả về -1
        if (leftHeight === -1 || rightHeight === -1) return -1;
        if (Math.abs(leftHeight - rightHeight) > 1) return -1;
        
        return Math.max(leftHeight, rightHeight) + 1;
    }
    
    return getHeight(root) !== -1;
}

// 3. Kiểm tra hai cây có giống nhau không
function isSameTree(p, q) {
    if (p === null && q === null) return true;
    if (p === null || q === null) return false;
    
    return p.val === q.val && 
           isSameTree(p.left, q.left) && 
           isSameTree(p.right, q.right);
}

// 4. Đảo ngược cây (Mirror/Invert)
function invertTree(root) {
    if (root === null) return null;
    
    // Swap left và right
    const temp = root.left;
    root.left = root.right;
    root.right = temp;
    
    // Recursively invert subtrees
    invertTree(root.left);
    invertTree(root.right);
    
    return root;
}

// 5. Tìm đường đi từ root đến target
function findPath(root, target) {
    if (root === null) return null;
    
    if (root.val === target) return [root.val];
    
    const leftPath = findPath(root.left, target);
    if (leftPath) return [root.val, ...leftPath];
    
    const rightPath = findPath(root.right, target);
    if (rightPath) return [root.val, ...rightPath];
    
    return null;
}

// ===== BINARY SEARCH TREE (BST) OPERATIONS =====

// Tìm kiếm trong BST
function searchBST(root, val) {
    if (root === null || root.val === val) return root;
    
    if (val < root.val) {
        return searchBST(root.left, val);
    } else {
        return searchBST(root.right, val);
    }
}

// Chèn vào BST
function insertIntoBST(root, val) {
    if (root === null) return new TreeNode(val);
    
    if (val < root.val) {
        root.left = insertIntoBST(root.left, val);
    } else {
        root.right = insertIntoBST(root.right, val);
    }
    
    return root;
}

// Xóa khỏi BST
function deleteFromBST(root, val) {
    if (root === null) return null;
    
    if (val < root.val) {
        root.left = deleteFromBST(root.left, val);
    } else if (val > root.val) {
        root.right = deleteFromBST(root.right, val);
    } else {
        // Node cần xóa được tìm thấy
        if (root.left === null) return root.right;
        if (root.right === null) return root.left;
        
        // Node có 2 con: tìm successor (node nhỏ nhất trong right subtree)
        let successor = root.right;
        while (successor.left !== null) {
            successor = successor.left;
        }
        
        root.val = successor.val;
        root.right = deleteFromBST(root.right, successor.val);
    }
    
    return root;
}

// ===== DEMO USAGE =====

// Tạo một cây mẫu:
//       1
//      / \
//     2   3
//    / \
//   4   5

const root = new TreeNode(1);
root.left = new TreeNode(2);
root.right = new TreeNode(3);
root.left.left = new TreeNode(4);
root.left.right = new TreeNode(5);

console.log("=== TRAVERSAL RESULTS ===");
console.log("Inorder (Recursive):", inorderRecursive(root));
console.log("Inorder (Iterative):", inorderIterative(root));
console.log("Preorder (Recursive):", preorderRecursive(root));
console.log("Preorder (Iterative):", preorderIterative(root));
console.log("Postorder (Recursive):", postorderRecursive(root));
console.log("Postorder (Iterative):", postorderIterative(root));
console.log("Level Order:", levelOrder(root));
console.log("Level Order by Levels:", levelOrderByLevels(root));

console.log("\n=== TREE PROPERTIES ===");
console.log("Max Depth:", maxDepth(root));
console.log("Is Balanced:", isBalanced(root));
console.log("Path to 5:", findPath(root, 5));