static SinglyLinkedListNode insertNodeAtPosition(SinglyLinkedListNode head, int data,int position){
        SinglyLinkedListNode newNode = new SinglyLinkedListNode(data);
        int i = 0;
        if(position == 0){
            newNode.next = head;
            return newNode;
        }
        else{
            SinglyLinkedListNode currentNode = head;
            while(--position > 0)
                currentNode = currentNode.next;
            SinglyLinkedListNode copyNode = currentNode.next;
            currentNode.next = newNode;
            newNode.next = currentNode.next;
            currentNode.next.next = copyNode;
            return head; 
        }   
}
