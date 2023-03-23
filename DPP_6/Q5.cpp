// vertical order traversal of Binary tree

vector<int> verticalOrder(Node *root){
         vector<int> ans;
         if(root==NULL){
             return ans;
         }
         // level order traversal using queue
         queue<pair<Node*,pair<int,int>>> q;
         q.push(make_pair(root,make_pair(0,0)));
         map<int,map<int,vector<int>>> map;
         while(!q.empty()){
             pair<Node*,pair<int,int>> temp= q.front();
             q.pop();
             Node* FrontNode=temp.first;
             int HD=temp.second.first;
             int level=temp.second.second;
             // stord queue data inside map
             map[HD][level].push_back(FrontNode->data);
             // left child and right child 
             if(FrontNode->left!=NULL){
                 q.push(make_pair(FrontNode->left,make_pair(HD-1,level+1)));
             }
             if(FrontNode->right!=NULL){
                 q.push(make_pair(FrontNode->right,make_pair(HD+1,level+1)));
             }
         }
         // store map data inside ans 
         for(auto i:map){
             for(auto j: i.second){
                 for(auto v:j.second){
                     ans.push_back(v);
                 }
             }
         }
         return ans;
    }