class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None


class Solution:
    def __init__(self):
        self.prev = None

    def isBSTUtil(self, root):
        # Base case
        if root is None:
            return True

        # Check the left subtree
        if not self.isBSTUtil(root.left):
            return False

        # Check the current node: the previous node's value should be less than the current node's value
        if self.prev is not None and root.key <= self.prev:
            return False

        # Update the previous node to the current node
        self.prev = root.key

        # Check the right subtree
        return self.isBSTUtil(root.right)

    def isBST(self, root):
        self.prev = None
        return self.isBSTUtil(root)
