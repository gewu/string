/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file ReadCopy.cpp
 * @author gewu(com@baidu.com)
 * @date 2015/03/18 11:25:51
 * @brief 
 *  
 **/

#include <iostream>
#include <time.h>
using namespace std;

int main(){
    struct timeval time_val;
    string the_base(1024*1024*10, 'x');
    fprintf(stdout, "the_base's first char is [%c]\n", the_base[0]);  //string never know you will read or write
    clock_t begin = clock();                                          // when you use [] to get element; so, cow will be off
    the_base.push_back('a');
    for (int i = 0; i < 100; i++){
        string the_copy = the_base;
    }
    clock_t end = clock();
    fprintf(stdout, "cost time[%d] \n", end - begin);
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
