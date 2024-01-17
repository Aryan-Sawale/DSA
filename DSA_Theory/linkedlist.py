class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insert_at_head(head, data):
    new_node = Node(data)
    new_node.next = head
    return new_node

def insert_at_tail(head, data):
    new_node = Node(data)
    if head is None:
        return new_node
    current = head
    while current.next is not None:
        current = current.next
    current.next = new_node
    return head

def delete_node(head, data):
    if head is None:
        return None
    if head.data == data:
        return head.next
    current = head
    while current.next is not None:
        if current.next.data == data:
            current.next = current.next.next
            return head
        current = current.next
    return head

def print_linked_list(head):
    current = head
    while current is not None:
        print(current.data, end=" -> ")
        current = current.next
    print("None")

# Example usage:
if __name__ == '__main__':
    head = None
    head = insert_at_tail(head, 1)
    head = insert_at_tail(head, 2)
    head = insert_at_tail(head, 3)
    head = insert_at_head(head, 0)
    print_linked_list(head)  # Output: 0 -> 1 -> 2 -> 3 -> None
    head = delete_node(head, 2)
    print_linked_list(head)  # Output: 0 -> 1 -> 3 -> None