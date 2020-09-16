// Convert Ternary Expression to Binary Tree 
Node* getNewNode(char ch) {
    Node* node = new Node(ch);
    return node;
}
Node* convert(string &s, int &i) {
    Node* temp = getNewNode(s[i]);
    i++;
    if(s[i]=='?') {
        i++;
        temp->left = convert(s, i);
        i++;
        temp->right = convert(s,i);
    }
    return temp;
}
Node *convertExpression(string str,int i)
{
    Node *root = convert(str,i);
    return root;
}