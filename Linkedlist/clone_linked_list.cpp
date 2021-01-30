
// 1. Using hashmap
// Space complexity - O(n)
// Time complexity - O(n)
Node *copyList(Node *head) {

   Node *h;

  Node *origcurr=head;
  Node *clonecurr=NULL;

  unordered_map<Node*, Node*> mp;

  while(origcurr)
  {
      mp[origcurr] = new Node(origcurr->data);
      origcurr=origcurr->next;
  }
  origcurr=head;
  while(origcurr)
  {
      clonecurr=mp[origcurr];
      clonecurr->next=mp[origcurr->next];
      clonecurr->arb=mp[origcurr->arb]; // here arb is random pointer
      origcurr=origcurr->next;
  }
  h=mp[head];
  return h;



// 2. Using another way of inserting between linked list


