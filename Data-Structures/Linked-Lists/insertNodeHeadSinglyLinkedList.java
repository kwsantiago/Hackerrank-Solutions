static SinglyLinkedListNode insertNodeAtHead(SinglyLinkedListNode llist, int data){
        SinglyLinkedListNode newNode = new SinglyLinkedListNode(data);
        if(llist == null) return newNode;
        else
            newNode.next = llist;
        return newNode;
}
