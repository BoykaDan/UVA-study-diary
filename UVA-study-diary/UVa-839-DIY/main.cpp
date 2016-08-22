//
//  main.cpp
//  UVa-839-DIY
//
//  Created by Lang Dan on 16/8/9.
//  Copyright © 2016年 Lang Dan. All rights reserved.
//

#include <iostream>
#include "cstdio"
#include "cstdlib"
#include "vector"
using namespace std;

bool balance (int &w) {
    int wl,dl,wr,dr;
    bool b1 = true,b2 = true;
    cin >> wl >> dl >> wr >> dr ;
    if(!wl) b1 = balance(wl);
    if(!wr) b2 = balance(wr);
    return b2&&b1&&(wl*dl == wr*dr );
}

int main (){
    int time,w;
    for (int t = 0; t < time; t++) {
        if(balance(w)){
            cout <<  "YES" << endl;
        }else{
            cout << "NO！" << endl;
        }
        cout << "\n" <<endl;
        
    }
}

