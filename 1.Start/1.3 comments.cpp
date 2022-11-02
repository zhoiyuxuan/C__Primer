//
// Created by Zhou on 2022/11/2.
//
#include <iostream>
int LineCommentError(){
    std::cout<< "/*";
    std::cout<< "*/";
    //std::cout<< /* "*/" */;
    std::cout<< /* "*/" /* "/*" */; //这行很重要，注释匹配算法
    return 0;
}

//int main(){
//    LineCommentError();
//}