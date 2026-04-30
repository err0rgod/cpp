#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right   = NULL;
    }
};

void print(int it){
    std::cout << it << std::endl;
}          

vector<vector<int>> bfs(Node* root){
    vector<vector<int>> ans;

    if(root == NULL) return ans;

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i =0; i< size ; i++){
            Node* node = q.front();
            q.pop();
            if (node->left != NULL )
            {
                q.push(node->left);
            }
            if (node->right != NULL )
            {
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;

}


void printArray(vector<vector<int>> &arr){
    for(int i = 0; i< arr.size(); i++){
        for(int j = 0; j< arr[i].size(); j++){
            print(arr[i][j]);
        }
    }
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    vector<vector<int>> ans;
    ans = bfs(root);
    printArray(ans);
}