#ifndef gauche_ffi_H
#define gauche_ffi_H

#ifdef __cplusplus
extern "C" {
#endif

#include "w2c2_base.h"

typedef struct gauche_ffiInstance {
wasmModuleInstance common;
wasmMemory* m0;
wasmTable t0;
U32 g0;
U32 g1;
U32 g2;
} gauche_ffiInstance;

U32 f0(gauche_ffiInstance*,U32,F64,F64,F64,F64,U32);

U32 f1(gauche_ffiInstance*,U32,U32,U32,U32);

U32 f2(gauche_ffiInstance*,U32,F64,F64,U32);

U32 f3(gauche_ffiInstance*);

void f4(gauche_ffiInstance*,U32);

U32 f5(gauche_ffiInstance*,U32,U32);

void f6(gauche_ffiInstance*,U32,U32,U32);

U32 f7(gauche_ffiInstance*,U32,U32,U32,U32);

void f8(gauche_ffiInstance*);

void f9(gauche_ffiInstance*,U32,U32);

void f10(gauche_ffiInstance*,U32,U32);

void f11(gauche_ffiInstance*,U32,U32,U32,U32,U32,U32,U32);

void f12(gauche_ffiInstance*,U32,U32,U32,U32,U32);

U32 f13(gauche_ffiInstance*,U32,U32,U32);

void f14(gauche_ffiInstance*,U32,F64,F64);

void f15(gauche_ffiInstance*,U32,U32,U32);

void f16(gauche_ffiInstance*,U32,U32,U32);

void f17(gauche_ffiInstance*,U32,F64,F64,F64,F64,U32,U32);

U32 f18(gauche_ffiInstance*,F64,F64,U32,U32);

void f19(gauche_ffiInstance*,U32,U32,U32,U32,U32);

void f20(gauche_ffiInstance*,U32,U32,U32);

void f21(gauche_ffiInstance*,U32,U32,F64,F64);

void f22(gauche_ffiInstance*,U32);

void f23(gauche_ffiInstance*,U32,U32,U32,U32,U32);

void f24(gauche_ffiInstance*,U32,U32,U32,U32);

void f25(gauche_ffiInstance*,U32);

U32 f26(gauche_ffiInstance*,U32,U32,U32);

void f27(gauche_ffiInstance*,U32,U32,U32);

U32 f28(gauche_ffiInstance*,U32,U32);

U32 f29(gauche_ffiInstance*,U32,U32);

void f30(gauche_ffiInstance*,U32,U32,U32);

void f31(gauche_ffiInstance*,U32);

void f32(gauche_ffiInstance*,U32,U32,U32,U32,U32,U32);

void f33(gauche_ffiInstance*,U32);

void f34(gauche_ffiInstance*,U32);

void f35(gauche_ffiInstance*,U32);

void f36(gauche_ffiInstance*,U32,U32,U32,U32,U32);

void f37(gauche_ffiInstance*,U32,U32,U64,F64,F64);

void f38(gauche_ffiInstance*,U32,U32,U32,U32,U32);

U32 f39(gauche_ffiInstance*,U32,U32);

void f40(gauche_ffiInstance*,U32,U32,U32,U32,U32);

void f41(gauche_ffiInstance*,U32,U32);

void f42(gauche_ffiInstance*,U32);

void f43(gauche_ffiInstance*,U32);

void f44(gauche_ffiInstance*,U32);

void f45(gauche_ffiInstance*,U32);

void f46(gauche_ffiInstance*,U32);

void f47(gauche_ffiInstance*,U32);

void f48(gauche_ffiInstance*,U32,U32,U32,U32,U32,U32);

void f49(gauche_ffiInstance*,U32,U32,U32,U32,U32);

void f50(gauche_ffiInstance*,U32,U32);

void f51(gauche_ffiInstance*,U32,U32);

U32 f52(gauche_ffiInstance*,U32,U32);

U32 f53(gauche_ffiInstance*,U32,U32);

U32 f54(gauche_ffiInstance*,U32);

void f55(gauche_ffiInstance*);

void f56(gauche_ffiInstance*,U32,U32,U32);

void f57(gauche_ffiInstance*,U32);

U32 f58(gauche_ffiInstance*,U32,U32,U32,U32);

void f59(gauche_ffiInstance*,U32,U32);

void f60(gauche_ffiInstance*,U32,U32);

void f61(gauche_ffiInstance*,U32);

void f62(gauche_ffiInstance*,U32,U32);

void f63(gauche_ffiInstance*,U32,U32);

void f64(gauche_ffiInstance*,U32,U32);

U32 f65(gauche_ffiInstance*,U32);

void f66(gauche_ffiInstance*,U32);

void f67(gauche_ffiInstance*,U32,U32);

void f68(gauche_ffiInstance*,U32,U32);

U32 f69(gauche_ffiInstance*,U32,U32);

void f70(gauche_ffiInstance*,U32,U32);

void f71(gauche_ffiInstance*,U32,U32);

void f72(gauche_ffiInstance*,U32,U32);

U32 f73(gauche_ffiInstance*,U32,U32);

U32 f74(gauche_ffiInstance*,U32,U32);

U32 f75(gauche_ffiInstance*,U32,U32,U32);

void f76(gauche_ffiInstance*,U32,U32);

void f77(gauche_ffiInstance*,U32,U32);

void f78(gauche_ffiInstance*,U32,U32);

U32 f79(gauche_ffiInstance*,U32,U32,U32);

void f80(gauche_ffiInstance*,U32,U32,U32);

void f81(gauche_ffiInstance*,U32,U32);

void f82(gauche_ffiInstance*,U32,U32,U32,U32);

void f83(gauche_ffiInstance*,U32);

void f84(gauche_ffiInstance*,U32,U32,U32);

void f85(gauche_ffiInstance*,U32,U32);

void f86(gauche_ffiInstance*,U32,U32,U32,U32);

void f87(gauche_ffiInstance*,U32,U32);

void f88(gauche_ffiInstance*);

void f89(gauche_ffiInstance*,U32,U32,U32);

U32 f90(gauche_ffiInstance*,U32,U32);

U32 f91(gauche_ffiInstance*,U32,U32);

U32 f92(gauche_ffiInstance*,U32,U32,U32);

void f93(gauche_ffiInstance*,U32,U32,U32,U32);

U32 f94(gauche_ffiInstance*,U32,U32,U32);

void f95(gauche_ffiInstance*,U32,U32,U32);

void f96(gauche_ffiInstance*,U32,U32,U32,U32);

void f97(gauche_ffiInstance*,U32,U64,U64);

void f98(gauche_ffiInstance*,U32,U32,U32);

U32 f99(gauche_ffiInstance*,U32,U32);

U32 f100(gauche_ffiInstance*,U32,U32,U32,U32);

void f101(gauche_ffiInstance*,U32,U32,U32);

U32 f102(gauche_ffiInstance*,U32);

U32 f103(gauche_ffiInstance*,U32);

void f104(gauche_ffiInstance*,U32,U32,U32);

void f105(gauche_ffiInstance*,U32,U32);

void f106(gauche_ffiInstance*,U32,U32);

U64 f107(gauche_ffiInstance*,U32);

U32 f108(gauche_ffiInstance*,U32,U32,U32,U32,U32,U32);

U32 f109(gauche_ffiInstance*,U32,U32);

U32 f110(gauche_ffiInstance*,U32,U32,U32,U32,U32);

U32 f111(gauche_ffiInstance*,U32,U32,U32);

U32 f112(gauche_ffiInstance*,U32,U32,U32);

void f113(gauche_ffiInstance*,U32,U32,U32,U32,U32);

U32 f114(gauche_ffiInstance*,U32,U32);

void f115(gauche_ffiInstance*,U32,U32,U32,U32,U32);

void f116(gauche_ffiInstance*,U32,U32,U32,U32,U32);

U32 f117(gauche_ffiInstance*,U32,U32);

U32 f118(gauche_ffiInstance*,U32,U32);

void f119(gauche_ffiInstance*,U32);

void f120(gauche_ffiInstance*,U32,U32,U32,U32,U32);

U32 f121(gauche_ffiInstance*,U32,U32);

void f122(gauche_ffiInstance*,U32,U32,U32,U32);

void f123(gauche_ffiInstance*,U32,U32,U32);

void f124(gauche_ffiInstance*,U32,U32,U32);

U32 f125(gauche_ffiInstance*,U32,U32);

void f126(gauche_ffiInstance*,U32,U32,U32);

U32 f127(gauche_ffiInstance*,U32,U32);

U32 f128(gauche_ffiInstance*,U32,U32);

U32 f129(gauche_ffiInstance*,U32,U32,U32);

U32 f130(gauche_ffiInstance*,U32,U32,U32);

void f131(gauche_ffiInstance*,U32,U64,U64,U64,U64);

void f132(gauche_ffiInstance*,U32,U64,U64,U64,U64);

void f133(gauche_ffiInstance*,U32,U64,U64,U64,U64);

F64 f134(gauche_ffiInstance*,F64);

F64 f135(gauche_ffiInstance*,F64,F64);

F64 f136(gauche_ffiInstance*,F64,F64);

F64 f137(gauche_ffiInstance*,F64,F64);

void f138(gauche_ffiInstance*,U32,U64,U64,U64,U64);

F64 f139(gauche_ffiInstance*,F64,F64);

U32 f140(gauche_ffiInstance*,U32,U32,U32,U32,U32,U32);

void f141(gauche_ffiInstance*,U32,F64);

F64 f142(gauche_ffiInstance*,F64);

F64 f143(gauche_ffiInstance*,F64);

void f144(gauche_ffiInstance*,U32,U64,U64,U32);

F64 f145(gauche_ffiInstance*,F64);

F64 f146(gauche_ffiInstance*,F64);

F64 f147(gauche_ffiInstance*,F64);

F64 f148(gauche_ffiInstance*,F64);

void f149(gauche_ffiInstance*,U32,U64,U64,U32);

U64 f150(gauche_ffiInstance*,U64,U32,U64);

F64 f151(gauche_ffiInstance*,F64,F64);

F64 f152(gauche_ffiInstance*,F64,F64);

wasmMemory*gauche_ffi_memory(gauche_ffiInstance* i);

U32 gauche_ffi_gauche_classify_bbox(gauche_ffiInstance*i,U32 l0,F64 l1,F64 l2,F64 l3,F64 l4,U32 l5);

U32 gauche_ffi_gauche_classify_line(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 gauche_ffi_gauche_classify_point(gauche_ffiInstance*i,U32 l0,F64 l1,F64 l2,U32 l3);

U32 gauche_ffi_gauche_create(gauche_ffiInstance*i);

void gauche_ffi_gauche_destroy(gauche_ffiInstance*i,U32 l0);

void gauche_ffiInstantiate(gauche_ffiInstance* instance, void* resolve(const char* module, const char* name));

void gauche_ffiFreeInstance(gauche_ffiInstance* instance);

#ifdef __cplusplus
}
#endif

#endif /* gauche_ffi_H */

