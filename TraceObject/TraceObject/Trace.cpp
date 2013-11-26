//
// Created by Daniel Henderson on 11/25/13.
// Copyright (c) 2013 ___Dan___. All rights reserved.
//


#include "Trace.h"
Trace* Trace::_pInstance = NULL;  // note static instance defined!

Trace::Trace(ostream& os, bool noisy){

}

Trace::~Trace() {

}

// SINGLETON pattern - only ONE instance is ever made
//     the constructor is PRIVATE,
//     All requests for the ( one and only ) instance are made
//     through the getInstance method
void Trace::print( string msg ) {

}

Trace& Trace::getInstance( ostream& os, bool noisy ) {

}

void Trace::on() {

}

void Trace::off() {

}

