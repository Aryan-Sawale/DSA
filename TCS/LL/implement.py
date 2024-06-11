class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            temp = self.head
            while temp.next is not None:
                temp = temp.next

            temp.next = new_node

    def printList(self):
        temp = self.head
        while temp.next is not None:
            print(temp.data, end=" -> ")
            temp = temp.next

        print(temp.data)

    def reverse(self):
        prev = None
        current = self.head

        while current is not None:
            next = current.next
            current.next = prev
            prev = current
            current = next

        self.head = prev


if __name__ == "__main__":
    ll = LinkedList()
    ll.insert(7)
    ll.insert(8)
    ll.insert(88)
    ll.printList()
    ll.reverse()
    ll.printList()
