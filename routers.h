#ifndef ROUTERS_H
#define ROUTERS_H
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<limits>

using namespace std;

class routers
{
private:
    string mRuta;
    int mCosto;
public:
    routers();
    void setRuta(const string _r, const int _c);
    string getRutaminima(void);
    int getCostoMinimo(void);

};

#endif // ROUTERS_H
