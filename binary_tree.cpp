#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node*left;
     struct Node*right;
     Node(int val){
        data=val;
        left=NULL;
        right=NULL;
     }
};


//      PREORDER TRAVERSAL
void pre(struct Node* root){
   if(root==NULL){
      return;
   }
   cout<<root->data<<" ";
   pre(root->left);
   pre(root->right);
}

//      INORDER TRAVERSAL
void ino(struct Node* root){
    if(root==NULL){
      return;
   }
   ino(root->left);
   cout<<root->data<<" ";
   ino(root->right);
}

//      POSTORDER TRAVERSAL
void pos(struct Node* root){
    if(root==NULL){
      return;
   }
   pos(root->left);
   pos(root->right);
   cout<<root->data<<" ";
}
 void leftt(Node * root){
         if(root==NULL){
             return;
         }
         leftt(root->left);
         cout<<root->data<<" ";
     }
void rightt(Node * root){
         if(root==NULL){
             return;
         }
     cout<<root->data<<" ";
    rightt(root->right);
     }

void topView(Node * root) {
       //Node * t1=root,*t2=root;
        leftt(root->left);
        cout<<root->data<<" ";
        rightt(root->right);
    }

/*void level(struct Node* root){
   if(root==NULL){
      return;
   }
   cout<<root->data<<" ";

}*/
int main(){
   struct Node* root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);
   pre(root);
   cout<<endl;
   ino(root);
   cout<<endl;
   pos(root);
   cout<<endl;
   topView(root);
   return 0;
}