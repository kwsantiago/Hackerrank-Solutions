static SinglyLinkedListNode insertNodeAtTail(SinglyLinkedListNode head, int data){
    SinglyLinkedListNode newNode = new SinglyLinkedListNode(data);
    if(head == null) return newNode;
    else{
        SinglyLinkedListNode currentNode = head;
        while(currentNode.next != null)
            currentNode = currentNode.next;
        currentNode.next = newNode;
        currentNode.next.next = null;
    }
    return head;
}
