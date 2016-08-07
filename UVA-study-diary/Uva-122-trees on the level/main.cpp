//
//  main.cpp
//  Uva-122-trees on the level
//
//  Created by Lang Dan on 16/8/2.
//  Copyright © 2016年 Lang Dan. All rights reserved.
//

#include <iostream>
#include "cstdio"
#include "vector"
#include "queue"
#include "cstdlib"
//输入字符串长度限定
#define max 104

using namespace std;

//////////二叉树设计
typedef struct node{
    int v;
    node *left;
    node *right;
    bool h_v;
    node():h_v(true),left(NULL),right(NULL){}
};
node *root;
bool f;
node *new_node(){
    return new node();
}
void addnode(int v,char *s){
    int len = strlen(s);
    node *u =root;
    
    for (int i = 0; i < len ; i++) {
        if (s[i] == 'L') {
            cout <<"s[i]///////////////test."<< s[i] << "    L"<< i <<endl;

            if(u->left == NULL){
                u->left = new_node();
                u = u -> left;
            }
        }
        else if (s[i] == 'R') {
            cout <<"s[i]///////////////test."<< s[i] << "    R"<< i <<endl;

            if (u->right == NULL) {
                u->right = new_node();
                u = u->right;
            }
        }else if(s[i] == ')'){
            continue;
        }
        else{
            cout <<"s[i]///////////////test."<< s[i] << "    E"<< i <<endl;

            cout<<"please input the right value."<<endl;
            exit(0);
        }
        
        
    }
    if (u -> h_v == true) {
        if (v == NULL) {
            cout<<"not complete.---1"<<endl;
            exit(0);
        }else{
            u->v = v;
            u->h_v = false;
            f = true;
}
    }else{
        cout<<"not complete.---2"<<endl;
        exit(0);

            }
    
}

void remove_trees(node *u){
    if(u == NULL){return ;}
    remove_trees(u->left);
    remove_trees(u->right);
    delete u;
    
}
///////输入函数
bool readinput(){
    f = false;
    char s[max];
    remove_trees(root);
    root = new_node();
    for (; ; ) {
        if ( scanf("%s", s) != 1 ) {
            return false;
        }else if (!strcmp(s, "()"))  break;

            int v;
            sscanf(&s[1],"%d",&v );
        cout<<strchr(s,',')+1<<endl;
            addnode(v, strchr(s, ',')+1);
            
        
        
    }
    
    return true;
};
/////////广度优先遍历树
bool bfs(vector<int>& ans ){
    queue<node*> node_pond;//尚未使用的节点
    ans.clear();
    node_pond.push(root);
    while (!node_pond.empty()) {
        node *u = node_pond.front();
        node_pond.pop();
        if (u->h_v == false) {
            ans.push_back(u->v);
            if(u->left != NULL){node_pond.push(u->left);}
            if(u->right != NULL){node_pond.push(u->right);}
        }else{
            return false;
        }
        
    }
    return true;
    
}

int main (){
    vector<int> ans;
    if (readinput()) {
        if(!bfs(ans)) f =1;
        if(f ) cout<<"not competet---3."<<endl;
        else{
            for(int i = 0; i < ans.size(); i++) {
                if(i != 0) printf(" ");
                printf("%d", ans[i]);
            }
            printf("\n");
        }
        
    }
    return 0;
}
