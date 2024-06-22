from collections import deque


class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


class BinaryTree:
    def __init__(self):
        self.root = None

    def iterative_preorder(self):
        if self.root is None:
            return

        stack = [self.root]
        while stack:
            node = stack.pop()
            print(node.data, end=" ")

            if node.right:
                stack.append(node.right)
            if node.left:
                stack.append(node.left)

    def iterative_inorder(self):
        stack = []
        current = self.root

        while stack or current:
            while current:
                stack.append(current)
                current = current.left

            current = stack.pop()
            print(current.data, end=" ")
            current = current.right

    def iterative_postorder(self):
        if self.root is None:
            return

        stack1 = [self.root]
        stack2 = []

        while stack1:
            node = stack1.pop()
            stack2.append(node)

            if node.left:
                stack1.append(node.left)
            if node.right:
                stack1.append(node.right)

        while stack2:
            node = stack2.pop()
            print(node.data, end=" ")


if __name__ == "__main__":
    bt = BinaryTree()
    bt.root = Node(1)
    bt.root.left = Node(2)
    bt.root.right = Node(3)
    bt.root.left.left = Node(4)
    bt.root.left.right = Node(5)

    print("Iterative Preorder traversal:")
    bt.iterative_preorder()  # Output: 1 2 4 5 3
