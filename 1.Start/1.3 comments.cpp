//
// Created by Zhou on 2022/11/2.
//
#include <iostream>
int LineCommentError(){
    std::cout<< "/*";
    std::cout<< "*/";
    //std::cout<< /* "*/" */;
    std::cout<< /* "*/" /* "/*" */; //���к���Ҫ��ע��ƥ���㷨
    return 0;
}

//int main(){
//    LineCommentError();
//}