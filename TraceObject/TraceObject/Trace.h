//
// Created by Daniel Henderson on 11/25/13.
// Copyright (c) 2013 ___Dan___. All rights reserved.
//



#ifndef __Trace_H_
#define __Trace_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Trace {
private:
    // note this class DOES have a default constructor
    // SINGLETON pattern: only ONE Trace instance can be created
    Trace( ostream& os = cout, bool noisy = true);

public:
    static Trace& getInstance( ostream& os = cout, bool noisy = true);
    ~Trace();

    void print( string msg );
    void on();
    void off();

private:
    ostream& _os;
    bool _noisy;
    static Trace* _pInstance;  // the one and only instance for this class

};


#endif //__Trace_H_
