/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file Mystring.cpp
 * @author gewu(com@baidu.com)
 * @date 2015/03/18 20:59:07
 * @brief 
 *  
 **/

#include <iostream>
using namespace std;

class String{
public:
    String(const char *str = NULL);
    String(const String &str);
    String& operator=(const String& str);
    size_t size() const;
    const char* c_str() const;
    ~Mystring();

private:
    char *data;
    size_t length;
};

String::String(const char *str){
    if (!str){
        length = 0;
        data = new char[1];
        *data = "\0";
    }
    else {
        length = strlen(str);
        data = new char[length+1];
        strcpy(data, str);
    }
}

String::String(const String& str){
    length = str.size();
    data = new char[length+1];
    strcpy(data, str.c_str());
}

String String::operator=(const String &str) const{
    if (this != &str){
        String strtemp(str);

        char *ptemp = strtemp.data;
        strtemp.data = data;
        data = ptemp;
    }
    return *this;
}



/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
