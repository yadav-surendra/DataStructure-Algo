/*

current = root
while(root != NULL)
{

if left not exist
visit(current)
current = current->right

else
predessor = find(curr)
if(predessor->right == NULL)
predessor->right = current
current = current->left

else
pred->right = NULL
visit(current)
current = current->right

}

*/