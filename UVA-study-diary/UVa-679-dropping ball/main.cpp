//
//  main.cpp
//  UVa-679-dropping ball
//
//  Created by Lang Dan on 16/8/1.
//  Copyright © 2016年 Lang Dan. All rights reserved.
//

//UVA 679 Droping balls
#include "iostream"
#include "cstdio"
#include "cmath"
using namespace std;

int main (){
    int n,b,c;
    int k = 1;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin >> b >> c;
        if (b <= 20) {
            int deep = (1<<b) - 1;
            int bstack[deep];
            memset(bstack, 0, sizeof(bstack));
            for (int j = 0; j < c ;j++ ){
                k = 1;
                for ( ; ; ) {
                    bstack[k] =! bstack[k];
                    k = bstack[k] ? k*2:k*2+1;
                    if (k > deep ) {
                        break;
                    }
                }
                
            }
            
            
        }else{
            cout << "TOO DEEP" <<endl;
        }
    }
    cout << k/2 << endl;
    return 0;
    
}
