static SinglyLinkedListNode deleteNode(SinglyLinkedListNode head, int position){
    SinglyLinkedListNode currentNode = head;
    if(position == 0)
        return currentNode.next;
    while(--position > 0)
        currentNode = currentNode.next;
    currentNode.next = currentNode.next.next;
    return head;
}
