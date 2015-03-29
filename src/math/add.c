////
////  add.c
////  mechanisms
////
////  Created on: 3/21/15
////  authors:
////    Eric Hosick <erichosick@gmail.com>
////  license:
////    The MIT License (MIT)
////    Copyright (c) 2015 Eric Hosick
////
//
//#include <assert.h>
//#include <math.h> // NAN
//#include "mathMech.h"
//#include "coreMech.h"
//
//int64_t addInt(Mech this) {
//    if(!this) { return NAN; }
//    DATA_GET(DualArg);
//    MAKE_DUAL_CALL(evalInt, +);
//};
//
//double addReal(Mech this) {
//    if(!this) { return NAN; }
//    DATA_GET(DualArg);
//    MAKE_DUAL_CALL(evalReal, +);
//};
//
//Mech addMech = {
//    .majorVer = 1,
//    .minorVer = 0,
//    .flags = 0,
//    .dataSize = sizeof(DualArg),
//    .name = "add",
//    .lookup = &nullVoid,
//    .delete = &nullVoid,
//    .evalInt = &addInt,
//    .evalReal = &addReal,
//    .evalBool = &nullBool // TODO: Boolean
//};
//
//Object addObjectGet() {
//    return (Object)addMech;
//}


//Mech add(Mech left, Mech right) {
//    Mech this = mechAlloc(&addMech);
//    if(this) {
//        DATA_GET(DualArg);
//        data->left = left;
//        data->right = right;
//    }
//    return this;
//}
