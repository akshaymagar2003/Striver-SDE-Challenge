  LinkedListNode<int>*curr = head;
    unordered_map<LinkedListNode<int>*, LinkedListNode<int>*>mp;
    while(curr!=NULL){
        LinkedListNode<int>*temp = new LinkedListNode<int>(curr->data);
        mp[curr]=temp;
        curr=curr->next;
    }
    curr=head;
    while(curr!=NULL){
        LinkedListNode<int>*temp = mp[curr];
        temp->next = mp[curr->next];
        temp->random = mp[curr->random];
        curr=curr->next;
    }
    return mp[head];
