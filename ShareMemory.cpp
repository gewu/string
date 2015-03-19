/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file ShareMemory.cpp
 * @author gewu(com@baidu.com)
 * @date 2015/03/18 10:02:49
 * @brief 
 *  
 **/

// string share memory must satisfy two conditions:
// 1 use copy constructor 
// 2 use assignment constructor


#include <iostream>
using namespace std;

int main(){
    string str1 = "hello world";
    string str2 = str1;

    cout << "Sharing the memory:" << endl;
    printf ("\tstr1's address: %x\n", str1.c_str());
    printf ("\tstr2's address: %x\n", str2.c_str());

    str1[1] = 'q';
    str2[1] = 'w';

    printf ("After Copy-On-Write:\n");
    printf ("\tstr1's address: %x\n", str1.c_str());
    printf ("\tstr2's address: %x\n", str2.c_str());

    char tmp[] = "Hello, World";
    string str3 = tmp;
    string str4 = tmp;
    printf ("not copy : \n");
    printf ("\tstr1's address: %x\n", str3.c_str());
    printf ("\tstr2's address: %x\n", str4.c_str());

    return 0;
}

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
