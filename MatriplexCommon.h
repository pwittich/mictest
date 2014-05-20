#ifndef MatriplexCommon_H
#define MatriplexCommon_H

#include <cmath>
#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <sys/time.h>

typedef int idx_t;

inline double dtime()
{
    double tseconds = 0.0;
    struct timeval mytime;
    gettimeofday(&mytime,(struct timezone*)0);
    tseconds = (double)(mytime.tv_sec + mytime.tv_usec*1.0e-6);
    return( tseconds );
}

#endif
