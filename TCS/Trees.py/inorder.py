nums = [4, 5, 3, 2, -1]


class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


class BinaryTree:
    def __init__(self):
        self.root = None

    def inorder(self, root):
        if root is None:
            return

        self.inorder(root.left)

        print(root.data, end=" ")

        self.inorder(root.right)


if __name__ == "__main__":
    bt = BinaryTree()
    bt.root = Node(1)
    bt.root.left = Node(2)
    bt.root.right = Node(3)
    bt.root.left.left = Node(4)
    bt.root.left.right = Node(5)

    bt.inorder(bt.root)
