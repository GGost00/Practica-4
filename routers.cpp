#include "routers.h"

routers::routers()
{
    mRuta="";
    mCosto=numeric_limits<int>::max();
}

void routers::setRuta(const string _r, const int _c)
{
    mRuta= _r;
    mCosto= _c;
}

string routers::getRutaminima()
{
return mRuta;
}

int routers::getCostoMinimo()
{
return mCosto;
}
