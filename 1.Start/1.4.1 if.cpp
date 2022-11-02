//
// Created by Zhou on 2022/11/2.
//

#include <iostream>
using namespace std;

int main(){
    int currVal = 0,val = 0;
    if (cin>>currVal) {
        int cnt = 1;
        while(std::cin >> val){
            if (val == currVal)
                ++cnt;
            else {
                std::cout <<currVal <<" occurs "
                          <<cnt << " times" << endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout <<currVal <<" occurs "
                  <<cnt << " times" << endl;
    }
    return 0;
}