#ifndef GET_REQUEST_H
#define GET_REQUEST_H
#include"Request.h"
#include<string>

class GetRequest:public Requset{
    //这个类公有继承自 Request类
    virtual void doExecute();//声明一个抽象方法
    bool parseUri(std::string& filename,std::string& cgiargs);
    bool parseStaticContentUri(std::string &filename);
    bool parseDynamicContentUri(std::string& filename,std::string& cgiargs);
    void assignCigArgs(std::string& cgiargs);
    void doAssignCigArgs(std::string::size_type pos,std::string& cgiargs);
}
#endif
