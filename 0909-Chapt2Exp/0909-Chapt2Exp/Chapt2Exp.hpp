//
//  Chapt2Exp.hpp
//  0909-Chapt2Exp
//
//  Created by william on 2019/9/9.
//  Copyright © 2019 William. All rights reserved.
//

#include <cstdio>

void Chapt2Exp() {
    short a=100;
    int b=101;
    long c=102;
    long long d=103;
    float e=104.001;
    double f=104.002;
    char g=106;
    int* p=&b;
    
    printf ("short integer:     %lu\nvalue:%d\n", sizeof(short),a);
    printf ("integer:           %lu\nvalue:%d\n", sizeof(int),b);
    printf ("long integer:      %lu\nvalue:%ld\n", sizeof(long),c);
    printf ("long long integer: %lu\nvalue:%lld\n", sizeof(long long),d);
    printf ("float:             %lu\nvalue:%f\n", sizeof(float),e);
    printf ("double:            %lu\nvalue:%f\n", sizeof(double),f);
    printf ("character:         %lu\nvalue:%d\n", sizeof(char),g);
    printf ("pointer:           %lu\nvalue:0x%lx\n", sizeof(int*),p);
}
