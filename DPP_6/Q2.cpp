// Level order traversal

 vector<int> levelOrder(Node* node){
        vector<int>ans;
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            Node* front=q.front();
            ans.push_back(front->data);
            q.pop();
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        return ans;
    }