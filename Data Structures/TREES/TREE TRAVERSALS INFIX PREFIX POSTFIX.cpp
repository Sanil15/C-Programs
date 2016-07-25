void infix(node* start)
{
 if(start!=NULL)
 {
     infix(start->left);
     cout<<start->value<<" ";
     infix(start->right);
 }     
 
}

void prefix(node* start)
{
 if(start!=NULL)
 {
     cout<<start->value<<" ";
     prefix(start->left);
     prefix
     (start->right);
 }     
 
}

void postfix(node* start)
{
 if(start!=NULL)
 {
     postfix(start->left);
     postfix(start->right);
     cout<<start->value<<" ";
 }     
 
}
