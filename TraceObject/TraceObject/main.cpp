//
//  main.cpp
//  TraceObject
//
//  Created by Daniel Henderson on 11/25/13.
//  Copyright (c) 2013 ___Dan___. All rights reserved.
//

#include <iostream>
#include "Trace.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Trace& t = getInstance( cout );

    t.print( "Begin main()\n" );

    // t.off();
    t.print( "after off, statement 1\n" );
    t.print( "after off, statement 2\n" );
    t.print( "after off, statement 3\n" );
    // t.on();

    t.print( "end main()\n" );
    t.print( "...done.\n" );




    return 0;
}
