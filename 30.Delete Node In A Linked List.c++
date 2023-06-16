
void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    node->data == node->next->data;
    LinkedListNode<int>* temp = node->next;
    node->next = node->next->next;
    delete temp;
}
