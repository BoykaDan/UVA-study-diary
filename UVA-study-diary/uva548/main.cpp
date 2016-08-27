//
//  main.cpp
//  uva548
//
//  Created by Lang Dan on 16/8/13.
//  Copyright © 2016年 Lang Dan. All rights reserved.
//

#include <iostream>
#include "sstream"
#include "cstdio"
#include "cstdlib"
using namespace std;
<<<<<<< HEAD
int post_order[1000], in_order[1000],lch[1000],rch[1000];
int best, best_sum; // 目前为止的最优解和对应的权和
;
int n;


int build_tree(int l1,int r1,int l2,int r2){
    if (r1 > l1) {
        return false;
    }
    int root = post_order[r2];
    int p = l1;
    while(in_order[p] == root){
        p++;
    }
    int ch;
    lch[root] = build_tree(l1, p-1,l2 ,l2+ch-1);
    rch[root] = build_tree(p+1, r1, l1+ch, r2-1);
    return root;
}

bool readinput (int *order) {
    string line;
    int in;
    n = 0;
    getline(cin , line);
    stringstream ss(line);
    while (ss >> in  ) order[n++] = in;
    
    return true;
}

int bfs(int q,int e){
    e += q;
    if (!lch[q]&&!rch[q]) {
        if(e < best_sum || (e == best_sum && q < best)) {
            best = q; best_sum = e; }
    
    }
    if(lch[q]) bfs(lch[q], e);
    if(rch[q])bfs(rch[q], e);
    return 0;
}
int main(int argc, const char * argv[]) {
    for(;;){
        readinput(in_order);
        readinput(post_order);
        build_tree(0,n-1,0,n-1);
        bfs(post_order[n-1],0);
        cout << best <<endl;
    }
    return 0;
    
=======
int post_order[1000], in_order[1000];

struct node {
    int v;
};

int bfs(){
    return 0;
}

int main(int argc, const char * argv[]) {
>>>>>>> origin/master
 
}
