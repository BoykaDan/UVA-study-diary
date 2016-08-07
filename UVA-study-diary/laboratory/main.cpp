//
//  main.cpp
//  laboratory
//
//  Created by Lang Dan on 16/8/3.
//  Copyright © 2016年 Lang Dan. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int i = 0;
    char s[100];
    s[i] = 'L';
    cout <<"s[i]///////////////test."<< s[i] <<endl;
    if (s[i] == 'L') {
        cout <<"s[i]///////////////test.---1"<< s[i] <<endl;

    }
    if (s[i] == 'R') {
        cout <<"s[i]///////////////test.---2"<< s[i] <<endl;

          }
    else{
        cout<<"please input the right value."<<endl;
        exit(0);
    }
    
    
    
    
    bool f =false;
    for (; ; ) {
        cout<<"77777777"<<endl;
    }
    if (1==1) {
        cout<<"77777777"<<endl;
    }
    if (f) {
            cout << f<<endl;

    }
    else{
        cout<< !f <<endl;
    }
    if ( scanf("%s", s) != 1 ) {
        cout<< s <<endl;
    }else{
        cout<< "~~~~~~~~~~~"<<s <<endl;
        if (!strcmp(s, "()")) {
            cout <<"R"<<endl;
        }else{
            cout <<"L"<<strchr(s, ',')<<endl;
        }
        
        
    }

       return 0;
}
