//
// Created by Zhou on 2022/11/3.
//

#include <iostream>
int main(){
    double dval = 0;
    double *pd = &dval;
    double *pd2 = pd;
    std::cout<<pd<<pd2<<std::endl;


}