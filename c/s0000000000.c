#include "w2c2_base.h"

#include "gauche_ffi.h"

U32 f0(gauche_ffiInstance*i,U32 l0,F64 l1,F64 l2,F64 l3,F64 l4,U32 l5) {
U32 l6=0;
U32 si0,si1,si2,si3;
F64 sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l0;
if(si0){
goto L2;
}
si0=1U;
l0=si0;
goto L1;
L2:;
si0=l5;
if(si0){
goto L3;
}
si0=2U;
l0=si0;
goto L1;
L3:;
si0=l6;
sd1=l4;
f64_store(i->m0,(U64)si0+40U,sd1);
si0=l6;
sd1=l3;
f64_store(i->m0,(U64)si0+32U,sd1);
si0=l6;
sd1=l2;
f64_store(i->m0,(U64)si0+24U,sd1);
si0=l6;
sd1=l1;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l6;
si1=l0;
si2=l6;
si3=16U;
si2+=si3;
f16(i,si0,si1,si2);
si0=3U;
l0=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L5;
}
L6:;
si0=l5;
si1=l6;
si1=i32_load8_u(i->m0,(U64)si1+4U);
si2=2U;
si1<<=(si2&31);
si1=i32_load(i->m0,(U64)si1+1048576U);
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
goto L1;
L5:;
si0=4U;
l0=si0;
L4:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l5;
si2=1U;
f6(i,si0,si1,si2);
L1:;
si0=l6;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f1(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
F64 l9=0;
F64 l10=0;
U32 si0,si1,si2,si3;
U64 sj1;
F64 sd0,sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
if(si0){
goto L2;
}
si0=1U;
l5=si0;
goto L1;
L2:;
si0=l3;
if(si0){
goto L3;
}
si0=2U;
l5=si0;
goto L1;
L3:;
si0=3U;
l5=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l2;
si1=1U;
si0<<=(si1&31);
l6=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=4U;
si0<<=(si1&31);
l5=si0;
si0=0U;
l7=si0;
si0=l2;
si1=268435455U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
si1=2147483640U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
if(si0){
goto L6;
}
si0=8U;
l8=si0;
si0=0U;
l5=si0;
goto L5;
L6:;
f8(i);
si0=8U;
l7=si0;
si0=l5;
si1=8U;
si0=f5(i,si0,si1);
l8=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l2;
l5=si0;
L5:;
si0=l4;
si1=0U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l8;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l6;
si1=268435454U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=0U;
l5=si0;
si0=0U;
si1=l2;
si2=134217727U;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si0-=si1;
l6=si0;
si0=1U;
l2=si0;
L8:;
{
si0=l1;
si1=l5;
si0+=si1;
l7=si0;
sd0=f64_load(i->m0,(U64)si0);
l9=sd0;
si0=l7;
si1=8U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l10=sd0;
si0=l2;
si1=-1U;
si0+=si1;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l4;
si1=4U;
si0+=si1;
f34(i,si0);
L9:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l5;
si0+=si1;
l7=si0;
sd1=l9;
f64_store(i->m0,(U64)si0,sd1);
si0=l7;
si1=8U;
si0+=si1;
sd1=l10;
f64_store(i->m0,(U64)si0,sd1);
si0=l5;
si1=16U;
si0+=si1;
l5=si0;
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
si1=l4;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+40U,si1);
si0=l4;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+4U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l4;
si1=16U;
si0+=si1;
si1=l0;
si2=l4;
si3=32U;
si2+=si3;
f20(i,si0,si1,si2);
si0=3U;
l5=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+16U);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L10;
case 1:
goto L12;
default:
goto L11;
}
L12:;
si0=l3;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+20U);
si2=2U;
si1<<=(si2&31);
si1=i32_load(i->m0,(U64)si1+1048576U);
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l5=si0;
goto L1;
L11:;
si0=4U;
l5=si0;
L10:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l2;
si2=1U;
f6(i,si0,si1,si2);
goto L1;
L4:;
si0=l7;
si1=l5;
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

U32 f2(gauche_ffiInstance*i,U32 l0,F64 l1,F64 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2;
F64 sd2,sd3;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
if(si0){
goto L2;
}
si0=1U;
l0=si0;
goto L1;
L2:;
si0=l3;
if(si0){
goto L3;
}
si0=2U;
l0=si0;
goto L1;
L3:;
si0=l4;
si1=l0;
sd2=l1;
sd3=l2;
f21(i,si0,si1,sd2,sd3);
si0=3U;
l0=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=-2U;
si0+=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L6;
default:
goto L5;
}
L6:;
si0=l3;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+4U);
si2=2U;
si1<<=(si2&31);
si1=i32_load(i->m0,(U64)si1+1048576U);
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l0=si0;
goto L1;
L5:;
si0=4U;
l0=si0;
L4:;
si0=l4;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si2=1U;
f6(i,si0,si1,si2);
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f3(gauche_ffiInstance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l0=si0;
i->g0=si0;
si0=l0;
si1=12U;
si0+=si1;
f22(i,si0);
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L3;
}
f8(i);
si0=20U;
si1=4U;
si0=f5(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+28U);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1+20U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l0;
sj1=i64_load(i->m0,(U64)si1+12U);
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L3:;
si0=0U;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l2;
si2=1U;
f6(i,si0,si1,si2);
L2:;
si0=l0;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l1;
goto L0;
L1:;
si0=4U;
si1=20U;
f87(i,si0,si1);
UNREACHABLE;
L0:;
return si0;
}

void f4(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si1=40U;
si0+=si1;
l3=si0;
L3:;
{
si0=l3;
si1=-16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l3;
si1=-12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si2=24U;
si1*=si2;
si2=8U;
f6(i,si0,si1,si2);
L4:;
si0=l3;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L5:;
si0=l3;
si1=48U;
si0+=si1;
l3=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L3;
}
}
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=l3;
si2=48U;
si1*=si2;
si2=8U;
f6(i,si0,si1,si2);
L6:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l3;
si2=1U;
f6(i,si0,si1,si2);
L7:;
si0=l0;
si1=20U;
si2=4U;
f6(i,si0,si1,si2);
L1:;
L0:;
}

U32 f5(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f52(i,si0,si1);
goto L0;
L0:;
return si0;
}

void f6(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=l2;
f56(i,si0,si1,si2);
goto L0;
L0:;
}

U32 f7(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si0=f58(i,si0,si1,si2,si3);
goto L0;
L0:;
return si0;
}

void f8(gauche_ffiInstance*i) {
goto L0;
L0:;
}

void f9(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=0U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
l5=si1;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l4;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
l6=si1;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l7=si0;
si0=l1;
si1=20U;
si0+=si1;
l8=si0;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+24U);
l9=si1;
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l10=si0;
si0=l9;
si1=5U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l10;
si1=255U;
si0&=si1;
l8=si0;
L4:;
{
si0=l7;
si1=l5;
si0+=si1;
l11=si0;
si0=l4;
si1=l5;
si0-=si1;
l12=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l12;
if(si0){
goto L7;
}
si0=0U;
l12=si0;
si0=0U;
l13=si0;
goto L5;
L7:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l8;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=1U;
l13=si0;
si0=0U;
l12=si0;
goto L5;
L8:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=0U;
l13=si0;
goto L5;
L9:;
si0=1U;
l13=si0;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=1U;
l12=si0;
goto L5;
L10:;
si0=l12;
si1=2U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l13=si0;
goto L5;
L11:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+2U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=2U;
l12=si0;
goto L5;
L12:;
si0=l12;
si1=3U;
si0=si0 != si1;
if(si0){
goto L13;
}
si0=0U;
l13=si0;
goto L5;
L13:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+3U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L14;
}
si0=3U;
l12=si0;
goto L5;
L14:;
si0=l12;
si1=4U;
si0=si0 != si1;
if(si0){
goto L15;
}
si0=0U;
l13=si0;
goto L5;
L15:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+4U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=4U;
l12=si0;
goto L5;
L16:;
si0=l12;
si1=5U;
si0=si0 != si1;
if(si0){
goto L17;
}
si0=0U;
l13=si0;
goto L5;
L17:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+5U);
si1=l8;
si0=si0 != si1;
if(si0){
goto L18;
}
si0=5U;
l12=si0;
goto L5;
L18:;
si0=l12;
si1=6U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=0U;
l13=si0;
goto L5;
L19:;
si0=6U;
si1=l12;
si2=l11;
si2=i32_load8_u(i->m0,(U64)si2+6U);
si3=l8;
si2=si2 == si3;
l13=si2;
si0=si2?si0:si1;
l12=si0;
goto L5;
L6:;
si0=l2;
si1=8U;
si0+=si1;
si1=l10;
si2=l11;
si3=l12;
f122(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+12U);
l12=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
L5:;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=l12;
si1+=si2;
si2=1U;
si1+=si2;
l5=si1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l5;
si1=l6;
si0=si0 <= si1;
if(si0){
goto L20;
}
L21:;
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L4;
}
goto L1;
L20:;
}
si0=0U;
si1=l9;
si2=4U;
si3=1050060U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L3:;
si0=l10;
si1=255U;
si0&=si1;
l14=si0;
L22:;
{
si0=l7;
si1=l5;
si0+=si1;
l11=si0;
si0=l4;
si1=l5;
si0-=si1;
l12=si0;
si1=8U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l2;
si1=l10;
si2=l11;
si3=l12;
f122(i,si0,si1,si2,si3);
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l12=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
goto L23;
L24:;
si0=l12;
if(si0){
goto L25;
}
si0=0U;
l12=si0;
si0=0U;
l13=si0;
goto L23;
L25:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l14;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=1U;
l13=si0;
si0=0U;
l12=si0;
goto L23;
L26:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L27;
}
si0=0U;
l13=si0;
goto L23;
L27:;
si0=1U;
l13=si0;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=l14;
si0=si0 != si1;
if(si0){
goto L28;
}
si0=1U;
l12=si0;
goto L23;
L28:;
si0=l12;
si1=2U;
si0=si0 != si1;
if(si0){
goto L29;
}
si0=0U;
l13=si0;
goto L23;
L29:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+2U);
si1=l14;
si0=si0 != si1;
if(si0){
goto L30;
}
si0=2U;
l12=si0;
goto L23;
L30:;
si0=l12;
si1=3U;
si0=si0 != si1;
if(si0){
goto L31;
}
si0=0U;
l13=si0;
goto L23;
L31:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+3U);
si1=l14;
si0=si0 != si1;
if(si0){
goto L32;
}
si0=3U;
l12=si0;
goto L23;
L32:;
si0=l12;
si1=4U;
si0=si0 != si1;
if(si0){
goto L33;
}
si0=0U;
l13=si0;
goto L23;
L33:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+4U);
si1=l14;
si0=si0 != si1;
if(si0){
goto L34;
}
si0=4U;
l12=si0;
goto L23;
L34:;
si0=l12;
si1=5U;
si0=si0 != si1;
if(si0){
goto L35;
}
si0=0U;
l13=si0;
goto L23;
L35:;
si0=l11;
si0=i32_load8_u(i->m0,(U64)si0+5U);
si1=l14;
si0=si0 != si1;
if(si0){
goto L36;
}
si0=5U;
l12=si0;
goto L23;
L36:;
si0=l12;
si1=6U;
si0=si0 != si1;
if(si0){
goto L37;
}
si0=0U;
l13=si0;
goto L23;
L37:;
si0=6U;
si1=l12;
si2=l11;
si2=i32_load8_u(i->m0,(U64)si2+6U);
si3=l14;
si2=si2 == si3;
l13=si2;
si0=si2?si0:si1;
l12=si0;
L23:;
si0=l13;
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l1;
si1=l5;
si2=l12;
si1+=si2;
si2=1U;
si1+=si2;
l5=si1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l9;
si0=si0 < si1;
if(si0){
goto L39;
}
si0=l5;
si1=l6;
si0=si0 > si1;
if(si0){
goto L39;
}
si0=l7;
si1=l5;
si2=l9;
si1-=si2;
l12=si1;
si0+=si1;
si1=l8;
si2=l9;
si0=f130(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L38;
}
L39:;
si0=l4;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L22;
}
goto L1;
L38:;
}
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l12;
i32_store(i->m0,(U64)si0+4U,si1);
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=l4;
i32_store(i->m0,(U64)si0+12U,si1);
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f10(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
if(si0){
goto L6;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+14U);
if(si0){
goto L7;
}
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+52U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+48U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l5;
si1=l3;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L4;
L9:;
si0=l4;
si1=l5;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L4;
}
L8:;
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l4;
si1=l5;
si0+=si1;
l6=si0;
si0=i32_load8_s(i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L12;
}
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l8=si0;
si0=l7;
si1=31U;
si0&=si1;
l9=si0;
si0=l7;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l9;
si1=6U;
si0<<=(si1&31);
si1=l8;
si0|=si1;
l7=si0;
goto L11;
L13:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l8;
si1=l9;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
goto L11;
L14:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l6;
si1=i32_load8_u(i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l9;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
goto L11;
L12:;
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
L11:;
si0=1U;
l6=si0;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
si0=l7;
si1=128U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=2U;
l6=si0;
si0=l7;
si1=2048U;
si0=si0 < si1;
if(si0){
goto L15;
}
si0=3U;
si1=4U;
si2=l7;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l6=si0;
L15:;
si0=l1;
si1=l6;
si2=l5;
si1+=si2;
l5=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l5;
si0=!(si0);
if(si0){
goto L16;
}
si0=l5;
si1=l3;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L16;
}
goto L5;
L17:;
si0=l4;
si1=l5;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L5;
}
L16:;
si0=l5;
si1=l3;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l4;
si1=l5;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si1=-32U;
si0=si0 < si1;
goto L3;
L10:;
si0=l1;
si1=l2;
si2=-1U;
si1^=si2;
si2=1U;
si1&=si2;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L1;
}
si0=l1;
si1=1U;
i32_store8(i->m0,(U64)si0+14U,si1);
L7:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L6:;
si0=l1;
si1=8U;
si0+=si1;
l5=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+60U);
l7=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+56U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+52U);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+48U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+36U);
si1=-1U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=l0;
si1=l5;
si2=l3;
si3=l2;
si4=l4;
si5=l7;
si6=0U;
f11(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L18:;
si0=l0;
si1=l5;
si2=l3;
si3=l2;
si4=l4;
si5=l7;
si6=1U;
f11(i,si0,si1,si2,si3,si4,si5,si6);
goto L0;
L5:;
si0=1U;
l2=si0;
L4:;
si0=l1;
si1=l2;
si2=-1U;
si1^=si2;
si2=1U;
si1&=si2;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l3;
si2=l5;
si3=l3;
si4=1050076U;
f115(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L3:;
si0=l5;
l3=si0;
L2:;
si0=l1;
si1=0U;
i32_store8(i->m0,(U64)si0+12U,si1);
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f11(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+20U);
l7=si0;
si1=l5;
si2=-1U;
si1+=si2;
l8=si1;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=l1;
si1=i32_load(i->m0,(U64)si1+16U);
l10=si1;
si0-=si1;
l11=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+28U);
l12=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l13=si0;
si0=l1;
sj0=i64_load(i->m0,(U64)si0);
l14=sj0;
L2:;
{
sj0=l14;
si1=l2;
si2=l9;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0>>=(sj1&63);
sj1=W2C2_LL(1U);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=l7;
si2=l5;
si1+=si2;
l7=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=0U;
l9=si0;
si0=l6;
if(si0){
goto L3;
}
goto L4;
L5:;
si0=l13;
si1=l12;
si2=l13;
si3=l12;
si4=l13;
si3=si3 > si4;
si1=si3?si1:si2;
si2=l6;
si0=si2?si0:si1;
l15=si0;
si1=l5;
si2=l15;
si3=l5;
si2=si2 > si3;
si0=si2?si0:si1;
l16=si0;
si0=l2;
si1=l7;
si0+=si1;
l17=si0;
si0=l15;
l9=si0;
L9:;
{
si0=l16;
si1=l9;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
si1=l12;
si2=l6;
si0=si2?si0:si1;
l18=si0;
si0=l13;
l9=si0;
L11:;
{
si0=l18;
si1=l9;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l1;
si1=l7;
si2=l5;
si1+=si2;
l9=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l6;
if(si0){
goto L13;
}
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+28U,si1);
L13:;
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L12:;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l9;
si1=l7;
si0+=si1;
l19=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l4;
si1=l9;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l2;
si2=l19;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L11;
}
}
si0=l1;
si1=l7;
si2=l10;
si1+=si2;
l7=si1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l11;
l9=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L4;
}
goto L3;
L10:;
si0=l7;
si1=l9;
si0+=si1;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l17;
si1=l9;
si0+=si1;
l19=si0;
si0=l4;
si1=l9;
si0+=si1;
l18=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
si0=l18;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l19;
si1=i32_load8_u(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L9;
}
}
si0=l7;
si1=l13;
si0-=si1;
si1=l9;
si0+=si1;
l7=si0;
si0=l6;
if(si0){
goto L3;
}
si0=0U;
l9=si0;
goto L4;
L8:;
si0=l19;
si1=l3;
si2=1050108U;
f104(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=l3;
si1=l15;
si2=l7;
si1+=si2;
l9=si1;
si2=l3;
si3=l9;
si2=si2 > si3;
si0=si2?si0:si1;
si1=l3;
si2=1050124U;
f104(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l9;
si1=l5;
si2=1050092U;
f104(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=l9;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l9;
l12=si0;
L3:;
si0=l7;
si1=l8;
si0+=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L2;
}
}
L1:;
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f12(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=112U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=1U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
l6=sj1;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l5;
si1=20U;
si0+=si1;
si1=1050054U;
si2=l5;
si3=32U;
si2+=si3;
f89(i,si0,si1,si2);
si0=l5;
si1=32U;
si0+=si1;
si1=l5;
si2=20U;
si1+=si2;
si2=l1;
si3=l2;
f93(i,si0,si1,si2,si3);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f10(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+96U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L8;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
si1=l5;
si1=i32_load(i->m0,(U64)si1+100U);
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l2;
si1=l4;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L6;
}
goto L5;
L8:;
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=1049089U;
si2=l5;
si3=96U;
si2+=si3;
f89(i,si0,si1,si2);
goto L4;
L7:;
si0=l1;
si1=l4;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L5;
}
L6:;
si0=l1;
si1=l2;
si2=l4;
si3=l2;
si4=1050140U;
f115(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L5:;
si0=l5;
si1=l2;
si2=l4;
si1-=si2;
l3=si1;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l1;
si2=l4;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=1U;
i32_store8(i->m0,(U64)si0+56U,si1);
si0=l5;
si1=39U;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l5;
si1=39U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
si2=32U;
si1+=si2;
f9(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+96U);
si0=!(si0);
if(si0){
goto L10;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+100U);
l7=si0;
si1=l4;
si0+=si1;
l8=si0;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l4;
si0=!(si0);
if(si0){
goto L3;
}
si0=l2;
si1=l4;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l2;
si1=l4;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L3;
L10:;
si0=l5;
sj1=l6;
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l5;
si1=32U;
si0+=si1;
si1=1049110U;
si2=l5;
si3=96U;
si2+=si3;
f89(i,si0,si1,si2);
goto L4;
L9:;
si0=l3;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l2=si0;
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+36U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l8;
si0=!(si0);
if(si0){
goto L11;
}
si0=l8;
si1=l2;
si0=si0 < si1;
if(si0){
goto L12;
}
si0=l8;
si1=l2;
si0=si0 == si1;
if(si0){
goto L11;
}
goto L2;
L12:;
si0=l1;
si1=l8;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L2;
}
L11:;
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si1=l2;
si2=l4;
si3=l8;
si4=1050156U;
f115(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l0=si0;
si0=!(si0);
if(si0){
goto L13;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
si1=l0;
si2=1U;
f6(i,si0,si1,si2);
L13:;
si0=l5;
si1=112U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f13(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
F64 l10=0;
F64 l11=0;
F64 l12=0;
F64 l13=0;
F64 l14=0;
F64 l15=0;
F64 l16=0;
U32 si0,si1,si2,si3;
F64 sd0,sd1,sd2,sd3,sd4;
sd0=0;
l3=sd0;
sd0=0;
l4=sd0;
si0=l0;
sd0=f64_load(i->m0,(U64)si0);
l5=sd0;
sd1=l5;
sd0*=sd1;
si1=l0;
sd1=f64_load(i->m0,(U64)si1+8U);
l6=sd1;
sd2=l6;
sd1*=sd2;
sd0+=sd1;
si1=l0;
sd1=f64_load(i->m0,(U64)si1+16U);
l7=sd1;
sd2=l7;
sd1*=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l8=sd0;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
l9=sd1;
sd2=l9;
sd1*=sd2;
si2=l1;
sd2=f64_load(i->m0,(U64)si2+8U);
l10=sd2;
sd3=l10;
sd2*=sd3;
sd1+=sd2;
si2=l1;
sd2=f64_load(i->m0,(U64)si2+16U);
l11=sd2;
sd3=l11;
sd2*=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
l12=sd1;
sd0*=sd1;
l13=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L1;
}
sd0=1;
sd1=-1;
sd2=l5;
sd3=l9;
sd2*=sd3;
sd3=l6;
sd4=l10;
sd3*=sd4;
sd2+=sd3;
sd3=l7;
sd4=l11;
sd3*=sd4;
sd2+=sd3;
sd3=l13;
sd2/=sd3;
l13=sd2;
sd3=l13;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l13=sd1;
sd2=l13;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l4=sd0;
L1:;
sd0=l8;
si1=l2;
sd1=f64_load(i->m0,(U64)si1);
l13=sd1;
sd2=l13;
sd1*=sd2;
si2=l2;
sd2=f64_load(i->m0,(U64)si2+8U);
l14=sd2;
sd3=l14;
sd2*=sd3;
sd1+=sd2;
si2=l2;
sd2=f64_load(i->m0,(U64)si2+16U);
l15=sd2;
sd3=l15;
sd2*=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
l16=sd1;
sd0*=sd1;
l8=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L2;
}
sd0=1;
sd1=-1;
sd2=l5;
sd3=l13;
sd2*=sd3;
sd3=l6;
sd4=l14;
sd3*=sd4;
sd2+=sd3;
sd3=l7;
sd4=l15;
sd3*=sd4;
sd2+=sd3;
sd3=l8;
sd2/=sd3;
l5=sd2;
sd3=l5;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l5=sd1;
sd2=l5;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l3=sd0;
L2:;
sd0=0;
l5=sd0;
sd0=l12;
sd1=l16;
sd0*=sd1;
l6=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L3;
}
sd0=1;
sd1=-1;
sd2=l9;
sd3=l13;
sd2*=sd3;
sd3=l10;
sd4=l14;
sd3*=sd4;
sd2+=sd3;
sd3=l11;
sd4=l15;
sd3*=sd4;
sd2+=sd3;
sd3=l6;
sd2/=sd3;
l5=sd2;
sd3=l5;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l5=sd1;
sd2=l5;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l5=sd0;
L3:;
sd0=l3;
sd1=l5;
sd0+=sd1;
sd1=l4;
sd0-=sd1;
sd0=fabs(sd0);
sd1=9.9999999999999995e-08;
si0=sd0 < sd1;
L0:;
return si0;
}

void f14(gauche_ffiInstance*i,U32 l0,F64 l1,F64 l2) {
U32 l3=0;
U32 si0,si1;
U64 sj0,sj1;
F64 sd0,sd1;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(9223372036854775807U);
sj0&=sj1;
sj1=W2C2_LL(9218868437227405311U);
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L6;
}
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(9223372036854775807U);
sj0&=sj1;
sj1=W2C2_LL(9218868437227405311U);
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L5;
}
L6:;
f8(i);
si0=20U;
si1=1U;
si0=f5(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=20U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(85899345922U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1050236U);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050228U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050220U);
i64_store(i->m0,(U64)si0,sj1);
goto L0;
L5:;
sd0=l1;
sd0=fabs(sd0);
sd1=90;
si0=sd0 > sd1;
if(si0){
goto L7;
}
sd0=l2;
sd0=fabs(sd0);
sd1=540;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L3;
}
f8(i);
si0=22U;
si1=1U;
si0=f5(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=22U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(94489280514U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050254U);
i64_store(i->m0,(U64)si0+14U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050248U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050240U);
i64_store(i->m0,(U64)si0,sj1);
goto L0;
L7:;
f8(i);
si0=21U;
si1=1U;
si0=f5(i,si0,si1);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=21U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(90194313218U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050275U);
i64_store(i->m0,(U64)si0+13U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050270U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050262U);
i64_store(i->m0,(U64)si0,sj1);
goto L0;
L4:;
si0=1U;
si1=20U;
f85(i,si0,si1);
UNREACHABLE;
L3:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L2:;
si0=1U;
si1=22U;
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=1U;
si1=21U;
f85(i,si0,si1);
UNREACHABLE;
L0:;
}

void f15(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U32 l19=0;
U32 l20=0;
F64 l21=0;
F64 l22=0;
F64 l23=0;
F64 l24=0;
F64 l25=0;
F64 l26=0;
F64 l27=0;
F64 l28=0;
F64 l29=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=240U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=0U;
l4=si0;
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
si0=1U;
l5=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L10;
}
f8(i);
si0=1U;
l4=si0;
si0=l2;
si1=1U;
si0=f5(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
L10:;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l3;
si1=l5;
i32_store(i->m0,(U64)si0+68U,si1);
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+64U,si1);
si0=l3;
si1=160U;
si0+=si1;
si1=l1;
si2=l2;
si3=2703800U;
si4=2U;
f113(i,si0,si1,si2,si3,si4);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
f10(i,si0,si1);
si0=l2;
l6=si0;
si0=0U;
l7=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=0U;
l4=si0;
si0=0U;
si0=i32_load16_u(i->m0,(U64)si0+2703802U);
l8=si0;
si0=0U;
si0=i32_load8_u(i->m0,(U64)si0+2703804U);
l9=si0;
si0=0U;
l10=si0;
L12:;
{
si0=l3;
si0=i32_load(i->m0,(U64)si0+16U);
l7=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si1=l10;
si0-=si1;
l6=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+64U);
si2=l4;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L13;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=l6;
si3=1U;
si4=1U;
f36(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(i->m0,(U64)si0+72U);
l4=si0;
L13:;
si0=l5;
si1=l10;
si0=si0 == si1;
if(si0){
goto L14;
}
si0=l6;
si0=!(si0);
if(si0){
goto L14;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
si1=l4;
si0+=si1;
si1=l1;
si2=l10;
si1+=si2;
si2=l6;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
L14:;
si0=l3;
si1=l4;
si2=l6;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
si1=l4;
si0-=si1;
si1=2U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=3U;
si3=1U;
si4=1U;
f36(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(i->m0,(U64)si0+72U);
l4=si0;
L15:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
l5=si0;
si1=l4;
si0+=si1;
l10=si0;
si1=l8;
i32_store16(i->m0,(U64)si0,si1);
si0=l10;
si1=l9;
i32_store8(i->m0,(U64)si0+2U,si1);
si0=l3;
si1=l4;
si2=3U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l3;
si1=8U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
f10(i,si0,si1);
si0=l7;
l10=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L12;
}
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l6=si0;
L11:;
si0=l2;
si1=l7;
si0-=si1;
l10=si0;
si1=l6;
si2=l4;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L16;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=l10;
si3=1U;
si4=1U;
f36(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
l5=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+72U);
l4=si0;
L16:;
si0=l2;
si1=l7;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=l10;
si0=!(si0);
if(si0){
goto L17;
}
si0=l5;
si1=l4;
si0+=si1;
si1=l1;
si2=l7;
si1+=si2;
si2=l10;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
L17:;
si0=l4;
si1=l10;
si0+=si1;
l4=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l8=si0;
si0=0U;
si0=i32_load8_u(i->m0,(U64)si0+2720632U);
si1=1U;
si0=si0 == si1;
if(si0){
goto L18;
}
si0=2720616U;
si1=0U;
si0=f28(i,si0,si1);
L18:;
si0=0U;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2720616U);
l11=sj1;
sj2=W2C2_LL(1U);
sj1+=sj2;
i64_store(i->m0,(U64)si0+2720616U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703816U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703824U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2720624U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l3;
sj1=l11;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l3;
sj1=W2C2_LL(34359738368U);
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l3;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l3;
si1=0U;
i32_store16(i->m0,(U64)si0+196U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+192U,si1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+188U,si1);
si0=l3;
si1=1U;
i32_store8(i->m0,(U64)si0+184U,si1);
si0=l3;
si1=10U;
i32_store(i->m0,(U64)si0+180U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+176U,si1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+172U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+168U,si1);
si0=l3;
si1=l5;
i32_store(i->m0,(U64)si0+164U,si1);
si0=l3;
si1=10U;
i32_store(i->m0,(U64)si0+160U,si1);
L19:;
{
si0=l3;
si0=i32_load(i->m0,(U64)si0+164U);
l4=si0;
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=160U;
si1+=si2;
f9(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L21;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+188U);
l6=si0;
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+72U);
l7=si1;
i32_store(i->m0,(U64)si0+188U,si1);
si0=l4;
si1=l6;
si0+=si1;
l10=si0;
si0=l7;
si1=l6;
si0-=si1;
l4=si0;
goto L20;
L21:;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+197U);
if(si0){
goto L2;
}
si0=l3;
si1=1U;
i32_store8(i->m0,(U64)si0+197U,si1);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+196U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L23;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+192U);
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+188U);
l4=si0;
goto L22;
L23:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+192U);
l6=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+188U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L2;
}
L22:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+164U);
si1=l4;
si0+=si1;
l10=si0;
si0=l6;
si1=l4;
si0-=si1;
l4=si0;
L20:;
si0=l4;
if(si0){
goto L25;
}
si0=l4;
l6=si0;
goto L24;
L25:;
si0=l4;
l6=si0;
si0=l10;
si1=l4;
si0+=si1;
l7=si0;
si1=-1U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=10U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
si1=-1U;
si0+=si1;
l6=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l7;
si1=-2U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=13U;
si0=si0 != si1;
if(si0){
goto L24;
}
si0=l4;
si1=-2U;
si0+=si1;
l6=si0;
L24:;
si0=l3;
si1=l10;
si2=l6;
f30(i,si0,si1,si2);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l10=si0;
si1=6U;
si0=si0 < si1;
l6=si0;
if(si0){
goto L36;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=1685024316U;
si0^=si1;
si1=l4;
si2=4U;
si1+=si2;
si1=i32_load16_u(i->m0,(U64)si1);
si2=8293U;
si1^=si2;
si0|=si1;
if(si0){
goto L35;
}
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=l10;
si3=2703852U;
si4=2U;
f23(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l6=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
l4=si0;
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+72U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L36:;
si0=l10;
si1=5U;
si0=si0 != si1;
if(si0){
goto L34;
}
L35:;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=2036430652U;
si0^=si1;
si1=l4;
si2=4U;
si1+=si2;
l7=si1;
si1=i32_load8_u(i->m0,(U64)si1);
si2=32U;
si1^=si2;
si0|=si1;
si0=!(si0);
if(si0){
goto L32;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=543452732U;
si0=si0 == si1;
if(si0){
goto L33;
}
si0=l6;
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=1635200828U;
si0^=si1;
si1=l7;
si1=i32_load16_u(i->m0,(U64)si1);
si2=15993U;
si1^=si2;
si0|=si1;
if(si0){
goto L26;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l6=si0;
si0=l3;
si1=-2147483648U;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l6;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+56U);
l11=sj0;
sj1=W2C2_LL(576460752303423487U);
si0=sj0 > sj1;
if(si0){
goto L5;
}
sj0=l11;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
l12=sj0;
si0=(U32)(sj0);
l7=si0;
si0=0U;
l10=si0;
sj0=l12;
si0=!(sj0);
l2=si0;
si0=!(si0);
if(si0){
goto L31;
}
si0=8U;
l9=si0;
si0=0U;
l4=si0;
goto L30;
L34:;
si0=l10;
si1=4U;
si0=si0 < si1;
if(si0){
goto L26;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=543452732U;
si0=si0 != si1;
if(si0){
goto L26;
}
L33:;
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=l10;
si3=2703832U;
si4=3U;
f23(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L28;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
l10=si0;
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+72U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l10;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L32:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l4=si0;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L37;
}
si0=l4;
si0=!(si0);
if(si0){
goto L37;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+56U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L37:;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l3;
sj1=W2C2_LL(34359738368U);
i64_store(i->m0,(U64)si0+52U,sj1);
goto L26;
L31:;
f8(i);
si0=8U;
l4=si0;
si0=l7;
si1=4U;
si0<<=(si1&31);
l9=si0;
si1=8U;
si0=f5(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=l7;
l4=si0;
si0=l1;
l9=si0;
L30:;
sj0=l11;
si0=(U32)(sj0);
l1=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l3;
si1=l9;
i32_store(i->m0,(U64)si0+96U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+92U,si1);
si0=l2;
if(si0){
goto L27;
}
si0=l1;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l13=si0;
si0=0U;
l10=si0;
si0=l1;
l4=si0;
L39:;
{
si0=l3;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
l11=sj1;
i64_store(i->m0,(U64)si0+128U,sj1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+20U);
si0=!(si0);
if(si0){
goto L38;
}
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l14=si0;
sj1=l11;
si2=l3;
sj2=i64_load(i->m0,(U64)si2+32U);
l12=sj2;
sj1^=sj2;
sj2=W2C2_LL(8387220255154660723U);
sj1^=sj2;
l15=sj1;
si2=l3;
sj2=i64_load(i->m0,(U64)si2+24U);
l16=sj2;
sj3=W2C2_LL(7816392313619706465U);
sj2^=sj3;
sj1+=sj2;
l17=sj1;
sj2=l15;
sj3=W2C2_LL(16U);
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
l15=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l15;
sj3=l12;
sj4=W2C2_LL(7237128888997146477U);
sj3^=sj4;
l12=sj3;
sj4=l16;
sj5=W2C2_LL(8317987319222330741U);
sj4^=sj5;
sj3+=sj4;
l16=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l15=sj2;
sj1^=sj2;
sj2=W2C2_LL(576460752303423488U);
sj1^=sj2;
l18=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l18;
sj3=l16;
sj4=l12;
sj5=W2C2_LL(13U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l12=sj3;
sj4=l17;
sj3+=sj4;
l16=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l17=sj2;
sj1^=sj2;
l18=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l18;
sj3=l15;
sj4=l11;
sj3^=sj4;
sj4=l16;
sj5=l12;
sj6=W2C2_LL(17U);
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l12=sj4;
sj3+=sj4;
l15=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l16=sj2;
sj1^=sj2;
l18=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l18;
sj3=l17;
sj4=l15;
sj5=l12;
sj6=W2C2_LL(13U);
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l12=sj4;
sj3+=sj4;
l15=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj4=W2C2_LL(255U);
sj3^=sj4;
sj2+=sj3;
l17=sj2;
sj1^=sj2;
l18=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l18;
sj3=l16;
sj4=W2C2_LL(576460752303423488U);
sj3^=sj4;
sj4=l15;
sj5=l12;
sj6=W2C2_LL(17U);
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l12=sj4;
sj3+=sj4;
l15=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l16=sj2;
sj1^=sj2;
l18=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l18;
sj3=l15;
sj4=l12;
sj5=W2C2_LL(13U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l12=sj3;
sj4=l17;
sj3+=sj4;
l15=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l17=sj2;
sj1^=sj2;
l18=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l18;
sj3=l15;
sj4=l12;
sj5=W2C2_LL(17U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l12=sj3;
sj4=l16;
sj3+=sj4;
l15=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l16=sj2;
sj1^=sj2;
l18=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l18;
sj3=l12;
sj4=W2C2_LL(13U);
sj3=I64_ROTL(sj3,sj4);
sj4=l15;
sj3^=sj4;
l12=sj3;
sj4=l17;
sj3+=sj4;
l15=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l17=sj2;
sj1^=sj2;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l12;
sj3=W2C2_LL(17U);
sj2=I64_ROTL(sj2,sj3);
sj3=l15;
sj2^=sj3;
l12=sj2;
sj3=W2C2_LL(13U);
sj2=I64_ROTL(sj2,sj3);
sj3=l12;
sj4=l16;
sj3+=sj4;
sj2^=sj3;
l12=sj2;
sj3=W2C2_LL(17U);
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
sj2=l12;
sj3=l17;
sj2+=sj3;
l12=sj2;
sj3=W2C2_LL(32U);
sj2>>=(sj3&63);
sj1^=sj2;
sj2=l12;
sj1^=sj2;
l12=sj1;
si1=(U32)(sj1);
si0&=si1;
l7=si0;
sj0=l12;
sj1=W2C2_LL(25U);
sj0>>=(sj1&63);
sj1=W2C2_LL(127U);
sj0&=sj1;
sj1=W2C2_LL(72340172838076673U);
sj0*=sj1;
l15=sj0;
si0=0U;
l19=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
L40:;
{
si0=l2;
si1=l7;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l16=sj0;
sj1=l15;
sj0^=sj1;
l12=sj0;
sj1=W2C2_LL(-1U);
sj0^=sj1;
sj1=l12;
sj2=W2C2_LL(-72340172838076673U);
sj1+=sj2;
sj0&=sj1;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L41;
}
L43:;
{
sj0=l11;
si1=l2;
si2=0U;
sj3=l12;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l7;
si3+=si4;
si4=l14;
si3&=si4;
si2-=si3;
si3=24U;
si2*=si3;
si1+=si2;
l20=si1;
si2=-24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
si0=sj0 == sj1;
if(si0){
goto L42;
}
sj0=l12;
sj1=W2C2_LL(-1U);
sj0+=sj1;
sj1=l12;
sj0&=sj1;
l12=sj0;
si0=!(sj0);
if(si0){
goto L41;
}
goto L43;
}
L42:;
si0=l20;
si1=-8U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l21=sd0;
si0=l20;
si1=-16U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l22=sd0;
si0=l10;
si1=l3;
si1=i32_load(i->m0,(U64)si1+92U);
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l3;
si1=92U;
si0+=si1;
f34(i,si0);
L44:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+96U);
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l7=si0;
sd1=l21;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l7;
sd1=l22;
f64_store(i->m0,(U64)si0,sd1);
si0=l3;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(i->m0,(U64)si0+100U,si1);
si0=l4;
si1=l13;
si0=si0 != si1;
if(si0){
goto L39;
}
goto L27;
L41:;
sj0=l16;
sj1=l16;
sj2=W2C2_LL(1U);
sj1<<=(sj2&63);
sj0&=sj1;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L38;
}
si0=l7;
si1=l19;
si2=8U;
si1+=si2;
l19=si1;
si0+=si1;
si1=l14;
si0&=si1;
l7=si0;
goto L40;
}
}
L38:;
si0=l3;
si1=2U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l3;
si3=128U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+224U,sj1);
si0=l3;
si1=64U;
si0+=si1;
si1=1049136U;
si2=l3;
si3=224U;
si2+=si3;
f89(i,si0,si1,si2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l4=si0;
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+68U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si0=!(si0);
if(si0){
goto L45;
}
si0=l1;
si1=l6;
si2=3U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L45:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+92U);
l4=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+96U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
goto L3;
L29:;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+72U);
l11=sj0;
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=l10;
si3=2703854U;
f24(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l6=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L46;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
l4=si0;
si0=l0;
si1=l3;
sd1=f64_load(i->m0,(U64)si1+72U);
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L46:;
si0=l3;
sd0=f64_load(i->m0,(U64)si0+72U);
l21=sd0;
si0=l3;
si1=64U;
si0+=si1;
si1=l4;
si2=l10;
si3=2703857U;
f24(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l4=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L47;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
l10=si0;
si0=l0;
si1=l3;
sd1=f64_load(i->m0,(U64)si1+72U);
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=l10;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
goto L3;
L47:;
si0=l3;
si1=64U;
si0+=si1;
si1=l3;
si2=8U;
si1+=si2;
sj2=l11;
sd3=l21;
si4=l3;
sd4=f64_load(i->m0,(U64)si4+72U);
f37(i,si0,si1,sj2,sd3,sd4);
goto L26;
L28:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l10=si0;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L48;
}
si0=l3;
sj0=i64_load(i->m0,(U64)si0+72U);
l11=sj0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+60U);
l4=si0;
si1=l10;
si0=si0 != si1;
if(si0){
goto L49;
}
si0=l3;
si1=52U;
si0+=si1;
f35(i,si0);
L49:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+56U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sj1=l11;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+60U,si1);
goto L26;
L48:;
f8(i);
si0=17U;
si1=1U;
si0=f5(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L50;
}
si0=l0;
si1=17U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(73014444033U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+2703851U);
i32_store8(i->m0,(U64)si0+16U,si1);
si0=l4;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703843U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703835U);
i64_store(i->m0,(U64)si0,sj1);
goto L3;
L50:;
si0=1U;
si1=17U;
f85(i,si0,si1);
UNREACHABLE;
L27:;
si0=l6;
si0=!(si0);
if(si0){
goto L51;
}
si0=l1;
si1=l6;
si2=3U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+100U);
l10=si0;
L51:;
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L52;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+100U);
l10=si1;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+92U);
i64_store(i->m0,(U64)si0+128U,sj1);
si0=l10;
si1=3U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+132U);
l4=si0;
sd0=f64_load(i->m0,(U64)si0+8U);
l21=sd0;
si0=l4;
sd0=f64_load(i->m0,(U64)si0);
l22=sd0;
si1=l4;
si2=l10;
si3=4U;
si2<<=(si3&31);
l6=si2;
si1+=si2;
l7=si1;
si2=-16U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si0=sd0 != sd1;
if(si0){
goto L54;
}
sd0=l21;
si1=l7;
si2=-8U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si0=sd0 == sd1;
if(si0){
goto L53;
}
L54:;
si0=l10;
si1=l3;
si1=i32_load(i->m0,(U64)si1+128U);
si0=si0 != si1;
if(si0){
goto L55;
}
si0=l3;
si1=128U;
si0+=si1;
f34(i,si0);
si0=l3;
si0=i32_load(i->m0,(U64)si0+132U);
l4=si0;
L55:;
si0=l4;
si1=l6;
si0+=si1;
l4=si0;
sd1=l21;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l4;
sd1=l22;
f64_store(i->m0,(U64)si0,sd1);
si0=l3;
si1=l10;
si2=1U;
si1+=si2;
l10=si1;
i32_store(i->m0,(U64)si0+136U,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+132U);
l4=si0;
L53:;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+232U,si1);
si0=l3;
sj1=W2C2_LL(34359738368U);
i64_store(i->m0,(U64)si0+224U,sj1);
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l3;
sj1=W2C2_LL(34359738368U);
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l10;
si1=-1U;
si0+=si1;
l7=si0;
si0=l4;
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=l4;
sd0=f64_load(i->m0,(U64)si0+8U);
l22=sd0;
sd0=-INFINITY;
l23=sd0;
sd0=INFINITY;
l24=sd0;
L56:;
{
si0=l4;
sd0=f64_load(i->m0,(U64)si0+8U);
l21=sd0;
sd1=360;
sd0=f152(i,sd0,sd1);
l25=sd0;
si0=l4;
sd0=f64_load(i->m0,(U64)si0);
l26=sd0;
sd0=l25;
sd1=-360;
sd0+=sd1;
sd1=l25;
sd2=l25;
sd3=180;
si2=sd2 >= sd3;
sd0=si2?sd0:sd1;
l25=sd0;
sd1=360;
sd0+=sd1;
sd1=l25;
sd2=l25;
sd3=-180;
si2=sd2 < sd3;
sd0=si2?sd0:sd1;
sd1=0.017453292519943295;
sd0*=sd1;
l25=sd0;
sd0=f146(i,sd0);
sd1=l26;
sd2=0.017453292519943295;
sd1*=sd2;
l27=sd1;
sd1=f143(i,sd1);
l28=sd1;
sd0*=sd1;
l29=sd0;
sd0=l28;
sd1=l25;
sd1=f143(i,sd1);
sd0*=sd1;
l25=sd0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+224U);
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+232U);
l10=si0;
sd0=l23;
sd1=l26;
sd0=f137(i,sd0,sd1);
l23=sd0;
sd0=l24;
sd1=l26;
sd0=f139(i,sd0,sd1);
l24=sd0;
sd0=l27;
sd0=f146(i,sd0);
l27=sd0;
si0=l10;
si1=l6;
si0=si0 != si1;
if(si0){
goto L57;
}
si0=l3;
si1=224U;
si0+=si1;
f31(i,si0);
L57:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+228U);
si1=l10;
si2=24U;
si1*=si2;
si0+=si1;
l6=si0;
sd1=l27;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l6;
sd1=l29;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l6;
sd1=l25;
f64_store(i->m0,(U64)si0,sd1);
si0=l3;
si1=l10;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+232U,si1);
sd0=l21;
sd1=l22;
sd0-=sd1;
l25=sd0;
sd1=180;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L58;
}
L59:;
{
sd0=l21;
sd1=-360;
sd0+=sd1;
l21=sd0;
sd1=l22;
sd0-=sd1;
l25=sd0;
sd1=180;
si0=sd0 > sd1;
if(si0){
goto L59;
}
}
L58:;
sd0=l25;
sd1=-180;
si0=sd0 <= sd1;
si0=!(si0);
if(si0){
goto L60;
}
L61:;
{
sd0=l21;
sd1=360;
sd0+=sd1;
l21=sd0;
sd1=l22;
sd0-=sd1;
sd1=-180;
si0=sd0 <= sd1;
if(si0){
goto L61;
}
}
L60:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+72U);
l10=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+64U);
si0=si0 != si1;
if(si0){
goto L62;
}
si0=l3;
si1=64U;
si0+=si1;
f34(i,si0);
L62:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+68U);
si1=l10;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
sd1=l26;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l6;
sd1=l21;
f64_store(i->m0,(U64)si0,sd1);
si0=l3;
si1=l10;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+72U,si1);
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L63;
}
si0=l4;
si1=16U;
si0+=si1;
l4=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L56;
}
L63:;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+232U);
i32_store(i->m0,(U64)si0+112U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+224U);
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+64U);
l10=si0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+68U);
l11=sj0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+128U);
l4=si0;
si0=!(si0);
if(si0){
goto L64;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+132U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L64:;
si0=l10;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+112U);
i32_store(i->m0,(U64)si0+152U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+104U);
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+48U);
l6=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+40U);
si0=si0 != si1;
if(si0){
goto L65;
}
si0=l3;
si1=40U;
si0+=si1;
f33(i,si0);
L65:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+44U);
si1=l6;
si2=48U;
si1*=si2;
si0+=si1;
l4=si0;
sd1=l23;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l4;
sd1=l24;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l4;
sd1=l22;
f64_store(i->m0,(U64)si0,sd1);
si0=l4;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+144U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=l3;
si1=i32_load(i->m0,(U64)si1+152U);
i32_store(i->m0,(U64)si0+32U,si1);
si0=l4;
sj1=l11;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=l10;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l3;
si1=l6;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+48U,si1);
goto L26;
L52:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+92U);
l4=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+96U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L26:;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+197U);
si0=!(si0);
if(si0){
goto L19;
}
goto L2;
}
L9:;
si0=l4;
si1=l2;
f85(i,si0,si1);
UNREACHABLE;
L8:;
f8(i);
si0=36U;
si1=1U;
si0=f5(i,si0,si1);
l4=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l4;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2703796U);
i32_store(i->m0,(U64)si0+32U,si1);
si0=l4;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703788U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703780U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l4;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703772U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l4;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703764U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=36U;
i32_store(i->m0,(U64)si0+124U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0+120U,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+128U);
l4=si0;
si0=!(si0);
if(si0){
goto L66;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+132U);
si1=l4;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L66:;
sd0=7.6391848475737935e-313;
l22=sd0;
si0=l3;
sd0=f64_load(i->m0,(U64)si0+120U);
l24=sd0;
L7:;
si0=l0;
sd1=l24;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l0;
sd1=l22;
f64_store(i->m0,(U64)si0,sd1);
goto L3;
L6:;
si0=1U;
si1=36U;
f85(i,si0,si1);
UNREACHABLE;
L5:;
si0=l4;
si1=l9;
f85(i,si0,si1);
UNREACHABLE;
L4:;
si0=l3;
si1=64U;
si0+=si1;
f25(i,si0);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+64U);
l11=sj0;
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+72U);
l12=sj1;
sj2=W2C2_LL(32U);
sj1>>=(sj2&63);
i64_store32(i->m0,(U64)si0+12U,sj1);
si0=l0;
sj1=l12;
i64_store32(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l11;
i64_store(i->m0,(U64)si0,sj1);
L3:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l4=si0;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L67;
}
si0=l4;
si0=!(si0);
if(si0){
goto L67;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+56U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L67:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+48U);
l10=si0;
si0=!(si0);
if(si0){
goto L68;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+44U);
si1=40U;
si0+=si1;
l4=si0;
L69:;
{
si0=l4;
si1=-16U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l4;
si1=-12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l6;
si2=24U;
si1*=si2;
si2=8U;
f6(i,si0,si1,si2);
L70:;
si0=l4;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si0=!(si0);
if(si0){
goto L71;
}
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=l6;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L71:;
si0=l4;
si1=48U;
si0+=si1;
l4=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L69;
}
}
L68:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+40U);
l4=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+44U);
si1=l4;
si2=48U;
si1*=si2;
si2=8U;
f6(i,si0,si1,si2);
goto L1;
L2:;
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+48U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+40U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+52U);
l4=si0;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+56U);
si1=l4;
si2=3U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L1:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l4=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l4;
si1=24U;
si0*=si1;
l10=si0;
si1=l4;
si0+=si1;
si1=33U;
si0+=si1;
l4=si0;
si0=!(si0);
if(si0){
goto L72;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l10;
si0-=si1;
si1=-24U;
si0+=si1;
si1=l4;
si2=8U;
f6(i,si0,si1,si2);
L72:;
si0=l8;
si0=!(si0);
if(si0){
goto L73;
}
si0=l5;
si1=l8;
si2=1U;
f6(i,si0,si1,si2);
L73:;
si0=l3;
si1=240U;
si0+=si1;
i->g0=si0;
L0:;
}

void f16(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
F64 l4=0;
F64 l5=0;
U32 l6=0;
F64 l7=0;
F64 l8=0;
U32 l9=0;
F64 l10=0;
F64 l11=0;
U32 l12=0;
F64 l13=0;
U32 l14=0;
F64 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
F64 l20=0;
F64 l21=0;
F64 l22=0;
F64 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
si0=i->g0;
si1=208U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=184U;
si0+=si1;
si1=l2;
sd1=f64_load(i->m0,(U64)si1);
l4=sd1;
si2=l2;
sd2=f64_load(i->m0,(U64)si2+8U);
l5=sd2;
f14(i,si0,sd1,sd2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l6=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+196U);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+188U);
i64_store(i->m0,(U64)si0+8U,sj1);
goto L3;
L4:;
si0=l3;
si1=184U;
si0+=si1;
si1=l2;
sd1=f64_load(i->m0,(U64)si1+16U);
l7=sd1;
si2=l2;
sd2=f64_load(i->m0,(U64)si2+24U);
l8=sd2;
f14(i,si0,sd1,sd2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l6=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+196U);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+188U);
i64_store(i->m0,(U64)si0+8U,sj1);
L3:;
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+16U);
i32_store(i->m0,(U64)si0+12U,si1);
goto L1;
L2:;
f8(i);
si0=l3;
si1=184U;
si0+=si1;
sd1=l4;
sd2=l7;
sd3=l4;
sd4=l7;
si3=sd3 <= sd4;
l9=si3;
sd1=si3?sd1:sd2;
l10=sd1;
sd2=l5;
sd3=l10;
sd4=l8;
sd5=l8;
sd6=360;
sd5+=sd6;
l11=sd5;
sd6=l5;
sd7=l8;
si6=sd6 <= sd7;
l12=si6;
sd4=si6?sd4:sd5;
l13=sd4;
si5=l1;
si5=i32_load(i->m0,(U64)si5+4U);
l6=si5;
si6=l1;
si6=i32_load(i->m0,(U64)si6+8U);
l1=si6;
f17(i,si0,sd1,sd2,sd3,sd4,si5,si6);
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=1U;
l14=si0;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+188U);
switch(si0){
case 0:
goto L9;
case 1:
goto L10;
case 2:
goto L8;
default:
goto L9;
}
L10:;
si0=0U;
l14=si0;
L9:;
si0=l3;
si1=184U;
si0+=si1;
sd1=l10;
sd2=l13;
sd3=l7;
sd4=l4;
si5=l9;
sd3=si5?sd3:sd4;
l15=sd3;
sd4=l13;
si5=l6;
si6=l1;
f17(i,si0,sd1,sd2,sd3,sd4,si5,si6);
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=1U;
l9=si0;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+188U);
switch(si0){
case 0:
goto L11;
case 1:
goto L12;
case 2:
goto L8;
default:
goto L11;
}
L12:;
si0=l14;
l9=si0;
L11:;
si0=l3;
si1=184U;
si0+=si1;
sd1=l15;
sd2=l13;
sd3=l15;
sd4=l5;
si5=l6;
si6=l1;
f17(i,si0,sd1,sd2,sd3,sd4,si5,si6);
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=1U;
l14=si0;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+188U);
switch(si0){
case 0:
goto L13;
case 1:
goto L14;
case 2:
goto L8;
default:
goto L13;
}
L14:;
si0=l9;
l14=si0;
L13:;
si0=l3;
si1=184U;
si0+=si1;
sd1=l15;
sd2=l5;
sd3=l10;
sd4=l5;
si5=l6;
si6=l1;
f17(i,si0,sd1,sd2,sd3,sd4,si5,si6);
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l2=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=1U;
l16=si0;
si0=1U;
l17=si0;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+188U);
switch(si0){
case 0:
goto L15;
case 1:
goto L16;
case 2:
goto L8;
default:
goto L15;
}
L16:;
si0=l14;
l17=si0;
L15:;
sd0=l10;
sd1=l5;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
si0=!(si0);
if(si0){
goto L6;
}
goto L5;
L8:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+189U);
i64_store(i->m0,(U64)si0+5U,sj1);
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+196U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
si1=i32_load8_u(i->m0,(U64)si1+188U);
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L6:;
sd0=l10;
sd1=l13;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
if(si0){
goto L5;
}
sd0=l15;
sd1=l13;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
if(si0){
goto L5;
}
sd0=l15;
sd1=l5;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
l16=si0;
L5:;
si0=0U;
l18=si0;
sd0=l10;
sd1=l5;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
si0=!(si0);
if(si0){
goto L17;
}
sd0=l10;
sd1=l13;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
si0=!(si0);
if(si0){
goto L17;
}
sd0=l15;
sd1=l13;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
si0=!(si0);
if(si0){
goto L17;
}
sd0=l15;
sd1=l5;
si2=l6;
si3=l1;
si0=f18(i,sd0,sd1,si2,si3);
l18=si0;
L17:;
si0=l6;
si1=l1;
si2=48U;
si1*=si2;
si0+=si1;
l19=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L19;
}
sd0=l8;
sd1=1e-10;
sd0+=sd1;
l20=sd0;
sd0=l5;
sd1=-1e-10;
sd0+=sd1;
l21=sd0;
sd0=l15;
sd1=1e-10;
sd0+=sd1;
l22=sd0;
sd0=l10;
sd1=-1e-10;
sd0+=sd1;
l13=sd0;
si0=l12;
si0=!(si0);
if(si0){
goto L20;
}
si0=l6;
l14=si0;
L21:;
{
si0=l14;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L22;
}
si0=l2;
si1=24U;
si0*=si1;
l9=si0;
si0=l14;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L23:;
{
si0=l2;
si1=8U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l4=sd0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1);
l7=sd1;
sd0=f136(i,sd0,sd1);
l23=sd0;
si0=l2;
si1=16U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
sd1=l4;
sd2=l4;
sd1*=sd2;
sd2=l7;
sd3=l7;
sd2*=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
sd0=f136(i,sd0,sd1);
sd1=57.295779513082323;
sd0*=sd1;
l4=sd0;
sd1=l13;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l23;
sd1=57.295779513082323;
sd0*=sd1;
l7=sd0;
sd1=l20;
si0=sd0 <= sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l7;
sd1=l21;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L24;
}
sd0=l4;
sd1=l22;
si0=sd0 <= sd1;
si0=!(si0);
if(si0){
goto L24;
}
si0=1U;
l14=si0;
goto L18;
L24:;
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l9;
si1=-24U;
si0+=si1;
l9=si0;
if(si0){
goto L23;
}
}
L22:;
si0=l14;
si1=48U;
si0+=si1;
l14=si0;
si1=l19;
si0=si0 != si1;
if(si0){
goto L21;
}
goto L19;
}
L20:;
si0=l6;
l24=si0;
L25:;
{
si0=l24;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L26;
}
si0=l2;
si1=24U;
si0*=si1;
l9=si0;
si0=l24;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L27:;
{
si0=l2;
si1=8U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l4=sd0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1);
l7=sd1;
sd0=f136(i,sd0,sd1);
l23=sd0;
si0=l2;
si1=16U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
sd1=l4;
sd2=l4;
sd1*=sd2;
sd2=l7;
sd3=l7;
sd2*=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
sd0=f136(i,sd0,sd1);
sd1=57.295779513082323;
sd0*=sd1;
l4=sd0;
sd1=l13;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L28;
}
sd0=l4;
sd1=l22;
si0=sd0 <= sd1;
si0=!(si0);
if(si0){
goto L28;
}
si0=1U;
l14=si0;
sd0=l23;
sd1=57.295779513082323;
sd0*=sd1;
l4=sd0;
sd1=l21;
si0=sd0 >= sd1;
if(si0){
goto L18;
}
sd0=l4;
sd1=l20;
si0=sd0 <= sd1;
if(si0){
goto L18;
}
L28:;
si0=l2;
si1=24U;
si0+=si1;
l2=si0;
si0=l9;
si1=-24U;
si0+=si1;
l9=si0;
if(si0){
goto L27;
}
}
L26:;
si0=l24;
si1=48U;
si0+=si1;
l24=si0;
si1=l19;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L19:;
si0=l16;
l14=si0;
L18:;
si0=l18;
si0=!(si0);
if(si0){
goto L29;
}
f8(i);
si0=80U;
si1=8U;
si0=f5(i,si0,si1);
l24=si0;
si0=l12;
if(si0){
goto L32;
}
si0=l24;
if(si0){
goto L31;
}
si0=8U;
si1=80U;
f87(i,si0,si1);
UNREACHABLE;
L32:;
sd0=l8;
l11=sd0;
si0=l24;
si0=!(si0);
if(si0){
goto L30;
}
L31:;
si0=l24;
sd1=l5;
f64_store(i->m0,(U64)si0+72U,sd1);
si0=l24;
sd1=l10;
f64_store(i->m0,(U64)si0+64U,sd1);
si0=l24;
sd1=l5;
f64_store(i->m0,(U64)si0+56U,sd1);
si0=l24;
sd1=l15;
f64_store(i->m0,(U64)si0+48U,sd1);
si0=l24;
sd1=l11;
f64_store(i->m0,(U64)si0+40U,sd1);
si0=l24;
sd1=l15;
f64_store(i->m0,(U64)si0+32U,sd1);
si0=l24;
sd1=l11;
f64_store(i->m0,(U64)si0+24U,sd1);
si0=l24;
sd1=l10;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l24;
sd1=l5;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l24;
sd1=l10;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si0=!(si0);
if(si0){
goto L34;
}
L35:;
{
si0=l3;
si1=36U;
si0+=si1;
si1=l6;
si1=i32_load(i->m0,(U64)si1+28U);
l2=si1;
si2=l2;
si3=l6;
si3=i32_load(i->m0,(U64)si3+32U);
si4=24U;
si3*=si4;
si2+=si3;
f27(i,si0,si1,si2);
si0=l6;
si1=48U;
si0+=si1;
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+44U);
l25=si0;
si1=1U;
si0+=si1;
l26=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+40U);
l16=si0;
si1=l25;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si1=-8U;
si0+=si1;
l27=si0;
si0=l2;
si1=-16U;
si0+=si1;
l28=si0;
si0=5U;
l29=si0;
si0=l25;
si1=2U;
si0=si0 < si1;
l30=si0;
si0=l24;
l18=si0;
L36:;
{
si0=l3;
si1=l18;
sd1=f64_load(i->m0,(U64)si1);
sd2=0.017453292519943295;
sd1*=sd2;
l5=sd1;
sd1=f146(i,sd1);
f64_store(i->m0,(U64)si0+64U,sd1);
si0=l3;
si1=l18;
sd1=f64_load(i->m0,(U64)si1+16U);
sd2=0.017453292519943295;
sd1*=sd2;
l8=sd1;
sd1=f146(i,sd1);
f64_store(i->m0,(U64)si0+88U,sd1);
si0=l3;
si1=l18;
sd1=f64_load(i->m0,(U64)si1+8U);
sd2=360;
sd1=f152(i,sd1,sd2);
l4=sd1;
sd2=-360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=180;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
l4=sd1;
sd2=360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=-180;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=0.017453292519943295;
sd1*=sd2;
l4=sd1;
sd1=f146(i,sd1);
sd2=l5;
sd2=f143(i,sd2);
l5=sd2;
sd1*=sd2;
f64_store(i->m0,(U64)si0+56U,sd1);
si0=l3;
sd1=l5;
sd2=l4;
sd2=f143(i,sd2);
sd1*=sd2;
f64_store(i->m0,(U64)si0+48U,sd1);
si0=l3;
si1=l18;
sd1=f64_load(i->m0,(U64)si1+24U);
sd2=360;
sd1=f152(i,sd1,sd2);
l4=sd1;
sd2=-360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=180;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
l4=sd1;
sd2=360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=-180;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=0.017453292519943295;
sd1*=sd2;
l4=sd1;
sd1=f146(i,sd1);
sd2=l8;
sd2=f143(i,sd2);
l5=sd2;
sd1*=sd2;
f64_store(i->m0,(U64)si0+80U,sd1);
si0=l3;
sd1=l5;
sd2=l4;
sd2=f143(i,sd2);
sd1*=sd2;
f64_store(i->m0,(U64)si0+72U,sd1);
si0=l26;
l1=si0;
si0=l16;
l2=si0;
si0=l30;
if(si0){
goto L40;
}
L41:;
{
si0=l3;
si1=l2;
sd1=f64_load(i->m0,(U64)si1);
sd2=0.017453292519943295;
sd1*=sd2;
l5=sd1;
sd1=f146(i,sd1);
f64_store(i->m0,(U64)si0+112U,sd1);
si0=l3;
si1=l2;
si2=16U;
si1+=si2;
l9=si1;
sd1=f64_load(i->m0,(U64)si1);
sd2=0.017453292519943295;
sd1*=sd2;
l8=sd1;
sd1=f146(i,sd1);
f64_store(i->m0,(U64)si0+136U,sd1);
si0=l3;
si1=l2;
si2=8U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd2=360;
sd1=f152(i,sd1,sd2);
l4=sd1;
sd2=-360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=180;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
l4=sd1;
sd2=360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=-180;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=0.017453292519943295;
sd1*=sd2;
l4=sd1;
sd1=f146(i,sd1);
sd2=l5;
sd2=f143(i,sd2);
l5=sd2;
sd1*=sd2;
f64_store(i->m0,(U64)si0+104U,sd1);
si0=l3;
sd1=l5;
sd2=l4;
sd2=f143(i,sd2);
sd1*=sd2;
f64_store(i->m0,(U64)si0+96U,sd1);
si0=l3;
si1=l2;
si2=24U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd2=360;
sd1=f152(i,sd1,sd2);
l4=sd1;
sd2=-360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=180;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
l4=sd1;
sd2=360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=-180;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=0.017453292519943295;
sd1*=sd2;
l4=sd1;
sd1=f146(i,sd1);
sd2=l8;
sd2=f143(i,sd2);
l5=sd2;
sd1*=sd2;
f64_store(i->m0,(U64)si0+128U,sd1);
si0=l3;
sd1=l5;
sd2=l4;
sd2=f143(i,sd2);
sd1*=sd2;
f64_store(i->m0,(U64)si0+120U,sd1);
si0=l3;
si1=184U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=l3;
si3=72U;
si2+=si3;
si3=l3;
si4=96U;
si3+=si4;
si4=l3;
si5=120U;
si4+=si5;
f19(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+188U);
l2=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+184U);
l12=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L42;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+196U);
i32_store(i->m0,(U64)si0+31U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+189U);
i64_store(i->m0,(U64)si0+24U,sj1);
goto L38;
L42:;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L39;
}
si0=l9;
l2=si0;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L41;
}
}
L40:;
si0=l25;
si0=!(si0);
if(si0){
goto L37;
}
si0=l16;
sd0=f64_load(i->m0,(U64)si0+8U);
l5=sd0;
si0=l16;
sd0=f64_load(i->m0,(U64)si0);
l8=sd0;
si0=l27;
sd0=f64_load(i->m0,(U64)si0);
l4=sd0;
si0=l3;
si1=l28;
sd1=f64_load(i->m0,(U64)si1);
sd2=0.017453292519943295;
sd1*=sd2;
l7=sd1;
sd1=f146(i,sd1);
f64_store(i->m0,(U64)si0+176U,sd1);
si0=l3;
sd1=l4;
sd2=360;
sd1=f152(i,sd1,sd2);
l4=sd1;
sd2=-360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=180;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
l4=sd1;
sd2=360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=-180;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=0.017453292519943295;
sd1*=sd2;
l4=sd1;
sd1=f146(i,sd1);
sd2=l7;
sd2=f143(i,sd2);
l7=sd2;
sd1*=sd2;
f64_store(i->m0,(U64)si0+168U,sd1);
si0=l3;
sd1=l7;
sd2=l4;
sd2=f143(i,sd2);
sd1*=sd2;
f64_store(i->m0,(U64)si0+160U,sd1);
si0=l3;
sd1=l8;
sd2=0.017453292519943295;
sd1*=sd2;
l8=sd1;
sd1=f146(i,sd1);
f64_store(i->m0,(U64)si0+200U,sd1);
si0=l3;
sd1=l5;
sd2=360;
sd1=f152(i,sd1,sd2);
l4=sd1;
sd2=-360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=180;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
l4=sd1;
sd2=360;
sd1+=sd2;
sd2=l4;
sd3=l4;
sd4=-180;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=0.017453292519943295;
sd1*=sd2;
l4=sd1;
sd1=f146(i,sd1);
sd2=l8;
sd2=f143(i,sd2);
l5=sd2;
sd1*=sd2;
f64_store(i->m0,(U64)si0+192U,sd1);
si0=l3;
sd1=l5;
sd2=l4;
sd2=f143(i,sd2);
sd1*=sd2;
f64_store(i->m0,(U64)si0+184U,sd1);
si0=l3;
si1=144U;
si0+=si1;
si1=l3;
si2=48U;
si1+=si2;
si2=l3;
si3=72U;
si2+=si3;
si3=l3;
si4=160U;
si3+=si4;
si4=l3;
si5=184U;
si4+=si5;
f19(i,si0,si1,si2,si3,si4);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+148U);
l2=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+144U);
l12=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L43;
}
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+156U);
i32_store(i->m0,(U64)si0+31U,si1);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+149U);
i64_store(i->m0,(U64)si0+24U,sj1);
goto L38;
L43:;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L37;
}
L39:;
si0=3U;
l12=si0;
si0=1U;
l2=si0;
L38:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+36U);
l6=si0;
si0=!(si0);
if(si0){
goto L44;
}
si0=l16;
si1=l6;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L44:;
si0=l24;
si1=80U;
si2=8U;
f6(i,si0,si1,si2);
si0=l12;
si1=3U;
si0=si0 == si1;
if(si0){
goto L45;
}
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+31U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0+5U,sj1);
si0=l0;
si1=l2;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l12;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L45:;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L29;
}
goto L33;
L37:;
si0=l18;
si1=16U;
si0+=si1;
l18=si0;
si0=l29;
si1=3U;
si0=si0 < si1;
l2=si0;
si0=l29;
si1=-1U;
si0+=si1;
l29=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L36;
}
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+36U);
l2=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l16;
si1=l2;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L46:;
si0=l6;
si1=l19;
si0=si0 != si1;
if(si0){
goto L35;
}
}
L34:;
si0=l24;
si1=80U;
si2=8U;
f6(i,si0,si1,si2);
L33:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L30:;
si0=8U;
si1=80U;
f87(i,si0,si1);
UNREACHABLE;
L29:;
si0=l17;
si1=l14;
si0|=si1;
si0=!(si0);
if(si0){
goto L47;
}
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L47:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+4U,si1);
L1:;
si0=l3;
si1=208U;
si0+=si1;
i->g0=si0;
L0:;
}

void f17(gauche_ffiInstance*i,U32 l0,F64 l1,F64 l2,F64 l3,F64 l4,U32 l5,U32 l6) {
U32 l7=0;
U32 l8=0;
F64 l9=0;
F64 l10=0;
F64 l11=0;
F64 l12=0;
F64 l13=0;
F64 l14=0;
F64 l15=0;
F64 l16=0;
F64 l17=0;
U32 l18=0;
F64 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
U64 sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5;
si0=i->g0;
si1=64U;
si0-=si1;
l7=si0;
i->g0=si0;
sd0=l1;
sd1=l2;
si2=l5;
si3=l6;
si0=f18(i,sd0,sd1,si2,si3);
l8=si0;
sd0=l1;
sd1=l3;
si0=sd0 != sd1;
if(si0){
goto L3;
}
sd0=l2;
sd1=l4;
si0=sd0 == sd1;
if(si0){
goto L2;
}
L3:;
sd0=l4;
sd1=360;
sd0=f152(i,sd0,sd1);
l9=sd0;
sd1=-360;
sd0+=sd1;
sd1=l9;
sd2=l9;
sd3=180;
si2=sd2 >= sd3;
sd0=si2?sd0:sd1;
l9=sd0;
sd1=360;
sd0+=sd1;
sd1=l9;
sd2=l9;
sd3=-180;
si2=sd2 < sd3;
sd0=si2?sd0:sd1;
sd1=0.017453292519943295;
sd0*=sd1;
l9=sd0;
sd0=f146(i,sd0);
l10=sd0;
sd0=l3;
sd1=0.017453292519943295;
sd0*=sd1;
l11=sd0;
sd0=f143(i,sd0);
l12=sd0;
sd0=l9;
sd0=f143(i,sd0);
l13=sd0;
sd0=l11;
sd0=f146(i,sd0);
l11=sd0;
sd0=l2;
sd1=360;
sd0=f152(i,sd0,sd1);
l9=sd0;
sd1=-360;
sd0+=sd1;
sd1=l9;
sd2=l9;
sd3=180;
si2=sd2 >= sd3;
sd0=si2?sd0:sd1;
l9=sd0;
sd1=360;
sd0+=sd1;
sd1=l9;
sd2=l9;
sd3=-180;
si2=sd2 < sd3;
sd0=si2?sd0:sd1;
sd1=0.017453292519943295;
sd0*=sd1;
l9=sd0;
sd0=f146(i,sd0);
l14=sd0;
sd0=l1;
sd1=0.017453292519943295;
sd0*=sd1;
l15=sd0;
sd0=f143(i,sd0);
l16=sd0;
sd0=l9;
sd0=f143(i,sd0);
l17=sd0;
sd0=l15;
sd0=f146(i,sd0);
l9=sd0;
sd0=l3;
sd1=l4;
si2=l5;
si3=l6;
si0=f18(i,sd0,sd1,si2,si3);
l18=si0;
sd0=l9;
sd1=l9;
sd0*=sd1;
sd1=l16;
sd2=l17;
sd1*=sd2;
l3=sd1;
sd2=l3;
sd1*=sd2;
sd2=l16;
sd3=l14;
sd2*=sd3;
l4=sd2;
sd3=l4;
sd2*=sd3;
sd1+=sd2;
l14=sd1;
sd0+=sd1;
sd0=sqrt(sd0);
sd1=l11;
sd2=l11;
sd1*=sd2;
sd2=l12;
sd3=l13;
sd2*=sd3;
l16=sd2;
sd3=l16;
sd2*=sd3;
sd3=l12;
sd4=l10;
sd3*=sd4;
l12=sd3;
sd4=l12;
sd3*=sd4;
sd2+=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
sd0*=sd1;
l10=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L4;
}
sd0=1;
sd1=-1;
sd2=l9;
sd3=l11;
sd2*=sd3;
sd3=l3;
sd4=l16;
sd3*=sd4;
sd4=l4;
sd5=l12;
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=l10;
sd2/=sd3;
l10=sd2;
sd3=l10;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l10=sd1;
sd2=l10;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l10=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L4;
}
sd0=l9;
l15=sd0;
sd0=l4;
l2=sd0;
sd0=l3;
l13=sd0;
sd0=l9;
sd1=l10;
sd2=0.5;
sd1*=sd2;
sd1=f146(i,sd1);
sd2=l10;
sd2=f146(i,sd2);
sd1/=sd2;
l1=sd1;
sd0*=sd1;
sd1=l11;
sd2=l1;
sd1*=sd2;
sd0+=sd1;
l10=sd0;
sd1=l10;
sd0*=sd1;
sd1=l3;
sd2=l1;
sd1*=sd2;
sd2=l16;
sd3=l1;
sd2*=sd3;
sd1+=sd2;
l17=sd1;
sd2=l17;
sd1*=sd2;
sd2=l4;
sd3=l1;
sd2*=sd3;
sd3=l12;
sd4=l1;
sd3*=sd4;
sd2+=sd3;
l1=sd2;
sd3=l1;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l19=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L5;
}
sd0=l1;
sd1=l19;
sd0/=sd1;
l2=sd0;
sd1=l2;
sd0*=sd1;
sd1=l17;
sd2=l19;
sd1/=sd2;
l13=sd1;
sd2=l13;
sd1*=sd2;
sd0+=sd1;
l14=sd0;
sd0=l10;
sd1=l19;
sd0/=sd1;
l15=sd0;
L5:;
sd0=l2;
sd1=l13;
sd0=f136(i,sd0,sd1);
sd1=57.295779513082323;
sd0*=sd1;
l2=sd0;
sd0=l15;
sd1=l14;
sd1=sqrt(sd1);
sd0=f136(i,sd0,sd1);
sd1=57.295779513082323;
sd0*=sd1;
l1=sd0;
L4:;
sd0=l1;
sd1=l2;
si2=l5;
si3=l6;
si0=f18(i,sd0,sd1,si2,si3);
l20=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L6;
}
si0=l5;
si1=l6;
si2=48U;
si1*=si2;
si0+=si1;
l21=si0;
L7:;
{
si0=l5;
si0=i32_load(i->m0,(U64)si0+32U);
l22=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l22;
si1=-1U;
si0+=si1;
l23=si0;
si0=0U;
l6=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
l24=si0;
l25=si0;
L11:;
{
si0=l7;
sd1=l9;
f64_store(i->m0,(U64)si0+32U,sd1);
si0=l7;
sd1=l4;
f64_store(i->m0,(U64)si0+24U,sd1);
si0=l7;
sd1=l3;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l7;
sd1=l11;
f64_store(i->m0,(U64)si0+56U,sd1);
si0=l7;
sd1=l12;
f64_store(i->m0,(U64)si0+48U,sd1);
si0=l7;
sd1=l16;
f64_store(i->m0,(U64)si0+40U,sd1);
si0=l23;
si1=l6;
si0=si0 == si1;
l26=si0;
si0=l7;
si1=l7;
si2=16U;
si1+=si2;
si2=l7;
si3=40U;
si2+=si3;
si3=l25;
si4=l24;
si5=0U;
si6=l6;
si7=1U;
si6+=si7;
l6=si6;
si7=l26;
si5=si7?si5:si6;
si6=24U;
si5*=si6;
si4+=si5;
f19(i,si0,si1,si2,si3,si4);
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l26=si0;
si0=l7;
si0=i32_load(i->m0,(U64)si0);
l27=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l26;
si1=1U;
si0&=si1;
if(si0){
goto L9;
}
si0=l25;
si1=24U;
si0+=si1;
l25=si0;
si0=l22;
si1=l6;
si0=si0 == si1;
if(si0){
goto L8;
}
goto L11;
}
L10:;
si0=l0;
si1=l7;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l7;
sj1=i64_load(i->m0,(U64)si1+5U);
i64_store(i->m0,(U64)si0+5U,sj1);
si0=l0;
si1=l26;
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l27;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L9:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l5;
si1=48U;
si0+=si1;
l5=si0;
si1=l21;
si0=si0 != si1;
if(si0){
goto L7;
}
}
L6:;
si0=l8;
if(si0){
goto L14;
}
si0=l18;
si1=l20;
si0|=si1;
if(si0){
goto L13;
}
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L14:;
si0=l18;
si1=l20;
si0&=si1;
if(si0){
goto L12;
}
L13:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L12:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l8;
if(si0){
goto L15;
}
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L15:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+4U,si1);
L1:;
si0=l7;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f18(gauche_ffiInstance*i,F64 l0,F64 l1,U32 l2,U32 l3) {
U32 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
F64 l10=0;
F64 l11=0;
F64 l12=0;
F64 l13=0;
F64 l14=0;
F64 l15=0;
F64 l16=0;
U32 l17=0;
U32 l18=0;
F64 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
F64 l23=0;
F64 l24=0;
F64 l25=0;
F64 l26=0;
F64 l27=0;
F64 l28=0;
F64 l29=0;
F64 l30=0;
U32 si0,si1,si2,si3,si4,si6,si7;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=48U;
si1*=si2;
si0+=si1;
l4=si0;
sd0=l1;
sd1=360;
sd0=f152(i,sd0,sd1);
l1=sd0;
sd1=-360;
sd0+=sd1;
sd1=l1;
sd2=l1;
sd3=180;
si2=sd2 >= sd3;
sd0=si2?sd0:sd1;
l1=sd0;
sd1=360;
sd0+=sd1;
sd1=l1;
sd2=l1;
sd3=-180;
si2=sd2 < sd3;
sd0=si2?sd0:sd1;
sd1=0.017453292519943295;
sd0*=sd1;
l1=sd0;
sd0=f143(i,sd0);
l5=sd0;
sd0=l0;
sd1=0.017453292519943295;
sd0*=sd1;
l0=sd0;
sd0=f143(i,sd0);
l6=sd0;
sd0=l1;
sd0=f146(i,sd0);
l7=sd0;
sd0=0;
sd1=l0;
sd1=f146(i,sd1);
l0=sd1;
sd2=l0;
sd3=0;
sd2*=sd3;
sd3=l6;
sd4=l5;
sd3*=sd4;
l1=sd3;
sd4=1;
sd5=0;
sd6=l1;
sd6=fabs(sd6);
sd7=0.90000000000000002;
si6=sd6 < sd7;
l3=si6;
sd4=si6?sd4:sd5;
l8=sd4;
sd3*=sd4;
sd4=l6;
sd5=l7;
sd4*=sd5;
l6=sd4;
sd5=0;
sd6=1;
si7=l3;
sd5=si7?sd5:sd6;
l7=sd5;
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
l5=sd2;
sd1*=sd2;
sd0-=sd1;
l9=sd0;
sd1=l9;
sd2=l9;
sd1*=sd2;
sd2=l8;
sd3=l1;
sd4=l5;
sd3*=sd4;
sd2-=sd3;
l10=sd2;
sd3=l10;
sd2*=sd3;
sd3=l7;
sd4=l6;
sd5=l5;
sd4*=sd5;
sd3-=sd4;
l11=sd3;
sd4=l11;
sd3*=sd4;
sd2+=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
l12=sd1;
sd0/=sd1;
l13=sd0;
sd0=l11;
sd1=l12;
sd0/=sd1;
l14=sd0;
sd0=l10;
sd1=l12;
sd0/=sd1;
l15=sd0;
sd0=l0;
sd1=l0;
sd0*=sd1;
sd1=l6;
sd2=l6;
sd1*=sd2;
sd2=l1;
sd3=l1;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l16=sd0;
L3:;
{
si0=l2;
si1=32U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l17=si0;
si1=3U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l17;
si1=-1U;
si0+=si1;
l18=si0;
sd0=0;
l19=sd0;
si0=0U;
l20=si0;
si0=l2;
si1=28U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l21=si0;
l3=si0;
L5:;
{
si0=l18;
si1=l20;
si0=si0 == si1;
l22=si0;
si0=l3;
sd0=f64_load(i->m0,(U64)si0);
l5=sd0;
si1=l21;
si2=0U;
si3=l20;
si4=1U;
si3+=si4;
l20=si3;
si4=l22;
si2=si4?si2:si3;
si3=24U;
si2*=si3;
si1+=si2;
l22=si1;
sd1=f64_load(i->m0,(U64)si1+8U);
l23=sd1;
sd0*=sd1;
si1=l3;
si2=8U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
l7=sd1;
si2=l22;
sd2=f64_load(i->m0,(U64)si2);
l24=sd2;
sd1*=sd2;
sd0-=sd1;
l25=sd0;
sd1=l25;
sd0*=sd1;
sd1=l7;
si2=l22;
sd2=f64_load(i->m0,(U64)si2+16U);
l26=sd2;
sd1*=sd2;
si2=l3;
si3=16U;
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
l8=sd2;
sd3=l23;
sd2*=sd3;
sd1-=sd2;
l27=sd1;
sd2=l27;
sd1*=sd2;
sd2=l8;
sd3=l24;
sd2*=sd3;
sd3=l5;
sd4=l26;
sd3*=sd4;
sd2-=sd3;
l28=sd2;
sd3=l28;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l29=sd0;
sd1=1e-10;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
l22=si0;
sd0=l1;
sd1=l5;
sd0-=sd1;
l25=sd0;
sd1=l25;
sd0*=sd1;
sd1=l6;
sd2=l7;
sd1-=sd2;
l25=sd1;
sd2=l25;
sd1*=sd2;
sd0+=sd1;
sd1=l0;
sd2=l8;
sd1-=sd2;
l25=sd1;
sd2=l25;
sd1*=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
sd1=1e-08;
si0=sd0 < sd1;
if(si0){
goto L1;
}
sd0=l1;
sd1=l24;
sd0-=sd1;
l25=sd0;
sd1=l25;
sd0*=sd1;
sd1=l6;
sd2=l23;
sd1-=sd2;
l25=sd1;
sd2=l25;
sd1*=sd2;
sd0+=sd1;
sd1=l0;
sd2=l26;
sd1-=sd2;
l25=sd1;
sd2=l25;
sd1*=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
sd1=1e-08;
si0=sd0 < sd1;
if(si0){
goto L1;
}
goto L6;
L7:;
sd0=l0;
sd1=l25;
sd2=l29;
sd1/=sd2;
sd0*=sd1;
sd1=l6;
sd2=l28;
sd3=l29;
sd2/=sd3;
sd1*=sd2;
sd2=l1;
sd3=l27;
sd4=l29;
sd3/=sd4;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=fabs(sd0);
sd1=1e-08;
si0=sd0 > sd1;
if(si0){
goto L6;
}
sd0=0;
l25=sd0;
sd0=0;
l27=sd0;
sd0=l5;
sd1=l5;
sd0*=sd1;
sd1=l7;
sd2=l7;
sd1*=sd2;
sd0+=sd1;
sd1=l8;
sd2=l8;
sd1*=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l28=sd0;
sd1=l24;
sd2=l24;
sd1*=sd2;
sd2=l23;
sd3=l23;
sd2*=sd3;
sd1+=sd2;
sd2=l26;
sd3=l26;
sd2*=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
l29=sd1;
sd0*=sd1;
l30=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L8;
}
sd0=1;
sd1=-1;
sd2=l5;
sd3=l24;
sd2*=sd3;
sd3=l7;
sd4=l23;
sd3*=sd4;
sd2+=sd3;
sd3=l8;
sd4=l26;
sd3*=sd4;
sd2+=sd3;
sd3=l30;
sd2/=sd3;
l27=sd2;
sd3=l27;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l27=sd1;
sd2=l27;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l27=sd0;
L8:;
sd0=l16;
sd1=l28;
sd0*=sd1;
l28=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L9;
}
sd0=1;
sd1=-1;
sd2=l0;
sd3=l8;
sd2*=sd3;
sd3=l1;
sd4=l5;
sd3*=sd4;
sd4=l6;
sd5=l7;
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=l28;
sd2/=sd3;
l25=sd2;
sd3=l25;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l25=sd1;
sd2=l25;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l25=sd0;
L9:;
sd0=0;
l28=sd0;
sd0=l16;
sd1=l29;
sd0*=sd1;
l29=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L10;
}
sd0=1;
sd1=-1;
sd2=l0;
sd3=l26;
sd2*=sd3;
sd3=l1;
sd4=l24;
sd3*=sd4;
sd4=l6;
sd5=l23;
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=l29;
sd2/=sd3;
l28=sd2;
sd3=l28;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l28=sd1;
sd2=l28;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l28=sd0;
L10:;
sd0=l25;
sd1=l28;
sd0+=sd1;
sd1=l27;
sd0-=sd1;
sd0=fabs(sd0);
sd1=9.9999999999999995e-08;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L6;
}
si0=1U;
goto L0;
L6:;
sd0=l8;
sd1=l0;
sd2=l1;
sd3=l5;
sd2*=sd3;
sd3=l6;
sd4=l7;
sd3*=sd4;
sd2+=sd3;
sd3=l0;
sd4=l8;
sd3*=sd4;
sd2+=sd3;
l25=sd2;
sd1*=sd2;
sd0-=sd1;
l8=sd0;
sd1=l8;
sd0*=sd1;
sd1=l5;
sd2=l1;
sd3=l25;
sd2*=sd3;
sd1-=sd2;
l27=sd1;
sd2=l27;
sd1*=sd2;
sd2=l7;
sd3=l6;
sd4=l25;
sd3*=sd4;
sd2-=sd3;
l7=sd2;
sd3=l7;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l25=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L12;
}
sd0=l8;
sd1=l25;
sd0/=sd1;
l5=sd0;
sd0=l7;
sd1=l25;
sd0/=sd1;
l7=sd0;
sd0=l27;
sd1=l25;
sd0/=sd1;
l8=sd0;
goto L11;
L12:;
sd0=l10;
l8=sd0;
sd0=l11;
l7=sd0;
sd0=l9;
l5=sd0;
sd0=l12;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L11;
}
sd0=l15;
l8=sd0;
sd0=l14;
l7=sd0;
sd0=l13;
l5=sd0;
L11:;
sd0=l26;
sd1=l0;
sd2=l1;
sd3=l24;
sd2*=sd3;
sd3=l6;
sd4=l23;
sd3*=sd4;
sd2+=sd3;
sd3=l0;
sd4=l26;
sd3*=sd4;
sd2+=sd3;
l25=sd2;
sd1*=sd2;
sd0-=sd1;
l26=sd0;
sd1=l26;
sd0*=sd1;
sd1=l24;
sd2=l1;
sd3=l25;
sd2*=sd3;
sd1-=sd2;
l27=sd1;
sd2=l27;
sd1*=sd2;
sd2=l23;
sd3=l6;
sd4=l25;
sd3*=sd4;
sd2-=sd3;
l24=sd2;
sd3=l24;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l25=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L14;
}
sd0=l26;
sd1=l25;
sd0/=sd1;
l23=sd0;
sd0=l24;
sd1=l25;
sd0/=sd1;
l24=sd0;
sd0=l27;
sd1=l25;
sd0/=sd1;
l26=sd0;
goto L13;
L14:;
sd0=l10;
l26=sd0;
sd0=l11;
l24=sd0;
sd0=l9;
l23=sd0;
sd0=l12;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L13;
}
sd0=l15;
l26=sd0;
sd0=l14;
l24=sd0;
sd0=l13;
l23=sd0;
L13:;
sd0=l19;
sd1=l0;
sd2=l8;
sd3=l24;
sd2*=sd3;
sd3=l7;
sd4=l26;
sd3*=sd4;
sd2-=sd3;
sd1*=sd2;
sd2=l1;
sd3=l7;
sd4=l23;
sd3*=sd4;
sd4=l5;
sd5=l24;
sd4*=sd5;
sd3-=sd4;
sd2*=sd3;
sd3=l6;
sd4=l5;
sd5=l26;
sd4*=sd5;
sd5=l8;
sd6=l23;
sd5*=sd6;
sd4-=sd5;
sd3*=sd4;
sd2+=sd3;
sd1+=sd2;
sd2=l8;
sd3=l26;
sd2*=sd3;
sd3=l7;
sd4=l24;
sd3*=sd4;
sd2+=sd3;
sd3=l5;
sd4=l23;
sd3*=sd4;
sd2+=sd3;
sd1=f136(i,sd1,sd2);
sd0+=sd1;
l19=sd0;
si0=l3;
si1=24U;
si0+=si1;
l3=si0;
si0=l17;
si1=l20;
si0=si0 != si1;
if(si0){
goto L5;
}
}
sd0=l19;
sd0=fabs(sd0);
sd1=3.1415926535897931;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L4;
}
si0=1U;
goto L0;
L4:;
si0=l2;
si1=48U;
si0+=si1;
l2=si0;
si1=l4;
si0=si0 != si1;
if(si0){
goto L3;
}
}
L2:;
si0=0U;
l22=si0;
L1:;
si0=l22;
L0:;
return si0;
}

void f19(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
F64 l10=0;
F64 l11=0;
F64 l12=0;
F64 l13=0;
F64 l14=0;
F64 l15=0;
F64 l16=0;
F64 l17=0;
F64 l18=0;
U32 si0,si1,si2,si3,si4;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=48U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si1=l3;
si2=l4;
si0=f26(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l2;
si1=l3;
si2=l4;
si0=f26(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l3;
si1=l1;
si2=l2;
si0=f26(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l4;
si1=l1;
si2=l2;
si0=f26(i,si0,si1,si2);
if(si0){
goto L2;
}
si0=l1;
sd0=f64_load(i->m0,(U64)si0+8U);
l6=sd0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1+16U);
l7=sd1;
sd0*=sd1;
si1=l1;
sd1=f64_load(i->m0,(U64)si1+16U);
l8=sd1;
si2=l2;
sd2=f64_load(i->m0,(U64)si2+8U);
l9=sd2;
sd1*=sd2;
sd0-=sd1;
l10=sd0;
si1=l3;
sd1=f64_load(i->m0,(U64)si1+16U);
l11=sd1;
si2=l4;
sd2=f64_load(i->m0,(U64)si2);
l12=sd2;
sd1*=sd2;
si2=l3;
sd2=f64_load(i->m0,(U64)si2);
l13=sd2;
si3=l4;
sd3=f64_load(i->m0,(U64)si3+16U);
l14=sd3;
sd2*=sd3;
sd1-=sd2;
l15=sd1;
sd0*=sd1;
sd1=l8;
si2=l2;
sd2=f64_load(i->m0,(U64)si2);
l16=sd2;
sd1*=sd2;
si2=l1;
sd2=f64_load(i->m0,(U64)si2);
l8=sd2;
sd3=l7;
sd2*=sd3;
sd1-=sd2;
l17=sd1;
si2=l3;
sd2=f64_load(i->m0,(U64)si2+8U);
l18=sd2;
sd3=l14;
sd2*=sd3;
sd3=l11;
si4=l4;
sd4=f64_load(i->m0,(U64)si4+8U);
l14=sd4;
sd3*=sd4;
sd2-=sd3;
l11=sd2;
sd1*=sd2;
sd0-=sd1;
l7=sd0;
sd1=l7;
sd0*=sd1;
sd1=l17;
sd2=l13;
sd3=l14;
sd2*=sd3;
sd3=l18;
sd4=l12;
sd3*=sd4;
sd2-=sd3;
l12=sd2;
sd1*=sd2;
sd2=l8;
sd3=l9;
sd2*=sd3;
sd3=l6;
sd4=l16;
sd3*=sd4;
sd2-=sd3;
l8=sd2;
sd3=l15;
sd2*=sd3;
sd1-=sd2;
l6=sd1;
sd2=l6;
sd1*=sd2;
sd2=l8;
sd3=l11;
sd2*=sd3;
sd3=l10;
sd4=l12;
sd3*=sd4;
sd2-=sd3;
l8=sd2;
sd3=l8;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l9=sd0;
sd1=1e-10;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L3:;
si0=l5;
sd1=l7;
sd2=l9;
sd1/=sd2;
l7=sd1;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l5;
sd1=l7;
sd1=-(sd1);
f64_store(i->m0,(U64)si0+40U,sd1);
si0=l5;
sd1=l8;
sd2=l9;
sd1/=sd2;
l7=sd1;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l5;
sd1=l7;
sd1=-(sd1);
f64_store(i->m0,(U64)si0+32U,sd1);
si0=l5;
sd1=l6;
sd2=l9;
sd1/=sd2;
l7=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l5;
sd1=l7;
sd1=-(sd1);
f64_store(i->m0,(U64)si0+24U,sd1);
si0=l1;
si1=l2;
si2=l5;
si0=f13(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=l3;
si1=l4;
si2=l5;
si0=f13(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L5;
}
si0=1U;
l3=si0;
goto L4;
L5:;
si0=l1;
si1=l2;
si2=l5;
si3=24U;
si2+=si3;
si0=f13(i,si0,si1,si2);
if(si0){
goto L6;
}
si0=0U;
l3=si0;
goto L4;
L6:;
si0=l3;
si1=l4;
si2=l5;
si3=24U;
si2+=si3;
si0=f13(i,si0,si1,si2);
l3=si0;
L4:;
si0=l0;
si1=l3;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+4U,si1);
L1:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f20(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj1;
F64 sd1,sd2,sd3,sd4;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l5=si0;
if(si0){
goto L9;
}
f8(i);
si0=36U;
l6=si0;
si0=36U;
si1=1U;
si0=f5(i,si0,si1);
l7=si0;
si0=!(si0);
if(si0){
goto L8;
}
si0=l7;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1050216U);
i32_store(i->m0,(U64)si0+32U,si1);
si0=l7;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050208U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l7;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050200U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l7;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050192U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l7;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050184U);
i64_store(i->m0,(U64)si0,sj1);
si0=2U;
l8=si0;
si0=36U;
l5=si0;
goto L2;
L9:;
si0=l4;
si1=l5;
si2=4U;
si1<<=(si2&31);
si0+=si1;
l6=si0;
si0=l4;
l7=si0;
L10:;
{
si0=l3;
si1=l7;
sd1=f64_load(i->m0,(U64)si1);
si2=l7;
si3=8U;
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
f14(i,si0,sd1,sd2);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l7=si0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
goto L2;
L11:;
si0=l7;
si1=16U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L10;
}
}
si0=l5;
si1=1U;
si0=si0 == si1;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si0=0U;
l9=si0;
si0=l4;
l8=si0;
L12:;
{
si0=l3;
si1=l8;
sd1=f64_load(i->m0,(U64)si1);
si2=l8;
sd2=f64_load(i->m0,(U64)si2+8U);
si3=l8;
sd3=f64_load(i->m0,(U64)si3+16U);
si4=l8;
sd4=f64_load(i->m0,(U64)si4+24U);
si5=l1;
si6=l6;
f17(i,si0,sd1,sd2,sd3,sd4,si5,si6);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l8;
si1=16U;
si0+=si1;
l7=si0;
si0=l5;
si1=-1U;
si0+=si1;
l11=si0;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+4U);
switch(si0){
case 0:
goto L16;
case 1:
goto L15;
case 2:
goto L14;
default:
goto L16;
}
L16:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L17;
}
L18:;
{
si0=l3;
si1=l8;
si2=16U;
si1+=si2;
l11=si1;
sd1=f64_load(i->m0,(U64)si1);
si2=l8;
si3=24U;
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
si3=l8;
si4=32U;
si3+=si4;
l7=si3;
sd3=f64_load(i->m0,(U64)si3);
si4=l8;
si5=40U;
si4+=si5;
sd4=f64_load(i->m0,(U64)si4);
si5=l1;
si6=l6;
f17(i,si0,sd1,sd2,sd3,sd4,si5,si6);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l8=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l8;
si1=-1U;
si0+=si1;
switch(si0){
case 0:
goto L20;
case 1:
goto L14;
default:
goto L20;
}
L20:;
si0=l5;
si1=-2U;
si0+=si1;
l11=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=1U;
l9=si0;
goto L15;
L19:;
si0=l11;
l8=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L18;
}
}
L17:;
si0=0U;
l7=si0;
si0=l9;
si1=1U;
si0&=si1;
if(si0){
goto L4;
}
goto L3;
L15:;
si0=l5;
si1=3U;
si0=si0 < si1;
if(si0){
goto L5;
}
L21:;
{
si0=l3;
si1=l7;
sd1=f64_load(i->m0,(U64)si1);
si2=l7;
si3=8U;
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
si3=l7;
si4=16U;
si3+=si4;
l8=si3;
sd3=f64_load(i->m0,(U64)si3);
si4=l7;
si5=24U;
si4+=si5;
sd4=f64_load(i->m0,(U64)si4);
si5=l1;
si6=l6;
f17(i,si0,sd1,sd2,sd3,sd4,si5,si6);
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si1=3U;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+4U);
l5=si0;
si1=1U;
si0=si0 != si1;
if(si0){
goto L22;
}
si0=l8;
l7=si0;
si0=l11;
si1=-1U;
si0+=si1;
l11=si0;
si1=1U;
si0+=si1;
si1=3U;
si0=si0 < si1;
if(si0){
goto L5;
}
goto L21;
L22:;
}
si0=l5;
switch(si0){
case 0:
goto L13;
case 1:
goto L23;
case 2:
goto L14;
default:
goto L13;
}
L23:;
UNREACHABLE;
L14:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L13:;
si0=l11;
si1=-1U;
si0+=si1;
l5=si0;
si0=l7;
si1=16U;
si0+=si1;
l8=si0;
si0=1U;
l9=si0;
si0=l11;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L12;
}
goto L4;
}
L8:;
si0=1U;
si1=36U;
f85(i,si0,si1);
UNREACHABLE;
L7:;
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+5U);
i64_store(i->m0,(U64)si0+5U,sj1);
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
si1=i32_load8_u(i->m0,(U64)si1+4U);
i32_store8(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l10;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L6:;
si0=l0;
si1=l1;
si2=l4;
sd2=f64_load(i->m0,(U64)si2);
si3=l4;
sd3=f64_load(i->m0,(U64)si3+8U);
f21(i,si0,si1,sd2,sd3);
goto L1;
L5:;
si0=1U;
l7=si0;
si0=l9;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
L4:;
si0=2U;
l7=si0;
L3:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l7;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L1;
L2:;
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=l4;
si1=l7;
si2=4U;
si1<<=(si2&31);
si2=8U;
f6(i,si0,si1,si2);
L24:;
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f21(gauche_ffiInstance*i,U32 l0,U32 l1,F64 l2,F64 l3) {
U32 l4=0;
U32 l5=0;
F64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
sd1=l2;
sd2=l3;
f14(i,si0,sd1,sd2);
si0=l4;
si0=i32_load(i->m0,(U64)si0);
si1=3U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L3:;
sd0=l2;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(9223372036854775807U);
sj0&=sj1;
sj1=W2C2_LL(9218868437227405311U);
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L8;
}
si0=6476400U;
l5=si0;
sd0=90;
sd1=-90;
sd2=l2;
sd3=l2;
sd4=-90;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l6=sd1;
sd2=l6;
sd3=90;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
l6=sd0;
sd1=-90;
sd0+=sd1;
sd0=fabs(sd0);
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L9;
}
sd0=l6;
sd1=90;
sd0+=sd1;
sd1=0.10000000000000001;
sd0/=sd1;
sd0=floor(sd0);
si0=I32_TRUNC_SAT_S_F64(sd0);
l5=si0;
si1=0U;
si2=l5;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l5=si0;
si1=1799U;
si2=l5;
si3=1799U;
si2=(U32)((I32)si2<(I32)si3);
si0=si2?si0:si1;
si1=3600U;
si0*=si1;
l5=si0;
L9:;
si0=l5;
sd1=l3;
sd2=360;
sd1=f152(i,sd1,sd2);
l6=sd1;
sd2=-360;
sd1+=sd2;
sd2=l6;
sd3=l6;
sd4=180;
si3=sd3 >= sd4;
sd1=si3?sd1:sd2;
l6=sd1;
sd2=360;
sd1+=sd2;
sd2=l6;
sd3=l6;
sd4=-180;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=180;
sd1+=sd2;
sd2=0.10000000000000001;
sd1/=sd2;
sd1=floor(sd1);
si1=I32_TRUNC_SAT_S_F64(sd1);
l7=si1;
si2=0U;
si3=l7;
si4=0U;
si3=(U32)((I32)si3>(I32)si4);
si1=si3?si1:si2;
l7=si1;
si2=3599U;
si3=l7;
si4=3599U;
si3=(U32)((I32)si3<(I32)si4);
si1=si3?si1:si2;
l7=si1;
si0+=si1;
si1=2U;
si0>>=(si1&31);
l5=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+16U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
si1=l5;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l7;
si2=1U;
si1<<=(si2&31);
si2=6U;
si1&=si2;
si0>>=(si1&31);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L4;
case 3:
goto L6;
default:
goto L6;
}
L8:;
f8(i);
si0=12U;
si1=1U;
si0=f5(i,si0,si1);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=12U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(51539607554U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1050180U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050172U);
i64_store(i->m0,(U64)si0,sj1);
goto L2;
L7:;
si0=l5;
si1=l8;
si2=1050312U;
f104(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L2;
L5:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L2;
L4:;
sd0=l2;
sd1=l3;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l1;
si3=i32_load(i->m0,(U64)si3+8U);
si0=f18(i,sd0,sd1,si2,si3);
if(si0){
goto L10;
}
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+4U,si1);
goto L2;
L10:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+4U,si1);
L2:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=1U;
si1=12U;
f85(i,si0,si1);
UNREACHABLE;
L0:;
}

void f22(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=1050328U;
si2=33436U;
f15(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l4=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=-2147483648U;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
f8(i);
si0=l2;
if(si0){
goto L5;
}
si0=28U;
si1=1U;
si0=f5(i,si0,si1);
l2=si0;
if(si0){
goto L4;
}
si0=1U;
si1=28U;
f85(i,si0,si1);
UNREACHABLE;
L5:;
si0=1620000U;
si1=1U;
si0=f5(i,si0,si1);
l5=si0;
if(si0){
goto L3;
}
si0=1U;
si1=1620000U;
f85(i,si0,si1);
UNREACHABLE;
L4:;
si0=l0;
si1=28U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=28U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(6442450944U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=0U;
si1=i32_load(i->m0,(U64)si1+1050307U);
i32_store(i->m0,(U64)si0+24U,si1);
si0=l2;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050299U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l2;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050291U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+1050283U);
i64_store(i->m0,(U64)si0,sj1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=l4;
si2=48U;
si1*=si2;
si2=8U;
f6(i,si0,si1,si2);
goto L1;
L3:;
si0=l5;
si1=1083764U;
si2=1620000U;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
si0=l0;
si1=1620000U;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f23(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=64U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l4;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=48U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f12(i,si0,si1,si2,si3,si4);
si0=l5;
si0=i32_load(i->m0,(U64)si0+56U);
l3=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+52U);
l4=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+48U);
l2=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l5;
si1=i32_load(i->m0,(U64)si1+60U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=0U;
l1=si0;
si0=l3;
switch(si0){
case 0:
goto L3;
case 1:
goto L6;
default:
goto L5;
}
L6:;
si0=1U;
l1=si0;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
l2=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L3;
case 1:
goto L4;
case 2:
goto L3;
default:
goto L4;
}
L5:;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
l2=si0;
L4:;
si0=l2;
si1=255U;
si0&=si1;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L11;
case 1:
goto L10;
case 2:
goto L12;
default:
goto L10;
}
L12:;
si0=l3;
si1=-1U;
si0+=si1;
l2=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=17U;
si0=si0 < si1;
if(si0){
goto L9;
}
sj0=W2C2_LL(0U);
l6=sj0;
L13:;
{
si0=l5;
si1=16U;
si0+=si1;
sj1=l6;
sj2=l6;
sj3=W2C2_LL(63U);
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=W2C2_LL(10U);
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
si1=l5;
sj1=i64_load(i->m0,(U64)si1+16U);
l7=sj1;
sj2=W2C2_LL(63U);
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 == sj1;
if(si0){
goto L14;
}
si0=3U;
l3=si0;
goto L7;
L14:;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l3=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=1U;
l1=si0;
goto L3;
L15:;
si0=l3;
sj0=(U64)(si0);
l6=sj0;
sj1=W2C2_LL(0U);
si0=(U64)((I64)sj0>(I64)sj1);
sj1=l7;
sj2=l6;
sj1-=sj2;
l6=sj1;
sj2=l7;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L16;
}
si0=3U;
l1=si0;
goto L3;
L16:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L13;
}
goto L8;
}
L11:;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
L10:;
si0=l3;
si1=16U;
si0=si0 < si1;
if(si0){
goto L17;
}
sj0=W2C2_LL(0U);
l6=sj0;
L18:;
{
si0=l5;
sj1=l6;
sj2=l6;
sj3=W2C2_LL(63U);
sj2=(U64)((I64)sj2>>(sj3&63));
sj3=W2C2_LL(10U);
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+8U);
si1=l5;
sj1=i64_load(i->m0,(U64)si1);
l7=sj1;
sj2=W2C2_LL(63U);
sj1=(U64)((I64)sj1>>(sj2&63));
si0=sj0 == sj1;
if(si0){
goto L19;
}
si0=2U;
l3=si0;
goto L7;
L19:;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l2=si0;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L20;
}
si0=1U;
l1=si0;
goto L3;
L20:;
si0=l2;
sj0=(U64)(si0);
l6=sj0;
sj1=W2C2_LL(0U);
si0=(U64)((I64)sj0<(I64)sj1);
sj1=l7;
sj2=l6;
sj1+=sj2;
l6=sj1;
sj2=l7;
si1=(U64)((I64)sj1<(I64)sj2);
si0^=si1;
si0=!(si0);
if(si0){
goto L21;
}
si0=2U;
l1=si0;
goto L3;
L21:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L18;
}
goto L8;
}
L17:;
sj0=W2C2_LL(0U);
l6=sj0;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l1=si0;
L22:;
{
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l2=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L22;
}
goto L8;
}
L9:;
sj0=W2C2_LL(0U);
l6=sj0;
si0=l2;
si0=!(si0);
if(si0){
goto L8;
}
si0=1U;
l1=si0;
L23:;
{
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l3=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l3;
sj1=(U64)(si1);
sj0-=sj1;
l6=sj0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L23;
}
}
L8:;
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
sj1=l6;
i64_store(i->m0,(U64)si0+8U,sj1);
goto L1;
L7:;
si0=l3;
si1=1U;
si2=l4;
si2=i32_load8_u(i->m0,(U64)si2);
si3=-48U;
si2+=si3;
si3=255U;
si2&=si3;
si3=10U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
L3:;
si0=l5;
si1=l1;
i32_store8(i->m0,(U64)si0+47U,si1);
si0=l5;
si1=3U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=47U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=1U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=36U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si1=1049162U;
si2=l5;
si3=48U;
si2+=si3;
f89(i,si0,si1,si2);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l5;
si1=64U;
si0+=si1;
i->g0=si0;
L0:;
}

void f24(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
F64 sd1;
si0=i->g0;
si1=48U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l4;
si1=3U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
si3=l3;
si4=3U;
f12(i,si0,si1,si2,si3,si4);
si0=l4;
si0=i32_load(i->m0,(U64)si0+40U);
l3=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+36U);
l2=si0;
si0=l4;
si0=i32_load(i->m0,(U64)si0+32U);
l1=si0;
si1=3U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+44U);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l4;
si1=8U;
si0+=si1;
si1=l2;
si2=l3;
f126(i,si0,si1,si2);
si0=1U;
l3=si0;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+8U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l4;
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+9U);
i32_store8(i->m0,(U64)si0+31U,si1);
si0=l4;
si1=4U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l4;
si3=31U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l4;
si1=1U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l4;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l0;
si1=4U;
si0+=si1;
si1=1049162U;
si2=l4;
si3=32U;
si2+=si3;
f89(i,si0,si1,si2);
goto L3;
L4:;
si0=l0;
si1=l4;
sd1=f64_load(i->m0,(U64)si1+16U);
f64_store(i->m0,(U64)si0+8U,sd1);
si0=3U;
l3=si0;
L3:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L1:;
si0=l4;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f25(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1;
U64 sj1;
f8(i);
si0=17U;
si1=1U;
si0=f5(i,si0,si1);
l1=si0;
if(si0){
goto L1;
}
si0=1U;
si1=17U;
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=17U;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(73014444033U);
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=0U;
si1=i32_load8_u(i->m0,(U64)si1+2703876U);
i32_store8(i->m0,(U64)si0+16U,si1);
si0=l1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703868U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2703860U);
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

U32 f26(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
F64 l10=0;
F64 l11=0;
F64 l12=0;
F64 l13=0;
F64 l14=0;
F64 l15=0;
F64 l16=0;
U32 si0,si1,si2,si3;
F64 sd0,sd1,sd2,sd3,sd4,sd5;
si0=l1;
sd0=f64_load(i->m0,(U64)si0);
l3=sd0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1+8U);
l4=sd1;
sd0*=sd1;
si1=l1;
sd1=f64_load(i->m0,(U64)si1+8U);
l5=sd1;
si2=l2;
sd2=f64_load(i->m0,(U64)si2);
l6=sd2;
sd1*=sd2;
sd0-=sd1;
l7=sd0;
sd1=l7;
sd0*=sd1;
sd1=l5;
si2=l2;
sd2=f64_load(i->m0,(U64)si2+16U);
l8=sd2;
sd1*=sd2;
si2=l1;
sd2=f64_load(i->m0,(U64)si2+16U);
l9=sd2;
sd3=l4;
sd2*=sd3;
sd1-=sd2;
l10=sd1;
sd2=l10;
sd1*=sd2;
sd2=l9;
sd3=l6;
sd2*=sd3;
sd3=l3;
sd4=l8;
sd3*=sd4;
sd2-=sd3;
l11=sd2;
sd3=l11;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l12=sd0;
sd1=1e-10;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
sd0=f64_load(i->m0,(U64)si0);
l7=sd0;
sd1=l3;
sd0-=sd1;
l3=sd0;
sd1=l3;
sd0*=sd1;
si1=l0;
sd1=f64_load(i->m0,(U64)si1+8U);
l10=sd1;
sd2=l5;
sd1-=sd2;
l3=sd1;
sd2=l3;
sd1*=sd2;
sd0+=sd1;
si1=l0;
sd1=f64_load(i->m0,(U64)si1+16U);
l5=sd1;
sd2=l9;
sd1-=sd2;
l3=sd1;
sd2=l3;
sd1*=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
sd1=1e-08;
si0=sd0 < sd1;
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
goto L0;
L2:;
sd0=l7;
sd1=l12;
sd0/=sd1;
si1=l0;
sd1=f64_load(i->m0,(U64)si1+16U);
l7=sd1;
sd0*=sd1;
sd1=l11;
sd2=l12;
sd1/=sd2;
si2=l0;
sd2=f64_load(i->m0,(U64)si2+8U);
l11=sd2;
sd1*=sd2;
sd2=l10;
sd3=l12;
sd2/=sd3;
si3=l0;
sd3=f64_load(i->m0,(U64)si3);
l10=sd3;
sd2*=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=fabs(sd0);
sd1=1e-08;
si0=sd0 > sd1;
si0=!(si0);
if(si0){
goto L3;
}
si0=0U;
goto L0;
L3:;
sd0=0;
l12=sd0;
sd0=0;
l13=sd0;
sd0=l3;
sd1=l3;
sd0*=sd1;
sd1=l5;
sd2=l5;
sd1*=sd2;
sd0+=sd1;
sd1=l9;
sd2=l9;
sd1*=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
l14=sd0;
sd1=l6;
sd2=l6;
sd1*=sd2;
sd2=l4;
sd3=l4;
sd2*=sd3;
sd1+=sd2;
sd2=l8;
sd3=l8;
sd2*=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
l15=sd1;
sd0*=sd1;
l16=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L4;
}
sd0=1;
sd1=-1;
sd2=l3;
sd3=l6;
sd2*=sd3;
sd3=l5;
sd4=l4;
sd3*=sd4;
sd2+=sd3;
sd3=l9;
sd4=l8;
sd3*=sd4;
sd2+=sd3;
sd3=l16;
sd2/=sd3;
l13=sd2;
sd3=l13;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l13=sd1;
sd2=l13;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l13=sd0;
L4:;
sd0=l14;
sd1=l7;
sd2=l7;
sd1*=sd2;
sd2=l11;
sd3=l11;
sd2*=sd3;
sd3=l10;
sd4=l10;
sd3*=sd4;
sd2+=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
l16=sd1;
sd0*=sd1;
l14=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L5;
}
sd0=1;
sd1=-1;
sd2=l9;
sd3=l7;
sd2*=sd3;
sd3=l5;
sd4=l11;
sd3*=sd4;
sd4=l3;
sd5=l10;
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=l14;
sd2/=sd3;
l3=sd2;
sd3=l3;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l3=sd1;
sd2=l3;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l12=sd0;
L5:;
sd0=0;
l3=sd0;
sd0=l15;
sd1=l16;
sd0*=sd1;
l5=sd0;
sd1=1e-10;
si0=sd0 < sd1;
if(si0){
goto L6;
}
sd0=1;
sd1=-1;
sd2=l8;
sd3=l7;
sd2*=sd3;
sd3=l4;
sd4=l11;
sd3*=sd4;
sd4=l6;
sd5=l10;
sd4*=sd5;
sd3+=sd4;
sd2+=sd3;
sd3=l5;
sd2/=sd3;
l3=sd2;
sd3=l3;
sd4=-1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
l3=sd1;
sd2=l3;
sd3=1;
si2=sd2 > sd3;
sd0=si2?sd0:sd1;
sd0=f148(i,sd0);
l3=sd0;
L6:;
sd0=l12;
sd1=l3;
sd0+=sd1;
sd1=l13;
sd0-=sd1;
sd0=fabs(sd0);
sd1=9.9999999999999995e-08;
si0=sd0 < sd1;
goto L0;
L1:;
sd0=l7;
sd1=l6;
sd0-=sd1;
l3=sd0;
sd1=l3;
sd0*=sd1;
sd1=l10;
sd2=l4;
sd1-=sd2;
l3=sd1;
sd2=l3;
sd1*=sd2;
sd0+=sd1;
sd1=l5;
sd2=l8;
sd1-=sd2;
l3=sd1;
sd2=l3;
sd1*=sd2;
sd0+=sd1;
sd0=sqrt(sd0);
sd1=1e-08;
si0=sd0 < sd1;
L0:;
return si0;
}

void f27(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
U32 si0,si1;
F64 sd0,sd1,sd2,sd3;
si0=l2;
si1=l1;
si0-=si1;
l3=si0;
si1=24U;
si0=DIV_U(si0,si1);
l4=si0;
si0=l3;
si1=-1073741848U;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=0U;
l4=si0;
si0=8U;
l5=si0;
goto L3;
L4:;
f8(i);
si0=8U;
l2=si0;
si0=l4;
si1=4U;
si0<<=(si1&31);
l3=si0;
si1=8U;
si0=f5(i,si0,si1);
l5=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
l2=si0;
si0=l4;
l3=si0;
L5:;
{
si0=l1;
si1=8U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l6=sd0;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
l7=sd1;
sd0=f136(i,sd0,sd1);
l8=sd0;
si0=l1;
si1=16U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
sd1=l6;
sd2=l6;
sd1*=sd2;
sd2=l7;
sd3=l7;
sd2*=sd3;
sd1+=sd2;
sd1=sqrt(sd1);
sd0=f136(i,sd0,sd1);
l6=sd0;
si0=l2;
si1=8U;
si0+=si1;
sd1=l8;
sd2=57.295779513082323;
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l2;
sd1=l6;
sd2=57.295779513082323;
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l1;
si1=24U;
si0+=si1;
l1=si0;
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
if(si0){
goto L5;
}
}
L3:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L1:;
si0=l2;
si1=l3;
f85(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f28(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U32 si0,si1,si2;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l1;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l1;
sj0=i64_load(i->m0,(U64)si0+16U);
l4=sj0;
si0=l1;
sj0=i64_load(i->m0,(U64)si0+8U);
l5=sj0;
goto L1;
L2:;
si0=l2;
f66(i,si0);
si0=l2;
sj0=i64_load(i->m0,(U64)si0+8U);
l4=sj0;
si0=l2;
sj0=i64_load(i->m0,(U64)si0);
l5=sj0;
L1:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+16U);
si1=2U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=2703877U;
si1=125U;
si2=2703940U;
f98(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l4;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l5;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

U32 f29(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si0=f129(i,si0,si1,si2);
L0:;
return si0;
}

void f30(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 si0,si1,si2;
si0=l1;
si1=l2;
si0+=si1;
l3=si0;
si0=0U;
l4=si0;
si0=l2;
if(si0){
goto L3;
}
si0=l1;
l2=si0;
si0=0U;
l5=si0;
goto L2;
L3:;
si0=l1;
l2=si0;
L4:;
{
si0=l4;
l5=si0;
si0=l2;
l4=si0;
si0=i32_load8_s(i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l4;
si1=1U;
si0+=si1;
l2=si0;
si0=l6;
si1=255U;
si0&=si1;
l6=si0;
goto L5;
L6:;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l2=si0;
si0=l6;
si1=31U;
si0&=si1;
l7=si0;
si0=l6;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=6U;
si0<<=(si1&31);
si1=l2;
si0|=si1;
l6=si0;
si0=l4;
si1=2U;
si0+=si1;
l2=si0;
goto L5;
L7:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l2=si0;
si0=l6;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l2;
si1=l7;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l6=si0;
si0=l4;
si1=3U;
si0+=si1;
l2=si0;
goto L5;
L8:;
si0=l2;
si1=6U;
si0<<=(si1&31);
si1=l4;
si1=i32_load8_u(i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l7;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l4;
si1=4U;
si0+=si1;
l2=si0;
L5:;
si0=l2;
si1=l4;
si0-=si1;
si1=l5;
si0+=si1;
l4=si0;
si0=l6;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l6;
si1=32U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l6;
si1=8U;
si0>>=(si1&31);
l7=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L12;
case 1:
goto L2;
case 2:
goto L2;
case 3:
goto L2;
case 4:
goto L2;
case 5:
goto L2;
case 6:
goto L2;
case 7:
goto L2;
case 8:
goto L2;
case 9:
goto L2;
case 10:
goto L10;
case 11:
goto L2;
case 12:
goto L2;
case 13:
goto L2;
case 14:
goto L2;
case 15:
goto L2;
case 16:
goto L2;
case 17:
goto L2;
case 18:
goto L2;
case 19:
goto L2;
case 20:
goto L2;
case 21:
goto L2;
case 22:
goto L2;
case 23:
goto L2;
case 24:
goto L2;
case 25:
goto L2;
case 26:
goto L11;
default:
goto L13;
}
L13:;
si0=l7;
if(si0){
goto L2;
}
si0=l6;
si1=255U;
si0&=si1;
si0=i32_load8_u(i->m0,(U64)si0+2704457U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
goto L9;
L12:;
si0=l6;
si1=5760U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L9;
L11:;
si0=l6;
si1=12288U;
si0=si0 != si1;
if(si0){
goto L2;
}
goto L9;
L10:;
si0=l6;
si1=255U;
si0&=si1;
si0=i32_load8_u(i->m0,(U64)si0+2704457U);
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
L9:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L4;
}
}
si0=0U;
l5=si0;
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l2;
si1=l3;
si0=si0 == si1;
if(si0){
goto L1;
}
L14:;
{
si0=l3;
l7=si0;
si1=-1U;
si0+=si1;
l3=si0;
si0=i32_load8_s(i->m0,(U64)si0);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L15;
}
si0=l7;
si1=-2U;
si0+=si1;
l3=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l9=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L17;
}
si0=l8;
si1=31U;
si0&=si1;
l8=si0;
goto L16;
L17:;
si0=l7;
si1=-3U;
si0+=si1;
l3=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l8=si0;
si0=(U32)(U32)(I8)(U8)(si0);
l10=si0;
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
si0=l8;
si1=15U;
si0&=si1;
l8=si0;
goto L18;
L19:;
si0=l7;
si1=-4U;
si0+=si1;
l3=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=7U;
si0&=si1;
si1=6U;
si0<<=(si1&31);
si1=l10;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L18:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l9;
si2=63U;
si1&=si2;
si0|=si1;
l8=si0;
L16:;
si0=l8;
si1=6U;
si0<<=(si1&31);
si1=l6;
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
L15:;
si0=l6;
si1=-9U;
si0+=si1;
si1=5U;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l6;
si1=32U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l6;
si1=128U;
si0=si0 < si1;
if(si0){
goto L20;
}
si0=l6;
si1=8U;
si0>>=(si1&31);
l8=si0;
si1=-22U;
si0+=si1;
switch(si0){
case 0:
goto L25;
case 1:
goto L20;
case 2:
goto L20;
case 3:
goto L20;
case 4:
goto L20;
case 5:
goto L20;
case 6:
goto L20;
case 7:
goto L20;
case 8:
goto L20;
case 9:
goto L20;
case 10:
goto L23;
case 11:
goto L20;
case 12:
goto L20;
case 13:
goto L20;
case 14:
goto L20;
case 15:
goto L20;
case 16:
goto L20;
case 17:
goto L20;
case 18:
goto L20;
case 19:
goto L20;
case 20:
goto L20;
case 21:
goto L20;
case 22:
goto L20;
case 23:
goto L20;
case 24:
goto L20;
case 25:
goto L20;
case 26:
goto L24;
default:
goto L22;
}
L25:;
si0=l6;
si1=5760U;
si0=si0 == si1;
if(si0){
goto L21;
}
goto L20;
L24:;
si0=l6;
si1=12288U;
si0=si0 == si1;
if(si0){
goto L21;
}
goto L20;
L23:;
si0=l6;
si1=255U;
si0&=si1;
si0=i32_load8_u(i->m0,(U64)si0+2704457U);
si1=2U;
si0&=si1;
if(si0){
goto L21;
}
goto L20;
L22:;
si0=l8;
if(si0){
goto L20;
}
si0=l6;
si1=255U;
si0&=si1;
si0=i32_load8_u(i->m0,(U64)si0+2704457U);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
L21:;
si0=l2;
si1=l3;
si0=si0 != si1;
if(si0){
goto L14;
}
goto L1;
L20:;
}
si0=l4;
si1=l2;
si0-=si1;
si1=l7;
si0+=si1;
l4=si0;
L1:;
si0=l0;
si1=l4;
si2=l5;
si1-=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=l5;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f31(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l2;
si4=1U;
si3<<=(si4&31);
l2=si3;
si4=4U;
si5=l2;
si6=4U;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=8U;
si5=24U;
f32(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f32(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=1U;
l6=si0;
si0=4U;
l7=si0;
si0=l5;
sj0=(U64)(si0);
si1=l3;
sj1=(U64)(si1);
sj0*=sj1;
l8=sj0;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
sj0=l8;
si0=(U32)(sj0);
l3=si0;
si1=-2147483648U;
si2=l4;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l5;
si2=l1;
si1*=si2;
si2=l4;
si3=l3;
si0=f7(i,si0,si1,si2,si3);
l7=si0;
goto L6;
L7:;
si0=l3;
if(si0){
goto L8;
}
si0=l4;
l7=si0;
goto L5;
L8:;
f8(i);
si0=l3;
si1=l4;
si0=f5(i,si0,si1);
l7=si0;
L6:;
si0=l7;
if(si0){
goto L5;
}
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
goto L4;
L5:;
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l6=si0;
L4:;
si0=8U;
l7=si0;
L1:;
si0=l0;
si1=l7;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f33(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l2;
si4=1U;
si3<<=(si4&31);
l2=si3;
si4=4U;
si5=l2;
si6=4U;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=8U;
si5=48U;
f32(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f34(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l2;
si4=1U;
si3<<=(si4&31);
l2=si3;
si4=4U;
si5=l2;
si6=4U;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=8U;
si5=16U;
f32(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f35(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l2;
si4=1U;
si3<<=(si4&31);
l2=si3;
si4=4U;
si5=l2;
si6=4U;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=8U;
si5=8U;
f32(i,si0,si1,si2,si3,si4,si5);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f36(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7,si8;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l4;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=0U;
si1=0U;
f85(i,si0,si1);
UNREACHABLE;
L2:;
si0=l5;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l1;
si4=l2;
si5=1U;
si4<<=(si5&31);
l2=si4;
si5=l1;
si6=l2;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=8U;
si5=4U;
si6=1U;
si7=l4;
si8=1025U;
si7=si7 < si8;
si5=si7?si5:si6;
si6=l4;
si7=1U;
si6=si6 == si7;
si4=si6?si4:si5;
l1=si4;
si5=l2;
si6=l1;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=l3;
si5=l4;
f32(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l5;
si1=i32_load(i->m0,(U64)si1+12U);
f85(i,si0,si1);
UNREACHABLE;
L3:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f37(gauche_ffiInstance*i,U32 l0,U32 l1,U64 l2,F64 l3,F64 l4) {
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
F64 l18=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
F64 sd0,sd1;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=l2;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+24U);
l6=sj1;
sj0^=sj1;
sj1=W2C2_LL(8387220255154660723U);
sj0^=sj1;
l7=sj0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1+16U);
l8=sj1;
sj2=W2C2_LL(7816392313619706465U);
sj1^=sj2;
sj0+=sj1;
l9=sj0;
sj1=l7;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l7=sj0;
sj1=W2C2_LL(21U);
sj0=I64_ROTL(sj0,sj1);
sj1=l7;
sj2=l6;
sj3=W2C2_LL(7237128888997146477U);
sj2^=sj3;
l6=sj2;
sj3=l8;
sj4=W2C2_LL(8317987319222330741U);
sj3^=sj4;
sj2+=sj3;
l8=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l7=sj1;
sj0^=sj1;
sj1=W2C2_LL(576460752303423488U);
sj0^=sj1;
l10=sj0;
sj1=W2C2_LL(16U);
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l8;
sj3=l6;
sj4=W2C2_LL(13U);
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l6=sj2;
sj3=l9;
sj2+=sj3;
l8=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l9=sj1;
sj0^=sj1;
l10=sj0;
sj1=W2C2_LL(21U);
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l7;
sj3=l2;
sj2^=sj3;
sj3=l8;
sj4=l6;
sj5=W2C2_LL(17U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l6=sj3;
sj2+=sj3;
l7=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l10=sj0;
sj1=W2C2_LL(16U);
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l9;
sj3=l7;
sj4=l6;
sj5=W2C2_LL(13U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l6=sj3;
sj2+=sj3;
l7=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj3=W2C2_LL(255U);
sj2^=sj3;
sj1+=sj2;
l9=sj1;
sj0^=sj1;
l10=sj0;
sj1=W2C2_LL(21U);
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l8;
sj3=W2C2_LL(576460752303423488U);
sj2^=sj3;
sj3=l7;
sj4=l6;
sj5=W2C2_LL(17U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l6=sj3;
sj2+=sj3;
l7=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l10=sj0;
sj1=W2C2_LL(16U);
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l7;
sj3=l6;
sj4=W2C2_LL(13U);
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l6=sj2;
sj3=l9;
sj2+=sj3;
l7=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l9=sj1;
sj0^=sj1;
l10=sj0;
sj1=W2C2_LL(21U);
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l7;
sj3=l6;
sj4=W2C2_LL(17U);
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l6=sj2;
sj3=l8;
sj2+=sj3;
l7=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l8=sj1;
sj0^=sj1;
l10=sj0;
sj1=W2C2_LL(16U);
sj0=I64_ROTL(sj0,sj1);
sj1=l10;
sj2=l6;
sj3=W2C2_LL(13U);
sj2=I64_ROTL(sj2,sj3);
sj3=l7;
sj2^=sj3;
l6=sj2;
sj3=l9;
sj2+=sj3;
l7=sj2;
sj3=W2C2_LL(32U);
sj2=I64_ROTL(sj2,sj3);
sj1+=sj2;
l9=sj1;
sj0^=sj1;
sj1=W2C2_LL(21U);
sj0=I64_ROTL(sj0,sj1);
sj1=l6;
sj2=W2C2_LL(17U);
sj1=I64_ROTL(sj1,sj2);
sj2=l7;
sj1^=sj2;
l6=sj1;
sj2=W2C2_LL(13U);
sj1=I64_ROTL(sj1,sj2);
sj2=l6;
sj3=l8;
sj2+=sj3;
sj1^=sj2;
l6=sj1;
sj2=W2C2_LL(17U);
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
sj1=l6;
sj2=l9;
sj1+=sj2;
l6=sj1;
sj2=W2C2_LL(32U);
sj1>>=(sj2&63);
sj0^=sj1;
sj1=l6;
sj0^=sj1;
l6=sj0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
if(si0){
goto L1;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l1;
si2=1U;
si3=l1;
si4=16U;
si3+=si4;
si4=1U;
f38(i,si0,si1,si2,si3,si4);
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l11=si0;
sj1=l6;
si1=(U32)(sj1);
si0&=si1;
l12=si0;
sj0=l6;
sj1=W2C2_LL(25U);
sj0>>=(sj1&63);
l9=sj0;
sj1=W2C2_LL(127U);
sj0&=sj1;
sj1=W2C2_LL(72340172838076673U);
sj0*=sj1;
l7=sj0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=0U;
l14=si0;
si0=0U;
l15=si0;
L2:;
{
si0=l13;
si1=l12;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
l8=sj0;
sj1=l7;
sj0^=sj1;
l6=sj0;
sj1=W2C2_LL(-1U);
sj0^=sj1;
sj1=l6;
sj2=W2C2_LL(-72340172838076673U);
sj1+=sj2;
sj0&=sj1;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l6=sj0;
si0=!(sj0);
if(si0){
goto L7;
}
L8:;
{
sj0=l2;
si1=l13;
si2=0U;
sj3=l6;
sj3=I64_CTZ(sj3);
si3=(U32)(sj3);
si4=3U;
si3>>=(si4&31);
si4=l12;
si3+=si4;
si4=l11;
si3&=si4;
si2-=si3;
si3=24U;
si2*=si3;
si1+=si2;
l16=si1;
si2=-24U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
si0=sj0 == sj1;
if(si0){
goto L6;
}
sj0=l6;
sj1=W2C2_LL(-1U);
sj0+=sj1;
sj1=l6;
sj0&=sj1;
l6=sj0;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L8;
}
}
L7:;
sj0=l8;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l6=sj0;
si0=l14;
si1=1U;
si0=si0 == si1;
if(si0){
goto L9;
}
sj0=l6;
si0=!(sj0);
if(si0){
goto L4;
}
sj0=l6;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
si1=l12;
si0+=si1;
si1=l11;
si0&=si1;
l17=si0;
L9:;
sj0=l6;
sj1=l8;
sj2=W2C2_LL(1U);
sj1<<=(sj2&63);
sj0&=sj1;
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L10;
}
si0=1U;
l14=si0;
goto L3;
L10:;
si0=l13;
si1=l17;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
l12=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L11;
}
si0=l13;
si1=l13;
sj1=i64_load(i->m0,(U64)si1);
sj2=W2C2_LL(-9187201950435737472U);
sj1&=sj2;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
l17=si1;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l12=si0;
L11:;
si0=l13;
si1=l17;
si0+=si1;
sj1=l9;
si1=(U32)(sj1);
si2=127U;
si1&=si2;
l16=si1;
i32_store8(i->m0,(U64)si0,si1);
si0=l13;
si1=l17;
si2=-8U;
si1+=si2;
si2=l11;
si1&=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=l16;
i32_store8(i->m0,(U64)si0,si1);
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+8U);
si2=l12;
si3=1U;
si2&=si3;
si1-=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l1;
si1=i32_load(i->m0,(U64)si1+12U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l13;
si1=0U;
si2=l17;
si1-=si2;
si2=24U;
si1*=si2;
si0+=si1;
l1=si0;
si1=-24U;
si0+=si1;
sj1=l2;
i64_store(i->m0,(U64)si0,sj1);
si0=l1;
si1=-16U;
si0+=si1;
sd1=l3;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=-8U;
si0+=si1;
sd1=l4;
f64_store(i->m0,(U64)si0,sd1);
sj0=W2C2_LL(0U);
l2=sj0;
goto L5;
L6:;
si0=l16;
si1=-8U;
si0+=si1;
l1=si0;
sd0=f64_load(i->m0,(U64)si0);
l18=sd0;
si0=l1;
sd1=l4;
f64_store(i->m0,(U64)si0,sd1);
si0=l16;
si1=-16U;
si0+=si1;
l1=si0;
sd0=f64_load(i->m0,(U64)si0);
l4=sd0;
si0=l1;
sd1=l3;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l18;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l0;
sd1=l4;
f64_store(i->m0,(U64)si0+8U,sd1);
sj0=W2C2_LL(1U);
l2=sj0;
L5:;
si0=l0;
sj1=l2;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
goto L0;
L4:;
si0=0U;
l14=si0;
L3:;
si0=l15;
si1=8U;
si0+=si1;
l15=si0;
si1=l12;
si0+=si1;
si1=l11;
si0&=si1;
l12=si0;
goto L2;
}
L0:;
}

void f38(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U64 l15=0;
U64 l16=0;
U64 l17=0;
U64 l18=0;
U64 l19=0;
U64 l20=0;
U64 l21=0;
U32 l22=0;
U64 l23=0;
U64 l24=0;
U32 l25=0;
U32 l26=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4,sj5,sj6,sj7;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
si1=l2;
si0+=si1;
l2=si0;
si1=l6;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
l7=si1;
si2=l7;
si3=1U;
si2+=si3;
l8=si2;
si3=3U;
si2>>=(si3&31);
l9=si2;
si3=7U;
si2*=si3;
si3=l7;
si4=8U;
si3=si3 < si4;
si1=si3?si1:si2;
l10=si1;
si2=1U;
si1>>=(si2&31);
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l10;
si1=1U;
si0+=si1;
l9=si0;
si1=l2;
si2=l9;
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l2=si0;
si1=15U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=536870911U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=-1U;
si1=l2;
si2=3U;
si1<<=(si2&31);
si2=7U;
si1=DIV_U(si1,si2);
si2=-1U;
si1+=si2;
si1=I32_CLZ(si1);
si0>>=(si1&31);
si1=1U;
si0+=si1;
l2=si0;
goto L10;
L11:;
si0=4U;
si1=l2;
si2=8U;
si1&=si2;
si2=8U;
si1+=si2;
si2=l2;
si3=4U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
L10:;
si0=l2;
sj0=(U64)(si0);
sj1=W2C2_LL(24U);
sj0*=sj1;
l11=sj0;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
if(si0){
goto L7;
}
sj0=l11;
si0=(U32)(sj0);
l12=si0;
si1=l2;
si2=8U;
si1+=si2;
l8=si1;
si0+=si1;
l9=si0;
si1=l12;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l9;
si1=2147483640U;
si0=si0 > si1;
if(si0){
goto L7;
}
f8(i);
si0=l9;
si1=8U;
si0=f5(i,si0,si1);
l13=si0;
if(si0){
goto L8;
}
si0=l5;
si1=16U;
si0+=si1;
si1=l4;
si2=8U;
si3=l9;
f82(i,si0,si1,si2,si3);
si0=l5;
si0=i32_load(i->m0,(U64)si0+20U);
l2=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
l4=si0;
goto L1;
L9:;
si0=l5;
si1=24U;
si0+=si1;
si1=l4;
f81(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+28U);
l2=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+24U);
l4=si0;
goto L1;
L8:;
si0=l13;
si1=l12;
si0+=si1;
l9=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L12;
}
si0=l9;
si1=255U;
si2=l8;
wasmMemoryFill(i->m0,si0,si1,si2);
L12:;
si0=l2;
si1=-1U;
si0+=si1;
l8=si0;
si1=l2;
si2=3U;
si1>>=(si2&31);
si2=7U;
si1*=si2;
si2=l2;
si3=9U;
si2=si2 < si3;
si0=si2?si0:si1;
l10=si0;
si0=l6;
if(si0){
goto L6;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
goto L5;
L7:;
si0=l5;
si1=8U;
si0+=si1;
si1=l4;
f81(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
goto L1;
L6:;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+8U);
l11=sj0;
sj1=W2C2_LL(7237128888997146477U);
sj0^=sj1;
l14=sj0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
l15=sj1;
sj2=W2C2_LL(8317987319222330741U);
sj1^=sj2;
sj0+=sj1;
l16=sj0;
sj1=W2C2_LL(32U);
sj0=I64_ROTL(sj0,sj1);
l17=sj0;
sj0=l16;
sj1=l14;
sj2=W2C2_LL(13U);
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l18=sj0;
sj1=W2C2_LL(17U);
sj0=I64_ROTL(sj0,sj1);
l19=sj0;
sj0=l11;
sj1=W2C2_LL(8387220255154660723U);
sj0^=sj1;
l20=sj0;
sj0=l15;
sj1=W2C2_LL(7816392313619706465U);
sj0^=sj1;
l21=sj0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-1U);
sj0^=sj1;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l11=sj0;
si0=0U;
l2=si0;
si0=l6;
l22=si0;
si0=l13;
l4=si0;
L13:;
{
sj0=l11;
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L14;
}
L15:;
{
si0=l2;
si1=8U;
si0+=si1;
l2=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l11=sj0;
sj1=W2C2_LL(-9187201950435737472U);
si0=sj0 == sj1;
if(si0){
goto L15;
}
}
sj0=l11;
sj1=W2C2_LL(-9187201950435737472U);
sj0^=sj1;
l11=sj0;
L14:;
si0=l9;
si1=l8;
si2=l13;
si3=0U;
sj4=l11;
sj4=I64_CTZ(sj4);
si4=(U32)(sj4);
si5=3U;
si4>>=(si5&31);
si5=l2;
si4+=si5;
l3=si4;
si3-=si4;
si4=24U;
si3*=si4;
si2+=si3;
si3=-24U;
si2+=si3;
sj2=i64_load(i->m0,(U64)si2);
l14=sj2;
sj3=l20;
sj2^=sj3;
l15=sj2;
sj3=l21;
sj2+=sj3;
l16=sj2;
sj3=l15;
sj4=W2C2_LL(16U);
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
l15=sj2;
sj3=W2C2_LL(21U);
sj2=I64_ROTL(sj2,sj3);
sj3=l15;
sj4=l17;
sj3+=sj4;
l15=sj3;
sj2^=sj3;
sj3=W2C2_LL(576460752303423488U);
sj2^=sj3;
l23=sj2;
sj3=W2C2_LL(16U);
sj2=I64_ROTL(sj2,sj3);
sj3=l23;
sj4=l18;
sj5=l16;
sj4+=sj5;
l16=sj4;
sj5=W2C2_LL(32U);
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l23=sj3;
sj2^=sj3;
l24=sj2;
sj3=W2C2_LL(21U);
sj2=I64_ROTL(sj2,sj3);
sj3=l24;
sj4=l15;
sj5=l14;
sj4^=sj5;
sj5=l16;
sj6=l19;
sj5^=sj6;
l14=sj5;
sj4+=sj5;
l15=sj4;
sj5=W2C2_LL(32U);
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l16=sj3;
sj2^=sj3;
l24=sj2;
sj3=W2C2_LL(16U);
sj2=I64_ROTL(sj2,sj3);
sj3=l24;
sj4=l23;
sj5=l15;
sj6=l14;
sj7=W2C2_LL(13U);
sj6=I64_ROTL(sj6,sj7);
sj5^=sj6;
l14=sj5;
sj4+=sj5;
l15=sj4;
sj5=W2C2_LL(32U);
sj4=I64_ROTL(sj4,sj5);
sj5=W2C2_LL(255U);
sj4^=sj5;
sj3+=sj4;
l23=sj3;
sj2^=sj3;
l24=sj2;
sj3=W2C2_LL(21U);
sj2=I64_ROTL(sj2,sj3);
sj3=l24;
sj4=l16;
sj5=W2C2_LL(576460752303423488U);
sj4^=sj5;
sj5=l15;
sj6=l14;
sj7=W2C2_LL(17U);
sj6=I64_ROTL(sj6,sj7);
sj5^=sj6;
l14=sj5;
sj4+=sj5;
l15=sj4;
sj5=W2C2_LL(32U);
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l16=sj3;
sj2^=sj3;
l24=sj2;
sj3=W2C2_LL(16U);
sj2=I64_ROTL(sj2,sj3);
sj3=l24;
sj4=l15;
sj5=l14;
sj6=W2C2_LL(13U);
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l14=sj4;
sj5=l23;
sj4+=sj5;
l15=sj4;
sj5=W2C2_LL(32U);
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l23=sj3;
sj2^=sj3;
l24=sj2;
sj3=W2C2_LL(21U);
sj2=I64_ROTL(sj2,sj3);
sj3=l24;
sj4=l15;
sj5=l14;
sj6=W2C2_LL(17U);
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l14=sj4;
sj5=l16;
sj4+=sj5;
l15=sj4;
sj5=W2C2_LL(32U);
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l16=sj3;
sj2^=sj3;
l24=sj2;
sj3=W2C2_LL(16U);
sj2=I64_ROTL(sj2,sj3);
sj3=l24;
sj4=l14;
sj5=W2C2_LL(13U);
sj4=I64_ROTL(sj4,sj5);
sj5=l15;
sj4^=sj5;
l14=sj4;
sj5=l23;
sj4+=sj5;
l15=sj4;
sj5=W2C2_LL(32U);
sj4=I64_ROTL(sj4,sj5);
sj3+=sj4;
l23=sj3;
sj2^=sj3;
sj3=W2C2_LL(21U);
sj2=I64_ROTL(sj2,sj3);
sj3=l14;
sj4=W2C2_LL(17U);
sj3=I64_ROTL(sj3,sj4);
sj4=l15;
sj3^=sj4;
l14=sj3;
sj4=W2C2_LL(13U);
sj3=I64_ROTL(sj3,sj4);
sj4=l14;
sj5=l16;
sj4+=sj5;
sj3^=sj4;
l14=sj3;
sj4=W2C2_LL(17U);
sj3=I64_ROTL(sj3,sj4);
sj2^=sj3;
sj3=l14;
sj4=l23;
sj3+=sj4;
l14=sj3;
sj4=W2C2_LL(32U);
sj3>>=(sj4&63);
sj2^=sj3;
sj3=l14;
sj2^=sj3;
si2=(U32)(sj2);
l25=si2;
si1&=si2;
l12=si1;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l14=sj0;
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L16;
}
si0=8U;
l26=si0;
L17:;
{
si0=l12;
si1=l26;
si0+=si1;
l12=si0;
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l9;
si1=l12;
si2=l8;
si1&=si2;
l12=si1;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l14=sj0;
si0=!(sj0);
if(si0){
goto L17;
}
}
L16:;
sj0=l11;
sj1=W2C2_LL(-1U);
sj0+=sj1;
l15=sj0;
si0=l9;
sj1=l14;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l12;
si1+=si2;
si2=l8;
si1&=si2;
l12=si1;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l9;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l12=si0;
L18:;
sj0=l15;
sj1=l11;
sj0&=sj1;
l11=sj0;
si0=l9;
si1=l12;
si0+=si1;
si1=l25;
si2=25U;
si1>>=(si2&31);
l25=si1;
i32_store8(i->m0,(U64)si0,si1);
si0=l9;
si1=l12;
si2=-8U;
si1+=si2;
si2=l8;
si1&=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=l25;
i32_store8(i->m0,(U64)si0,si1);
si0=l9;
si1=l12;
si2=-24U;
si1*=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l12=si0;
si1=l13;
si2=l3;
si3=-24U;
si2*=si3;
si1+=si2;
si2=-24U;
si1+=si2;
l3=si1;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l12;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l12;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l22;
si1=-1U;
si0+=si1;
l22=si0;
if(si0){
goto L13;
}
}
L5:;
si0=l1;
si1=l8;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l9;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l10;
si2=l6;
si1-=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=-2147483647U;
l4=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L3;
}
si0=l7;
si1=l7;
si2=24U;
si1*=si2;
si2=31U;
si1+=si2;
si2=-8U;
si1&=si2;
l2=si1;
si0+=si1;
si1=9U;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l13;
si1=l2;
si0-=si1;
si1=l7;
si2=8U;
f6(i,si0,si1,si2);
goto L3;
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L19;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=0U;
l2=si0;
si0=l9;
si1=l8;
si2=7U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l9=si0;
si1=1U;
si0=si0 == si1;
if(si0){
goto L21;
}
si0=l9;
si1=1U;
si0&=si1;
l13=si0;
si0=l9;
si1=1073741822U;
si0&=si1;
l12=si0;
si0=0U;
l2=si0;
L22:;
{
si0=l4;
si1=l2;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(i->m0,(U64)si1);
l11=sj1;
sj2=W2C2_LL(-1U);
sj1^=sj2;
sj2=W2C2_LL(7U);
sj1>>=(sj2&63);
sj2=W2C2_LL(72340172838076673U);
sj1&=sj2;
sj2=l11;
sj3=W2C2_LL(9187201950435737471U);
sj2|=sj3;
sj1+=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l9;
si1=8U;
si0+=si1;
l9=si0;
si1=l9;
sj1=i64_load(i->m0,(U64)si1);
l11=sj1;
sj2=W2C2_LL(-1U);
sj1^=sj2;
sj2=W2C2_LL(7U);
sj1>>=(sj2&63);
sj2=W2C2_LL(72340172838076673U);
sj1&=sj2;
sj2=l11;
sj3=W2C2_LL(9187201950435737471U);
sj2|=sj3;
sj1+=sj2;
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=16U;
si0+=si1;
l2=si0;
si0=l12;
si1=-2U;
si0+=si1;
l12=si0;
if(si0){
goto L22;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L20;
}
L21:;
si0=l4;
si1=l2;
si0+=si1;
l2=si0;
si1=l2;
sj1=i64_load(i->m0,(U64)si1);
l11=sj1;
sj2=W2C2_LL(-1U);
sj1^=sj2;
sj2=W2C2_LL(7U);
sj1>>=(sj2&63);
sj2=W2C2_LL(72340172838076673U);
sj1&=sj2;
sj2=l11;
sj3=W2C2_LL(9187201950435737471U);
sj2|=sj3;
sj1+=sj2;
i64_store(i->m0,(U64)si0,sj1);
L20:;
si0=l8;
si1=8U;
si0=si0 < si1;
if(si0){
goto L24;
}
si0=l4;
si1=l8;
si0+=si1;
si1=l4;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
goto L23;
L24:;
si0=l8;
si0=!(si0);
if(si0){
goto L23;
}
si0=l4;
si1=8U;
si0+=si1;
si1=l4;
si2=l8;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
L23:;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+8U);
l11=sj0;
sj1=W2C2_LL(7237128888997146477U);
sj0^=sj1;
l14=sj0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
l15=sj1;
sj2=W2C2_LL(8317987319222330741U);
sj1^=sj2;
sj0+=sj1;
l16=sj0;
sj1=W2C2_LL(32U);
sj0=I64_ROTL(sj0,sj1);
l24=sj0;
sj0=l16;
sj1=l14;
sj2=W2C2_LL(13U);
sj1=I64_ROTL(sj1,sj2);
sj0^=sj1;
l17=sj0;
sj1=W2C2_LL(17U);
sj0=I64_ROTL(sj0,sj1);
l18=sj0;
sj0=l11;
sj1=W2C2_LL(8387220255154660723U);
sj0^=sj1;
l19=sj0;
sj0=l15;
sj1=W2C2_LL(7816392313619706465U);
sj0^=sj1;
l20=sj0;
si0=0U;
l9=si0;
L25:;
{
si0=l9;
l2=si0;
si1=1U;
si0+=si1;
l9=si0;
si0=l4;
si1=l2;
si0+=si1;
l8=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=128U;
si0=si0 != si1;
if(si0){
goto L26;
}
si0=l4;
si1=l9;
si2=-24U;
si1*=si2;
si0+=si1;
l25=si0;
si0=l4;
si1=0U;
si2=l2;
si1-=si2;
si2=24U;
si1*=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l22=si0;
L28:;
{
si0=l7;
si1=l22;
sj1=i64_load(i->m0,(U64)si1);
l11=sj1;
sj2=l19;
sj1^=sj2;
l14=sj1;
sj2=l20;
sj1+=sj2;
l15=sj1;
sj2=l14;
sj3=W2C2_LL(16U);
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
l14=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l14;
sj3=l24;
sj2+=sj3;
l14=sj2;
sj1^=sj2;
sj2=W2C2_LL(576460752303423488U);
sj1^=sj2;
l16=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l16;
sj3=l17;
sj4=l15;
sj3+=sj4;
l15=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l16=sj2;
sj1^=sj2;
l23=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l23;
sj3=l14;
sj4=l11;
sj3^=sj4;
sj4=l15;
sj5=l18;
sj4^=sj5;
l11=sj4;
sj3+=sj4;
l14=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l15=sj2;
sj1^=sj2;
l23=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l23;
sj3=l16;
sj4=l14;
sj5=l11;
sj6=W2C2_LL(13U);
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l11=sj4;
sj3+=sj4;
l14=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj4=W2C2_LL(255U);
sj3^=sj4;
sj2+=sj3;
l16=sj2;
sj1^=sj2;
l23=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l23;
sj3=l15;
sj4=W2C2_LL(576460752303423488U);
sj3^=sj4;
sj4=l14;
sj5=l11;
sj6=W2C2_LL(17U);
sj5=I64_ROTL(sj5,sj6);
sj4^=sj5;
l11=sj4;
sj3+=sj4;
l14=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l15=sj2;
sj1^=sj2;
l23=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l23;
sj3=l14;
sj4=l11;
sj5=W2C2_LL(13U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l11=sj3;
sj4=l16;
sj3+=sj4;
l14=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l16=sj2;
sj1^=sj2;
l23=sj1;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l23;
sj3=l14;
sj4=l11;
sj5=W2C2_LL(17U);
sj4=I64_ROTL(sj4,sj5);
sj3^=sj4;
l11=sj3;
sj4=l15;
sj3+=sj4;
l14=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l15=sj2;
sj1^=sj2;
l23=sj1;
sj2=W2C2_LL(16U);
sj1=I64_ROTL(sj1,sj2);
sj2=l23;
sj3=l11;
sj4=W2C2_LL(13U);
sj3=I64_ROTL(sj3,sj4);
sj4=l14;
sj3^=sj4;
l11=sj3;
sj4=l16;
sj3+=sj4;
l14=sj3;
sj4=W2C2_LL(32U);
sj3=I64_ROTL(sj3,sj4);
sj2+=sj3;
l16=sj2;
sj1^=sj2;
sj2=W2C2_LL(21U);
sj1=I64_ROTL(sj1,sj2);
sj2=l11;
sj3=W2C2_LL(17U);
sj2=I64_ROTL(sj2,sj3);
sj3=l14;
sj2^=sj3;
l11=sj2;
sj3=W2C2_LL(13U);
sj2=I64_ROTL(sj2,sj3);
sj3=l11;
sj4=l15;
sj3+=sj4;
sj2^=sj3;
l11=sj2;
sj3=W2C2_LL(17U);
sj2=I64_ROTL(sj2,sj3);
sj1^=sj2;
sj2=l11;
sj3=l16;
sj2+=sj3;
l11=sj2;
sj3=W2C2_LL(32U);
sj2>>=(sj3&63);
sj1^=sj2;
sj2=l11;
sj1^=sj2;
si1=(U32)(sj1);
l13=si1;
si0&=si1;
l12=si0;
l3=si0;
si0=l4;
si1=l12;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l11=sj0;
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L29;
}
si0=8U;
l26=si0;
si0=l12;
l3=si0;
L30:;
{
si0=l3;
si1=l26;
si0+=si1;
l3=si0;
si0=l26;
si1=8U;
si0+=si1;
l26=si0;
si0=l4;
si1=l3;
si2=l7;
si1&=si2;
l3=si1;
si0+=si1;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
l11=sj0;
si0=!(sj0);
if(si0){
goto L30;
}
}
L29:;
si0=l4;
sj1=l11;
sj1=I64_CTZ(sj1);
si1=(U32)(sj1);
si2=3U;
si1>>=(si2&31);
si2=l3;
si1+=si2;
si2=l7;
si1&=si2;
l3=si1;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L31;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
sj0=I64_CTZ(sj0);
si0=(U32)(sj0);
si1=3U;
si0>>=(si1&31);
l3=si0;
L31:;
si0=l3;
si1=l12;
si0-=si1;
si1=l2;
si2=l12;
si1-=si2;
si0^=si1;
si1=l7;
si0&=si1;
si1=8U;
si0=si0 < si1;
if(si0){
goto L32;
}
si0=l4;
si1=l3;
si0+=si1;
l12=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l26=si0;
si0=l12;
si1=l13;
si2=25U;
si1>>=(si2&31);
l13=si1;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=-8U;
si1+=si2;
si2=l7;
si1&=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=l13;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=l3;
si2=-24U;
si1*=si2;
si0+=si1;
l12=si0;
si1=-24U;
si0+=si1;
l3=si0;
si0=l26;
si1=255U;
si0=si0 == si1;
if(si0){
goto L27;
}
si0=l25;
si0=i32_load(i->m0,(U64)si0);
l13=si0;
si0=l25;
si1=l3;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l13;
i32_store(i->m0,(U64)si0,si1);
si0=l25;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si0=l25;
si1=l12;
si2=-20U;
si1+=si2;
l13=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l13;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l25;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l25;
si1=l12;
si2=-16U;
si1+=si2;
l13=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l13;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l25;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l25;
si1=l12;
si2=-12U;
si1+=si2;
l13=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+12U,si1);
si0=l13;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l25;
si0=i32_load(i->m0,(U64)si0+16U);
l3=si0;
si0=l25;
si1=l12;
si2=-8U;
si1+=si2;
l13=si1;
si1=i32_load(i->m0,(U64)si1);
i32_store(i->m0,(U64)si0+16U,si1);
si0=l13;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si0=l12;
si1=l25;
si1=i32_load(i->m0,(U64)si1+20U);
i32_store(i->m0,(U64)si0,si1);
si0=l25;
si1=l3;
i32_store(i->m0,(U64)si0+20U,si1);
goto L28;
L32:;
}
si0=l8;
si1=l13;
si2=25U;
si1>>=(si2&31);
l12=si1;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=-8U;
si1+=si2;
si2=l7;
si1&=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=l12;
i32_store8(i->m0,(U64)si0,si1);
goto L26;
L27:;
si0=l8;
si1=255U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=l2;
si2=-8U;
si1+=si2;
si2=l7;
si1&=si2;
si0+=si1;
si1=8U;
si0+=si1;
si1=255U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=l25;
sj1=i64_load(i->m0,(U64)si1+16U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l3;
si1=l25;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l25;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
L26:;
si0=l2;
si1=l7;
si0=si0 != si1;
if(si0){
goto L25;
}
}
L19:;
si0=l1;
si1=l10;
si2=l6;
si1-=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=-2147483647U;
l4=si0;
L3:;
goto L1;
L2:;
si0=l5;
si1=l4;
f81(i,si0,si1);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=l5;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
L1:;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f39(gauche_ffiInstance*i,U32 l0,U32 l1) {
f55(i);
UNREACHABLE;
L0:;
}

void f40(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3,si4,si5,si6,si7;
si0=i->g0;
si1=16U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l5;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l1;
si4=l2;
si5=1U;
si4<<=(si5&31);
l2=si4;
si5=l1;
si6=l2;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=8U;
si5=4U;
si6=l4;
si7=1U;
si6=si6 == si7;
si4=si6?si4:si5;
l1=si4;
si5=l2;
si6=l1;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=l3;
si5=l4;
f48(i,si0,si1,si2,si3,si4,si5);
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l5;
si1=i32_load(i->m0,(U64)si1+12U);
f85(i,si0,si1);
UNREACHABLE;
L2:;
si0=l5;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l5;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f41(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si1=-2147483648U;
si0|=si1;
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si2=1U;
f6(i,si0,si1,si2);
L1:;
L0:;
}

void f42(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=1U;
f6(i,si0,si1,si2);
L1:;
L0:;
}

void f43(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=1U;
f6(i,si0,si1,si2);
L1:;
L0:;
}

void f44(gauche_ffiInstance*i,U32 l0) {
U32 si0;
si0=l0;
f45(i,si0);
UNREACHABLE;
L0:;
}

void f45(gauche_ffiInstance*i,U32 l0) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=0U;
si2=i32_load(i->m0,(U64)si2+2720640U);
l0=si2;
si3=5U;
si4=l0;
si2=si4?si2:si3;
TF(i->t0,si2,void (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
UNREACHABLE;
L0:;
}

void f46(gauche_ffiInstance*i,U32 l0) {
U32 si0;
si0=l0;
f47(i,si0);
UNREACHABLE;
L0:;
}

void f47(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=l1;
si1=l3;
si2=1U;
si1>>=(si2&31);
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=2703980U;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l0;
si3=i32_load(i->m0,(U64)si3+8U);
l0=si3;
si3=i32_load8_u(i->m0,(U64)si3+8U);
si4=l0;
si4=i32_load8_u(i->m0,(U64)si4+9U);
f49(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L1:;
si0=l1;
si1=-2147483648U;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=2704008U;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l0;
si3=i32_load(i->m0,(U64)si3+8U);
l0=si3;
si3=i32_load8_u(i->m0,(U64)si3+8U);
si4=l0;
si4=i32_load8_u(i->m0,(U64)si4+9U);
f49(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f48(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=1U;
l6=si0;
si0=4U;
l7=si0;
si0=l5;
sj0=(U64)(si0);
si1=l3;
sj1=(U64)(si1);
sj0*=sj1;
l8=sj0;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
l3=si0;
goto L1;
L2:;
sj0=l8;
si0=(U32)(sj0);
l3=si0;
si1=-2147483648U;
si2=l4;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=0U;
l3=si0;
goto L1;
L3:;
si0=l1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=l5;
si2=l1;
si1*=si2;
si2=l4;
si3=l3;
si0=f7(i,si0,si1,si2,si3);
l7=si0;
goto L6;
L7:;
si0=l3;
if(si0){
goto L8;
}
si0=l4;
l7=si0;
goto L5;
L8:;
f8(i);
si0=l3;
si1=l4;
si0=f5(i,si0,si1);
l7=si0;
L6:;
si0=l7;
if(si0){
goto L5;
}
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
goto L4;
L5:;
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l6=si0;
L4:;
si0=8U;
l7=si0;
L1:;
si0=l0;
si1=l7;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f49(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=1U;
si0=f65(i,si0);
si1=255U;
si0&=si1;
switch(si0){
case 0:
goto L1;
case 1:
goto L4;
case 2:
goto L5;
default:
goto L4;
}
L5:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2720644U);
l6=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L1;
}
si0=0U;
si1=l6;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+2720644U,si1);
si0=0U;
si0=i32_load(i->m0,(U64)si0+2720648U);
si0=!(si0);
if(si0){
goto L3;
}
si0=l5;
si1=8U;
si0+=si1;
si1=l0;
si2=l1;
si2=i32_load(i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=l5;
si1=l4;
i32_store8(i->m0,(U64)si0+29U,si1);
si0=l5;
si1=l3;
i32_store8(i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=0U;
si0=i32_load(i->m0,(U64)si0+2720648U);
si1=l5;
si2=16U;
si1+=si2;
si2=0U;
si2=i32_load(i->m0,(U64)si2+2720652U);
si2=i32_load(i->m0,(U64)si2+20U);
TF(i->t0,si2,void (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
goto L2;
L4:;
si0=l5;
si1=l0;
si2=l1;
si2=i32_load(i->m0,(U64)si2+24U);
TF(i->t0,si2,void (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
goto L1;
L3:;
si0=-2147483648U;
si1=l5;
f41(i,si0,si1);
L2:;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2720644U);
si2=-1U;
si1+=si2;
i32_store(i->m0,(U64)si0+2720644U,si1);
si0=0U;
si1=0U;
i32_store8(i->m0,(U64)si0+2720612U,si1);
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f51(i,si0,si1);
UNREACHABLE;
L1:;
UNREACHABLE;
L0:;
}

void f50(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=0U;
si1=1U;
i32_store8(i->m0,(U64)si0+2721112U,si1);
L0:;
}

void f51(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=l1;
si0=f39(i,si0,si1);
UNREACHABLE;
L0:;
}

U32 f52(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=9U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si0=f53(i,si0,si1);
goto L0;
L1:;
si0=l0;
si0=f54(i,si0);
L0:;
return si0;
}

U32 f53(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3,si4,si5;
si0=0U;
l2=si0;
si0=l1;
si1=-65587U;
si2=l0;
si3=16U;
si4=l0;
si5=16U;
si4=si4 > si5;
si2=si4?si2:si3;
l0=si2;
si1-=si2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=16U;
si2=l1;
si3=11U;
si2+=si3;
si3=-8U;
si2&=si3;
si3=l1;
si4=11U;
si3=si3 < si4;
si1=si3?si1:si2;
l3=si1;
si0+=si1;
si1=12U;
si0+=si1;
si0=f54(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=-8U;
si0+=si1;
l2=si0;
si0=l0;
si1=-1U;
si0+=si1;
l4=si0;
si1=l1;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
l0=si0;
goto L2;
L3:;
si0=l1;
si1=-4U;
si0+=si1;
l5=si0;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
si1=-8U;
si0&=si1;
si1=l4;
si2=l1;
si1+=si2;
si2=0U;
si3=l0;
si2-=si3;
si1&=si2;
si2=-8U;
si1+=si2;
l1=si1;
si2=0U;
si3=l0;
si4=l1;
si5=l2;
si4-=si5;
si5=16U;
si4=si4 > si5;
si2=si4?si2:si3;
si1+=si2;
l0=si1;
si2=l2;
si1-=si2;
l1=si1;
si0-=si1;
l4=si0;
si0=l6;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L4;
}
si0=l0;
si1=l4;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l4;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l1;
si2=l5;
si2=i32_load(i->m0,(U64)si2);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l1;
si0+=si1;
l4=si0;
si1=l4;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
f60(i,si0,si1);
goto L2;
L4:;
si0=l2;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si2=l1;
si1+=si2;
i32_store(i->m0,(U64)si0,si1);
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l1=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L5;
}
si0=l1;
si1=-8U;
si0&=si1;
l2=si0;
si1=l3;
si2=16U;
si1+=si2;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=l0;
si1=l3;
si2=l1;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si0+=si1;
l1=si0;
si1=l2;
si2=l3;
si1-=si2;
l3=si1;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si0+=si1;
l2=si0;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
f60(i,si0,si1);
L5:;
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
L1:;
si0=l2;
L0:;
return si0;
}

U32 f54(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
si1=245U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si1=-65588U;
si0=si0 <= si1;
if(si0){
goto L5;
}
si0=0U;
l0=si0;
goto L1;
L5:;
si0=l0;
si1=11U;
si0+=si1;
l2=si0;
si1=-8U;
si0&=si1;
l3=si0;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721072U);
l4=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=31U;
l5=si0;
si0=l0;
si1=16777205U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l3;
si1=38U;
si2=l2;
si3=8U;
si2>>=(si3&31);
si2=I32_CLZ(si2);
l0=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l0;
si2=1U;
si1<<=(si2&31);
si0-=si1;
si1=62U;
si0+=si1;
l5=si0;
goto L3;
L4:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l6=si0;
si1=16U;
si2=l0;
si3=11U;
si2+=si3;
si3=504U;
si2&=si3;
si3=l0;
si4=11U;
si3=si3 < si4;
si1=si3?si1:si2;
l3=si1;
si2=3U;
si1>>=(si2&31);
l2=si1;
si0>>=(si1&31);
l0=si0;
si1=3U;
si0&=si1;
si0=!(si0);
if(si0){
goto L11;
}
si0=l0;
si1=-1U;
si0^=si1;
si1=1U;
si0&=si1;
si1=l2;
si0+=si1;
l7=si0;
si1=3U;
si0<<=(si1&31);
l3=si0;
si1=2720804U;
si0+=si1;
l0=si0;
si1=l3;
si2=2720812U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si1=i32_load(i->m0,(U64)si1+8U);
l8=si1;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l8;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0+8U,si1);
goto L9;
L11:;
si0=l3;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721076U);
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=l0;
if(si0){
goto L8;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721072U);
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=I32_CTZ(si0);
si1=2U;
si0<<=(si1&31);
si1=2720660U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l3;
si0-=si1;
l2=si0;
si0=l8;
l6=si0;
L12:;
{
si0=l8;
si0=i32_load(i->m0,(U64)si0+16U);
l0=si0;
if(si0){
goto L13;
}
si0=l8;
si0=i32_load(i->m0,(U64)si0+20U);
l0=si0;
if(si0){
goto L13;
}
si0=l6;
si0=i32_load(i->m0,(U64)si0+24U);
l5=si0;
si0=l6;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L16;
}
si0=l6;
si1=20U;
si2=16U;
si3=l6;
si3=i32_load(i->m0,(U64)si3+20U);
l0=si3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
if(si0){
goto L15;
}
si0=0U;
l0=si0;
goto L14;
L16:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+8U);
l8=si0;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0+8U,si1);
goto L14;
L15:;
si0=l6;
si1=20U;
si0+=si1;
si1=l6;
si2=16U;
si1+=si2;
si2=l0;
si0=si2?si0:si1;
l7=si0;
L17:;
{
si0=l7;
l9=si0;
si0=l8;
l0=si0;
si1=20U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+20U);
l8=si2;
si0=si2?si0:si1;
l7=si0;
si0=l0;
si1=20U;
si2=16U;
si3=l8;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
if(si0){
goto L17;
}
}
si0=l9;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L14:;
si0=l5;
si0=!(si0);
if(si0){
goto L6;
}
si0=l6;
si1=l6;
si1=i32_load(i->m0,(U64)si1+28U);
si2=2U;
si1<<=(si2&31);
si2=2720660U;
si1+=si2;
l8=si1;
si1=i32_load(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L19;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l6;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
if(si0){
goto L18;
}
goto L6;
L20:;
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
if(si0){
goto L18;
}
goto L6;
L19:;
si0=l8;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L7;
}
L18:;
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l6;
si0=i32_load(i->m0,(U64)si0+16U);
l8=si0;
si0=!(si0);
if(si0){
goto L21;
}
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l8;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
L21:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+20U);
l8=si0;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l8;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
goto L6;
L13:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l3;
si0-=si1;
l8=si0;
si1=l2;
si2=l8;
si3=l2;
si2=si2 < si3;
l8=si2;
si0=si2?si0:si1;
l2=si0;
si0=l0;
si1=l6;
si2=l8;
si0=si2?si0:si1;
l6=si0;
si0=l0;
l8=si0;
goto L12;
}
L10:;
si0=0U;
si1=l6;
si2=-2U;
si3=l7;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
L9:;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
si0=l2;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l3;
si0+=si1;
l3=si0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
goto L1;
L8:;
si0=l0;
si1=l2;
si0<<=(si1&31);
si1=2U;
si2=l2;
si1<<=(si2&31);
l0=si1;
si2=0U;
si3=l0;
si2-=si3;
si1|=si2;
si0&=si1;
si0=I32_CTZ(si0);
l9=si0;
si1=3U;
si0<<=(si1&31);
l2=si0;
si1=2720804U;
si0+=si1;
l8=si0;
si1=l2;
si2=2720812U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l0=si1;
si1=i32_load(i->m0,(U64)si1+8U);
l7=si1;
si0=si0 == si1;
if(si0){
goto L23;
}
si0=l7;
si1=l8;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l8;
si1=l7;
i32_store(i->m0,(U64)si0+8U,si1);
goto L22;
L23:;
si0=0U;
si1=l6;
si2=-2U;
si3=l9;
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
L22:;
si0=l0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si0+=si1;
l6=si0;
si1=l2;
si2=l3;
si1-=si2;
l8=si1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721076U);
l2=si0;
si0=!(si0);
if(si0){
goto L24;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721084U);
l3=si0;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l7=si0;
si1=1U;
si2=l2;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l9=si1;
si0&=si1;
if(si0){
goto L26;
}
si0=0U;
si1=l7;
si2=l9;
si1|=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
si0=l2;
si1=-8U;
si0&=si1;
si1=2720804U;
si0+=si1;
l2=si0;
l7=si0;
goto L25;
L26:;
si0=l2;
si1=-8U;
si0&=si1;
l2=si0;
si1=2720804U;
si0+=si1;
l7=si0;
si0=l2;
si1=2720812U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L25:;
si0=l7;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l7;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
L24:;
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
si0=0U;
si1=l6;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=0U;
si1=l8;
i32_store(i->m0,(U64)si0+2721076U,si1);
goto L1;
L7:;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721072U);
si2=-2U;
si3=l6;
si3=i32_load(i->m0,(U64)si3+28U);
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(i->m0,(U64)si0+2721072U,si1);
L6:;
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L29;
}
si0=l6;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l3;
si0+=si1;
l8=si0;
si1=l2;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l2;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721076U);
l7=si0;
si0=!(si0);
if(si0){
goto L28;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721084U);
l0=si0;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l9=si0;
si1=1U;
si2=l7;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l5=si1;
si0&=si1;
if(si0){
goto L31;
}
si0=0U;
si1=l9;
si2=l5;
si1|=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
si0=l7;
si1=-8U;
si0&=si1;
si1=2720804U;
si0+=si1;
l7=si0;
l9=si0;
goto L30;
L31:;
si0=l7;
si1=-8U;
si0&=si1;
l7=si0;
si1=2720804U;
si0+=si1;
l9=si0;
si0=l7;
si1=2720812U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
L30:;
si0=l9;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l7;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+8U,si1);
goto L28;
L29:;
si0=l6;
si1=l2;
si2=l3;
si1+=si2;
l0=si1;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l0;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
goto L27;
L28:;
si0=0U;
si1=l8;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=0U;
si1=l2;
i32_store(i->m0,(U64)si0+2721076U,si1);
L27:;
si0=l6;
si1=8U;
si0+=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=0U;
si1=l3;
si0-=si1;
l2=si0;
si0=l5;
si1=2U;
si0<<=(si1&31);
si1=2720660U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
if(si0){
goto L35;
}
si0=0U;
l8=si0;
si0=0U;
l0=si0;
goto L34;
L35:;
si0=0U;
l8=si0;
si0=l3;
si1=0U;
si2=25U;
si3=l5;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l5;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l7=si0;
si0=0U;
l0=si0;
L36:;
{
si0=l6;
l6=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
l9=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L37;
}
si0=l9;
si1=l3;
si0-=si1;
l9=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L37;
}
si0=l6;
l8=si0;
si0=l9;
l2=si0;
si0=l9;
if(si0){
goto L37;
}
si0=0U;
l2=si0;
si0=l6;
l0=si0;
si0=l6;
l8=si0;
goto L33;
L37:;
si0=l6;
si0=i32_load(i->m0,(U64)si0+20U);
l9=si0;
si1=l0;
si2=l9;
si3=l6;
si4=l7;
si5=29U;
si4>>=(si5&31);
si5=4U;
si4&=si5;
si3+=si4;
si3=i32_load(i->m0,(U64)si3+16U);
l6=si3;
si2=si2 != si3;
si0=si2?si0:si1;
si1=l0;
si2=l9;
si0=si2?si0:si1;
l0=si0;
si0=l7;
si1=1U;
si0<<=(si1&31);
l7=si0;
si0=l6;
if(si0){
goto L36;
}
}
L34:;
si0=l0;
si1=l8;
si0|=si1;
if(si0){
goto L38;
}
si0=0U;
l8=si0;
si0=2U;
si1=l5;
si0<<=(si1&31);
l0=si0;
si1=0U;
si2=l0;
si1-=si2;
si0|=si1;
si1=l4;
si0&=si1;
l0=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si0=I32_CTZ(si0);
si1=2U;
si0<<=(si1&31);
si1=2720660U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
L38:;
si0=l0;
si0=!(si0);
if(si0){
goto L32;
}
L33:;
L39:;
{
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
l6=si0;
si1=l3;
si0-=si1;
l7=si0;
si1=l2;
si2=l7;
si3=l2;
si2=si2 < si3;
l9=si2;
si0=si2?si0:si1;
l5=si0;
si0=l6;
si1=l3;
si0=si0 < si1;
l7=si0;
si0=l0;
si1=l8;
si2=l9;
si0=si2?si0:si1;
l9=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
l6=si0;
if(si0){
goto L40;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
L40:;
si0=l2;
si1=l5;
si2=l7;
si0=si2?si0:si1;
l2=si0;
si0=l8;
si1=l9;
si2=l7;
si0=si2?si0:si1;
l8=si0;
si0=l6;
l0=si0;
si0=l6;
if(si0){
goto L39;
}
}
L32:;
si0=l8;
si0=!(si0);
if(si0){
goto L2;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721076U);
l0=si0;
si1=l3;
si0=si0 < si1;
if(si0){
goto L41;
}
si0=l2;
si1=l0;
si2=l3;
si1-=si2;
si0=si0 >= si1;
if(si0){
goto L2;
}
L41:;
si0=l8;
si0=i32_load(i->m0,(U64)si0+24U);
l5=si0;
si0=l8;
si0=i32_load(i->m0,(U64)si0+12U);
l0=si0;
si1=l8;
si0=si0 != si1;
if(si0){
goto L44;
}
si0=l8;
si1=20U;
si2=16U;
si3=l8;
si3=i32_load(i->m0,(U64)si3+20U);
l0=si3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
if(si0){
goto L43;
}
si0=0U;
l0=si0;
goto L42;
L44:;
si0=l8;
si0=i32_load(i->m0,(U64)si0+8U);
l6=si0;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+8U,si1);
goto L42;
L43:;
si0=l8;
si1=20U;
si0+=si1;
si1=l8;
si2=16U;
si1+=si2;
si2=l0;
si0=si2?si0:si1;
l7=si0;
L45:;
{
si0=l7;
l9=si0;
si0=l6;
l0=si0;
si1=20U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si2=l0;
si2=i32_load(i->m0,(U64)si2+20U);
l6=si2;
si0=si2?si0:si1;
l7=si0;
si0=l0;
si1=20U;
si2=16U;
si3=l6;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l6=si0;
if(si0){
goto L45;
}
}
si0=l9;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L42:;
si0=l5;
si0=!(si0);
if(si0){
goto L46;
}
si0=l8;
si1=l8;
si1=i32_load(i->m0,(U64)si1+28U);
si2=2U;
si1<<=(si2&31);
si2=2720660U;
si1+=si2;
l6=si1;
si1=i32_load(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L49;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l8;
si0=si0 == si1;
if(si0){
goto L50;
}
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
if(si0){
goto L48;
}
goto L46;
L50:;
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
if(si0){
goto L48;
}
goto L46;
L49:;
si0=l6;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si0=!(si0);
if(si0){
goto L47;
}
L48:;
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l8;
si0=i32_load(i->m0,(U64)si0+16U);
l6=si0;
si0=!(si0);
if(si0){
goto L51;
}
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l6;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
L51:;
si0=l8;
si0=i32_load(i->m0,(U64)si0+20U);
l6=si0;
si0=!(si0);
if(si0){
goto L46;
}
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l6;
si1=l0;
i32_store(i->m0,(U64)si0+24U,si1);
goto L46;
L47:;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721072U);
si2=-2U;
si3=l8;
si3=i32_load(i->m0,(U64)si3+28U);
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(i->m0,(U64)si0+2721072U,si1);
L46:;
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L53;
}
si0=l8;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l3;
si0+=si1;
l0=si0;
si1=l2;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si0+=si1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=256U;
si0=si0 < si1;
if(si0){
goto L54;
}
si0=l0;
si1=l2;
f64(i,si0,si1);
goto L52;
L54:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l6=si0;
si1=1U;
si2=l2;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l7=si1;
si0&=si1;
if(si0){
goto L56;
}
si0=0U;
si1=l6;
si2=l7;
si1|=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
si0=l2;
si1=248U;
si0&=si1;
si1=2720804U;
si0+=si1;
l2=si0;
l6=si0;
goto L55;
L56:;
si0=l2;
si1=248U;
si0&=si1;
l2=si0;
si1=2720804U;
si0+=si1;
l6=si0;
si0=l2;
si1=2720812U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
L55:;
si0=l6;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
goto L52;
L53:;
si0=l8;
si1=l2;
si2=l3;
si1+=si2;
l0=si1;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l0;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
L52:;
si0=l8;
si1=8U;
si0+=si1;
l0=si0;
if(si0){
goto L1;
}
L2:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721076U);
l0=si0;
si1=l3;
si0=si0 >= si1;
if(si0){
goto L62;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721080U);
l0=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L63;
}
si0=l1;
si1=4U;
si0+=si1;
si1=2721112U;
si2=l3;
si3=65583U;
si2+=si3;
si3=-65536U;
si2&=si3;
f80(i,si0,si1,si2);
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
if(si0){
goto L64;
}
si0=0U;
l0=si0;
goto L1;
L64:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l5=si0;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721092U);
si2=l1;
si2=i32_load(i->m0,(U64)si2+8U);
l9=si2;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0+2721092U,si1);
si0=0U;
si1=l0;
si2=0U;
si2=i32_load(i->m0,(U64)si2+2721096U);
l2=si2;
si3=l0;
si4=l2;
si3=si3 > si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+2721096U,si1);
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721088U);
l2=si0;
si0=!(si0);
if(si0){
goto L67;
}
si0=2720788U;
l0=si0;
L68:;
{
si0=l6;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l8=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
l7=si2;
si1+=si2;
si0=si0 == si1;
if(si0){
goto L66;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L68;
}
goto L65;
}
L67:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721104U);
l0=si0;
si0=!(si0);
if(si0){
goto L70;
}
si0=l6;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L69;
}
L70:;
si0=0U;
si1=l6;
i32_store(i->m0,(U64)si0+2721104U,si1);
L69:;
si0=0U;
si1=4095U;
i32_store(i->m0,(U64)si0+2721108U,si1);
si0=0U;
si1=l5;
i32_store(i->m0,(U64)si0+2720800U,si1);
si0=0U;
si1=l9;
i32_store(i->m0,(U64)si0+2720792U,si1);
si0=0U;
si1=l6;
i32_store(i->m0,(U64)si0+2720788U,si1);
si0=0U;
si1=2720804U;
i32_store(i->m0,(U64)si0+2720816U,si1);
si0=0U;
si1=2720812U;
i32_store(i->m0,(U64)si0+2720824U,si1);
si0=0U;
si1=2720804U;
i32_store(i->m0,(U64)si0+2720812U,si1);
si0=0U;
si1=2720820U;
i32_store(i->m0,(U64)si0+2720832U,si1);
si0=0U;
si1=2720812U;
i32_store(i->m0,(U64)si0+2720820U,si1);
si0=0U;
si1=2720828U;
i32_store(i->m0,(U64)si0+2720840U,si1);
si0=0U;
si1=2720820U;
i32_store(i->m0,(U64)si0+2720828U,si1);
si0=0U;
si1=2720836U;
i32_store(i->m0,(U64)si0+2720848U,si1);
si0=0U;
si1=2720828U;
i32_store(i->m0,(U64)si0+2720836U,si1);
si0=0U;
si1=2720844U;
i32_store(i->m0,(U64)si0+2720856U,si1);
si0=0U;
si1=2720836U;
i32_store(i->m0,(U64)si0+2720844U,si1);
si0=0U;
si1=2720852U;
i32_store(i->m0,(U64)si0+2720864U,si1);
si0=0U;
si1=2720844U;
i32_store(i->m0,(U64)si0+2720852U,si1);
si0=0U;
si1=2720860U;
i32_store(i->m0,(U64)si0+2720872U,si1);
si0=0U;
si1=2720852U;
i32_store(i->m0,(U64)si0+2720860U,si1);
si0=0U;
si1=2720868U;
i32_store(i->m0,(U64)si0+2720880U,si1);
si0=0U;
si1=2720860U;
i32_store(i->m0,(U64)si0+2720868U,si1);
si0=0U;
si1=2720868U;
i32_store(i->m0,(U64)si0+2720876U,si1);
si0=0U;
si1=2720876U;
i32_store(i->m0,(U64)si0+2720888U,si1);
si0=0U;
si1=2720876U;
i32_store(i->m0,(U64)si0+2720884U,si1);
si0=0U;
si1=2720884U;
i32_store(i->m0,(U64)si0+2720896U,si1);
si0=0U;
si1=2720884U;
i32_store(i->m0,(U64)si0+2720892U,si1);
si0=0U;
si1=2720892U;
i32_store(i->m0,(U64)si0+2720904U,si1);
si0=0U;
si1=2720892U;
i32_store(i->m0,(U64)si0+2720900U,si1);
si0=0U;
si1=2720900U;
i32_store(i->m0,(U64)si0+2720912U,si1);
si0=0U;
si1=2720900U;
i32_store(i->m0,(U64)si0+2720908U,si1);
si0=0U;
si1=2720908U;
i32_store(i->m0,(U64)si0+2720920U,si1);
si0=0U;
si1=2720908U;
i32_store(i->m0,(U64)si0+2720916U,si1);
si0=0U;
si1=2720916U;
i32_store(i->m0,(U64)si0+2720928U,si1);
si0=0U;
si1=2720916U;
i32_store(i->m0,(U64)si0+2720924U,si1);
si0=0U;
si1=2720924U;
i32_store(i->m0,(U64)si0+2720936U,si1);
si0=0U;
si1=2720924U;
i32_store(i->m0,(U64)si0+2720932U,si1);
si0=0U;
si1=2720932U;
i32_store(i->m0,(U64)si0+2720944U,si1);
si0=0U;
si1=2720940U;
i32_store(i->m0,(U64)si0+2720952U,si1);
si0=0U;
si1=2720932U;
i32_store(i->m0,(U64)si0+2720940U,si1);
si0=0U;
si1=2720948U;
i32_store(i->m0,(U64)si0+2720960U,si1);
si0=0U;
si1=2720940U;
i32_store(i->m0,(U64)si0+2720948U,si1);
si0=0U;
si1=2720956U;
i32_store(i->m0,(U64)si0+2720968U,si1);
si0=0U;
si1=2720948U;
i32_store(i->m0,(U64)si0+2720956U,si1);
si0=0U;
si1=2720964U;
i32_store(i->m0,(U64)si0+2720976U,si1);
si0=0U;
si1=2720956U;
i32_store(i->m0,(U64)si0+2720964U,si1);
si0=0U;
si1=2720972U;
i32_store(i->m0,(U64)si0+2720984U,si1);
si0=0U;
si1=2720964U;
i32_store(i->m0,(U64)si0+2720972U,si1);
si0=0U;
si1=2720980U;
i32_store(i->m0,(U64)si0+2720992U,si1);
si0=0U;
si1=2720972U;
i32_store(i->m0,(U64)si0+2720980U,si1);
si0=0U;
si1=2720988U;
i32_store(i->m0,(U64)si0+2721000U,si1);
si0=0U;
si1=2720980U;
i32_store(i->m0,(U64)si0+2720988U,si1);
si0=0U;
si1=2720996U;
i32_store(i->m0,(U64)si0+2721008U,si1);
si0=0U;
si1=2720988U;
i32_store(i->m0,(U64)si0+2720996U,si1);
si0=0U;
si1=2721004U;
i32_store(i->m0,(U64)si0+2721016U,si1);
si0=0U;
si1=2720996U;
i32_store(i->m0,(U64)si0+2721004U,si1);
si0=0U;
si1=2721012U;
i32_store(i->m0,(U64)si0+2721024U,si1);
si0=0U;
si1=2721004U;
i32_store(i->m0,(U64)si0+2721012U,si1);
si0=0U;
si1=2721020U;
i32_store(i->m0,(U64)si0+2721032U,si1);
si0=0U;
si1=2721012U;
i32_store(i->m0,(U64)si0+2721020U,si1);
si0=0U;
si1=2721028U;
i32_store(i->m0,(U64)si0+2721040U,si1);
si0=0U;
si1=2721020U;
i32_store(i->m0,(U64)si0+2721028U,si1);
si0=0U;
si1=2721036U;
i32_store(i->m0,(U64)si0+2721048U,si1);
si0=0U;
si1=2721028U;
i32_store(i->m0,(U64)si0+2721036U,si1);
si0=0U;
si1=2721044U;
i32_store(i->m0,(U64)si0+2721056U,si1);
si0=0U;
si1=2721036U;
i32_store(i->m0,(U64)si0+2721044U,si1);
si0=0U;
si1=2721052U;
i32_store(i->m0,(U64)si0+2721064U,si1);
si0=0U;
si1=2721044U;
i32_store(i->m0,(U64)si0+2721052U,si1);
si0=0U;
si1=l6;
si2=15U;
si1+=si2;
si2=-8U;
si1&=si2;
l0=si1;
si2=-8U;
si1+=si2;
l2=si1;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=0U;
si1=2721052U;
i32_store(i->m0,(U64)si0+2721060U,si1);
si0=0U;
si1=l6;
si2=l0;
si1-=si2;
si2=l9;
si3=-40U;
si2+=si3;
l0=si2;
si1+=si2;
si2=8U;
si1+=si2;
l8=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=l2;
si1=l8;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l0;
si0+=si1;
si1=40U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
si1=2097152U;
i32_store(i->m0,(U64)si0+2721100U,si1);
goto L57;
L66:;
si0=l2;
si1=l6;
si0=si0 >= si1;
if(si0){
goto L65;
}
si0=l8;
si1=l2;
si0=si0 > si1;
if(si0){
goto L65;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l8=si0;
si1=1U;
si0&=si1;
if(si0){
goto L65;
}
si0=l8;
si1=1U;
si0>>=(si1&31);
si1=l5;
si0=si0 == si1;
if(si0){
goto L61;
}
L65:;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721104U);
l0=si1;
si2=l6;
si3=l0;
si4=l6;
si3=si3 < si4;
si1=si3?si1:si2;
i32_store(i->m0,(U64)si0+2721104U,si1);
si0=l6;
si1=l9;
si0+=si1;
l8=si0;
si0=2720788U;
l0=si0;
L74:;
{
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=l8;
si0=si0 == si1;
if(si0){
goto L73;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L74;
}
goto L72;
}
L73:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l8=si0;
si1=1U;
si0&=si1;
if(si0){
goto L72;
}
si0=l8;
si1=1U;
si0>>=(si1&31);
si1=l5;
si0=si0 == si1;
if(si0){
goto L71;
}
L72:;
si0=2720788U;
l0=si0;
L76:;
{
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L77;
}
si0=l2;
si1=l8;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si1+=si2;
l8=si1;
si0=si0 < si1;
if(si0){
goto L75;
}
L77:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
goto L76;
}
L75:;
si0=0U;
si1=l6;
si2=15U;
si1+=si2;
si2=-8U;
si1&=si2;
l0=si1;
si2=-8U;
si1+=si2;
l7=si1;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=0U;
si1=l6;
si2=l0;
si1-=si2;
si2=l9;
si3=-40U;
si2+=si3;
l0=si2;
si1+=si2;
si2=8U;
si1+=si2;
l4=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=l7;
si1=l4;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l6;
si1=l0;
si0+=si1;
si1=40U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
si1=2097152U;
i32_store(i->m0,(U64)si0+2721100U,si1);
si0=l2;
si1=l8;
si2=-32U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=-8U;
si1+=si2;
l0=si1;
si2=l0;
si3=l2;
si4=16U;
si3+=si4;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=27U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
sj0=i64_load(i->m0,(U64)si0+2720788U);
l10=sj0;
si0=l7;
si1=16U;
si0+=si1;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2720796U);
i64_store(i->m0,(U64)si0,sj1);
si0=l7;
si1=8U;
si0+=si1;
l0=si0;
sj1=l10;
i64_store(i->m0,(U64)si0,sj1);
si0=0U;
si1=l5;
i32_store(i->m0,(U64)si0+2720800U,si1);
si0=0U;
si1=l9;
i32_store(i->m0,(U64)si0+2720792U,si1);
si0=0U;
si1=l6;
i32_store(i->m0,(U64)si0+2720788U,si1);
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+2720796U,si1);
si0=l7;
si1=28U;
si0+=si1;
l0=si0;
L78:;
{
si0=l0;
si1=7U;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=4U;
si0+=si1;
l0=si0;
si1=l8;
si0=si0 < si1;
if(si0){
goto L78;
}
}
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L57;
}
si0=l7;
si1=l7;
si1=i32_load(i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l7;
si2=l2;
si1-=si2;
l0=si1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=256U;
si0=si0 < si1;
if(si0){
goto L79;
}
si0=l2;
si1=l0;
f64(i,si0,si1);
goto L57;
L79:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l8=si0;
si1=1U;
si2=l0;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l6=si1;
si0&=si1;
if(si0){
goto L81;
}
si0=0U;
si1=l8;
si2=l6;
si1|=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
si0=l0;
si1=248U;
si0&=si1;
si1=2720804U;
si0+=si1;
l0=si0;
l8=si0;
goto L80;
L81:;
si0=l0;
si1=248U;
si0&=si1;
l0=si0;
si1=2720804U;
si0+=si1;
l8=si0;
si0=l0;
si1=2720812U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
L80:;
si0=l8;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l8;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
goto L57;
L71:;
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l9;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l6;
si1=15U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=-8U;
si0+=si1;
l8=si0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=15U;
si0+=si1;
si1=-8U;
si0&=si1;
si1=-8U;
si0+=si1;
l2=si0;
si1=l8;
si2=l3;
si1+=si2;
l0=si1;
si0-=si1;
l3=si0;
si0=l2;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721088U);
si0=si0 == si1;
if(si0){
goto L60;
}
si0=l2;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 == si1;
if(si0){
goto L59;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si1=3U;
si0&=si1;
si1=1U;
si0=si0 != si1;
if(si0){
goto L82;
}
si0=l2;
si1=l6;
si2=-8U;
si1&=si2;
l6=si1;
f59(i,si0,si1);
si0=l6;
si1=l3;
si0+=si1;
l3=si0;
si0=l2;
si1=l6;
si0+=si1;
l2=si0;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
L82:;
si0=l2;
si1=l6;
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=256U;
si0=si0 < si1;
if(si0){
goto L83;
}
si0=l0;
si1=l3;
f64(i,si0,si1);
goto L58;
L83:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l2=si0;
si1=1U;
si2=l3;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l6=si1;
si0&=si1;
if(si0){
goto L85;
}
si0=0U;
si1=l2;
si2=l6;
si1|=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
si0=l3;
si1=248U;
si0&=si1;
si1=2720804U;
si0+=si1;
l3=si0;
l2=si0;
goto L84;
L85:;
si0=l3;
si1=248U;
si0&=si1;
l3=si0;
si1=2720804U;
si0+=si1;
l2=si0;
si0=l3;
si1=2720812U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
L84:;
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
goto L58;
L63:;
si0=0U;
si1=l0;
si2=l3;
si1-=si2;
l2=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721088U);
l0=si1;
si2=l3;
si1+=si2;
l8=si1;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=l8;
si1=l2;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L62:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721084U);
l2=si0;
si0=l0;
si1=l3;
si0-=si1;
l8=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L87;
}
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=l2;
si1=l0;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si0+=si1;
l0=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
goto L86;
L87:;
si0=0U;
si1=l8;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=0U;
si1=l2;
si2=l3;
si1+=si2;
l6=si1;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=l6;
si1=l8;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l0;
si0+=si1;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
L86:;
si0=l2;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L61:;
si0=l0;
si1=l7;
si2=l9;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721088U);
l0=si1;
si2=15U;
si1+=si2;
si2=-8U;
si1&=si2;
l2=si1;
si2=-8U;
si1+=si2;
l8=si1;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=0U;
si1=l0;
si2=l2;
si1-=si2;
si2=0U;
si2=i32_load(i->m0,(U64)si2+2721080U);
si3=l9;
si2+=si3;
l2=si2;
si1+=si2;
si2=8U;
si1+=si2;
l6=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=l8;
si1=l6;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
si0+=si1;
si1=40U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
si1=2097152U;
i32_store(i->m0,(U64)si0+2721100U,si1);
goto L57;
L60:;
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721080U);
si2=l3;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
goto L58;
L59:;
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721076U);
si2=l3;
si1+=si2;
l3=si1;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=l0;
si1=l3;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
L58:;
si0=l8;
si1=8U;
si0+=si1;
l0=si0;
goto L1;
L57:;
si0=0U;
l0=si0;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721080U);
l2=si0;
si1=l3;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=0U;
si1=l2;
si2=l3;
si1-=si2;
l2=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721088U);
l0=si1;
si2=l3;
si1+=si2;
l8=si1;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=l8;
si1=l2;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l3;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=8U;
si0+=si1;
l0=si0;
L1:;
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l0;
L0:;
return si0;
}

void f55(gauche_ffiInstance*i) {
UNREACHABLE;
L0:;
}

void f56(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=-8U;
si0&=si1;
l4=si0;
si1=4U;
si2=8U;
si3=l3;
si4=3U;
si3&=si4;
l3=si3;
si1=si3?si1:si2;
si2=l1;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L3;
}
si0=l4;
si1=l1;
si2=39U;
si1+=si2;
si0=si0 > si1;
if(si0){
goto L1;
}
L3:;
si0=l0;
f57(i,si0);
goto L0;
L2:;
si0=2704068U;
si1=46U;
si2=2704116U;
f95(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=2704132U;
si1=46U;
si2=2704180U;
f95(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f57(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=-8U;
si0+=si1;
l1=si0;
si1=l0;
si2=-4U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=-8U;
si1&=si2;
l0=si1;
si0+=si1;
l3=si0;
si0=l2;
si1=1U;
si0&=si1;
if(si0){
goto L2;
}
si0=l2;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si1=l0;
si0+=si1;
l0=si0;
si0=l1;
si1=l2;
si0-=si1;
l1=si0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
si1=3U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=l3;
si1=l3;
si1=i32_load(i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L3:;
si0=l1;
si1=l2;
f59(i,si0,si1);
L2:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si1=2U;
si0&=si1;
if(si0){
goto L11;
}
si0=l3;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721088U);
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l3;
si1=l2;
si2=-8U;
si1&=si2;
l2=si1;
f59(i,si0,si1);
si0=l1;
si1=l2;
si2=l0;
si1+=si2;
l0=si1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 != si1;
if(si0){
goto L10;
}
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+2721076U,si1);
goto L0;
L11:;
si0=l3;
si1=l2;
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
L10:;
si0=l0;
si1=256U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l1;
si1=l0;
f64(i,si0,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721108U);
si2=-1U;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0+2721108U,si1);
si0=l1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2720796U);
l0=si0;
if(si0){
goto L7;
}
si0=4095U;
l1=si0;
goto L6;
L9:;
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721080U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 != si1;
if(si0){
goto L12;
}
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+2721084U,si1);
L12:;
si0=l0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721100U);
l2=si1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721088U);
l0=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721080U);
l4=si0;
si1=41U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=2720788U;
l1=si0;
L13:;
{
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l0;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l0;
si1=l3;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
si1+=si2;
si0=si0 < si1;
if(si0){
goto L4;
}
L14:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
goto L13;
}
L8:;
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721076U);
si2=l0;
si1+=si2;
l0=si1;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=l1;
si1=l0;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l0;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L7:;
si0=0U;
l1=si0;
L15:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L15;
}
}
si0=l1;
si1=4095U;
si2=l1;
si3=4095U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
L6:;
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721108U,si1);
goto L0;
L5:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l3=si0;
si1=1U;
si2=l0;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l2=si1;
si0&=si1;
if(si0){
goto L17;
}
si0=0U;
si1=l3;
si2=l2;
si1|=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
si0=l0;
si1=248U;
si0&=si1;
si1=2720804U;
si0+=si1;
l0=si0;
l3=si0;
goto L16;
L17:;
si0=l0;
si1=248U;
si0&=si1;
l0=si0;
si1=2720804U;
si0+=si1;
l3=si0;
si0=l0;
si1=2720812U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
L16:;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
goto L0;
L4:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2720796U);
l0=si0;
if(si0){
goto L19;
}
si0=4095U;
l1=si0;
goto L18;
L19:;
si0=0U;
l1=si0;
L20:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l0=si0;
if(si0){
goto L20;
}
}
si0=l1;
si1=4095U;
si2=l1;
si3=4095U;
si2=si2 > si3;
si0=si2?si0:si1;
l1=si0;
L18:;
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721108U,si1);
si0=l4;
si1=l2;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=0U;
si1=-1U;
i32_store(i->m0,(U64)si0+2721100U,si1);
L1:;
L0:;
}

U32 f58(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=-4U;
si0+=si1;
l4=si0;
si0=i32_load(i->m0,(U64)si0);
l5=si0;
si1=-8U;
si0&=si1;
l6=si0;
si1=4U;
si2=8U;
si3=l5;
si4=3U;
si3&=si4;
l7=si3;
si1=si3?si1:si2;
si2=l1;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=39U;
si0+=si1;
l8=si0;
si0=l7;
si0=!(si0);
if(si0){
goto L9;
}
si0=l6;
si1=l8;
si0=si0 > si1;
if(si0){
goto L7;
}
L9:;
si0=l2;
si1=9U;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l2;
si1=l3;
si0=f53(i,si0,si1);
l2=si0;
if(si0){
goto L10;
}
si0=0U;
goto L0;
L11:;
si0=0U;
l2=si0;
si0=l3;
si1=-65588U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=16U;
si1=l3;
si2=11U;
si1+=si2;
si2=-8U;
si1&=si2;
si2=l3;
si3=11U;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
si0=l0;
si1=-8U;
si0+=si1;
l8=si0;
si0=l7;
if(si0){
goto L12;
}
si0=l1;
si1=256U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l6;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l6;
si1=l1;
si0-=si1;
si1=131072U;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l0;
goto L0;
L12:;
si0=l8;
si1=l6;
si0+=si1;
l7=si0;
si0=l6;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l7;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721088U);
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l7;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 == si1;
if(si0){
goto L15;
}
si0=l7;
si0=i32_load(i->m0,(U64)si0+4U);
l5=si0;
si1=2U;
si0&=si1;
if(si0){
goto L3;
}
si0=l5;
si1=-8U;
si0&=si1;
l9=si0;
si1=l6;
si0+=si1;
l5=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l7;
si1=l9;
f59(i,si0,si1);
si0=l5;
si1=l1;
si0-=si1;
l7=si0;
si1=16U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l4;
si1=l1;
si2=l4;
si2=i32_load(i->m0,(U64)si2);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
si0+=si1;
l1=si0;
si1=l7;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l5;
si0+=si1;
l5=si0;
si1=l5;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l7;
f60(i,si0,si1);
goto L4;
L16:;
si0=l4;
si1=l5;
si2=l4;
si2=i32_load(i->m0,(U64)si2);
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l5;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
goto L4;
L15:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721076U);
si1=l6;
si0+=si1;
l7=si0;
si1=l1;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l7;
si1=l1;
si0-=si1;
l6=si0;
si1=15U;
si0=si0 > si1;
if(si0){
goto L18;
}
si0=l4;
si1=l5;
si2=1U;
si1&=si2;
si2=l7;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l7;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l6=si0;
si0=0U;
l1=si0;
goto L17;
L18:;
si0=l4;
si1=l1;
si2=l5;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
si0+=si1;
l1=si0;
si1=l6;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l8;
si1=l7;
si0+=si1;
l7=si0;
si1=l6;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si1=l7;
si1=i32_load(i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
L17:;
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=0U;
si1=l6;
i32_store(i->m0,(U64)si0+2721076U,si1);
goto L4;
L14:;
si0=l6;
si1=l1;
si0-=si1;
l6=si0;
si1=15U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l4;
si1=l1;
si2=l5;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
si0+=si1;
l1=si0;
si1=l6;
si2=3U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=l7;
si1=i32_load(i->m0,(U64)si1+4U);
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l6;
f60(i,si0,si1);
goto L4;
L13:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721080U);
si1=l6;
si0+=si1;
l7=si0;
si1=l1;
si0=si0 > si1;
if(si0){
goto L5;
}
goto L3;
L10:;
si0=l3;
si1=l1;
si2=l3;
si3=l1;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L19;
}
si0=l2;
si1=l0;
si2=l3;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
L19:;
si0=l4;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=-8U;
si0&=si1;
l7=si0;
si1=4U;
si2=8U;
si3=l3;
si4=3U;
si3&=si4;
l3=si3;
si1=si3?si1:si2;
si2=l1;
si1+=si2;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L2;
}
si0=2704132U;
si1=46U;
si2=2704180U;
f95(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=2704068U;
si1=46U;
si2=2704116U;
f95(i,si0,si1,si2);
UNREACHABLE;
L7:;
si0=2704132U;
si1=46U;
si2=2704180U;
f95(i,si0,si1,si2);
UNREACHABLE;
L6:;
si0=2704068U;
si1=46U;
si2=2704116U;
f95(i,si0,si1,si2);
UNREACHABLE;
L5:;
si0=l4;
si1=l1;
si2=l5;
si3=1U;
si2&=si3;
si1|=si2;
si2=2U;
si1|=si2;
i32_store(i->m0,(U64)si0,si1);
si0=l8;
si1=l1;
si0+=si1;
l5=si0;
si1=l7;
si2=l1;
si1-=si2;
l1=si1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=0U;
si1=l5;
i32_store(i->m0,(U64)si0+2721088U,si1);
L4:;
si0=l8;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
goto L0;
L3:;
si0=l3;
si0=f54(i,si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=-4U;
si2=-8U;
si3=l4;
si3=i32_load(i->m0,(U64)si3);
l2=si3;
si4=3U;
si3&=si4;
si1=si3?si1:si2;
si2=l2;
si3=-8U;
si2&=si3;
si1+=si2;
l2=si1;
si2=l3;
si3=l2;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
si0=!(si0);
if(si0){
goto L20;
}
si0=l1;
si1=l0;
si2=l3;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
L20:;
si0=l1;
l2=si0;
L2:;
si0=l0;
f57(i,si0);
L1:;
si0=l2;
L0:;
return si0;
}

void f59(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0+12U);
l2=si0;
si0=l1;
si1=256U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+24U);
l3=si0;
si0=l2;
si1=l0;
si0=si0 != si1;
if(si0){
goto L7;
}
si0=l0;
si1=20U;
si2=16U;
si3=l0;
si3=i32_load(i->m0,(U64)si3+20U);
l2=si3;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L5;
L7:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
goto L5;
L6:;
si0=l0;
si1=20U;
si0+=si1;
si1=l0;
si2=16U;
si1+=si2;
si2=l2;
si0=si2?si0:si1;
l4=si0;
L8:;
{
si0=l4;
l5=si0;
si0=l1;
l2=si0;
si1=20U;
si0+=si1;
si1=l2;
si2=16U;
si1+=si2;
si2=l2;
si2=i32_load(i->m0,(U64)si2+20U);
l1=si2;
si0=si2?si0:si1;
l4=si0;
si0=l2;
si1=20U;
si2=16U;
si3=l1;
si1=si3?si1:si2;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
if(si0){
goto L8;
}
}
si0=l5;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L5:;
si0=l3;
si0=!(si0);
if(si0){
goto L2;
}
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+28U);
si2=2U;
si1<<=(si2&31);
si2=2720660U;
si1+=si2;
l1=si1;
si1=i32_load(i->m0,(U64)si1);
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+16U);
si1=l0;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
if(si0){
goto L3;
}
goto L2;
L10:;
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
goto L3;
L9:;
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
if(si0){
goto L3;
}
goto L2;
L4:;
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1+8U);
l4=si1;
si0=si0 == si1;
if(si0){
goto L11;
}
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
goto L0;
L11:;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721068U);
si2=-2U;
si3=l1;
si4=3U;
si3>>=(si4&31);
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
goto L0;
L3:;
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si0=i32_load(i->m0,(U64)si0+16U);
l1=si0;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
L12:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+20U);
l1=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
goto L0;
L2:;
goto L0;
L1:;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721072U);
si2=-2U;
si3=l0;
si3=i32_load(i->m0,(U64)si3+28U);
si2=I32_ROTL(si2,si3);
si1&=si2;
i32_store(i->m0,(U64)si0+2721072U,si1);
L0:;
}

void f60(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=l1;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=1U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=2U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=l1;
si0+=si1;
l1=si0;
si0=l0;
si1=l3;
si0-=si1;
l0=si0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 != si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
si1=3U;
si0&=si1;
si1=3U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+4U);
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l0;
si1=l3;
f59(i,si0,si1);
L2:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=2U;
si0&=si1;
if(si0){
goto L7;
}
si0=l2;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721088U);
si0=si0 == si1;
if(si0){
goto L5;
}
si0=l2;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si2=-8U;
si1&=si2;
l3=si1;
f59(i,si0,si1);
si0=l0;
si1=l3;
si2=l1;
si1+=si2;
l1=si1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 != si1;
if(si0){
goto L6;
}
si0=0U;
si1=l1;
i32_store(i->m0,(U64)si0+2721076U,si1);
goto L0;
L7:;
si0=l2;
si1=l3;
si2=-2U;
si1&=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L6:;
si0=l1;
si1=256U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l0;
si1=l1;
f64(i,si0,si1);
goto L0;
L8:;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721068U);
l2=si0;
si1=1U;
si2=l1;
si3=3U;
si2>>=(si3&31);
si1<<=(si2&31);
l3=si1;
si0&=si1;
if(si0){
goto L10;
}
si0=0U;
si1=l2;
si2=l3;
si1|=si2;
i32_store(i->m0,(U64)si0+2721068U,si1);
si0=l1;
si1=248U;
si0&=si1;
si1=2720804U;
si0+=si1;
l1=si0;
l2=si0;
goto L9;
L10:;
si0=l1;
si1=248U;
si0&=si1;
l1=si0;
si1=2720804U;
si0+=si1;
l2=si0;
si0=l1;
si1=2720812U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
L9:;
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
goto L0;
L5:;
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+2721088U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721080U);
si2=l1;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0+2721080U,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721084U);
si0=si0 != si1;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=0U;
si1=0U;
i32_store(i->m0,(U64)si0+2721084U,si1);
goto L0;
L4:;
si0=0U;
si1=l0;
i32_store(i->m0,(U64)si0+2721084U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721076U);
si2=l1;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0+2721076U,si1);
si0=l0;
si1=l1;
si2=1U;
si1|=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
si0+=si1;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L1:;
L0:;
}

void f61(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U64 l2=0;
U32 si0,si1;
U64 sj0,sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l0;
sj0=i64_load(i->m0,(U64)si0);
l2=sj0;
si0=l1;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l1;
sj1=l2;
i64_store(i->m0,(U64)si0+4U,sj1);
si0=l1;
si1=4U;
si0+=si1;
f46(i,si0);
UNREACHABLE;
L0:;
}

void f62(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=l0;
f63(i,si0,si1);
UNREACHABLE;
L0:;
}

void f63(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 si0,si1;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l2;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l2;
si1=8U;
si0+=si1;
f44(i,si0);
UNREACHABLE;
L0:;
}

void f64(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=0U;
l2=si0;
si0=l1;
si1=8U;
si0>>=(si1&31);
l3=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=31U;
l2=si0;
si0=l1;
si1=16777216U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
si1=38U;
si2=l3;
si2=I32_CLZ(si2);
l2=si2;
si1-=si2;
si0>>=(si1&31);
si1=1U;
si0&=si1;
si1=l2;
si2=1U;
si1<<=(si2&31);
si0|=si1;
si1=62U;
si0^=si1;
l2=si0;
L1:;
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
si1=2U;
si0<<=(si1&31);
si1=2720660U;
si0+=si1;
l3=si0;
si0=0U;
si0=i32_load(i->m0,(U64)si0+2721072U);
si1=1U;
si2=l2;
si1<<=(si2&31);
l4=si1;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2721072U);
si2=l4;
si1|=si2;
i32_store(i->m0,(U64)si0+2721072U,si1);
goto L0;
L2:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=l4;
l2=si0;
goto L4;
L5:;
si0=l1;
si1=0U;
si2=25U;
si3=l2;
si4=1U;
si3>>=(si4&31);
si2-=si3;
si3=l2;
si4=31U;
si3=si3 == si4;
si1=si3?si1:si2;
si0<<=(si1&31);
l3=si0;
L6:;
{
si0=l4;
si1=l3;
si2=29U;
si1>>=(si2&31);
si2=4U;
si1&=si2;
si0+=si1;
l5=si0;
si0=i32_load(i->m0,(U64)si0+16U);
l2=si0;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=1U;
si0<<=(si1&31);
l3=si0;
si0=l2;
l4=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
si1=-8U;
si0&=si1;
si1=l1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L4:;
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l2;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
goto L0;
L3:;
si0=l5;
si1=16U;
si0+=si1;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
L0:;
}

U32 f65(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
si0=0U;
l1=si0;
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2720656U);
l2=si1;
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+2720656U,si1);
si0=l2;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=1U;
l1=si0;
si0=0U;
si0=i32_load8_u(i->m0,(U64)si0+2720612U);
if(si0){
goto L1;
}
si0=0U;
si1=l0;
i32_store8(i->m0,(U64)si0+2720612U,si1);
si0=0U;
si1=0U;
si1=i32_load(i->m0,(U64)si1+2720608U);
si2=1U;
si1+=si2;
i32_store(i->m0,(U64)si0+2720608U,si1);
si0=2U;
l1=si0;
L1:;
si0=l1;
L0:;
return si0;
}

void f66(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
i->g0=si0;
si0=l1;
si1=0U;
i32_store8(i->m0,(U64)si0+15U,si1);
f8(i);
si0=1U;
si1=1U;
si0=f5(i,si0,si1);
l2=si0;
if(si0){
goto L1;
}
si0=1U;
si1=1U;
f87(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l1;
si2=15U;
si1+=si2;
sj1=(U64)(si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=l2;
sj1=(U64)(si1);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l2;
si1=1U;
si2=1U;
f6(i,si0,si1,si2);
si0=l1;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f67(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2704060U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2704052U);
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f68(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2704044U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=0U;
sj1=i64_load(i->m0,(U64)si1+2704036U);
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

U32 f69(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
si0=f112(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l0;
si2=i32_load(i->m0,(U64)si2+12U);
si2=i32_load(i->m0,(U64)si2);
l0=si2;
si2=i32_load(i->m0,(U64)si2);
si3=l0;
si3=i32_load(i->m0,(U64)si3+4U);
si0=f100(i,si0,si1,si2,si3);
L0:;
return si0;
}

void f70(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=2704196U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f71(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
U64 sj1;
si0=l0;
si1=l1;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
L0:;
}

void f72(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 si0,si1;
si0=l1;
si0=i32_load(i->m0,(U64)si0+4U);
l2=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
f8(i);
si0=8U;
si1=4U;
si0=f5(i,si0,si1);
l1=si0;
if(si0){
goto L1;
}
si0=4U;
si1=8U;
f87(i,si0,si1);
UNREACHABLE;
L1:;
si0=l1;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=2704196U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f73(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si0=f112(i,si0,si1,si2);
L0:;
return si0;
}

U32 f74(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=2048U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=2U;
l3=si0;
goto L1;
L3:;
si0=3U;
si1=4U;
si2=l1;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L1:;
si0=l2;
l4=si0;
si0=l3;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=l2;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l2;
si2=l3;
si3=1U;
si4=1U;
f40(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
l4=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l5=si0;
si0=l1;
si1=6U;
si0>>=(si1&31);
l6=si0;
si0=l1;
si1=2048U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l5;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l6;
si2=192U;
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=l1;
si1=12U;
si0>>=(si1&31);
l7=si0;
si0=l6;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l6=si0;
si0=l1;
si1=65535U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store8(i->m0,(U64)si0+2U,si1);
si0=l4;
si1=l6;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l7;
si2=224U;
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
goto L5;
L8:;
si0=l4;
si1=l5;
i32_store8(i->m0,(U64)si0+3U,si1);
si0=l4;
si1=l6;
i32_store8(i->m0,(U64)si0+2U,si1);
si0=l4;
si1=l7;
si2=63U;
si1&=si2;
si2=-128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=-16U;
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l4;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
L5:;
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f75(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
l3=si2;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=l2;
si3=1U;
si4=1U;
f40(i,si0,si1,si2,si3,si4);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L2;
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

void f76(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l2;
sj1=W2C2_LL(4294967296U);
i64_store(i->m0,(U64)si0+20U,sj1);
si0=l2;
si1=20U;
si0+=si1;
si1=2703956U;
si2=l3;
si2=i32_load(i->m0,(U64)si2);
l3=si2;
si2=i32_load(i->m0,(U64)si2);
si3=l3;
si3=i32_load(i->m0,(U64)si3+4U);
si0=f100(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+28U);
l3=si1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+20U);
l4=sj1;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
sj1=l4;
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=2704212U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f77(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=-2147483648U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l3=si0;
si0=l2;
si1=0U;
i32_store(i->m0,(U64)si0+44U,si1);
si0=l2;
sj1=W2C2_LL(4294967296U);
i64_store(i->m0,(U64)si0+36U,sj1);
si0=l2;
si1=36U;
si0+=si1;
si1=2703956U;
si2=l3;
si2=i32_load(i->m0,(U64)si2);
l3=si2;
si2=i32_load(i->m0,(U64)si2);
si3=l3;
si3=i32_load(i->m0,(U64)si3+4U);
si0=f100(i,si0,si1,si2,si3);
si0=l2;
si1=l2;
si1=i32_load(i->m0,(U64)si1+44U);
l3=si1;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+36U);
l4=sj1;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l1;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
sj1=l4;
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si0=l1;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
sj0=i64_load(i->m0,(U64)si0);
l4=sj0;
si0=l1;
sj1=W2C2_LL(4294967296U);
i64_store(i->m0,(U64)si0,sj1);
si0=l2;
si1=l3;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l2;
sj1=l4;
i64_store(i->m0,(U64)si0+8U,sj1);
f8(i);
si0=12U;
si1=4U;
si0=f5(i,si0,si1);
l1=si0;
if(si0){
goto L2;
}
si0=4U;
si1=12U;
f87(i,si0,si1);
UNREACHABLE;
L2:;
si0=l1;
si1=l2;
si1=i32_load(i->m0,(U64)si1+16U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l1;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
si1=2704212U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

void f78(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

U32 f79(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
si0=l0;
si1=2703956U;
si2=l1;
si3=l2;
si0=f100(i,si0,si1,si2,si3);
L0:;
return si0;
}

void f80(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4;
si0=l2;
si1=16U;
si0>>=(si1&31);
si1=l2;
si2=65535U;
si1&=si2;
si2=0U;
si1=si1 != si2;
si0+=si1;
l2=si0;
si0=wasmMemoryGrow(i->m0,si0);
l3=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
si0=0U;
l4=si0;
goto L1;
L2:;
si0=l2;
si1=16U;
si0<<=(si1&31);
l4=si0;
si1=-16U;
si0+=si1;
si1=l4;
si2=l3;
si3=16U;
si2<<=(si3&31);
l2=si2;
si3=0U;
si4=l4;
si3-=si4;
si2=si2 == si3;
si0=si2?si0:si1;
l4=si0;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f81(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=2704228U;
si1=57U;
si2=2704256U;
f98(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f82(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1;
si0=l1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l2;
si1=l3;
f87(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f83(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l1;
si2=1U;
f6(i,si0,si1,si2);
L1:;
L0:;
}

void f84(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=l1;
si0+=si1;
l1=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=0U;
si1=0U;
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l3;
si1=4U;
si0+=si1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
l2=si1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si3=l1;
si4=l2;
si5=1U;
si4<<=(si5&31);
l2=si4;
si5=l1;
si6=l2;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
si4=8U;
si5=l2;
si6=8U;
si5=si5 > si6;
si3=si5?si3:si4;
l2=si3;
f86(i,si0,si1,si2,si3);
si0=l3;
si0=i32_load(i->m0,(U64)si0+4U);
si1=1U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
si1=l3;
si1=i32_load(i->m0,(U64)si1+12U);
f85(i,si0,si1);
UNREACHABLE;
L2:;
si0=l3;
si0=i32_load(i->m0,(U64)si0+8U);
l1=si0;
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

void f85(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si1=l1;
f87(i,si0,si1);
UNREACHABLE;
L1:;
f88(i);
UNREACHABLE;
L0:;
}

void f86(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3;
si0=l3;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L2;
}
si0=1U;
l1=si0;
si0=4U;
l2=si0;
si0=0U;
l3=si0;
goto L1;
L2:;
si0=l1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l2;
si1=l1;
si2=1U;
si3=l3;
si0=f7(i,si0,si1,si2,si3);
l1=si0;
goto L5;
L6:;
si0=l3;
if(si0){
goto L7;
}
si0=1U;
l1=si0;
goto L4;
L7:;
f8(i);
si0=l3;
si1=1U;
si0=f5(i,si0,si1);
l1=si0;
L5:;
si0=l1;
if(si0){
goto L4;
}
si0=1U;
l1=si0;
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0+4U,si1);
goto L3;
L4:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=0U;
l1=si0;
L3:;
si0=8U;
l2=si0;
L1:;
si0=l0;
si1=l2;
si0+=si1;
si1=l3;
i32_store(i->m0,(U64)si0,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f87(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1;
si0=l1;
si1=l0;
f62(i,si0,si1);
UNREACHABLE;
L0:;
}

void f88(gauche_ffiInstance*i) {
U32 si0,si1,si2;
si0=2704272U;
si1=35U;
si2=2704292U;
f98(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f89(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l2;
si1=1U;
si0>>=(si1&31);
l4=si0;
goto L6;
L7:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l5=si0;
si0=l1;
l6=si0;
si0=0U;
l7=si0;
L8:;
{
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
si0=l4;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L10;
}
si0=l4;
si1=255U;
si0&=si1;
si1=128U;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l5;
si1=l6;
si1=i32_load16_u(i->m0,(U64)si1);
l4=si1;
si0+=si1;
l5=si0;
si0=l6;
si1=l4;
si0+=si1;
si1=2U;
si0+=si1;
l6=si0;
goto L9;
L11:;
si0=l6;
si1=l4;
si2=3U;
si1&=si2;
si2=8U;
si1=I32_ROTR(si1,si2);
l8=si1;
si2=5U;
si1<<=(si2&31);
si2=1073741824U;
si1&=si2;
si2=l8;
si3=7U;
si2<<=(si3&31);
si1|=si2;
si2=29U;
si1>>=(si2&31);
si0+=si1;
si1=l4;
si2=1U;
si1>>=(si2&31);
si2=2U;
si1&=si2;
si0+=si1;
si1=l4;
si2=2U;
si1>>=(si2&31);
si2=2U;
si1&=si2;
si0+=si1;
l6=si0;
si0=l5;
si0=!(si0);
si1=l7;
si0|=si1;
l7=si0;
goto L9;
L10:;
si0=l6;
si1=l4;
si2=255U;
si1&=si2;
l4=si1;
si0+=si1;
l6=si0;
si0=l5;
si1=l4;
si0+=si1;
l5=si0;
L9:;
si0=l6;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
if(si0){
goto L8;
}
}
si0=0U;
l4=si0;
si0=l7;
si1=l5;
si2=16U;
si1=si1 < si2;
si0&=si1;
if(si0){
goto L6;
}
si0=0U;
l7=si0;
si0=l5;
si1=1U;
si0<<=(si1&31);
l4=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L2;
}
L6:;
si0=l4;
if(si0){
goto L4;
}
L5:;
si0=1U;
l6=si0;
si0=0U;
l4=si0;
goto L3;
L4:;
f8(i);
si0=1U;
l7=si0;
si0=l4;
si1=1U;
si0=f5(i,si0,si1);
l6=si0;
si0=!(si0);
if(si0){
goto L2;
}
L3:;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=l4;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=2704308U;
si2=l1;
si3=l2;
si0=f100(i,si0,si1,si2,si3);
si0=!(si0);
if(si0){
goto L1;
}
si0=2704348U;
si1=86U;
si2=l3;
si3=15U;
si2+=si3;
si3=2704332U;
si4=2704436U;
f120(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L2:;
si0=l7;
si1=l4;
f85(i,si0,si1);
UNREACHABLE;
L1:;
si0=l0;
si1=l3;
si1=i32_load(i->m0,(U64)si1+8U);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=16U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f90(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=2704452U;
si2=5U;
si0=f112(i,si0,si1,si2);
L0:;
return si0;
}

U32 f91(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si0=l1;
si1=128U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l1;
si1=2048U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=2U;
l3=si0;
goto L1;
L3:;
si0=3U;
si1=4U;
si2=l1;
si3=65536U;
si2=si2 < si3;
si0=si2?si0:si1;
l3=si0;
L1:;
si0=l2;
l4=si0;
si0=l3;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=l2;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l0;
si1=l2;
si2=l3;
f84(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l4;
si0+=si1;
l4=si0;
si0=l1;
si1=128U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l1;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l5=si0;
si0=l1;
si1=6U;
si0>>=(si1&31);
l6=si0;
si0=l1;
si1=2048U;
si0=si0 >= si1;
if(si0){
goto L7;
}
si0=l4;
si1=l5;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l6;
si2=192U;
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
goto L5;
L7:;
si0=l1;
si1=12U;
si0>>=(si1&31);
l7=si0;
si0=l6;
si1=63U;
si0&=si1;
si1=-128U;
si0|=si1;
l6=si0;
si0=l1;
si1=65535U;
si0=si0 > si1;
if(si0){
goto L8;
}
si0=l4;
si1=l5;
i32_store8(i->m0,(U64)si0+2U,si1);
si0=l4;
si1=l6;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l7;
si2=224U;
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
goto L5;
L8:;
si0=l4;
si1=l5;
i32_store8(i->m0,(U64)si0+3U,si1);
si0=l4;
si1=l6;
i32_store8(i->m0,(U64)si0+2U,si1);
si0=l4;
si1=l7;
si2=63U;
si1&=si2;
si2=-128U;
si1|=si2;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l4;
si1=l1;
si2=18U;
si1>>=(si2&31);
si2=-16U;
si1|=si2;
i32_store8(i->m0,(U64)si0,si1);
goto L5;
L6:;
si0=l4;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
L5:;
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

U32 f92(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
l3=si2;
si1-=si2;
si0=si0 <= si1;
if(si0){
goto L3;
}
si0=l0;
si1=l3;
si2=l2;
f84(i,si0,si1,si2);
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
goto L2;
L3:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
si1=l3;
si0+=si1;
si1=l1;
si2=l2;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
L1:;
si0=l0;
si1=l3;
si2=l2;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=0U;
L0:;
return si0;
}

void f93(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l2;
si2=l3;
si3=l1;
si3=i32_load(i->m0,(U64)si3+4U);
si4=l1;
si4=i32_load(i->m0,(U64)si4+8U);
f113(i,si0,si1,si2,si3,si4);
L0:;
}

U32 f94(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
si0=l0;
si1=2704308U;
si2=l1;
si3=l2;
si0=f100(i,si0,si1,si2,si3);
L0:;
return si0;
}

void f95(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l0;
si1=l1;
si2=1U;
si1<<=(si2&31);
si2=1U;
si1|=si2;
si2=l2;
f98(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f96(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U64 l5=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l0;
si1=l2;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l1;
si1=l2;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=26U;
sj0=(U64)(si0);
sj1=W2C2_LL(32U);
sj0<<=(sj1&63);
l5=sj0;
si0=l0;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L1;
}
si0=l4;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=l5;
si2=l4;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=l5;
si2=l4;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=1048882U;
si1=l4;
si2=16U;
si1+=si2;
si2=l3;
f98(i,si0,si1,si2);
UNREACHABLE;
L3:;
si0=l4;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l5=sj1;
si2=l4;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=l5;
si2=l4;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=1048977U;
si1=l4;
si2=16U;
si1+=si2;
si2=l3;
f98(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l5=sj1;
si2=l4;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=l5;
si2=l4;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=1049034U;
si1=l4;
si2=16U;
si1+=si2;
si2=l3;
f98(i,si0,si1,si2);
UNREACHABLE;
L1:;
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l2;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l4;
sj1=l5;
si2=l4;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l4;
sj1=l5;
si2=l4;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=1049034U;
si1=l4;
si2=16U;
si1+=si2;
si2=l3;
f98(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f97(gauche_ffiInstance*i,U32 l0,U64 l1,U64 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 l11=0;
U32 si0,si1,si2,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l0;
si1=2047U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0,sj1);
si0=0U;
l4=si0;
sj0=l1;
sj1=W2C2_LL(-342U);
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L2;
}
sj0=l2;
si0=!(sj0);
if(si0){
goto L2;
}
sj0=l1;
sj1=W2C2_LL(308U);
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L1;
}
si0=l3;
si1=16U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
l5=si1;
si2=4U;
si1<<=(si2&31);
l4=si1;
si2=2714504U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=W2C2_LL(0U);
sj3=l2;
sj4=l2;
sj4=I64_CLZ(sj4);
l6=sj4;
sj3<<=(sj4&63);
l7=sj3;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+16U);
l8=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+24U);
l2=sj0;
sj1=W2C2_LL(511U);
sj0&=sj1;
sj1=W2C2_LL(511U);
si0=sj0 != sj1;
if(si0){
goto L3;
}
si0=l3;
si1=l4;
si2=2709032U;
si1+=si2;
si2=5480U;
si1+=si2;
sj1=i64_load(i->m0,(U64)si1);
sj2=W2C2_LL(0U);
sj3=l7;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+8U);
l7=sj0;
sj1=l8;
sj0+=sj1;
l8=sj0;
sj1=l7;
si0=sj0 < sj1;
sj0=(U64)(si0);
sj1=l2;
sj0+=sj1;
l2=sj0;
L3:;
sj0=l1;
sj1=W2C2_LL(27U);
sj0+=sj1;
sj1=W2C2_LL(83U);
si0=sj0 < sj1;
if(si0){
goto L4;
}
si0=-1U;
l4=si0;
sj0=l8;
sj1=W2C2_LL(-1U);
si0=sj0 == sj1;
if(si0){
goto L2;
}
L4:;
sj0=l2;
sj1=l2;
sj2=W2C2_LL(63U);
sj1>>=(sj2&63);
l9=sj1;
sj2=W2C2_LL(9U);
sj1+=sj2;
l10=sj1;
sj0>>=(sj1&63);
l7=sj0;
si0=l5;
si1=217706U;
si0*=si1;
si1=16U;
si0=(U32)((I32)si0>>(si1&31));
sj1=l6;
si1=(U32)(sj1);
si0-=si1;
sj1=l9;
si1=(U32)(sj1);
si0+=si1;
si1=63U;
si0+=si1;
l5=si0;
si1=-1022U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L6;
}
si0=1024U;
si1=1023U;
sj2=l7;
sj3=W2C2_LL(72057594037927932U);
sj2&=sj3;
sj3=l7;
sj4=l7;
sj5=l10;
sj4<<=(sj5&63);
sj5=l2;
si4=sj4 == sj5;
sj2=si4?sj2:sj3;
sj3=l7;
sj4=l7;
sj5=W2C2_LL(3U);
sj4&=sj5;
sj5=W2C2_LL(1U);
si4=sj4 == sj5;
sj2=si4?sj2:sj3;
sj3=l7;
sj4=l8;
sj5=W2C2_LL(2U);
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
sj3=l7;
sj4=l1;
sj5=W2C2_LL(4U);
sj4+=sj5;
sj5=W2C2_LL(28U);
si4=sj4 < sj5;
sj2=si4?sj2:sj3;
l1=sj2;
sj3=W2C2_LL(1U);
sj2&=sj3;
sj3=l1;
sj2+=sj3;
l1=sj2;
sj3=W2C2_LL(18014398509481983U);
si2=sj2 > sj3;
l11=si2;
si0=si2?si0:si1;
si1=l5;
si0+=si1;
l4=si0;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=W2C2_LL(0U);
sj1=l1;
sj2=W2C2_LL(1U);
sj1>>=(sj2&63);
sj2=W2C2_LL(9218868437227405311U);
sj1&=sj2;
si2=l11;
sj0=si2?sj0:sj1;
l1=sj0;
goto L5;
L6:;
si0=0U;
l4=si0;
si0=l5;
si1=-1085U;
si0=si0 < si1;
if(si0){
goto L2;
}
sj0=l7;
si1=-1022U;
si2=l5;
si1-=si2;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l1=sj0;
sj1=W2C2_LL(1U);
sj0&=sj1;
sj1=l1;
sj0+=sj1;
l1=sj0;
sj1=W2C2_LL(9007199254740991U);
si0=sj0 > sj1;
l4=si0;
sj0=l1;
sj1=W2C2_LL(1U);
sj0>>=(sj1&63);
l1=sj0;
L5:;
si0=l0;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
L2:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+8U,si1);
L1:;
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

void f98(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 si0,si1,si2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=1U;
i32_store16(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l2;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=l3;
si2=12U;
si1+=si2;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l3;
si1=20U;
si0+=si1;
f61(i,si0);
UNREACHABLE;
L0:;
}

U32 f99(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si0=f111(i,si0,si1,si2);
L0:;
return si0;
}

U32 f100(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 si0,si1,si2,si3;
U64 sj1;
si0=i->g0;
si1=16U;
si0-=si1;
l4=si0;
i->g0=si0;
si0=l3;
si1=1U;
si0&=si1;
if(si0){
goto L3;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L2;
}
si0=0U;
l5=si0;
goto L1;
L3:;
si0=l0;
si1=l2;
si2=l3;
si3=1U;
si2>>=(si3&31);
si3=l1;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
l5=si0;
goto L1;
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0+12U);
l6=si0;
si0=0U;
l7=si0;
L4:;
{
si0=l2;
si1=1U;
si0+=si1;
l8=si0;
si0=l5;
si0=(U32)(U32)(I8)(U8)(si0);
si1=-1U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L9;
}
si0=l5;
si1=255U;
si0&=si1;
l9=si0;
si1=128U;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l9;
si1=192U;
si0=si0 != si1;
if(si0){
goto L6;
}
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
sj1=W2C2_LL(1610612768U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l3;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si2=l5;
si2=i32_load(i->m0,(U64)si2+4U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
l5=si0;
goto L1;
L9:;
si0=l0;
si1=l8;
si2=l5;
si3=255U;
si2&=si3;
l5=si2;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L10;
}
si0=l8;
si1=l5;
si0+=si1;
l2=si0;
goto L5;
L10:;
si0=1U;
l5=si0;
goto L1;
L8:;
si0=l0;
si1=l2;
si2=3U;
si1+=si2;
l5=si1;
si2=l2;
si2=i32_load16_u(i->m0,(U64)si2+1U);
l2=si2;
si3=l6;
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L11;
}
si0=l5;
si1=l2;
si0+=si1;
l2=si0;
goto L5;
L11:;
si0=1U;
l5=si0;
goto L1;
L7:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l8;
l2=si0;
goto L5;
L6:;
si0=1610612768U;
l10=si0;
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L12;
}
si0=l2;
si1=5U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+1U);
l10=si0;
L12:;
si0=0U;
l9=si0;
si0=l5;
si1=2U;
si0&=si1;
if(si0){
goto L14;
}
si0=0U;
l11=si0;
si0=l8;
l2=si0;
goto L13;
L14:;
si0=l8;
si1=2U;
si0+=si1;
l2=si0;
si0=l8;
si0=i32_load16_u(i->m0,(U64)si0);
l11=si0;
L13:;
si0=l5;
si1=4U;
si0&=si1;
if(si0){
goto L16;
}
si0=l2;
l8=si0;
goto L15;
L16:;
si0=l2;
si1=2U;
si0+=si1;
l8=si0;
si0=l2;
si0=i32_load16_u(i->m0,(U64)si0);
l9=si0;
L15:;
si0=l5;
si1=8U;
si0&=si1;
if(si0){
goto L18;
}
si0=l8;
l2=si0;
goto L17;
L18:;
si0=l8;
si1=2U;
si0+=si1;
l2=si0;
si0=l8;
si0=i32_load16_u(i->m0,(U64)si0);
l7=si0;
L17:;
si0=l5;
si1=16U;
si0&=si1;
si0=!(si0);
if(si0){
goto L19;
}
si0=l3;
si1=l11;
si2=65535U;
si1&=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0+4U);
l11=si0;
L19:;
si0=l5;
si1=32U;
si0&=si1;
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si1=l9;
si2=65535U;
si1&=si2;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load16_u(i->m0,(U64)si0+4U);
l9=si0;
L20:;
si0=l4;
si1=l9;
i32_store16(i->m0,(U64)si0+14U,si1);
si0=l4;
si1=l11;
i32_store16(i->m0,(U64)si0+12U,si1);
si0=l4;
si1=l10;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l4;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l3;
si1=l7;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l5=si0;
si0=i32_load(i->m0,(U64)si0);
si1=l4;
si2=l5;
si2=i32_load(i->m0,(U64)si2+4U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L21;
}
si0=1U;
l5=si0;
goto L1;
L21:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L5:;
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
l5=si0;
if(si0){
goto L4;
}
}
si0=0U;
l5=si0;
L1:;
si0=l4;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l5;
L0:;
return si0;
}

void f101(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2;
U64 sj1;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l1;
switch(si0){
case 0:
goto L13;
case 1:
goto L14;
case 2:
goto L14;
case 3:
goto L14;
case 4:
goto L14;
case 5:
goto L14;
case 6:
goto L14;
case 7:
goto L14;
case 8:
goto L14;
case 9:
goto L12;
case 10:
goto L10;
case 11:
goto L14;
case 12:
goto L14;
case 13:
goto L11;
case 14:
goto L14;
case 15:
goto L14;
case 16:
goto L14;
case 17:
goto L14;
case 18:
goto L14;
case 19:
goto L14;
case 20:
goto L14;
case 21:
goto L14;
case 22:
goto L14;
case 23:
goto L14;
case 24:
goto L14;
case 25:
goto L14;
case 26:
goto L14;
case 27:
goto L14;
case 28:
goto L14;
case 29:
goto L14;
case 30:
goto L14;
case 31:
goto L14;
case 32:
goto L14;
case 33:
goto L14;
case 34:
goto L7;
case 35:
goto L14;
case 36:
goto L14;
case 37:
goto L14;
case 38:
goto L14;
case 39:
goto L8;
default:
goto L15;
}
L15:;
si0=l1;
si1=92U;
si0=si0 == si1;
if(si0){
goto L9;
}
L14:;
si0=l2;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l1;
si1=767U;
si0=si0 <= si1;
if(si0){
goto L6;
}
si0=l1;
si0=f102(i,si0);
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si1=0U;
i32_store8(i->m0,(U64)si0+14U,si1);
si0=l3;
si1=0U;
i32_store16(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+15U,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+19U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+18U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+17U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+16U,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l1;
si2=1U;
si1|=si2;
si1=I32_CLZ(si1);
si2=2U;
si1>>=(si2&31);
l2=si1;
si0+=si1;
l4=si0;
si1=123U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
si1=117U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=12U;
si0+=si1;
si1=l2;
si2=-2U;
si1+=si2;
l2=si1;
si0+=si1;
si1=92U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+12U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=125U;
i32_store8(i->m0,(U64)si0+21U,si1);
si0=l3;
si1=l1;
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l3;
si1=i32_load16_u(i->m0,(U64)si1+20U);
i32_store16(i->m0,(U64)si0+8U,si1);
goto L5;
L13:;
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=12380U;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L12:;
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29788U;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L11:;
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=29276U;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L10:;
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=28252U;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L9:;
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=23644U;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L8:;
si0=l2;
si1=256U;
si0&=si1;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=10076U;
i32_store16(i->m0,(U64)si0,si1);
goto L2;
L7:;
si0=l2;
si1=16777215U;
si0&=si1;
si1=65536U;
si0=si0 >= si1;
if(si0){
goto L3;
}
L6:;
si0=l1;
si0=f103(i,si0);
if(si0){
goto L4;
}
si0=l3;
si1=0U;
i32_store8(i->m0,(U64)si0+24U,si1);
si0=l3;
si1=0U;
i32_store16(i->m0,(U64)si0+22U,si1);
si0=l3;
si1=l1;
si2=20U;
si1>>=(si2&31);
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+25U,si1);
si0=l3;
si1=l1;
si2=4U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+29U,si1);
si0=l3;
si1=l1;
si2=8U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+28U,si1);
si0=l3;
si1=l1;
si2=12U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+27U,si1);
si0=l3;
si1=l1;
si2=16U;
si1>>=(si2&31);
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+26U,si1);
si0=l3;
si1=22U;
si0+=si1;
si1=l1;
si2=1U;
si1|=si2;
si1=I32_CLZ(si1);
si2=2U;
si1>>=(si2&31);
l2=si1;
si0+=si1;
l4=si0;
si1=123U;
i32_store8(i->m0,(U64)si0,si1);
si0=l4;
si1=-1U;
si0+=si1;
si1=117U;
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=22U;
si0+=si1;
si1=l2;
si2=-2U;
si1+=si2;
l2=si1;
si0+=si1;
si1=92U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+22U);
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=125U;
i32_store8(i->m0,(U64)si0+31U,si1);
si0=l3;
si1=l1;
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0+30U,si1);
si0=l0;
si1=l3;
si1=i32_load16_u(i->m0,(U64)si1+30U);
i32_store16(i->m0,(U64)si0+8U,si1);
L5:;
si0=10U;
l1=si0;
goto L1;
L4:;
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0,si1);
si0=129U;
l1=si0;
si0=128U;
l2=si0;
goto L1;
L3:;
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+2U,sj1);
si0=l0;
si1=8796U;
i32_store16(i->m0,(U64)si0,si1);
L2:;
si0=2U;
l1=si0;
si0=0U;
l2=si0;
L1:;
si0=l0;
si1=l1;
i32_store8(i->m0,(U64)si0+13U,si1);
si0=l0;
si1=l2;
i32_store8(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f102(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3,si4;
si0=0U;
l1=si0;
si0=0U;
si1=16U;
si2=l0;
si3=69291U;
si2=si2 < si3;
si0=si2?si0:si1;
l2=si0;
si1=l2;
si2=8U;
si1|=si2;
l2=si1;
si2=l2;
si3=2U;
si2<<=(si3&31);
si2=i32_load(i->m0,(U64)si2+2719448U);
si3=11U;
si2<<=(si3&31);
si3=l0;
si4=11U;
si3<<=(si4&31);
l2=si3;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l3;
si2=4U;
si1|=si2;
l3=si1;
si2=l3;
si3=2U;
si2<<=(si3&31);
si2=i32_load(i->m0,(U64)si2+2719448U);
si3=11U;
si2<<=(si3&31);
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l3;
si2=2U;
si1|=si2;
l3=si1;
si2=l3;
si3=2U;
si2<<=(si3&31);
si2=i32_load(i->m0,(U64)si2+2719448U);
si3=11U;
si2<<=(si3&31);
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si2=l3;
si3=2U;
si2<<=(si3&31);
si2=i32_load(i->m0,(U64)si2+2719448U);
si3=11U;
si2<<=(si3&31);
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si2=l3;
si3=2U;
si2<<=(si3&31);
si2=i32_load(i->m0,(U64)si2+2719448U);
si3=11U;
si2<<=(si3&31);
si3=l2;
si2=si2 > si3;
si0=si2?si0:si1;
l3=si0;
si1=2U;
si0<<=(si1&31);
si0=i32_load(i->m0,(U64)si0+2719448U);
si1=11U;
si0<<=(si1&31);
l4=si0;
si1=l2;
si0=si0 == si1;
si1=l4;
si2=l2;
si1=si1 < si2;
si0+=si1;
si1=l3;
si0+=si1;
l3=si0;
si1=2U;
si0<<=(si1&31);
l2=si0;
si1=2719448U;
si0+=si1;
l5=si0;
si0=l2;
si0=i32_load(i->m0,(U64)si0+2719448U);
si1=21U;
si0>>=(si1&31);
l2=si0;
si0=767U;
l4=si0;
si0=l3;
si1=31U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l5;
si0=i32_load(i->m0,(U64)si0+4U);
si1=21U;
si0>>=(si1&31);
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
L2:;
si0=l5;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=2097151U;
si0&=si1;
l1=si0;
L1:;
si0=l4;
si1=l2;
si2=-1U;
si1^=si2;
si0+=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si0-=si1;
l3=si0;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=0U;
l0=si0;
L4:;
{
si0=l0;
si1=l2;
si2=2704713U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0+=si1;
l0=si0;
si1=l3;
si0=si0 > si1;
if(si0){
goto L3;
}
si0=l4;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L4;
}
}
L3:;
si0=l2;
si1=1U;
si0&=si1;
L0:;
return si0;
}

U32 f103(gauche_ffiInstance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 si0,si1,si2,si3;
si0=l0;
si1=32U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=0U;
l1=si0;
goto L1;
L2:;
si0=l0;
si1=127U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=1U;
l1=si0;
goto L1;
L3:;
si0=l0;
si1=65536U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l0;
si1=131072U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l0;
si1=2097150U;
si0&=si1;
l1=si0;
si1=183982U;
si0=si0 != si1;
si1=l0;
si2=2097120U;
si1&=si2;
si2=173792U;
si1=si1 != si2;
si2=l1;
si3=178206U;
si2=si2 != si3;
si1&=si2;
si0&=si1;
si1=l0;
si2=-191472U;
si1+=si2;
si2=-15U;
si1=si1 < si2;
si0&=si1;
si1=l0;
si2=-194560U;
si1+=si2;
si2=-2466U;
si1=si1 < si2;
si0&=si1;
si1=l0;
si2=-196608U;
si1+=si2;
si2=-1506U;
si1=si1 < si2;
si0&=si1;
si1=l0;
si2=-201552U;
si1+=si2;
si2=-5U;
si1=si1 < si2;
si0&=si1;
si1=l0;
si2=-917760U;
si1+=si2;
si2=-707718U;
si1=si1 < si2;
si0&=si1;
si1=l0;
si2=918000U;
si1=si1 < si2;
si0&=si1;
l1=si0;
goto L1;
L6:;
si0=0U;
l2=si0;
si0=l0;
si1=8U;
si0>>=(si1&31);
si1=255U;
si0&=si1;
l3=si0;
si0=0U;
l1=si0;
L7:;
{
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
si0=l2;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+2706845U);
l5=si1;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+2706844U);
l1=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l6;
l2=si0;
si0=l4;
l1=si0;
si0=l4;
si1=76U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L4;
L8:;
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L11;
}
si0=l6;
si1=284U;
si0=si0 > si1;
if(si0){
goto L11;
}
si0=l5;
si0=!(si0);
if(si0){
goto L9;
}
si0=l2;
si1=2706920U;
si0+=si1;
l1=si0;
goto L10;
L11:;
si0=l2;
si1=l6;
si2=284U;
si3=2707496U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L10:;
L13:;
{
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L9;
}
goto L13;
}
L12:;
si0=0U;
l1=si0;
goto L1;
L9:;
si0=l6;
l2=si0;
si0=l4;
l1=si0;
si0=l4;
si1=76U;
si0=si0 != si1;
if(si0){
goto L7;
}
goto L4;
}
L5:;
si0=0U;
l2=si0;
si0=l0;
si1=8U;
si0>>=(si1&31);
si1=255U;
si0&=si1;
l3=si0;
si0=0U;
l1=si0;
L15:;
{
si0=l1;
si1=2U;
si0+=si1;
l4=si0;
si0=l2;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1+2706037U);
l5=si1;
si0+=si1;
l6=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0+2706036U);
l1=si0;
si1=l3;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l1;
si1=l3;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l6;
l2=si0;
si0=l4;
l1=si0;
si0=l4;
si1=92U;
si0=si0 != si1;
if(si0){
goto L15;
}
goto L14;
L16:;
si0=l6;
si1=l2;
si0=si0 < si1;
if(si0){
goto L19;
}
si0=l6;
si1=212U;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l5;
si0=!(si0);
if(si0){
goto L17;
}
si0=l2;
si1=2706128U;
si0+=si1;
l1=si0;
goto L18;
L19:;
si0=l2;
si1=l6;
si2=212U;
si3=2707496U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L18:;
L21:;
{
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l0;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
si0=!(si0);
if(si0){
goto L17;
}
goto L21;
}
L20:;
si0=0U;
l1=si0;
goto L1;
L17:;
si0=l6;
l2=si0;
si0=l4;
l1=si0;
si0=l4;
si1=92U;
si0=si0 != si1;
if(si0){
goto L15;
}
}
L14:;
si0=l0;
si1=65535U;
si0&=si1;
l6=si0;
si0=1U;
l1=si0;
si0=0U;
l0=si0;
L22:;
{
si0=l0;
si1=1U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load8_s(i->m0,(U64)si0+2706340U);
l5=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L24;
}
si0=l2;
l0=si0;
goto L23;
L24:;
si0=l2;
si1=504U;
si0=si0 == si1;
if(si0){
goto L25;
}
si0=l5;
si1=127U;
si0&=si1;
si1=8U;
si0<<=(si1&31);
si1=l0;
si2=2706341U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0|=si1;
l5=si0;
si0=l0;
si1=2U;
si0+=si1;
l0=si0;
goto L23;
L25:;
si0=2707512U;
f119(i,si0);
UNREACHABLE;
L23:;
si0=l6;
si1=l5;
si0-=si1;
l6=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
si0=l0;
si1=504U;
si0=si0 == si1;
if(si0){
goto L1;
}
goto L22;
}
L4:;
si0=1U;
l1=si0;
si0=0U;
l5=si0;
L26:;
{
si0=l5;
si1=1U;
si0+=si1;
l2=si0;
si0=l5;
si0=i32_load8_s(i->m0,(U64)si0+2707204U);
l6=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L28;
}
si0=l2;
l5=si0;
goto L27;
L28:;
si0=l2;
si1=292U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l6;
si1=127U;
si0&=si1;
si1=8U;
si0<<=(si1&31);
si1=l5;
si2=2707205U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
si0|=si1;
l6=si0;
si0=l5;
si1=2U;
si0+=si1;
l5=si0;
goto L27;
L29:;
si0=2707512U;
f119(i,si0);
UNREACHABLE;
L27:;
si0=l0;
si1=l6;
si0-=si1;
l0=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
si0=l1;
si1=1U;
si0^=si1;
l1=si0;
si0=l5;
si1=292U;
si0=si0 != si1;
if(si0){
goto L26;
}
}
L1:;
si0=l1;
si1=1U;
si0&=si1;
L0:;
return si0;
}

void f104(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=l1;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l3;
si1=l0;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l4=sj1;
si2=l3;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l3;
sj1=l4;
si2=l3;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=1048922U;
si1=l3;
si2=16U;
si1+=si2;
si2=l2;
f98(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f105(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l1;
si1=63U;
si0&=si1;
l3=si0;
si1=1U;
si0<<=(si1&31);
l1=si0;
si0=i32_load16_u(i->m0,(U64)si0+2707560U);
l4=si0;
si1=2047U;
si0&=si1;
l5=si0;
si1=l1;
si1=i32_load16_u(i->m0,(U64)si1+2707562U);
si2=2047U;
si1&=si2;
si0-=si1;
l6=si0;
si0=0U;
si1=l2;
si0-=si1;
l7=si0;
si0=l0;
si1=8U;
si0+=si1;
l8=si0;
si0=l4;
si1=11U;
si0>>=(si1&31);
l4=si0;
si0=-1308U;
l1=si0;
L5:;
{
si0=l6;
si1=l1;
si0+=si1;
si1=-1308U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l5;
si1=l1;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l7;
si1=l1;
si0+=si1;
si1=-1308U;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l1;
si1=-540U;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l8;
si1=l1;
si0+=si1;
l10=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l10;
si1=1308U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l10=si0;
si1=l9;
si2=2708998U;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
l9=si1;
si2=255U;
si1&=si2;
si0=si0 == si1;
if(si0){
goto L5;
}
}
si0=l4;
si1=l10;
si2=l9;
si3=255U;
si2&=si3;
si1=si1 < si2;
si0-=si1;
l4=si0;
goto L2;
L4:;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
goto L2;
L3:;
si0=768U;
si1=768U;
si2=2709000U;
f104(i,si0,si1,si2);
UNREACHABLE;
L2:;
si0=l2;
si1=-1U;
si0+=si1;
l1=si0;
si0=l0;
si1=7U;
si0+=si1;
l9=si0;
si1=l4;
si0+=si1;
l10=si0;
si0=l3;
sj0=(U64)(si0);
l11=sj0;
sj0=W2C2_LL(0U);
l12=sj0;
L6:;
{
si0=l1;
si1=1U;
si0+=si1;
si1=769U;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l9;
si1=l1;
si0+=si1;
si1=1U;
si0+=si1;
sj0=i64_load8_u(i->m0,(U64)si0);
sj1=l11;
sj0<<=(sj1&63);
sj1=l12;
sj0+=sj1;
l13=sj0;
sj1=l13;
sj2=W2C2_LL(10U);
sj1=DIV_U(sj1,sj2);
l12=sj1;
sj2=W2C2_LL(-10U);
sj1*=sj2;
sj0+=sj1;
l14=sj0;
si0=l4;
si1=l1;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L8;
}
sj0=l14;
si0=!(sj0);
if(si0){
goto L7;
}
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+776U,si1);
goto L7;
L9:;
si0=l1;
si1=768U;
si2=2705660U;
f104(i,si0,si1,si2);
UNREACHABLE;
L8:;
si0=l10;
si1=l1;
si0+=si1;
si1=1U;
si0+=si1;
sj1=l14;
i64_store8(i->m0,(U64)si0,sj1);
L7:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
si1=-1U;
si0=si0 != si1;
if(si0){
goto L6;
}
}
sj0=l13;
sj1=W2C2_LL(10U);
si0=sj0 < sj1;
if(si0){
goto L10;
}
si0=l4;
si1=7U;
si0+=si1;
l1=si0;
L11:;
{
sj0=l12;
l13=sj0;
sj1=l13;
sj2=W2C2_LL(10U);
sj1=DIV_U(sj1,sj2);
l12=sj1;
sj2=W2C2_LL(-10U);
sj1*=sj2;
sj0+=sj1;
l14=sj0;
si0=l1;
si1=-8U;
si0+=si1;
si1=768U;
si0=si0 < si1;
if(si0){
goto L13;
}
sj0=l14;
si0=!(sj0);
if(si0){
goto L12;
}
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+776U,si1);
goto L12;
L13:;
si0=l0;
si1=l1;
si0+=si1;
sj1=l14;
i64_store8(i->m0,(U64)si0,sj1);
L12:;
si0=l1;
si1=-1U;
si0+=si1;
l1=si0;
sj0=l13;
sj1=W2C2_LL(10U);
si0=sj0 >= sj1;
if(si0){
goto L11;
}
}
L10:;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l4;
si1+=si2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=l4;
si1+=si2;
l4=si1;
si2=768U;
si3=l4;
si4=768U;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si0=!(si0);
if(si0){
goto L1;
}
L14:;
{
si0=l1;
si1=768U;
si0=si0 > si1;
if(si0){
goto L16;
}
si0=l0;
si1=l1;
si0+=si1;
si1=7U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L15;
}
goto L1;
L16:;
si0=l1;
si1=-1U;
si0+=si1;
si1=768U;
si2=2705644U;
f104(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l0;
si1=l1;
si2=-1U;
si1+=si2;
l1=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l1;
if(si0){
goto L14;
}
}
L1:;
L0:;
}

void f106(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U64 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l0;
si1=8U;
si0+=si1;
l2=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l3=si0;
si1=-1U;
si0+=si1;
l4=si0;
si0=l1;
si1=63U;
si0&=si1;
sj0=(U64)(si0);
l5=sj0;
si0=0U;
l1=si0;
sj0=W2C2_LL(0U);
l6=sj0;
L5:;
{
si0=l3;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=768U;
si0=si0 == si1;
if(si0){
goto L6;
}
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l0;
si2=l1;
si1+=si2;
l7=si1;
si2=8U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
sj1=l5;
sj0>>=(sj1&63);
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L4;
}
si0=l4;
si1=l1;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l7;
si2=9U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l6=sj0;
sj1=l5;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L5;
}
goto L2;
L6:;
}
si0=768U;
si1=768U;
si2=2705676U;
f104(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
goto L2;
L3:;
sj0=l6;
si0=!(sj0);
if(si0){
goto L1;
}
sj0=l6;
sj1=l5;
sj0>>=(sj1&63);
sj1=W2C2_LL(0U);
si0=sj0 == sj1;
if(si0){
goto L7;
}
si0=l3;
l1=si0;
goto L2;
L7:;
si0=l3;
l1=si0;
L8:;
{
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
l6=sj0;
sj1=l5;
sj0>>=(sj1&63);
si0=!(sj0);
if(si0){
goto L8;
}
}
L2:;
si0=l0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
si2=l1;
si1-=si2;
si2=1U;
si1+=si2;
l7=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=-2047U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
sj0=W2C2_LL(-1U);
sj1=l5;
sj0<<=(sj1&63);
sj1=W2C2_LL(-1U);
sj0^=sj1;
l8=sj0;
si0=0U;
l7=si0;
si0=l3;
si1=l1;
si0=si0 <= si1;
if(si0){
goto L10;
}
si0=0U;
l4=si0;
si0=0U;
si1=768U;
si2=l1;
si1-=si2;
l7=si1;
si2=l7;
si3=768U;
si2=si2 > si3;
si0=si2?si0:si1;
l9=si0;
si0=l1;
si1=l3;
si0-=si1;
l10=si0;
si0=l2;
si1=l1;
si0+=si1;
l11=si0;
si0=l3;
si1=l1;
si0-=si1;
l7=si0;
L11:;
{
si0=l9;
si1=l4;
si0=si0 != si1;
if(si0){
goto L12;
}
si0=l1;
si1=l4;
si0+=si1;
si1=768U;
si2=2705692U;
f104(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l11;
si1=l4;
si0+=si1;
sj0=i64_load8_u(i->m0,(U64)si0);
l12=sj0;
si0=l2;
si1=l4;
si0+=si1;
sj1=l6;
sj2=l5;
sj1>>=(sj2&63);
i64_store8(i->m0,(U64)si0,sj1);
sj0=l12;
sj1=l6;
sj2=l8;
sj1&=sj2;
sj2=W2C2_LL(10U);
sj1*=sj2;
sj0+=sj1;
l6=sj0;
si0=l10;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0+=si1;
if(si0){
goto L11;
}
}
L10:;
sj0=l6;
si0=!(sj0);
if(si0){
goto L13;
}
L14:;
{
sj0=l6;
l12=sj0;
sj1=l8;
sj0&=sj1;
sj1=W2C2_LL(10U);
sj0*=sj1;
l6=sj0;
sj0=l12;
sj1=l5;
sj0>>=(sj1&63);
si0=(U32)(sj0);
l1=si0;
si0=l7;
si1=768U;
si0=si0 < si1;
if(si0){
goto L16;
}
si0=l1;
si1=255U;
si0&=si1;
si0=!(si0);
if(si0){
goto L15;
}
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+776U,si1);
goto L15;
L16:;
si0=l2;
si1=l7;
si0+=si1;
si1=l1;
i32_store8(i->m0,(U64)si0,si1);
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
L15:;
sj0=l6;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L14;
}
}
L13:;
si0=l7;
si1=768U;
si0=si0 > si1;
l4=si0;
L17:;
{
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0,si1);
si0=l7;
si0=!(si0);
if(si0){
goto L1;
}
si0=l4;
if(si0){
goto L18;
}
si0=l0;
si1=l7;
si0+=si1;
l1=si0;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
si0=l1;
si1=7U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si0=!(si0);
if(si0){
goto L17;
}
goto L1;
L18:;
}
si0=l7;
si1=-1U;
si0+=si1;
si1=768U;
si2=2705644U;
f104(i,si0,si1,si2);
UNREACHABLE;
L9:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+776U,si1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0,sj1);
L1:;
L0:;
}

U64 f107(gauche_ffiInstance*i,U32 l0) {
U64 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1;
sj0=W2C2_LL(0U);
l1=sj0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l3=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L1;
}
sj0=W2C2_LL(-1U);
l1=sj0;
si0=l3;
si1=18U;
si0=si0 > si1;
if(si0){
goto L1;
}
si0=l3;
if(si0){
goto L3;
}
sj0=W2C2_LL(0U);
l1=sj0;
goto L2;
L3:;
si0=l3;
si1=1U;
si0=si0 != si1;
if(si0){
goto L5;
}
si0=0U;
l4=si0;
sj0=W2C2_LL(0U);
l1=sj0;
goto L4;
L5:;
si0=l3;
si1=1U;
si0&=si1;
l5=si0;
si0=l3;
si1=30U;
si0&=si1;
l6=si0;
si0=0U;
l7=si0;
sj0=W2C2_LL(0U);
l1=sj0;
L6:;
{
sj0=l1;
sj1=W2C2_LL(10U);
sj0*=sj1;
l1=sj0;
si0=l7;
l4=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L7;
}
sj0=l1;
si1=l0;
si2=l4;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l1=sj0;
L7:;
sj0=l1;
sj1=W2C2_LL(10U);
sj0*=sj1;
l1=sj0;
si0=l4;
si1=1U;
si0+=si1;
l7=si0;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L8;
}
sj0=l1;
si1=l0;
si2=l4;
si1+=si2;
si2=9U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l1=sj0;
L8:;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si1=l6;
si0=si0 != si1;
if(si0){
goto L6;
}
}
si0=l5;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=2U;
si0+=si1;
l4=si0;
L4:;
sj0=l1;
sj1=W2C2_LL(10U);
sj0*=sj1;
l1=sj0;
si0=l4;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L2;
}
sj0=l1;
si1=l0;
si2=8U;
si1+=si2;
si2=l4;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l1=sj0;
L2:;
si0=l3;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l0;
si1=l3;
si0+=si1;
l7=si0;
si0=i32_load8_u(i->m0,(U64)si0+8U);
l4=si0;
si0=l3;
si1=1U;
si0+=si1;
si1=l2;
si0=si0 != si1;
if(si0){
goto L11;
}
si0=l4;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 == si1;
if(si0){
goto L10;
}
L11:;
si0=l4;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L9;
}
goto L1;
L10:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+776U);
if(si0){
goto L9;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
si0=l7;
si1=8U;
si0+=si1;
si1=-1U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L1;
}
L9:;
sj0=l1;
sj1=W2C2_LL(1U);
sj0+=sj1;
l1=sj0;
L1:;
sj0=l1;
L0:;
return sj0;
}

U32 f108(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 si0,si1,si2,si3,si4;
U64 sj1;
si0=43U;
si1=1114112U;
si2=l0;
si2=i32_load(i->m0,(U64)si2+8U);
l6=si2;
si3=2097152U;
si2&=si3;
l7=si2;
si0=si2?si0:si1;
l8=si0;
si0=l7;
si1=21U;
si0>>=(si1&31);
si1=1U;
si2=l1;
si0=si2?si0:si1;
si1=l5;
si0+=si1;
l9=si0;
si0=l6;
si1=8388608U;
si0&=si1;
if(si0){
goto L2;
}
si0=0U;
l2=si0;
goto L1;
L2:;
si0=l3;
si1=16U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l2;
si1=l3;
si0=f109(i,si0,si1);
l7=si0;
goto L3;
L4:;
si0=l3;
if(si0){
goto L5;
}
si0=0U;
l7=si0;
goto L3;
L5:;
si0=l3;
si1=3U;
si0&=si1;
l10=si0;
si0=0U;
l11=si0;
si0=0U;
l7=si0;
si0=l3;
si1=4U;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l3;
si1=12U;
si0&=si1;
l12=si0;
si0=0U;
l11=si0;
si0=0U;
l7=si0;
L7:;
{
si0=l7;
si1=l2;
si2=l11;
si1+=si2;
l13=si1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l13;
si2=1U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l13;
si2=2U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l13;
si2=3U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l7=si0;
si0=l12;
si1=l11;
si2=4U;
si1+=si2;
l11=si1;
si0=si0 != si1;
if(si0){
goto L7;
}
}
si0=l10;
si0=!(si0);
if(si0){
goto L3;
}
L6:;
si0=l2;
si1=l11;
si0+=si1;
l13=si0;
L8:;
{
si0=l7;
si1=l13;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l7=si0;
si0=l13;
si1=1U;
si0+=si1;
l13=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L8;
}
}
L3:;
si0=l7;
si1=l9;
si0+=si1;
l9=si0;
L1:;
si0=l8;
si1=45U;
si2=l1;
si0=si2?si0:si1;
l12=si0;
si0=l9;
si1=l0;
si1=i32_load16_u(i->m0,(U64)si1+12U);
l1=si1;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l6;
si1=16777216U;
si0&=si1;
if(si0){
goto L13;
}
si0=l1;
si1=l9;
si0-=si1;
l8=si0;
si0=0U;
l7=si0;
si0=0U;
l1=si0;
si0=l6;
si1=29U;
si0>>=(si1&31);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L16;
case 2:
goto L15;
case 3:
goto L16;
default:
goto L14;
}
L16:;
si0=l8;
l1=si0;
goto L14;
L15:;
si0=l8;
si1=65534U;
si0&=si1;
si1=1U;
si0>>=(si1&31);
l1=si0;
L14:;
si0=l6;
si1=2097151U;
si0&=si1;
l9=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l11=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
L17:;
{
si0=l7;
si1=65535U;
si0&=si1;
si1=l1;
si2=65535U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L12;
}
si0=1U;
l13=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=l9;
si2=l11;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L17;
}
goto L9;
}
L13:;
si0=l0;
si1=l0;
sj1=i64_load(i->m0,(U64)si1+8U);
l14=sj1;
si1=(U32)(sj1);
si2=-1612709888U;
si1&=si2;
si2=536870960U;
si1|=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=1U;
l13=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l10=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l11=si1;
si2=l12;
si3=l2;
si4=l3;
si0=f110(i,si0,si1,si2,si3,si4);
if(si0){
goto L9;
}
si0=0U;
l7=si0;
si0=l1;
si1=l9;
si0-=si1;
si1=65535U;
si0&=si1;
l2=si0;
L18:;
{
si0=l7;
si1=65535U;
si0&=si1;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=1U;
l13=si0;
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=48U;
si2=l11;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L18;
}
goto L9;
}
L12:;
si0=1U;
l13=si0;
si0=l10;
si1=l11;
si2=l12;
si3=l2;
si4=l3;
si0=f110(i,si0,si1,si2,si3,si4);
if(si0){
goto L9;
}
si0=l10;
si1=l4;
si2=l5;
si3=l11;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=0U;
l7=si0;
si0=l8;
si1=l1;
si0-=si1;
si1=65535U;
si0&=si1;
l0=si0;
L19:;
{
si0=l7;
si1=65535U;
si0&=si1;
l2=si0;
si1=l0;
si0=si0 < si1;
l13=si0;
si0=l2;
si1=l0;
si0=si0 >= si1;
if(si0){
goto L9;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l10;
si1=l9;
si2=l11;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L19;
}
goto L9;
}
L11:;
si0=1U;
l13=si0;
si0=l10;
si1=l4;
si2=l5;
si3=l11;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L9;
}
si0=l0;
sj1=l14;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=0U;
goto L0;
L10:;
si0=1U;
l13=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l7=si0;
si1=l0;
si1=i32_load(i->m0,(U64)si1+4U);
l10=si1;
si2=l12;
si3=l2;
si4=l3;
si0=f110(i,si0,si1,si2,si3,si4);
if(si0){
goto L9;
}
si0=l7;
si1=l4;
si2=l5;
si3=l10;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
l13=si0;
L9:;
si0=l13;
L0:;
return si0;
}

U32 f109(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4,si5;
si0=l1;
si1=l0;
si2=3U;
si1+=si2;
si2=-4U;
si1&=si2;
l2=si1;
si2=l0;
si1-=si2;
l3=si1;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l1;
si1=l3;
si0-=si1;
l4=si0;
si1=2U;
si0>>=(si1&31);
l5=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l4;
si1=3U;
si0&=si1;
l6=si0;
si0=0U;
l7=si0;
si0=0U;
l1=si0;
si0=l2;
si1=l0;
si0=si0 == si1;
if(si0){
goto L3;
}
si0=0U;
l8=si0;
si0=0U;
l1=si0;
si0=l0;
si1=l2;
si0-=si1;
l9=si0;
si1=-4U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=0U;
l8=si0;
si0=0U;
l1=si0;
L5:;
{
si0=l1;
si1=l0;
si2=l8;
si1+=si2;
l2=si1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si2=1U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si2=2U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l2;
si2=3U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l1=si0;
si0=l8;
si1=4U;
si0+=si1;
l8=si0;
if(si0){
goto L5;
}
}
L4:;
si0=l0;
si1=l8;
si0+=si1;
l2=si0;
L6:;
{
si0=l1;
si1=l2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l9;
si1=1U;
si0+=si1;
l9=si0;
if(si0){
goto L6;
}
}
L3:;
si0=l0;
si1=l3;
si0+=si1;
l9=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L7;
}
si0=l9;
si1=l4;
si2=2147483644U;
si1&=si2;
si0+=si1;
l2=si0;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
l7=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si1=l2;
si1=i32_load8_s(i->m0,(U64)si1+1U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l7=si0;
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=l7;
si1=l2;
si1=i32_load8_s(i->m0,(U64)si1+2U);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l7=si0;
L7:;
si0=l7;
si1=l1;
si0+=si1;
l8=si0;
L8:;
{
si0=l9;
l3=si0;
si0=l5;
si0=!(si0);
if(si0){
goto L1;
}
si0=l5;
si1=192U;
si2=l5;
si3=192U;
si2=si2 < si3;
si0=si2?si0:si1;
l7=si0;
si1=3U;
si0&=si1;
l6=si0;
si0=l7;
si1=2U;
si0<<=(si1&31);
l4=si0;
si1=1008U;
si0&=si1;
l1=si0;
if(si0){
goto L10;
}
si0=0U;
l2=si0;
goto L9;
L10:;
si0=l3;
si1=l1;
si0+=si1;
l0=si0;
si0=0U;
l2=si0;
si0=l3;
l1=si0;
L11:;
{
si0=l1;
si1=12U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l9;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l1;
si2=8U;
si1+=si2;
si1=i32_load(i->m0,(U64)si1);
l9=si1;
si2=-1U;
si1^=si2;
si2=7U;
si1>>=(si2&31);
si2=l9;
si3=6U;
si2>>=(si3&31);
si1|=si2;
si2=16843009U;
si1&=si2;
si2=l1;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
l9=si2;
si3=-1U;
si2^=si3;
si3=7U;
si2>>=(si3&31);
si3=l9;
si4=6U;
si3>>=(si4&31);
si2|=si3;
si3=16843009U;
si2&=si3;
si3=l1;
si3=i32_load(i->m0,(U64)si3);
l9=si3;
si4=-1U;
si3^=si4;
si4=7U;
si3>>=(si4&31);
si4=l9;
si5=6U;
si4>>=(si5&31);
si3|=si4;
si4=16843009U;
si3&=si4;
si4=l2;
si3+=si4;
si2+=si3;
si1+=si2;
si0+=si1;
l2=si0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si1=l0;
si0=si0 != si1;
if(si0){
goto L11;
}
}
L9:;
si0=l5;
si1=l7;
si0-=si1;
l5=si0;
si0=l3;
si1=l4;
si0+=si1;
l9=si0;
si0=l2;
si1=8U;
si0>>=(si1&31);
si1=16711935U;
si0&=si1;
si1=l2;
si2=16711935U;
si1&=si2;
si0+=si1;
si1=65537U;
si0*=si1;
si1=16U;
si0>>=(si1&31);
si1=l8;
si0+=si1;
l8=si0;
si0=l6;
si0=!(si0);
if(si0){
goto L8;
}
}
si0=l3;
si1=l7;
si2=252U;
si1&=si2;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l2=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l1;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
l1=si0;
si0=l6;
si1=1U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+4U);
l9=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l9;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l1;
si0+=si1;
l1=si0;
si0=l6;
si1=2U;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=l2;
si0=i32_load(i->m0,(U64)si0+8U);
l2=si0;
si1=-1U;
si0^=si1;
si1=7U;
si0>>=(si1&31);
si1=l2;
si2=6U;
si1>>=(si2&31);
si0|=si1;
si1=16843009U;
si0&=si1;
si1=l1;
si0+=si1;
l1=si0;
L12:;
si0=l1;
si1=8U;
si0>>=(si1&31);
si1=459007U;
si0&=si1;
si1=l1;
si2=16711935U;
si1&=si2;
si0+=si1;
si1=65537U;
si0*=si1;
si1=16U;
si0>>=(si1&31);
si1=l8;
si0+=si1;
l8=si0;
goto L1;
L2:;
si0=l1;
if(si0){
goto L13;
}
si0=0U;
goto L0;
L13:;
si0=l1;
si1=3U;
si0&=si1;
l2=si0;
si0=0U;
l9=si0;
si0=0U;
l8=si0;
si0=l1;
si1=4U;
si0=si0 < si1;
if(si0){
goto L14;
}
si0=l1;
si1=-4U;
si0&=si1;
l5=si0;
si0=0U;
l8=si0;
si0=0U;
l9=si0;
L15:;
{
si0=l8;
si1=l0;
si2=l9;
si1+=si2;
l1=si1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si2=1U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si2=2U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l1;
si2=3U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l5;
si1=l9;
si2=4U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L15;
}
}
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L14:;
si0=l0;
si1=l9;
si0+=si1;
l1=si0;
L16:;
{
si0=l8;
si1=l1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l8=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L16;
}
}
L1:;
si0=l8;
L0:;
return si0;
}

U32 f110(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3;
si0=l2;
si1=1114112U;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l0;
si1=l2;
si2=l1;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L1;
}
si0=1U;
goto L0;
L1:;
si0=l3;
if(si0){
goto L2;
}
si0=0U;
goto L0;
L2:;
si0=l0;
si1=l3;
si2=l4;
si3=l1;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

U32 f111(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1,si2,si3,si4;
si0=l0;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=402653184U;
si0&=si1;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=268435456U;
si0&=si1;
si0=!(si0);
if(si0){
goto L7;
}
si0=l0;
si0=i32_load16_u(i->m0,(U64)si0+14U);
l4=si0;
if(si0){
goto L6;
}
si0=0U;
l2=si0;
goto L5;
L7:;
si0=l2;
si1=16U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l1;
si1=l2;
si0=f109(i,si0,si1);
l5=si0;
goto L3;
L8:;
si0=l2;
if(si0){
goto L9;
}
si0=0U;
l5=si0;
goto L3;
L9:;
si0=l2;
si1=3U;
si0&=si1;
l6=si0;
si0=0U;
l7=si0;
si0=0U;
l5=si0;
si0=l2;
si1=4U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l2;
si1=12U;
si0&=si1;
l4=si0;
si0=0U;
l5=si0;
si0=0U;
l7=si0;
L11:;
{
si0=l5;
si1=l1;
si2=l7;
si1+=si2;
l8=si1;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=1U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=2U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
si1=l8;
si2=3U;
si1+=si2;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l5=si0;
si0=l4;
si1=l7;
si2=4U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L11;
}
}
si0=l6;
si0=!(si0);
if(si0){
goto L3;
}
L10:;
si0=l1;
si1=l7;
si0+=si1;
l8=si0;
L12:;
{
si0=l5;
si1=l8;
si1=i32_load8_s(i->m0,(U64)si1);
si2=-65U;
si1=(U32)((I32)si1>(I32)si2);
si0+=si1;
l5=si0;
si0=l8;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L12;
}
goto L3;
}
L6:;
si0=l1;
si1=l2;
si0+=si1;
l7=si0;
si0=0U;
l2=si0;
si0=l1;
l8=si0;
si0=l4;
l6=si0;
L13:;
{
si0=l8;
l5=si0;
si1=l7;
si0=si0 == si1;
if(si0){
goto L4;
}
si0=l5;
si0=i32_load8_s(i->m0,(U64)si0);
l8=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L15;
}
si0=l5;
si1=1U;
si0+=si1;
l8=si0;
goto L14;
L15:;
si0=l8;
si1=-32U;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l5;
si1=2U;
si0+=si1;
l8=si0;
goto L14;
L16:;
si0=l5;
si1=4U;
si2=3U;
si3=l8;
si4=-17U;
si3=si3 > si4;
si1=si3?si1:si2;
si0+=si1;
l8=si0;
L14:;
si0=l8;
si1=l5;
si0-=si1;
si1=l2;
si0+=si1;
l2=si0;
si0=l6;
si1=-1U;
si0+=si1;
l6=si0;
if(si0){
goto L13;
}
}
L5:;
si0=0U;
l6=si0;
L4:;
si0=l4;
si1=l6;
si0-=si1;
l5=si0;
L3:;
si0=l5;
si1=l0;
si1=i32_load16_u(i->m0,(U64)si1+12U);
l8=si1;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l8;
si1=l5;
si0-=si1;
l9=si0;
si0=0U;
l5=si0;
si0=0U;
l4=si0;
si0=l3;
si1=29U;
si0>>=(si1&31);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L17;
case 1:
goto L19;
case 2:
goto L18;
case 3:
goto L17;
default:
goto L17;
}
L19:;
si0=l9;
l4=si0;
goto L17;
L18:;
si0=l9;
si1=65534U;
si0&=si1;
si1=1U;
si0>>=(si1&31);
l4=si0;
L17:;
si0=l3;
si1=2097151U;
si0&=si1;
l7=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0+4U);
l6=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l0=si0;
L21:;
{
si0=l5;
si1=65535U;
si0&=si1;
si1=l4;
si2=65535U;
si1&=si2;
si0=si0 >= si1;
if(si0){
goto L20;
}
si0=1U;
l8=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
si1=l7;
si2=l6;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
goto L21;
}
L20:;
si0=1U;
l8=si0;
si0=l0;
si1=l1;
si2=l2;
si3=l6;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
if(si0){
goto L1;
}
si0=0U;
l5=si0;
si0=l9;
si1=l4;
si0-=si1;
si1=65535U;
si0&=si1;
l2=si0;
L22:;
{
si0=l5;
si1=65535U;
si0&=si1;
l4=si0;
si1=l2;
si0=si0 < si1;
l8=si0;
si0=l4;
si1=l2;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l0;
si1=l7;
si2=l6;
si2=i32_load(i->m0,(U64)si2+16U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
goto L22;
}
L2:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=l2;
si3=l0;
si3=i32_load(i->m0,(U64)si3+4U);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
l8=si0;
L1:;
si0=l8;
L0:;
return si0;
}

U32 f112(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2,si3;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=l2;
si3=l0;
si3=i32_load(i->m0,(U64)si3+4U);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
L0:;
return si0;
}

void f113(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U64 l14=0;
U32 l15=0;
U32 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=l4;
if(si0){
goto L1;
}
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+14U,si1);
si0=l0;
si1=257U;
i32_store16(i->m0,(U64)si0+12U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0,sj1);
goto L0;
L1:;
si0=1U;
l5=si0;
si0=0U;
l6=si0;
si0=0U;
l7=si0;
si0=1U;
l8=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=1U;
l9=si0;
si0=1U;
l10=si0;
si0=0U;
l11=si0;
si0=1U;
l5=si0;
si0=0U;
l6=si0;
L3:;
{
si0=l6;
si1=l11;
si0+=si1;
l12=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L5;
}
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=255U;
si0&=si1;
l9=si0;
si1=l3;
si2=l12;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
l12=si1;
si0=si0 < si1;
if(si0){
goto L6;
}
si0=l9;
si1=l12;
si0=si0 == si1;
if(si0){
goto L7;
}
si0=1U;
l5=si0;
si0=0U;
l11=si0;
si0=l10;
l6=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L4;
L7:;
si0=0U;
si1=l11;
si2=1U;
si1+=si2;
l9=si1;
si2=l9;
si3=l5;
si2=si2 == si3;
l12=si2;
si0=si2?si0:si1;
l11=si0;
si0=l9;
si1=0U;
si2=l12;
si0=si2?si0:si1;
si1=l10;
si0+=si1;
l10=si0;
goto L4;
L6:;
si0=l10;
si1=l11;
si0+=si1;
si1=1U;
si0+=si1;
l10=si0;
si1=l6;
si0-=si1;
l5=si0;
si0=0U;
l11=si0;
goto L4;
L5:;
si0=l12;
si1=l4;
si2=2705708U;
f104(i,si0,si1,si2);
UNREACHABLE;
L4:;
si0=l10;
si1=l11;
si0+=si1;
l9=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L3;
}
}
si0=1U;
l9=si0;
si0=1U;
l10=si0;
si0=0U;
l11=si0;
si0=1U;
l8=si0;
si0=0U;
l7=si0;
L8:;
{
si0=l7;
si1=l11;
si0+=si1;
l12=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l3;
si1=l9;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=255U;
si0&=si1;
l9=si0;
si1=l3;
si2=l12;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
l12=si1;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l9;
si1=l12;
si0=si0 == si1;
if(si0){
goto L12;
}
si0=1U;
l8=si0;
si0=0U;
l11=si0;
si0=l10;
l7=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
goto L9;
L12:;
si0=0U;
si1=l11;
si2=1U;
si1+=si2;
l9=si1;
si2=l9;
si3=l8;
si2=si2 == si3;
l12=si2;
si0=si2?si0:si1;
l11=si0;
si0=l9;
si1=0U;
si2=l12;
si0=si2?si0:si1;
si1=l10;
si0+=si1;
l10=si0;
goto L9;
L11:;
si0=l12;
si1=l4;
si2=2705708U;
f104(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l10;
si1=l11;
si0+=si1;
si1=1U;
si0+=si1;
l10=si0;
si1=l7;
si0-=si1;
l8=si0;
si0=0U;
l11=si0;
L9:;
si0=l10;
si1=l11;
si0+=si1;
l9=si0;
si1=l4;
si0=si0 < si1;
if(si0){
goto L8;
}
}
L2:;
si0=l4;
si1=l6;
si2=l7;
si3=l6;
si4=l7;
si3=si3 > si4;
l11=si3;
si1=si3?si1:si2;
l13=si1;
si0=si0 < si1;
if(si0){
goto L18;
}
si0=l5;
si1=l8;
si2=l11;
si0=si2?si0:si1;
l10=si0;
si1=l13;
si0+=si1;
l11=si0;
si1=l10;
si0=si0 < si1;
if(si0){
goto L17;
}
si0=l11;
si1=l4;
si0=si0 > si1;
if(si0){
goto L17;
}
si0=l3;
si1=l3;
si2=l10;
si1+=si2;
si2=l13;
si0=f130(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L20;
}
si0=l4;
si1=3U;
si0&=si1;
l10=si0;
si0=l4;
si1=-1U;
si0+=si1;
si1=3U;
si0=si0 >= si1;
if(si0){
goto L23;
}
sj0=W2C2_LL(0U);
l14=sj0;
si0=0U;
l9=si0;
goto L22;
L23:;
si0=l4;
si1=-4U;
si0&=si1;
l12=si0;
sj0=W2C2_LL(0U);
l14=sj0;
si0=0U;
l9=si0;
L24:;
{
sj0=W2C2_LL(1U);
si1=l3;
si2=l9;
si1+=si2;
l11=si1;
si2=3U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=W2C2_LL(1U);
si2=l11;
si3=2U;
si2+=si3;
sj2=i64_load8_u(i->m0,(U64)si2);
sj1<<=(sj2&63);
sj2=W2C2_LL(1U);
si3=l11;
si4=1U;
si3+=si4;
sj3=i64_load8_u(i->m0,(U64)si3);
sj2<<=(sj3&63);
sj3=W2C2_LL(1U);
si4=l11;
sj4=i64_load8_u(i->m0,(U64)si4);
sj3<<=(sj4&63);
sj4=l14;
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
l14=sj0;
si0=l12;
si1=l9;
si2=4U;
si1+=si2;
l9=si1;
si0=si0 != si1;
if(si0){
goto L24;
}
}
si0=l10;
si0=!(si0);
if(si0){
goto L21;
}
L22:;
si0=l3;
si1=l9;
si0+=si1;
l11=si0;
L25:;
{
sj0=W2C2_LL(1U);
si1=l11;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L25;
}
}
L21:;
si0=l4;
si1=l13;
si0-=si1;
l11=si0;
si1=l13;
si2=l11;
si3=l13;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1U;
si0+=si1;
l10=si0;
si0=-1U;
l11=si0;
si0=l13;
l7=si0;
si0=-1U;
l9=si0;
goto L19;
L20:;
si0=l4;
si1=-1U;
si0+=si1;
l7=si0;
si0=1U;
l6=si0;
si0=0U;
l11=si0;
si0=1U;
l12=si0;
si0=0U;
l8=si0;
L27:;
{
si0=l12;
l9=si0;
si1=l11;
si0+=si1;
l15=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l4;
si1=l11;
si0-=si1;
si1=l9;
si2=-1U;
si1^=si2;
si0+=si1;
l12=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l7;
si1=l11;
si2=l8;
si1+=si2;
si0-=si1;
l5=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L14;
}
si0=l3;
si1=l12;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=255U;
si0&=si1;
l12=si0;
si1=l3;
si2=l5;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
l5=si1;
si0=si0 < si1;
if(si0){
goto L30;
}
si0=l12;
si1=l5;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=l9;
si1=1U;
si0+=si1;
l12=si0;
si0=0U;
l11=si0;
si0=1U;
l6=si0;
si0=l9;
l8=si0;
goto L28;
L30:;
si0=l15;
si1=1U;
si0+=si1;
l12=si0;
si1=l8;
si0-=si1;
l6=si0;
si0=0U;
l11=si0;
goto L28;
L29:;
si0=0U;
si1=l11;
si2=1U;
si1+=si2;
l12=si1;
si2=l12;
si3=l6;
si2=si2 == si3;
l5=si2;
si0=si2?si0:si1;
l11=si0;
si0=l12;
si1=0U;
si2=l5;
si0=si2?si0:si1;
si1=l9;
si0+=si1;
l12=si0;
L28:;
si0=l6;
si1=l10;
si0=si0 != si1;
if(si0){
goto L27;
}
}
L26:;
si0=1U;
l6=si0;
si0=0U;
l11=si0;
si0=1U;
l12=si0;
si0=0U;
l15=si0;
L32:;
{
si0=l12;
l9=si0;
si1=l11;
si0+=si1;
l16=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L31;
}
si0=l4;
si1=l11;
si0-=si1;
si1=l9;
si2=-1U;
si1^=si2;
si0+=si1;
l12=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L16;
}
si0=l7;
si1=l11;
si2=l15;
si1+=si2;
si0-=si1;
l5=si0;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L15;
}
si0=l3;
si1=l12;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=255U;
si0&=si1;
l12=si0;
si1=l3;
si2=l5;
si1+=si2;
si1=i32_load8_u(i->m0,(U64)si1);
l5=si1;
si0=si0 > si1;
if(si0){
goto L35;
}
si0=l12;
si1=l5;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l9;
si1=1U;
si0+=si1;
l12=si0;
si0=0U;
l11=si0;
si0=1U;
l6=si0;
si0=l9;
l15=si0;
goto L33;
L35:;
si0=l16;
si1=1U;
si0+=si1;
l12=si0;
si1=l15;
si0-=si1;
l6=si0;
si0=0U;
l11=si0;
goto L33;
L34:;
si0=0U;
si1=l11;
si2=1U;
si1+=si2;
l12=si1;
si2=l12;
si3=l6;
si2=si2 == si3;
l5=si2;
si0=si2?si0:si1;
l11=si0;
si0=l12;
si1=0U;
si2=l5;
si0=si2?si0:si1;
si1=l9;
si0+=si1;
l12=si0;
L33:;
si0=l6;
si1=l10;
si0=si0 != si1;
if(si0){
goto L32;
}
}
L31:;
si0=l4;
si1=l15;
si2=l8;
si3=l15;
si4=l8;
si3=si3 > si4;
si1=si3?si1:si2;
si0-=si1;
l7=si0;
si0=l10;
if(si0){
goto L37;
}
sj0=W2C2_LL(0U);
l14=sj0;
si0=0U;
l10=si0;
goto L36;
L37:;
si0=l10;
si1=3U;
si0&=si1;
l9=si0;
si0=l10;
si1=4U;
si0=si0 >= si1;
if(si0){
goto L39;
}
sj0=W2C2_LL(0U);
l14=sj0;
si0=0U;
l12=si0;
goto L38;
L39:;
si0=l10;
si1=-4U;
si0&=si1;
l6=si0;
sj0=W2C2_LL(0U);
l14=sj0;
si0=0U;
l12=si0;
L40:;
{
sj0=W2C2_LL(1U);
si1=l3;
si2=l12;
si1+=si2;
l11=si1;
si2=3U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=W2C2_LL(1U);
si2=l11;
si3=2U;
si2+=si3;
sj2=i64_load8_u(i->m0,(U64)si2);
sj1<<=(sj2&63);
sj2=W2C2_LL(1U);
si3=l11;
si4=1U;
si3+=si4;
sj3=i64_load8_u(i->m0,(U64)si3);
sj2<<=(sj3&63);
sj3=W2C2_LL(1U);
si4=l11;
sj4=i64_load8_u(i->m0,(U64)si4);
sj3<<=(sj4&63);
sj4=l14;
sj3|=sj4;
sj2|=sj3;
sj1|=sj2;
sj0|=sj1;
l14=sj0;
si0=l6;
si1=l12;
si2=4U;
si1+=si2;
l12=si1;
si0=si0 != si1;
if(si0){
goto L40;
}
}
si0=l9;
si0=!(si0);
if(si0){
goto L36;
}
L38:;
si0=l3;
si1=l12;
si0+=si1;
l11=si0;
L41:;
{
sj0=W2C2_LL(1U);
si1=l11;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0<<=(sj1&63);
sj1=l14;
sj0|=sj1;
l14=sj0;
si0=l11;
si1=1U;
si0+=si1;
l11=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L41;
}
}
L36:;
si0=0U;
l11=si0;
si0=l4;
l9=si0;
L19:;
si0=l0;
si1=l4;
i32_store(i->m0,(U64)si0+60U,si1);
si0=l0;
si1=l3;
i32_store(i->m0,(U64)si0+56U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+52U,si1);
si0=l0;
si1=l1;
i32_store(i->m0,(U64)si0+48U,si1);
si0=l0;
si1=l9;
i32_store(i->m0,(U64)si0+40U,si1);
si0=l0;
si1=l11;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l0;
si1=l2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l0;
si1=l10;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l0;
si1=l7;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l0;
si1=l13;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l14;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0,si1);
goto L0;
L18:;
si0=0U;
si1=l13;
si2=l4;
si3=2705772U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L17:;
si0=l10;
si1=l11;
si2=l4;
si3=2705756U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L16:;
si0=l12;
si1=l4;
si2=2705724U;
f104(i,si0,si1,si2);
UNREACHABLE;
L15:;
si0=l5;
si1=l4;
si2=2705740U;
f104(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l5;
si1=l4;
si2=2705740U;
f104(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l12;
si1=l4;
si2=2705724U;
f104(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f114(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=10U;
l3=si0;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
l5=si0;
si0=l4;
si1=1000U;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=10U;
l3=si0;
si0=l4;
l5=si0;
L2:;
{
si0=l2;
si1=6U;
si0+=si1;
si1=l3;
si0+=si1;
l6=si0;
si1=-4U;
si0+=si1;
si1=l5;
l0=si1;
si2=l0;
si3=10000U;
si2=DIV_U(si2,si3);
l5=si2;
si3=10000U;
si2*=si3;
si1-=si2;
l7=si1;
si2=65535U;
si1&=si2;
si2=100U;
si1=DIV_U(si1,si2);
l8=si1;
si2=1U;
si1<<=(si2&31);
si1=i32_load16_u(i->m0,(U64)si1+2705836U);
i32_store16(i->m0,(U64)si0,si1);
si0=l6;
si1=-2U;
si0+=si1;
si1=l7;
si2=l8;
si3=100U;
si2*=si3;
si1-=si2;
si2=65535U;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si1=i32_load16_u(i->m0,(U64)si1+2705836U);
i32_store16(i->m0,(U64)si0,si1);
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
si0=l0;
si1=9999999U;
si0=si0 > si1;
if(si0){
goto L2;
}
}
L1:;
si0=l5;
si1=9U;
si0=si0 > si1;
if(si0){
goto L4;
}
si0=l5;
l0=si0;
goto L3;
L4:;
si0=l2;
si1=6U;
si0+=si1;
si1=l3;
si2=-2U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l5;
si2=l5;
si3=65535U;
si2&=si3;
si3=100U;
si2=DIV_U(si2,si3);
l0=si2;
si3=100U;
si2*=si3;
si1-=si2;
si2=65535U;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si1=i32_load16_u(i->m0,(U64)si1+2705836U);
i32_store16(i->m0,(U64)si0,si1);
L3:;
si0=l4;
si0=!(si0);
if(si0){
goto L6;
}
si0=l0;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=l2;
si1=6U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
si0+=si1;
si1=l0;
si2=1U;
si1<<=(si2&31);
si1=i32_load8_u(i->m0,(U64)si1+2705837U);
i32_store8(i->m0,(U64)si0,si1);
L5:;
si0=l1;
si1=1U;
si2=1U;
si3=0U;
si4=l2;
si5=6U;
si4+=si5;
si5=l3;
si4+=si5;
si5=10U;
si6=l3;
si5-=si6;
si0=f108(i,si0,si1,si2,si3,si4,si5);
l3=si0;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f115(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 si0,si1,si2,si3,si4;
si0=l0;
si1=l1;
si2=l2;
si3=l3;
si4=l4;
f116(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L0:;
}

void f116(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U64 l8=0;
U32 si0,si1,si2,si3,si4;
U64 sj1,sj2;
si0=i->g0;
si1=80U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l1;
si1=257U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=253U;
l6=si0;
L5:;
{
si0=l0;
si1=l6;
si0+=si1;
l7=si0;
si1=3U;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L7;
}
si0=l7;
si1=2U;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L6;
}
si0=l6;
si1=2U;
si0+=si1;
l6=si0;
goto L2;
L7:;
si0=l6;
si1=3U;
si0+=si1;
l6=si0;
goto L2;
L6:;
si0=l7;
si1=1U;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L3;
}
si0=l7;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L2;
}
si0=l6;
si1=-4U;
si0+=si1;
l6=si0;
si1=-3U;
si0=si0 != si1;
if(si0){
goto L5;
}
}
si0=0U;
l6=si0;
goto L2;
L4:;
si0=l5;
si1=l1;
i32_store(i->m0,(U64)si0+16U,si1);
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=0U;
l7=si0;
si0=1U;
l6=si0;
goto L1;
L3:;
si0=l6;
si1=1U;
si0+=si1;
l6=si0;
L2:;
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+16U,si1);
si0=5U;
si1=0U;
si2=l6;
si3=l1;
si2=si2 < si3;
l6=si2;
si0=si2?si0:si1;
l7=si0;
si0=2705788U;
si1=1U;
si2=l6;
si0=si2?si0:si1;
l6=si0;
L1:;
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+24U,si1);
si0=l5;
si1=l6;
i32_store(i->m0,(U64)si0+20U,si1);
si0=l2;
si1=l1;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l3;
si1=l1;
si0=si0 > si1;
if(si0){
goto L14;
}
si0=l2;
si1=l3;
si0=si0 > si1;
if(si0){
goto L13;
}
si0=l2;
si0=!(si0);
if(si0){
goto L11;
}
si0=l2;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L11;
}
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L11;
}
si0=l2;
l7=si0;
L17:;
{
si0=l0;
si1=l7;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L16;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L17;
}
}
si0=0U;
l7=si0;
L16:;
L18:;
{
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L12;
}
si0=l1;
si1=l2;
si2=1U;
si1+=si2;
l2=si1;
si0=si0 != si1;
if(si0){
goto L18;
}
}
si0=l1;
l2=si0;
goto L12;
L15:;
si0=l5;
si1=27U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l8=sj1;
si2=l5;
si3=20U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
sj1=l8;
si2=l5;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=4U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=1048630U;
si1=l5;
si2=40U;
si1+=si2;
si2=l4;
f98(i,si0,si1,si2);
UNREACHABLE;
L14:;
si0=l5;
si1=27U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l8=sj1;
si2=l5;
si3=20U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
sj1=l8;
si2=l5;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=1048677U;
si1=l5;
si2=40U;
si1+=si2;
si2=l4;
f98(i,si0,si1,si2);
UNREACHABLE;
L13:;
si0=l5;
si1=27U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l8=sj1;
si2=l5;
si3=20U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l5;
sj1=l8;
si2=l5;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l8=sj1;
si2=l5;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
sj1=l8;
si2=l5;
si3=4U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=1048588U;
si1=l5;
si2=40U;
si1+=si2;
si2=l4;
f98(i,si0,si1,si2);
UNREACHABLE;
L12:;
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l2;
si0=si0 > si1;
if(si0){
goto L19;
}
si0=l7;
si0=!(si0);
if(si0){
goto L20;
}
si0=l7;
si1=l1;
si0=si0 < si1;
if(si0){
goto L21;
}
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L20;
}
goto L19;
L21:;
si0=l0;
si1=l7;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
L20:;
si0=l2;
si1=l1;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l2;
si1=l1;
si0=si0 != si1;
if(si0){
goto L19;
}
goto L22;
L23:;
si0=l0;
si1=l2;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L19;
}
L22:;
si0=l7;
si1=l2;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=l7;
si0+=si1;
l0=si0;
si0=i32_load8_s(i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L25;
}
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L24;
L25:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l7;
si1=31U;
si0&=si1;
l3=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l7=si0;
goto L24;
L26:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L27;
}
si0=l6;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
goto L24;
L27:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l3;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
L24:;
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=27U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l8=sj1;
si2=l5;
si3=20U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l5;
sj1=l8;
si2=l5;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=28U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=28U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=29U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=36U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=4U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=1048722U;
si1=l5;
si2=40U;
si1+=si2;
si2=l4;
f98(i,si0,si1,si2);
UNREACHABLE;
L19:;
si0=l0;
si1=l1;
si2=l7;
si3=l2;
si4=l4;
f115(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L11:;
si0=l3;
si0=!(si0);
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L8;
}
si0=l3;
l7=si0;
L29:;
{
si0=l0;
si1=l7;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L28;
}
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L29;
}
}
si0=0U;
l7=si0;
L28:;
L31:;
{
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L30;
}
si0=l1;
si1=l3;
si2=1U;
si1+=si2;
l3=si1;
si0=si0 != si1;
if(si0){
goto L31;
}
}
si0=l1;
l3=si0;
L30:;
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+28U,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+32U,si1);
si0=l7;
si1=l3;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l7;
si0=!(si0);
if(si0){
goto L32;
}
si0=l7;
si1=l1;
si0=si0 < si1;
if(si0){
goto L33;
}
si0=l7;
si1=l1;
si0=si0 == si1;
if(si0){
goto L32;
}
goto L9;
L33:;
si0=l0;
si1=l7;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-64U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L9;
}
L32:;
si0=l3;
si1=l1;
si0=si0 < si1;
if(si0){
goto L35;
}
si0=l3;
si1=l1;
si0=si0 != si1;
if(si0){
goto L9;
}
goto L34;
L35:;
si0=l0;
si1=l3;
si0+=si1;
si0=i32_load8_s(i->m0,(U64)si0);
si1=-65U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L9;
}
L34:;
si0=l7;
si1=l3;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l0;
si1=l7;
si0+=si1;
l0=si0;
si0=i32_load8_s(i->m0,(U64)si0);
l7=si0;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L37;
}
si0=l7;
si1=255U;
si0&=si1;
l7=si0;
goto L36;
L37:;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0+1U);
si1=63U;
si0&=si1;
l6=si0;
si0=l7;
si1=31U;
si0&=si1;
l3=si0;
si0=l7;
si1=-33U;
si0=si0 > si1;
if(si0){
goto L38;
}
si0=l3;
si1=6U;
si0<<=(si1&31);
si1=l6;
si0|=si1;
l7=si0;
goto L36;
L38:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(i->m0,(U64)si1+2U);
si2=63U;
si1&=si2;
si0|=si1;
l6=si0;
si0=l7;
si1=-16U;
si0=si0 >= si1;
if(si0){
goto L39;
}
si0=l6;
si1=l3;
si2=12U;
si1<<=(si2&31);
si0|=si1;
l7=si0;
goto L36;
L39:;
si0=l6;
si1=6U;
si0<<=(si1&31);
si1=l0;
si1=i32_load8_u(i->m0,(U64)si1+3U);
si2=63U;
si1&=si2;
si0|=si1;
si1=l3;
si2=18U;
si1<<=(si2&31);
si2=1835008U;
si1&=si2;
si0|=si1;
l7=si0;
L36:;
si0=l5;
si1=l7;
i32_store(i->m0,(U64)si0+36U,si1);
si0=l5;
si1=27U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l8=sj1;
si2=l5;
si3=20U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l5;
sj1=l8;
si2=l5;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l5;
si1=28U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=28U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
si1=29U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=36U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=1048803U;
si1=l5;
si2=40U;
si1+=si2;
si2=l4;
f98(i,si0,si1,si2);
UNREACHABLE;
L10:;
si0=l4;
f119(i,si0);
UNREACHABLE;
L9:;
si0=l0;
si1=l1;
si2=l7;
si3=l3;
si4=l4;
f115(i,si0,si1,si2,si3,si4);
UNREACHABLE;
L8:;
si0=l5;
si1=27U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
l8=sj1;
si2=l5;
si3=20U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l5;
sj1=l8;
si2=l5;
si3=12U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l5;
si1=26U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+40U,sj1);
si0=1048677U;
si1=l5;
si2=40U;
si1+=si2;
si2=l4;
f98(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f117(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 si0,si1,si2,si3,si4,si5,si6;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l3=si0;
si1=33554432U;
si0&=si1;
if(si0){
goto L4;
}
si0=l3;
si1=67108864U;
si0&=si1;
if(si0){
goto L3;
}
si0=l0;
si1=l1;
si0=f114(i,si0,si1);
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l4=si0;
goto L1;
L4:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=0U;
l3=si0;
L5:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si0+=si1;
si1=7U;
si0+=si1;
si1=l4;
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=4U;
si0>>=(si1&31);
l4=si0;
if(si0){
goto L5;
}
}
si0=1U;
l4=si0;
si0=l1;
si1=1U;
si2=2720021U;
si3=2U;
si4=l2;
si5=8U;
si4+=si5;
si5=l3;
si4+=si5;
si5=8U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f108(i,si0,si1,si2,si3,si4,si5);
si0=!(si0);
if(si0){
goto L2;
}
goto L1;
L3:;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=0U;
l3=si0;
L6:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si0+=si1;
si1=7U;
si0+=si1;
si1=l4;
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2720023U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=4U;
si0>>=(si1&31);
l4=si0;
if(si0){
goto L6;
}
}
si0=1U;
l4=si0;
si0=l1;
si1=1U;
si2=2720021U;
si3=2U;
si4=l2;
si5=8U;
si4+=si5;
si5=l3;
si4+=si5;
si5=8U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f108(i,si0,si1,si2,si3,si4,si5);
if(si0){
goto L1;
}
L2:;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
si1=2719580U;
si2=2U;
si3=l1;
si3=i32_load(i->m0,(U64)si3+4U);
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L7;
}
si0=1U;
l4=si0;
goto L1;
L7:;
si0=l0;
si1=4U;
si0+=si1;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+8U);
l4=si0;
si1=33554432U;
si0&=si1;
if(si0){
goto L9;
}
si0=l4;
si1=67108864U;
si0&=si1;
if(si0){
goto L8;
}
si0=l3;
si1=l1;
si0=f114(i,si0,si1);
l4=si0;
goto L1;
L9:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=0U;
l3=si0;
L10:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si0+=si1;
si1=7U;
si0+=si1;
si1=l4;
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2705608U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=4U;
si0>>=(si1&31);
l4=si0;
if(si0){
goto L10;
}
}
si0=l1;
si1=1U;
si2=2720021U;
si3=2U;
si4=l2;
si5=8U;
si4+=si5;
si5=l3;
si4+=si5;
si5=8U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f108(i,si0,si1,si2,si3,si4,si5);
l4=si0;
goto L1;
L8:;
si0=l3;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si0=0U;
l3=si0;
L11:;
{
si0=l2;
si1=8U;
si0+=si1;
si1=l3;
si0+=si1;
si1=7U;
si0+=si1;
si1=l4;
si2=15U;
si1&=si2;
si1=i32_load8_u(i->m0,(U64)si1+2720023U);
i32_store8(i->m0,(U64)si0,si1);
si0=l3;
si1=-1U;
si0+=si1;
l3=si0;
si0=l4;
si1=4U;
si0>>=(si1&31);
l4=si0;
if(si0){
goto L11;
}
}
si0=l1;
si1=1U;
si2=2720021U;
si3=2U;
si4=l2;
si5=8U;
si4+=si5;
si5=l3;
si4+=si5;
si5=8U;
si4+=si5;
si5=0U;
si6=l3;
si5-=si6;
si0=f108(i,si0,si1,si2,si3,si4,si5);
l4=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l4;
L0:;
return si0;
}

U32 f118(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1,si2,si3;
si0=i->g0;
si1=16U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=1U;
l3=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l4=si0;
si1=39U;
si2=l1;
si2=i32_load(i->m0,(U64)si2+4U);
l5=si2;
si2=i32_load(i->m0,(U64)si2+16U);
l1=si2;
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
if(si0){
goto L1;
}
si0=l2;
si1=l0;
si1=i32_load(i->m0,(U64)si1);
si2=257U;
f101(i,si0,si1,si2);
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+13U);
l3=si0;
si1=129U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l4;
si1=l2;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L3:;
si0=l4;
si1=l2;
si2=l2;
si2=i32_load8_u(i->m0,(U64)si2+12U);
l0=si2;
si1+=si2;
si2=l3;
si3=l0;
si2-=si3;
si3=l5;
si3=i32_load(i->m0,(U64)si3+12U);
si0=TF(i->t0,si3,U32 (*)(gauche_ffiInstance*,U32,U32,U32))(i,si0,si1,si2);
si0=!(si0);
if(si0){
goto L2;
}
si0=1U;
l3=si0;
goto L1;
L2:;
si0=l4;
si1=39U;
si2=l1;
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
l3=si0;
L1:;
si0=l2;
si1=16U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f119(gauche_ffiInstance*i,U32 l0) {
U32 si0,si1,si2;
si0=2705793U;
si1=43U;
si2=l0;
f95(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

void f120(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 si0,si1,si2,si3;
U64 sj1,sj2;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
si1=l1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l5;
si1=l0;
i32_store(i->m0,(U64)si0,si1);
si0=l5;
si1=l3;
i32_store(i->m0,(U64)si0+12U,si1);
si0=l5;
si1=l2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l5;
si1=30U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
si3=8U;
si2+=si3;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l5;
si1=27U;
sj1=(U64)(si1);
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
si2=l5;
sj2=(U64)(si2);
sj1|=sj2;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=1049179U;
si1=l5;
si2=16U;
si1+=si2;
si2=l4;
f98(i,si0,si1,si2);
UNREACHABLE;
L0:;
}

U32 f121(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load(i->m0,(U64)si0);
si1=l1;
si2=l0;
si2=i32_load(i->m0,(U64)si2+4U);
si2=i32_load(i->m0,(U64)si2+12U);
si0=TF(i->t0,si2,U32 (*)(gauche_ffiInstance*,U32,U32))(i,si0,si1);
L0:;
return si0;
}

void f122(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3;
si0=l2;
si1=3U;
si0+=si1;
si1=-4U;
si0&=si1;
l4=si0;
si1=l2;
si0=si0 != si1;
if(si0){
goto L4;
}
si0=l3;
si1=-8U;
si0+=si1;
l5=si0;
si0=0U;
l4=si0;
goto L3;
L4:;
si0=l3;
si1=l4;
si2=l2;
si1-=si2;
l4=si1;
si2=l3;
si3=l4;
si2=si2 < si3;
si0=si2?si0:si1;
l4=si0;
si0=l3;
si0=!(si0);
if(si0){
goto L5;
}
si0=0U;
l6=si0;
si0=l1;
si1=255U;
si0&=si1;
l7=si0;
si0=1U;
l8=si0;
L6:;
{
si0=l2;
si1=l6;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l7;
si0=si0 == si1;
if(si0){
goto L1;
}
si0=l4;
si1=l6;
si2=1U;
si1+=si2;
l6=si1;
si0=si0 != si1;
if(si0){
goto L6;
}
}
L5:;
si0=l4;
si1=l3;
si2=-8U;
si1+=si2;
l5=si1;
si0=si0 > si1;
if(si0){
goto L2;
}
L3:;
si0=l1;
si1=255U;
si0&=si1;
si1=16843009U;
si0*=si1;
l6=si0;
L7:;
{
si0=16843008U;
si1=l2;
si2=l4;
si1+=si2;
l7=si1;
si1=i32_load(i->m0,(U64)si1);
si2=l6;
si1^=si2;
l8=si1;
si0-=si1;
si1=l8;
si0|=si1;
si1=16843008U;
si2=l7;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
si3=l6;
si2^=si3;
l7=si2;
si1-=si2;
si2=l7;
si1|=si2;
si0&=si1;
si1=-2139062144U;
si0&=si1;
si1=-2139062144U;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si1=l5;
si0=si0 <= si1;
if(si0){
goto L7;
}
}
L2:;
si0=l3;
si1=l4;
si0=si0 == si1;
if(si0){
goto L8;
}
si0=l1;
si1=255U;
si0&=si1;
l6=si0;
si0=1U;
l8=si0;
L9:;
{
si0=l2;
si1=l4;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=l6;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l4;
l6=si0;
goto L1;
L10:;
si0=l3;
si1=l4;
si2=1U;
si1+=si2;
l4=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L8:;
si0=0U;
l8=si0;
L1:;
si0=l0;
si1=l6;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l0;
si1=l8;
i32_store(i->m0,(U64)si0,si1);
L0:;
}

void f123(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U64 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=i->g0;
si1=784U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l3;
si1=4U;
si0+=si1;
si1=0U;
si2=777U;
wasmMemoryFill(i->m0,si0,si1,si2);
si0=0U;
l4=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si1=4U;
si0+=si1;
si1=8U;
si0+=si1;
l5=si0;
si0=l3;
si1=4U;
si0+=si1;
l6=si0;
si0=0U;
l7=si0;
si0=l2;
l4=si0;
L12:;
{
si0=l1;
si1=l7;
si0+=si1;
l8=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l9=si0;
si1=48U;
si0=si0 == si1;
if(si0){
goto L13;
}
si0=l9;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L10;
}
si0=l1;
si1=l7;
si0+=si1;
l11=si0;
si0=l7;
si1=-1U;
si0^=si1;
si1=l2;
si0+=si1;
l8=si0;
si0=0U;
l9=si0;
L14:;
{
si0=l9;
l7=si0;
si1=767U;
si0=si0 > si1;
if(si0){
goto L15;
}
si0=l5;
si1=l7;
si0+=si1;
si1=l10;
i32_store8(i->m0,(U64)si0,si1);
L15:;
si0=l8;
si1=l7;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l7;
si1=1U;
si0+=si1;
l9=si0;
si0=l11;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
l12=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L14;
L16:;
}
si0=l6;
si1=l7;
si2=1U;
si1+=si2;
l9=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l11;
si0+=si1;
l8=si0;
si0=0U;
l11=si0;
si0=0U;
l10=si0;
goto L5;
L13:;
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l2;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L12;
}
}
si0=0U;
l4=si0;
goto L3;
L11:;
si0=l3;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l11;
si1=l9;
si0+=si1;
l8=si0;
si0=l4;
si1=l9;
si0-=si1;
l10=si0;
si0=l12;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L9;
}
si0=l7;
si1=1U;
si0+=si1;
l9=si0;
si0=0U;
l11=si0;
goto L5;
L10:;
si0=l2;
si1=l7;
si0-=si1;
l10=si0;
si0=0U;
l4=si0;
si0=l3;
si1=0U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l9;
si1=46U;
si0=si0 == si1;
if(si0){
goto L17;
}
si0=0U;
l11=si0;
goto L4;
L17:;
si0=l1;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=l7;
si1=-1U;
si0^=si1;
si1=l2;
si0+=si1;
l12=si0;
goto L8;
L9:;
si0=l9;
si1=-1U;
si0^=si1;
si1=l4;
si0+=si1;
l12=si0;
si0=l11;
si1=l9;
si0+=si1;
si1=1U;
si0+=si1;
l11=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L8;
}
si0=l12;
l10=si0;
si0=l11;
l4=si0;
goto L7;
L8:;
si0=l12;
if(si0){
goto L18;
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
si0=l11;
l8=si0;
goto L6;
L18:;
si0=l8;
si1=l10;
si0+=si1;
l8=si0;
si0=0U;
l7=si0;
L20:;
{
si0=l11;
si1=l7;
si0+=si1;
l4=si0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=48U;
si0=si0 != si1;
if(si0){
goto L19;
}
si0=l12;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L20;
}
}
si0=0U;
l9=si0;
si0=0U;
l10=si0;
goto L6;
L19:;
si0=l12;
si1=l7;
si0-=si1;
l10=si0;
si0=0U;
l9=si0;
L7:;
si0=l10;
si1=8U;
si0=si0 < si1;
if(si0){
goto L23;
}
si0=l9;
si1=8U;
si0+=si1;
l7=si0;
L25:;
{
si0=l7;
si1=768U;
si0=si0 >= si1;
if(si0){
goto L22;
}
si0=l4;
sj0=i64_load(i->m0,(U64)si0);
l13=sj0;
sj1=W2C2_LL(5063812098665367110U);
sj0+=sj1;
sj1=l13;
sj2=W2C2_LL(-3472328296227680304U);
sj1+=sj2;
l13=sj1;
sj0|=sj1;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L22;
}
si0=l7;
si1=-8U;
si0+=si1;
si1=768U;
si0=si0 > si1;
if(si0){
goto L26;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l7;
si0+=si1;
sj1=l13;
i64_store(i->m0,(U64)si0,sj1);
si0=l3;
si1=l7;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l7;
si1=8U;
si0+=si1;
l7=si0;
si0=l4;
si1=8U;
si0+=si1;
l4=si0;
si0=l10;
si1=-8U;
si0+=si1;
l10=si0;
si1=7U;
si0=si0 <= si1;
if(si0){
goto L24;
}
goto L25;
L26:;
}
si0=l7;
si1=-8U;
si0+=si1;
si1=768U;
si2=768U;
si3=2707528U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L24:;
si0=l7;
si1=-8U;
si0+=si1;
l9=si0;
L23:;
si0=l10;
if(si0){
goto L21;
}
si0=0U;
l10=si0;
si0=l4;
l8=si0;
goto L6;
L22:;
si0=l7;
si1=-8U;
si0+=si1;
l9=si0;
L21:;
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L28;
}
si0=l4;
l8=si0;
goto L27;
L28:;
si0=l4;
si1=1U;
si0+=si1;
l14=si0;
si0=l10;
si1=-1U;
si0+=si1;
l5=si0;
si0=l9;
si1=l3;
si2=4U;
si1+=si2;
si0+=si1;
si1=8U;
si0+=si1;
l15=si0;
si0=0U;
l8=si0;
L30:;
{
si0=l9;
si1=l8;
l7=si1;
si0+=si1;
l6=si0;
si1=767U;
si0=si0 > si1;
if(si0){
goto L31;
}
si0=l15;
si1=l7;
si0+=si1;
si1=l11;
i32_store8(i->m0,(U64)si0,si1);
L31:;
si0=l5;
si1=l7;
si0=si0 == si1;
if(si0){
goto L32;
}
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
si0=l7;
si1=1U;
si0+=si1;
l8=si0;
si0=l14;
si1=l7;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l11=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L29;
}
goto L30;
L32:;
}
si0=0U;
l10=si0;
L29:;
si0=l4;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=l6;
si1=1U;
si0+=si1;
l9=si0;
L27:;
si0=l3;
si1=l9;
i32_store(i->m0,(U64)si0+4U,si1);
L6:;
si0=l3;
si1=l10;
si2=l12;
si1-=si2;
l11=si1;
i32_store(i->m0,(U64)si0+8U,si1);
L5:;
si0=l9;
if(si0){
goto L33;
}
si0=0U;
l4=si0;
goto L4;
L33:;
si0=l2;
si1=l10;
si0-=si1;
l7=si0;
si0=l2;
si1=l10;
si0=si0 < si1;
if(si0){
goto L1;
}
si0=0U;
l4=si0;
si0=l2;
si1=l10;
si0=si0 == si1;
if(si0){
goto L34;
}
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si0=0U;
l4=si0;
L35:;
{
si0=l2;
si1=l7;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L36;
case 1:
goto L34;
case 2:
goto L37;
default:
goto L34;
}
L37:;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
L36:;
si0=l7;
si1=-1U;
si0+=si1;
l7=si0;
if(si0){
goto L35;
}
}
L34:;
si0=l3;
si1=l11;
si2=l9;
si1+=si2;
l11=si1;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l3;
si1=l9;
si2=l4;
si1-=si2;
l4=si1;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l4;
si1=769U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=768U;
l4=si0;
si0=l3;
si1=768U;
i32_store(i->m0,(U64)si0+4U,si1);
si0=l3;
si1=1U;
i32_store8(i->m0,(U64)si0+780U,si1);
L4:;
si0=l10;
si0=!(si0);
if(si0){
goto L38;
}
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=101U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=l10;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L40;
}
si0=0U;
l7=si0;
goto L39;
L40:;
si0=l8;
si1=1U;
si0+=si1;
l2=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l12=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L44;
case 1:
goto L43;
case 2:
goto L44;
default:
goto L43;
}
L44:;
si0=l10;
si1=-2U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L42;
}
si0=l8;
si1=2U;
si0+=si1;
l2=si0;
L43:;
si0=0U;
l1=si0;
si0=0U;
l7=si0;
L45:;
{
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
l8=si0;
si1=9U;
si0=si0 > si1;
if(si0){
goto L41;
}
si0=l7;
si1=10U;
si0*=si1;
si1=l8;
si0+=si1;
l8=si0;
si1=l7;
si2=l7;
si3=65536U;
si2=(U32)((I32)si2<(I32)si3);
l10=si2;
si0=si2?si0:si1;
l7=si0;
si0=l8;
si1=l1;
si2=l10;
si0=si2?si0:si1;
l1=si0;
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L45;
}
goto L41;
}
L42:;
si0=0U;
l1=si0;
L41:;
si0=0U;
si1=l1;
si0-=si1;
si1=l1;
si2=l12;
si3=45U;
si2=si2 == si3;
si0=si2?si0:si1;
l7=si0;
L39:;
si0=l3;
si1=l11;
si2=l7;
si1+=si2;
i32_store(i->m0,(U64)si0+8U,si1);
L38:;
si0=l4;
si1=18U;
si0=si0 > si1;
if(si0){
goto L2;
}
L3:;
si0=19U;
si1=l4;
si0-=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L2;
}
si0=l3;
si1=4U;
si0+=si1;
si1=l4;
si0+=si1;
si1=8U;
si0+=si1;
si1=0U;
si2=l7;
wasmMemoryFill(i->m0,si0,si1,si2);
L2:;
si0=l0;
si1=l3;
si2=4U;
si1+=si2;
si2=780U;
wasmMemoryCopy(i->m0,i->m0,si0,si1,si2);
si0=l3;
si1=784U;
si0+=si1;
i->g0=si0;
goto L0;
L1:;
si0=0U;
si1=l7;
si2=l2;
si3=2707544U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L0:;
}

void f124(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U64 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U64 l12=0;
U32 l13=0;
U32 l14=0;
U64 l15=0;
U64 l16=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3;
sj0=W2C2_LL(0U);
l3=sj0;
si0=l2;
l4=si0;
si0=l1;
l5=si0;
si0=l2;
si1=8U;
si0=si0 < si1;
if(si0){
goto L7;
}
sj0=W2C2_LL(0U);
l3=sj0;
si0=l1;
l5=si0;
si0=l2;
l4=si0;
L8:;
{
si0=l5;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
sj1=W2C2_LL(5063812098665367110U);
sj0+=sj1;
sj1=l6;
sj2=W2C2_LL(-3472328296227680304U);
sj1+=sj2;
l6=sj1;
sj0|=sj1;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L6;
}
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
sj1=l6;
sj2=W2C2_LL(8U);
sj1>>=(sj2&63);
sj0+=sj1;
l6=sj0;
sj1=W2C2_LL(16U);
sj0>>=(sj1&63);
sj1=W2C2_LL(1095216660735U);
sj0&=sj1;
sj1=W2C2_LL(42949672960001U);
sj0*=sj1;
sj1=l6;
sj2=W2C2_LL(1095216660735U);
sj1&=sj2;
sj2=W2C2_LL(4294967296000100U);
sj1*=sj2;
sj0+=sj1;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
sj1=l3;
sj2=W2C2_LL(100000000U);
sj1*=sj2;
sj0+=sj1;
l3=sj0;
si0=l5;
si1=8U;
si0+=si1;
l5=si0;
si0=l4;
si1=-8U;
si0+=si1;
l4=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L8;
}
}
L7:;
si0=l4;
si0=!(si0);
if(si0){
goto L5;
}
L6:;
si0=0U;
l7=si0;
L9:;
{
si0=l5;
si1=l7;
si0+=si1;
l8=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l9=si0;
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L4;
}
sj0=l3;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l10;
sj1=(U64)(si1);
sj2=W2C2_LL(255U);
sj1&=sj2;
sj0+=sj1;
l3=sj0;
si0=l4;
si1=l7;
si2=1U;
si1+=si2;
l7=si1;
si0=si0 != si1;
if(si0){
goto L9;
}
}
L5:;
si0=l2;
si0=!(si0);
if(si0){
goto L3;
}
sj0=W2C2_LL(0U);
l6=sj0;
si0=1U;
l9=si0;
si0=0U;
l11=si0;
si0=l2;
l7=si0;
sj0=W2C2_LL(0U);
l12=sj0;
goto L2;
L4:;
si0=l4;
si1=l7;
si0-=si1;
l11=si0;
si0=l9;
si1=255U;
si0&=si1;
si1=46U;
si0=si0 == si1;
if(si0){
goto L11;
}
sj0=W2C2_LL(0U);
l12=sj0;
si0=0U;
l9=si0;
si0=l11;
l5=si0;
goto L10;
L11:;
si0=l5;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
l8=si0;
si0=l7;
si1=-1U;
si0^=si1;
si1=l4;
si0+=si1;
l5=si0;
si0=l11;
si1=9U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L15;
}
L16:;
{
si0=l8;
sj0=i64_load(i->m0,(U64)si0);
l6=sj0;
sj1=W2C2_LL(5063812098665367110U);
sj0+=sj1;
sj1=l6;
sj2=W2C2_LL(-3472328296227680304U);
sj1+=sj2;
l6=sj1;
sj0|=sj1;
sj1=W2C2_LL(-9187201950435737472U);
sj0&=sj1;
si0=!(sj0);
si0=!(si0);
if(si0){
goto L14;
}
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
sj1=l6;
sj2=W2C2_LL(8U);
sj1>>=(sj2&63);
sj0+=sj1;
l6=sj0;
sj1=W2C2_LL(16U);
sj0>>=(sj1&63);
sj1=W2C2_LL(1095216660735U);
sj0&=sj1;
sj1=W2C2_LL(42949672960001U);
sj0*=sj1;
sj1=l6;
sj2=W2C2_LL(1095216660735U);
sj1&=sj2;
sj2=W2C2_LL(4294967296000100U);
sj1*=sj2;
sj0+=sj1;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
sj1=l3;
sj2=W2C2_LL(100000000U);
sj1*=sj2;
sj0+=sj1;
l3=sj0;
si0=l8;
si1=8U;
si0+=si1;
l8=si0;
si0=l5;
si1=-8U;
si0+=si1;
l5=si0;
si1=7U;
si0=si0 > si1;
if(si0){
goto L16;
}
}
L15:;
si0=l5;
si0=!(si0);
if(si0){
goto L13;
}
L14:;
si0=l8;
l10=si0;
si1=l5;
si0+=si1;
l8=si0;
L17:;
{
si0=l10;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l9=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L18;
}
si0=l10;
l8=si0;
goto L12;
L18:;
sj0=l3;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l9;
sj1=(U64)(si1);
sj2=W2C2_LL(255U);
sj1&=sj2;
sj0+=sj1;
l3=sj0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l5;
si1=-1U;
si0+=si1;
l5=si0;
if(si0){
goto L17;
}
}
L13:;
si0=0U;
l5=si0;
L12:;
si0=l7;
si1=-1U;
si0^=si1;
si1=l4;
si2=l5;
si1-=si2;
si0+=si1;
l9=si0;
si0=l5;
si1=l4;
si0-=si1;
si1=l7;
si0+=si1;
si1=1U;
si0+=si1;
sj0=(U64)(I64)(I32)(si0);
l12=sj0;
L10:;
si0=2U;
l10=si0;
si0=l9;
si1=l2;
si2=l4;
si1-=si2;
si0+=si1;
si1=l7;
si0+=si1;
l7=si0;
si0=!(si0);
if(si0){
goto L1;
}
sj0=W2C2_LL(0U);
l6=sj0;
si0=l5;
if(si0){
goto L19;
}
si0=1U;
l9=si0;
goto L2;
L19:;
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0);
si1=32U;
si0|=si1;
si1=101U;
si0=si0 == si1;
if(si0){
goto L20;
}
si0=0U;
l9=si0;
goto L2;
L20:;
si0=l5;
si1=-1U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=1U;
si0+=si1;
l4=si0;
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+1U);
l13=si0;
l14=si0;
si0=l13;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L22;
case 1:
goto L21;
case 2:
goto L22;
default:
goto L21;
}
L22:;
si0=l5;
si1=-2U;
si0+=si1;
l9=si0;
si0=!(si0);
if(si0){
goto L1;
}
si0=l8;
si1=2U;
si0+=si1;
l4=si0;
si0=l8;
si0=i32_load8_u(i->m0,(U64)si0+2U);
l14=si0;
L21:;
si0=l14;
si1=-48U;
si0+=si1;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L1;
}
sj0=W2C2_LL(0U);
l15=sj0;
sj0=W2C2_LL(0U);
l6=sj0;
L24:;
{
si0=l4;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l5=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L23;
}
sj0=l6;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l5;
sj1=(U64)(si1);
sj2=W2C2_LL(255U);
sj1&=sj2;
sj0+=sj1;
l16=sj0;
sj1=l6;
sj2=l6;
sj3=W2C2_LL(65536U);
si2=(U64)((I64)sj2<(I64)sj3);
l5=si2;
sj0=si2?sj0:sj1;
l6=sj0;
sj0=l16;
sj1=l15;
si2=l5;
sj0=si2?sj0:sj1;
l15=sj0;
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l9;
si1=-1U;
si0+=si1;
l9=si0;
if(si0){
goto L24;
}
}
si0=0U;
l9=si0;
L23:;
sj0=W2C2_LL(0U);
sj1=l15;
sj0-=sj1;
sj1=l15;
si2=l13;
si3=45U;
si2=si2 == si3;
sj0=si2?sj0:sj1;
l6=sj0;
sj1=l12;
sj0+=sj1;
l12=sj0;
si0=l9;
si0=!(si0);
l9=si0;
goto L2;
L3:;
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+17U,si1);
goto L0;
L2:;
si0=0U;
l10=si0;
si0=l7;
si1=20U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
si0=l2;
si0=!(si0);
if(si0){
goto L29;
}
si0=l7;
si1=-19U;
si0+=si1;
l4=si0;
si0=l2;
l10=si0;
si0=l1;
l5=si0;
L31:;
{
si0=l5;
si0=i32_load8_u(i->m0,(U64)si0);
l7=si0;
si1=-46U;
si0+=si1;
switch(si0){
case 0:
goto L32;
case 1:
goto L30;
case 2:
goto L32;
default:
goto L30;
}
L32:;
si0=l4;
si1=0U;
si2=l7;
si3=-47U;
si2+=si3;
l8=si2;
si3=l8;
si4=l7;
si3=si3 > si4;
si1=si3?si1:si2;
si0-=si1;
l4=si0;
si0=l5;
si1=1U;
si0+=si1;
l5=si0;
si0=l10;
si1=-1U;
si0+=si1;
l10=si0;
if(si0){
goto L31;
}
}
L30:;
si0=l4;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L26;
}
si0=0U;
si1=l2;
si0-=si1;
l5=si0;
sj0=W2C2_LL(0U);
l3=sj0;
L35:;
{
si0=l5;
l7=si0;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 > si1;
if(si0){
goto L34;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l7;
si1=1U;
si0+=si1;
l5=si0;
sj0=l3;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l10;
sj1=(U64)(si1);
sj2=W2C2_LL(255U);
sj1&=sj2;
sj0+=sj1;
l3=sj0;
sj1=W2C2_LL(999999999999999999U);
si0=sj0 > sj1;
if(si0){
goto L36;
}
si0=l5;
if(si0){
goto L35;
}
L36:;
}
sj0=l3;
sj1=W2C2_LL(999999999999999999U);
si0=sj0 > sj1;
if(si0){
goto L28;
}
si0=l7;
si1=-1U;
si0=si0 == si1;
if(si0){
goto L29;
}
si0=0U;
si1=l5;
si0-=si1;
l5=si0;
goto L33;
L34:;
si0=0U;
si1=l7;
si0-=si1;
l5=si0;
L33:;
si0=l5;
si1=-1U;
si0+=si1;
l2=si0;
if(si0){
goto L37;
}
si0=0U;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L37:;
si0=l1;
si1=1U;
si0+=si1;
l7=si0;
si0=l2;
l5=si0;
L38:;
{
si0=l7;
si0=i32_load8_u(i->m0,(U64)si0);
si1=-48U;
si0+=si1;
l10=si0;
si1=255U;
si0&=si1;
si1=9U;
si0=si0 <= si1;
if(si0){
goto L39;
}
si0=l5;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L39:;
si0=l5;
si1=-1U;
si0+=si1;
l8=si0;
sj0=l3;
sj1=W2C2_LL(10U);
sj0*=sj1;
si1=l10;
sj1=(U64)(si1);
sj2=W2C2_LL(255U);
sj1&=sj2;
sj0+=sj1;
l3=sj0;
sj1=W2C2_LL(999999999999999999U);
si0=sj0 > sj1;
if(si0){
goto L40;
}
si0=l7;
si1=1U;
si0+=si1;
l7=si0;
si0=l5;
si1=1U;
si0=si0 != si1;
l10=si0;
si0=l8;
l5=si0;
si0=l10;
if(si0){
goto L38;
}
L40:;
}
si0=l8;
si1=l2;
si0-=si1;
l5=si0;
goto L27;
L29:;
si0=1U;
si1=0U;
si2=0U;
si3=2709016U;
f96(i,si0,si1,si2,si3);
UNREACHABLE;
L28:;
si0=0U;
si1=l11;
si2=l5;
si1+=si2;
si0-=si1;
l5=si0;
L27:;
sj0=l6;
si1=l5;
sj1=(U64)(I64)(I32)(si1);
sj0+=sj1;
l12=sj0;
L26:;
si0=l4;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l10=si0;
L25:;
si0=l9;
if(si0){
goto L41;
}
si0=l0;
si1=2U;
i32_store8(i->m0,(U64)si0+17U,si1);
goto L0;
L41:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0+16U,si1);
si0=l0;
sj1=l3;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l12;
i64_store(i->m0,(U64)si0,sj1);
L1:;
si0=l0;
si1=l10;
i32_store8(i->m0,(U64)si0+17U,si1);
L0:;
}

U32 f125(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 l2=0;
U32 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 si0,si1,si2,si3,si4,si5,si6;
U64 sj0,sj1,sj2,sj3;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
si0=20U;
l3=si0;
si0=l0;
sj0=i64_load(i->m0,(U64)si0);
l4=sj0;
sj1=l4;
sj2=W2C2_LL(63U);
sj1=(U64)((I64)sj1>>(sj2&63));
l5=sj1;
sj0^=sj1;
sj1=l5;
sj0-=sj1;
l6=sj0;
sj1=W2C2_LL(1000U);
si0=sj0 < sj1;
if(si0){
goto L1;
}
si0=20U;
l3=si0;
L2:;
{
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si0+=si1;
l0=si0;
si1=-4U;
si0+=si1;
sj1=l6;
l5=sj1;
sj2=l5;
sj3=W2C2_LL(10000U);
sj2=DIV_U(sj2,sj3);
l6=sj2;
sj3=W2C2_LL(10000U);
sj2*=sj3;
sj1-=sj2;
si1=(U32)(sj1);
l7=si1;
si2=65535U;
si1&=si2;
si2=100U;
si1=DIV_U(si1,si2);
l8=si1;
si2=1U;
si1<<=(si2&31);
si1=i32_load16_u(i->m0,(U64)si1+2705836U);
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
si1=-2U;
si0+=si1;
si1=l7;
si2=l8;
si3=100U;
si2*=si3;
si1-=si2;
si2=65535U;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si1=i32_load16_u(i->m0,(U64)si1+2705836U);
i32_store16(i->m0,(U64)si0,si1);
si0=l3;
si1=-4U;
si0+=si1;
l3=si0;
sj0=l5;
sj1=W2C2_LL(9999999U);
si0=sj0 > sj1;
if(si0){
goto L2;
}
}
L1:;
sj0=l6;
sj1=W2C2_LL(9U);
si0=sj0 <= sj1;
if(si0){
goto L3;
}
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=-2U;
si1+=si2;
l3=si1;
si0+=si1;
sj1=l6;
si1=(U32)(sj1);
l0=si1;
si2=l0;
si3=65535U;
si2&=si3;
si3=100U;
si2=DIV_U(si2,si3);
l0=si2;
si3=100U;
si2*=si3;
si1-=si2;
si2=65535U;
si1&=si2;
si2=1U;
si1<<=(si2&31);
si1=i32_load16_u(i->m0,(U64)si1+2705836U);
i32_store16(i->m0,(U64)si0,si1);
si0=l0;
sj0=(U64)(si0);
l6=sj0;
L3:;
sj0=l4;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=l6;
si0=!(sj0);
if(si0){
goto L4;
}
L5:;
si0=l2;
si1=12U;
si0+=si1;
si1=l3;
si2=-1U;
si1+=si2;
l3=si1;
si0+=si1;
sj1=l6;
si1=(U32)(sj1);
si2=1U;
si1<<=(si2&31);
si1=i32_load8_u(i->m0,(U64)si1+2705837U);
i32_store8(i->m0,(U64)si0,si1);
L4:;
si0=l1;
sj1=l4;
sj2=W2C2_LL(-1U);
si1=(U64)((I64)sj1>(I64)sj2);
si2=1U;
si3=0U;
si4=l2;
si5=12U;
si4+=si5;
si5=l3;
si4+=si5;
si5=20U;
si6=l3;
si5-=si6;
si0=f108(i,si0,si1,si2,si3,si4,si5);
l3=si0;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
si0=l3;
L0:;
return si0;
}

void f126(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U64 l6=0;
U64 l7=0;
F64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
F64 sd0,sd1,sd2;
si0=i->g0;
si1=816U;
si0-=si1;
l3=si0;
i->g0=si0;
si0=l2;
if(si0){
goto L2;
}
si0=l0;
si1=1U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L2:;
si0=l1;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si1=-43U;
si0+=si1;
switch(si0){
case 0:
goto L6;
case 1:
goto L5;
case 2:
goto L6;
default:
goto L5;
}
L6:;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L4;
}
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
L5:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
f124(i,si0,si1,si2);
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+49U);
l5=si0;
si1=2U;
si0=si0 == si1;
if(si0){
goto L10;
}
si0=l3;
sj0=i64_load(i->m0,(U64)si0+40U);
l6=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+32U);
l7=sj0;
sj1=W2C2_LL(-38U);
sj0+=sj1;
sj1=W2C2_LL(-60U);
si0=sj0 < sj1;
if(si0){
goto L7;
}
sj0=l6;
sj1=W2C2_LL(9007199254740992U);
si0=sj0 > sj1;
if(si0){
goto L7;
}
si0=l5;
si1=1U;
si0&=si1;
if(si0){
goto L7;
}
sj0=l7;
sj1=W2C2_LL(22U);
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L11;
}
sj0=l7;
si0=(U32)(sj0);
l2=si0;
sj0=l6;
sd0=(F64)(sj0);
l8=sd0;
sj0=l7;
sj1=W2C2_LL(0U);
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L9;
}
si0=l2;
si1=3U;
si0<<=(si1&31);
sd0=f64_load(i->m0,(U64)si0+2719584U);
sd1=l8;
sd0*=sd1;
l8=sd0;
goto L8;
L11:;
si0=l3;
sj1=l6;
sj2=W2C2_LL(0U);
sj3=l7;
si3=(U32)(sj3);
si4=3U;
si3<<=(si4&31);
si4=2705304U;
si3+=si4;
sj3=i64_load(i->m0,(U64)si3);
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+8U);
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L7;
}
si0=l3;
sj0=i64_load(i->m0,(U64)si0);
l9=sj0;
sj1=W2C2_LL(9007199254740992U);
si0=sj0 > sj1;
if(si0){
goto L7;
}
sj0=l9;
sd0=(F64)(sj0);
sd1=1e+22;
sd0*=sd1;
l8=sd0;
goto L8;
L10:;
si0=l2;
si1=-3U;
si0+=si1;
switch(si0){
case 0:
goto L14;
case 1:
goto L12;
case 2:
goto L12;
case 3:
goto L12;
case 4:
goto L12;
case 5:
goto L15;
default:
goto L12;
}
L15:;
si0=l1;
sj0=i64_load(i->m0,(U64)si0);
sj1=W2C2_LL(-2314885530818453537U);
sj0&=sj1;
sj1=W2C2_LL(6436850368004902473U);
si0=sj0 != sj1;
if(si0){
goto L12;
}
sd0=INFINITY;
l8=sd0;
goto L13;
L14:;
si0=l1;
sj0=i64_load16_u(i->m0,(U64)si0);
si1=l1;
sj1=i64_load8_u(i->m0,(U64)si1+2U);
sj2=W2C2_LL(16U);
sj1<<=(sj2&63);
sj0|=sj1;
sj1=W2C2_LL(14671839U);
sj0&=sj1;
l6=sj0;
sj1=W2C2_LL(4607561U);
si0=sj0 != sj1;
if(si0){
goto L16;
}
sd0=INFINITY;
l8=sd0;
goto L13;
L16:;
sj0=l6;
sj1=W2C2_LL(5128526U);
si0=sj0 != sj1;
if(si0){
goto L12;
}
sd0=INFINITY;
l8=sd0;
L13:;
si0=l0;
sd1=l8;
sd1=-(sd1);
sd2=l8;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L12:;
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0+1U,si1);
si0=l0;
si1=1U;
i32_store8(i->m0,(U64)si0,si1);
goto L1;
L9:;
sd0=l8;
si1=2719584U;
si2=l2;
si3=3U;
si2<<=(si3&31);
si1-=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0/=sd1;
l8=sd0;
L8:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
sd1=l8;
sd1=-(sd1);
sd2=l8;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
goto L1;
L7:;
si0=l3;
si1=16U;
si0+=si1;
sj1=l7;
sj2=l6;
f97(i,si0,sj1,sj2);
si0=l3;
si0=i32_load(i->m0,(U64)si0+24U);
l10=si0;
si0=l5;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L3;
}
si0=l10;
si1=-1U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L3;
}
si0=l3;
si1=32U;
si0+=si1;
sj1=l7;
sj2=l6;
sj3=W2C2_LL(1U);
sj2+=sj3;
f97(i,si0,sj1,sj2);
si0=l10;
si1=-1U;
si2=l10;
si3=l3;
si3=i32_load(i->m0,(U64)si3+40U);
si2=si2 == si3;
si0=si2?si0:si1;
si1=-1U;
si2=l3;
sj2=i64_load(i->m0,(U64)si2+16U);
si3=l3;
sj3=i64_load(i->m0,(U64)si3+32U);
si2=sj2 == sj3;
si0=si2?si0:si1;
l10=si0;
goto L3;
L4:;
si0=l0;
si1=257U;
i32_store16(i->m0,(U64)si0,si1);
goto L1;
L3:;
si0=l10;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
si0=l3;
sj0=i64_load(i->m0,(U64)si0+16U);
l6=sj0;
goto L17;
L18:;
si0=l3;
si1=32U;
si0+=si1;
si1=l1;
si2=l2;
f123(i,si0,si1,si2);
sj0=W2C2_LL(0U);
l6=sj0;
si0=l3;
si0=i32_load(i->m0,(U64)si0+32U);
si0=!(si0);
if(si0){
goto L20;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+36U);
l2=si0;
si1=-324U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
si0=2047U;
l10=si0;
si0=l2;
si1=309U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l2;
si1=1U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L21;
}
si0=0U;
l1=si0;
goto L19;
L21:;
si0=0U;
l1=si0;
L22:;
{
si0=60U;
l5=si0;
si0=l2;
si1=19U;
si0=si0 >= si1;
if(si0){
goto L23;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+2705624U);
l5=si0;
L23:;
si0=l3;
si1=32U;
si0+=si1;
si1=l5;
f106(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+36U);
l2=si0;
si1=-2048U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L20;
}
si0=l5;
si1=l1;
si0+=si1;
l1=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L19;
}
goto L22;
}
L20:;
si0=0U;
l10=si0;
goto L17;
L19:;
si0=l3;
si1=40U;
si0+=si1;
l11=si0;
L25:;
{
si0=l2;
if(si0){
goto L27;
}
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+40U);
l2=si0;
si1=4U;
si0=si0 > si1;
if(si0){
goto L24;
}
si0=2U;
si1=1U;
si2=l2;
si3=2U;
si2=si2 < si3;
si0=si2?si0:si1;
l5=si0;
goto L26;
L27:;
si0=60U;
l5=si0;
si0=0U;
si1=l2;
si0-=si1;
l2=si0;
si1=19U;
si0=si0 >= si1;
if(si0){
goto L26;
}
si0=l2;
si0=i32_load8_u(i->m0,(U64)si0+2705624U);
l5=si0;
L26:;
si0=l3;
si1=32U;
si0+=si1;
si1=l5;
f105(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+36U);
l2=si0;
si1=2047U;
si0=(U32)((I32)si0<=(I32)si1);
if(si0){
goto L28;
}
si0=2047U;
l10=si0;
goto L17;
L28:;
si0=l1;
si1=l5;
si0-=si1;
l1=si0;
si0=l2;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L25;
}
}
L24:;
si0=l1;
si1=-1U;
si0+=si1;
l2=si0;
si1=-1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L29;
}
L30:;
{
si0=l3;
si1=32U;
si0+=si1;
si1=-1022U;
si2=l2;
si1-=si2;
l1=si1;
si2=60U;
si3=l1;
si4=60U;
si3=si3 < si4;
si1=si3?si1:si2;
l1=si1;
f106(i,si0,si1);
si0=l1;
si1=l2;
si0+=si1;
l2=si0;
si1=-1022U;
si0=si0 < si1;
if(si0){
goto L30;
}
}
L29:;
si0=l2;
si1=1023U;
si0+=si1;
si1=2046U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l3;
si1=32U;
si0+=si1;
si1=53U;
f105(i,si0,si1);
si0=l3;
si0=i32_load(i->m0,(U64)si0+32U);
l5=si0;
si0=!(si0);
if(si0){
goto L36;
}
si0=l3;
si0=i32_load(i->m0,(U64)si0+36U);
l12=si0;
si1=0U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L36;
}
si0=l12;
si1=18U;
si0=si0 > si1;
if(si0){
goto L32;
}
si0=l12;
if(si0){
goto L37;
}
sj0=W2C2_LL(0U);
l7=sj0;
goto L33;
L37:;
si0=l12;
si1=1U;
si0=si0 != si1;
if(si0){
goto L38;
}
si0=0U;
l1=si0;
sj0=W2C2_LL(0U);
l7=sj0;
goto L34;
L38:;
si0=l12;
si1=1U;
si0&=si1;
l13=si0;
si0=l12;
si1=30U;
si0&=si1;
l14=si0;
si0=0U;
l15=si0;
sj0=W2C2_LL(0U);
l7=sj0;
L39:;
{
sj0=l7;
sj1=W2C2_LL(10U);
sj0*=sj1;
l7=sj0;
si0=l15;
l1=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L40;
}
sj0=l7;
si1=l3;
si2=32U;
si1+=si2;
si2=l1;
si1+=si2;
si2=8U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l7=sj0;
L40:;
sj0=l7;
sj1=W2C2_LL(10U);
sj0*=sj1;
l7=sj0;
si0=l1;
si1=1U;
si0+=si1;
l15=si0;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L41;
}
sj0=l7;
si1=l3;
si2=32U;
si1+=si2;
si2=l1;
si1+=si2;
si2=9U;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l7=sj0;
L41:;
si0=l15;
si1=1U;
si0+=si1;
l15=si0;
si1=l14;
si0=si0 == si1;
if(si0){
goto L35;
}
goto L39;
}
L36:;
si0=l2;
si1=1022U;
si0+=si1;
l10=si0;
goto L17;
L35:;
si0=l13;
si0=!(si0);
if(si0){
goto L33;
}
si0=l1;
si1=2U;
si0+=si1;
l1=si0;
L34:;
sj0=l7;
sj1=W2C2_LL(10U);
sj0*=sj1;
l7=sj0;
si0=l1;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L33;
}
sj0=l7;
si1=l11;
si2=l1;
si1+=si2;
sj1=i64_load8_u(i->m0,(U64)si1);
sj0+=sj1;
l7=sj0;
L33:;
si0=l12;
si1=l5;
si0=si0 >= si1;
if(si0){
goto L42;
}
si0=l11;
si1=l12;
si0+=si1;
l15=si0;
si0=i32_load8_u(i->m0,(U64)si0);
l1=si0;
si0=l12;
si1=1U;
si0+=si1;
si1=l5;
si0=si0 != si1;
if(si0){
goto L45;
}
si0=l1;
si1=255U;
si0&=si1;
si1=5U;
si0=si0 == si1;
if(si0){
goto L44;
}
L45:;
si0=l1;
si1=255U;
si0&=si1;
si1=4U;
si0=si0 > si1;
if(si0){
goto L43;
}
goto L42;
L44:;
si0=l3;
si0=i32_load8_u(i->m0,(U64)si0+808U);
if(si0){
goto L43;
}
si0=l12;
si0=!(si0);
if(si0){
goto L42;
}
si0=l15;
si1=-1U;
si0+=si1;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L42;
}
L43:;
sj0=l7;
sj1=W2C2_LL(1U);
sj0+=sj1;
l7=sj0;
L42:;
sj0=l7;
sj1=W2C2_LL(9007199254740992U);
si0=sj0 < sj1;
if(si0){
goto L31;
}
L32:;
si0=l3;
si1=32U;
si0+=si1;
si1=1U;
f106(i,si0,si1);
si0=l3;
si1=32U;
si0+=si1;
sj0=f107(i,si0);
l7=sj0;
si0=l2;
si1=1024U;
si0+=si1;
si1=2046U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L17;
}
si0=l2;
si1=1U;
si0+=si1;
l2=si0;
L31:;
sj0=l7;
sj1=W2C2_LL(4503599627370495U);
sj0&=sj1;
l6=sj0;
si0=1022U;
si1=1023U;
sj2=l7;
sj3=W2C2_LL(4503599627370496U);
si2=sj2 < sj3;
si0=si2?si0:si1;
si1=l2;
si0+=si1;
l10=si0;
L17:;
si0=l0;
si1=0U;
i32_store8(i->m0,(U64)si0,si1);
si0=l0;
si1=l10;
sj1=(U64)(si1);
sj2=W2C2_LL(52U);
sj1<<=(sj2&63);
sj2=l6;
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
l8=sd1;
sd1=-(sd1);
sd2=l8;
si3=l4;
si4=45U;
si3=si3 == si4;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
L1:;
si0=l3;
si1=816U;
si0+=si1;
i->g0=si0;
L0:;
}

U32 f127(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l1;
si1=l0;
si1=i32_load8_u(i->m0,(U64)si1);
si2=2U;
si1<<=(si2&31);
l0=si1;
si1=i32_load(i->m0,(U64)si1+2720116U);
si2=l0;
si2=i32_load(i->m0,(U64)si2+2720096U);
si0=f111(i,si0,si1,si2);
L0:;
return si0;
}

U32 f128(gauche_ffiInstance*i,U32 l0,U32 l1) {
U32 si0,si1,si2;
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
si1=1U;
si0=si0 != si1;
if(si0){
goto L1;
}
si0=l1;
si1=2720075U;
si2=21U;
si0=f111(i,si0,si1,si2);
goto L0;
L1:;
si0=l1;
si1=2720039U;
si2=36U;
si0=f111(i,si0,si1,si2);
L0:;
return si0;
}

U32 f129(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 si0,si1,si2;
si0=l2;
si1=l0;
si2=l1;
si0=f111(i,si0,si1,si2);
L0:;
return si0;
}

U32 f130(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 si0,si1;
si0=0U;
l3=si0;
si0=l2;
si0=!(si0);
if(si0){
goto L1;
}
L3:;
{
si0=l0;
si0=i32_load8_u(i->m0,(U64)si0);
l4=si0;
si1=l1;
si1=i32_load8_u(i->m0,(U64)si1);
l5=si1;
si0=si0 != si1;
if(si0){
goto L2;
}
si0=l0;
si1=1U;
si0+=si1;
l0=si0;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si0=l2;
si1=-1U;
si0+=si1;
l2=si0;
si0=!(si0);
if(si0){
goto L1;
}
goto L3;
}
L2:;
si0=l4;
si1=l5;
si0-=si1;
l3=si0;
L1:;
si0=l3;
L0:;
return si0;
}

void f131(gauche_ffiInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si2;
U64 sj1,sj2,sj3,sj4,sj5;
si0=l0;
sj1=l3;
sj2=W2C2_LL(4294967295U);
sj1&=sj2;
l5=sj1;
sj2=l1;
sj3=W2C2_LL(4294967295U);
sj2&=sj3;
l6=sj2;
sj1*=sj2;
l7=sj1;
sj2=l3;
sj3=W2C2_LL(32U);
sj2>>=(sj3&63);
l8=sj2;
sj3=l6;
sj2*=sj3;
l6=sj2;
sj3=l5;
sj4=l1;
sj5=W2C2_LL(32U);
sj4>>=(sj5&63);
l9=sj4;
sj3*=sj4;
sj2+=sj3;
l5=sj2;
sj3=W2C2_LL(32U);
sj2<<=(sj3&63);
sj1+=sj2;
l10=sj1;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
sj1=l8;
sj2=l9;
sj1*=sj2;
sj2=l5;
sj3=l6;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj3=W2C2_LL(32U);
sj2<<=(sj3&63);
sj3=l5;
sj4=W2C2_LL(32U);
sj3>>=(sj4&63);
sj2|=sj3;
sj1+=sj2;
sj2=l10;
sj3=l7;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=l4;
sj3=l1;
sj2*=sj3;
sj3=l3;
sj4=l2;
sj3*=sj4;
sj2+=sj3;
sj1+=sj2;
i64_store(i->m0,(U64)si0+8U,sj1);
L0:;
}

void f132(gauche_ffiInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U32 l5=0;
U64 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U64 l10=0;
U64 l11=0;
U64 l12=0;
U64 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=176U;
si0-=si1;
l5=si0;
i->g0=si0;
sj0=W2C2_LL(0U);
l6=sj0;
sj0=l4;
sj0=I64_CLZ(sj0);
sj1=l3;
sj1=I64_CLZ(sj1);
sj2=W2C2_LL(64U);
sj1+=sj2;
sj2=l4;
sj3=W2C2_LL(0U);
si2=sj2 != sj3;
sj0=si2?sj0:sj1;
si0=(U32)(sj0);
l7=si0;
sj1=l2;
sj1=I64_CLZ(sj1);
sj2=l1;
sj2=I64_CLZ(sj2);
sj3=W2C2_LL(64U);
sj2+=sj3;
sj3=l2;
sj4=W2C2_LL(0U);
si3=sj3 != sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L8;
}
si0=l8;
si1=63U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l7;
si1=95U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l7;
si1=l8;
si0-=si1;
si1=32U;
si0=si0 < si1;
if(si0){
goto L5;
}
si0=l5;
si1=160U;
si0+=si1;
sj1=l3;
sj2=l4;
si3=96U;
si4=l7;
si3-=si4;
l9=si3;
f144(i,si0,sj1,sj2,si3);
si0=l5;
sj0=i64_load32_u(i->m0,(U64)si0+160U);
sj1=W2C2_LL(1U);
sj0+=sj1;
l10=sj0;
sj0=W2C2_LL(0U);
l11=sj0;
sj0=W2C2_LL(0U);
l6=sj0;
goto L4;
L8:;
sj0=l1;
sj1=l3;
si0=sj0 < sj1;
l8=si0;
sj1=l2;
sj2=l4;
si1=sj1 < sj2;
sj2=l2;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L2;
}
sj0=W2C2_LL(0U);
l12=sj0;
goto L1;
L7:;
sj0=l1;
sj1=l1;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l12=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=W2C2_LL(0U);
l6=sj0;
sj0=W2C2_LL(0U);
l2=sj0;
goto L1;
L6:;
sj0=l2;
sj1=l2;
sj2=l3;
sj3=W2C2_LL(4294967295U);
sj2&=sj3;
l4=sj2;
sj1=DIV_U(sj1,sj2);
l6=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
sj1=W2C2_LL(32U);
sj0<<=(sj1&63);
sj1=l1;
sj2=W2C2_LL(32U);
sj1>>=(sj2&63);
l12=sj1;
sj0|=sj1;
sj1=l4;
sj0=DIV_U(sj0,sj1);
l2=sj0;
sj1=W2C2_LL(32U);
sj0<<=(sj1&63);
sj1=l12;
sj2=l2;
sj3=l3;
sj2*=sj3;
sj1-=sj2;
sj2=W2C2_LL(32U);
sj1<<=(sj2&63);
sj2=l1;
sj3=W2C2_LL(4294967295U);
sj2&=sj3;
sj1|=sj2;
l1=sj1;
sj2=l4;
sj1=DIV_U(sj1,sj2);
l3=sj1;
sj0|=sj1;
l12=sj0;
sj0=l1;
sj1=l3;
sj2=l4;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=l2;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
sj1=l6;
sj0|=sj1;
l6=sj0;
sj0=W2C2_LL(0U);
l2=sj0;
goto L1;
L5:;
si0=l5;
si1=48U;
si0+=si1;
sj1=l1;
sj2=l2;
si3=64U;
si4=l8;
si3-=si4;
l8=si3;
f144(i,si0,sj1,sj2,si3);
si0=l5;
si1=32U;
si0+=si1;
sj1=l3;
sj2=l4;
si3=l8;
f144(i,si0,sj1,sj2,si3);
sj0=W2C2_LL(0U);
l6=sj0;
si0=l5;
sj1=l3;
sj2=W2C2_LL(0U);
si3=l5;
sj3=i64_load(i->m0,(U64)si3+48U);
si4=l5;
sj4=i64_load(i->m0,(U64)si4+32U);
sj3=DIV_U(sj3,sj4);
l12=sj3;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=16U;
si0+=si1;
sj1=l4;
sj2=W2C2_LL(0U);
sj3=l12;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(i->m0,(U64)si0);
l10=sj0;
si0=l5;
sj0=i64_load(i->m0,(U64)si0+24U);
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
l13=sj1;
si2=l5;
sj2=i64_load(i->m0,(U64)si2+16U);
sj1+=sj2;
l11=sj1;
sj2=l13;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=W2C2_LL(0U);
si0=sj0 != sj1;
if(si0){
goto L9;
}
sj0=l1;
sj1=l10;
si0=sj0 < sj1;
l8=si0;
sj1=l2;
sj2=l11;
si1=sj1 < sj2;
sj2=l2;
sj3=l11;
si2=sj2 == sj3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L3;
}
L9:;
sj0=l4;
sj1=l2;
sj0+=sj1;
sj1=l3;
sj2=l1;
sj1+=sj2;
l1=sj1;
sj2=l3;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l11;
sj0-=sj1;
sj1=l1;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj0=l12;
sj1=W2C2_LL(-1U);
sj0+=sj1;
l12=sj0;
sj0=l1;
sj1=l10;
sj0-=sj1;
l1=sj0;
goto L1;
L4:;
L12:;
{
si0=l5;
si1=144U;
si0+=si1;
sj1=l1;
sj2=l2;
si3=64U;
si4=l8;
si3-=si4;
l8=si3;
f144(i,si0,sj1,sj2,si3);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+144U);
l12=sj0;
si0=l8;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L13;
}
si0=l5;
si1=80U;
si0+=si1;
sj1=l3;
sj2=l4;
si3=l8;
f144(i,si0,sj1,sj2,si3);
si0=l5;
si1=64U;
si0+=si1;
sj1=l3;
sj2=l4;
sj3=l12;
si4=l5;
sj4=i64_load(i->m0,(U64)si4+80U);
sj3=DIV_U(sj3,sj4);
l13=sj3;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
sj0=l1;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+64U);
l10=sj1;
si0=sj0 < sj1;
l8=si0;
sj1=l2;
si2=l5;
sj2=i64_load(i->m0,(U64)si2+72U);
l12=sj2;
si1=sj1 < sj2;
sj2=l2;
sj3=l12;
si2=sj2 == sj3;
si0=si2?si0:si1;
if(si0){
goto L14;
}
sj0=l2;
sj1=l12;
sj0-=sj1;
si1=l8;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj0=l1;
sj1=l10;
sj0-=sj1;
l1=sj0;
sj0=l6;
sj1=l11;
sj2=l13;
sj1+=sj2;
l12=sj1;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
goto L1;
L14:;
sj0=l2;
sj1=l4;
sj0+=sj1;
sj1=l1;
sj2=l3;
sj1+=sj2;
l4=sj1;
sj2=l1;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
sj1=l12;
sj0-=sj1;
sj1=l4;
sj2=l10;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj0=l4;
sj1=l10;
sj0-=sj1;
l1=sj0;
sj0=l6;
sj1=l13;
sj2=l11;
sj1+=sj2;
sj2=W2C2_LL(-1U);
sj1+=sj2;
l12=sj1;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
goto L1;
L13:;
si0=l5;
si1=128U;
si0+=si1;
sj1=l12;
sj2=l10;
sj1=DIV_U(sj1,sj2);
l12=sj1;
sj2=W2C2_LL(0U);
si3=l8;
si4=l9;
si3-=si4;
l8=si3;
f149(i,si0,sj1,sj2,si3);
si0=l5;
si1=112U;
si0+=si1;
sj1=l3;
sj2=l4;
sj3=l12;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
si1=96U;
si0+=si1;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+112U);
si2=l5;
sj2=i64_load(i->m0,(U64)si2+120U);
si3=l8;
f149(i,si0,sj1,sj2,si3);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+136U);
sj1=l6;
sj0+=sj1;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+128U);
l6=sj1;
sj2=l11;
sj1+=sj2;
l11=sj1;
sj2=l6;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
si0=l7;
sj1=l2;
si2=l5;
sj2=i64_load(i->m0,(U64)si2+104U);
sj1-=sj2;
sj2=l1;
si3=l5;
sj3=i64_load(i->m0,(U64)si3+96U);
l12=sj3;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1-=sj2;
l2=sj1;
sj1=I64_CLZ(sj1);
sj2=l1;
sj3=l12;
sj2-=sj3;
l1=sj2;
sj2=I64_CLZ(sj2);
sj3=W2C2_LL(64U);
sj2+=sj3;
sj3=l2;
sj4=W2C2_LL(0U);
si3=sj3 != sj4;
sj1=si3?sj1:sj2;
si1=(U32)(sj1);
l8=si1;
si0=si0 <= si1;
if(si0){
goto L15;
}
si0=l8;
si1=63U;
si0=si0 > si1;
if(si0){
goto L11;
}
goto L12;
L15:;
}
sj0=l1;
sj1=l3;
si0=sj0 < sj1;
l8=si0;
sj1=l2;
sj2=l4;
si1=sj1 < sj2;
sj2=l2;
sj3=l4;
si2=sj2 == sj3;
si0=si2?si0:si1;
si0=!(si0);
if(si0){
goto L10;
}
sj0=l11;
l12=sj0;
goto L1;
L11:;
sj0=l1;
sj1=l1;
sj2=l3;
sj1=DIV_U(sj1,sj2);
l2=sj1;
sj2=l3;
sj1*=sj2;
sj0-=sj1;
l1=sj0;
sj0=l6;
sj1=l11;
sj2=l2;
sj1+=sj2;
l12=sj1;
sj2=l11;
si1=sj1 < sj2;
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
sj0=W2C2_LL(0U);
l2=sj0;
goto L1;
L10:;
sj0=l2;
sj1=l4;
sj0-=sj1;
si1=l8;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj0=l1;
sj1=l3;
sj0-=sj1;
l1=sj0;
sj0=l6;
sj1=l11;
sj2=W2C2_LL(1U);
sj1+=sj2;
l12=sj1;
si1=!(sj1);
sj1=(U64)(si1);
sj0+=sj1;
l6=sj0;
goto L1;
L3:;
sj0=l2;
sj1=l11;
sj0-=sj1;
si1=l8;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj0=l1;
sj1=l10;
sj0-=sj1;
l1=sj0;
sj0=W2C2_LL(0U);
l6=sj0;
goto L1;
L2:;
sj0=l2;
sj1=l4;
sj0-=sj1;
si1=l8;
sj1=(U64)(si1);
sj0-=sj1;
l2=sj0;
sj0=l1;
sj1=l3;
sj0-=sj1;
l1=sj0;
sj0=W2C2_LL(1U);
l12=sj0;
L1:;
si0=l0;
sj1=l1;
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l0;
sj1=l12;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l0;
sj1=l6;
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l5;
si1=176U;
si0+=si1;
i->g0=si0;
L0:;
}

void f133(gauche_ffiInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U32 l5=0;
U32 si0,si1;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l1;
sj2=l2;
sj3=l3;
sj4=l4;
f132(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(i->m0,(U64)si0+16U);
l4=sj0;
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+24U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l4;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

F64 f134(gauche_ffiInstance*i,F64 l0) {
U32 l1=0;
U64 l2=0;
U32 l3=0;
U32 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F32 sf0,sf1;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6;
si0=i->g0;
si1=16U;
si0-=si1;
l1=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l3=si0;
si1=1141899263U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l3;
si1=1071382528U;
si0=si0 < si1;
if(si0){
goto L5;
}
sd0=l0;
sd0=fabs(sd0);
l0=sd0;
si0=l3;
si1=1072889856U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l3;
si1=1073971200U;
si0=si0 < si1;
if(si0){
goto L4;
}
sd0=-1;
sd1=l0;
sd0/=sd1;
l0=sd0;
si0=3U;
l4=si0;
goto L2;
L6:;
sd0=l0;
sd1=l0;
si0=sd0 != sd1;
if(si0){
goto L1;
}
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L5:;
si0=-1U;
l4=si0;
si0=l3;
si1=1044381696U;
si0=si0 >= si1;
if(si0){
goto L2;
}
si0=l3;
si1=1048576U;
si0=si0 >= si1;
if(si0){
goto L1;
}
si0=l1;
sd1=l0;
sf1=(F32)(sd1);
f32_store(i->m0,(U64)si0+12U,sf1);
si0=l1;
sf0=f32_load(i->m0,(U64)si0+12U);
sd0=l0;
goto L0;
L4:;
sd0=l0;
sd1=-1.5;
sd0+=sd1;
sd1=l0;
sd2=1.5;
sd1*=sd2;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=2U;
l4=si0;
goto L2;
L3:;
si0=l3;
si1=1072037888U;
si0=si0 < si1;
if(si0){
goto L7;
}
sd0=l0;
sd1=-1;
sd0+=sd1;
sd1=l0;
sd2=1;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=1U;
l4=si0;
goto L2;
L7:;
sd0=l0;
sd1=l0;
sd0+=sd1;
sd1=-1;
sd0+=sd1;
sd1=l0;
sd2=2;
sd1+=sd2;
sd0/=sd1;
l0=sd0;
si0=0U;
l4=si0;
L2:;
sd0=l0;
sd1=l0;
sd0*=sd1;
l5=sd0;
sd1=l5;
sd0*=sd1;
l6=sd0;
sd1=l6;
sd2=l6;
sd3=l6;
sd4=l6;
sd5=-0.036531572744216916;
sd4*=sd5;
sd5=-0.058335701337905735;
sd4+=sd5;
sd3*=sd4;
sd4=-0.0769187620504483;
sd3+=sd4;
sd2*=sd3;
sd3=-0.11111110405462356;
sd2+=sd3;
sd1*=sd2;
sd2=-0.19999999999876483;
sd1+=sd2;
sd0*=sd1;
l7=sd0;
sd0=l5;
sd1=l6;
sd2=l6;
sd3=l6;
sd4=l6;
sd5=l6;
sd6=0.016285820115365782;
sd5*=sd6;
sd6=0.049768779946159324;
sd5+=sd6;
sd4*=sd5;
sd5=0.066610731373875312;
sd4+=sd5;
sd3*=sd4;
sd4=0.090908871334365066;
sd3+=sd4;
sd2*=sd3;
sd3=0.14285714272503466;
sd2+=sd3;
sd1*=sd2;
sd2=0.33333333333332932;
sd1+=sd2;
sd0*=sd1;
l6=sd0;
si0=l3;
si1=1071382528U;
si0=si0 < si1;
if(si0){
goto L8;
}
si0=l4;
si1=3U;
si0<<=(si1&31);
l3=si0;
sd0=f64_load(i->m0,(U64)si0+2720136U);
sd1=l0;
sd2=l7;
sd3=l6;
sd2+=sd3;
sd1*=sd2;
si2=l3;
sd2=f64_load(i->m0,(U64)si2+2720168U);
sd1-=sd2;
sd2=l0;
sd1-=sd2;
sd0-=sd1;
l0=sd0;
sd0=-(sd0);
sd1=l0;
sj2=l2;
sj3=W2C2_LL(0U);
si2=(U64)((I64)sj2<(I64)sj3);
sd0=si2?sd0:sd1;
goto L0;
L8:;
sd0=l0;
sd1=l0;
sd2=l7;
sd3=l6;
sd2+=sd3;
sd1*=sd2;
sd0-=sd1;
l0=sd0;
L1:;
sd0=l0;
L0:;
return sd0;
}

F64 f135(gauche_ffiInstance*i,F64 l0,F64 l1) {
U64 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
F64 l8=0;
U32 si0,si1;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2;
sd0=l1;
sd1=l1;
si0=sd0 != sd1;
sd1=l0;
sd2=l0;
si1=sd1 != sd2;
si0|=si1;
if(si0){
goto L3;
}
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l2=sj0;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
l3=si0;
si1=-1072693248U;
si0+=si1;
sj1=l2;
si1=(U32)(sj1);
l4=si1;
si0|=si1;
if(si0){
goto L4;
}
sd0=l0;
sd0=f134(i,sd0);
goto L0;
L4:;
si0=l3;
si1=30U;
si0>>=(si1&31);
si1=2U;
si0&=si1;
l5=si0;
sd1=l0;
sj1=i64_reinterpret_f64(sd1);
l2=sj1;
sj2=W2C2_LL(63U);
sj1>>=(sj2&63);
si1=(U32)(sj1);
si0|=si1;
l6=si0;
sj0=l2;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l7=si0;
sj1=l2;
si1=(U32)(sj1);
si0|=si1;
if(si0){
goto L6;
}
sd0=-3.1415926535897931;
l8=sd0;
si0=l6;
switch(si0){
case 0:
goto L8;
case 1:
goto L8;
case 2:
goto L7;
case 3:
goto L5;
default:
goto L8;
}
L8:;
sd0=l0;
goto L0;
L7:;
sd0=3.1415926535897931;
goto L0;
L6:;
si0=l3;
si1=2147483647U;
si0&=si1;
l3=si0;
si1=l4;
si0|=si1;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L10;
}
si0=l7;
si1=2146435072U;
si0=si0 != si1;
if(si0){
goto L9;
}
si0=l6;
si1=3U;
si0<<=(si1&31);
sd0=f64_load(i->m0,(U64)si0+2720200U);
goto L0;
L10:;
si0=l7;
si1=2146435072U;
si0=si0 == si1;
if(si0){
goto L2;
}
si0=l3;
si1=67108864U;
si0+=si1;
si1=l7;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l5;
si0=!(si0);
if(si0){
goto L12;
}
sd0=0;
l8=sd0;
si0=l7;
si1=67108864U;
si0+=si1;
si1=l3;
si0=si0 < si1;
if(si0){
goto L11;
}
L12:;
sd0=l0;
sd1=l1;
sd0/=sd1;
sd0=fabs(sd0);
sd0=f134(i,sd0);
l8=sd0;
L11:;
si0=l6;
switch(si0){
case 0:
goto L5;
case 1:
goto L14;
case 2:
goto L13;
case 3:
goto L15;
default:
goto L5;
}
L15:;
sd0=l8;
sd1=-1.2246467991473532e-16;
sd0+=sd1;
sd1=-3.1415926535897931;
sd0+=sd1;
goto L0;
L14:;
sd0=l8;
sd0=-(sd0);
goto L0;
L13:;
sd0=3.1415926535897931;
sd1=l8;
sd2=-1.2246467991473532e-16;
sd1+=sd2;
sd0-=sd1;
goto L0;
L9:;
si0=l6;
si1=3U;
si0<<=(si1&31);
sd0=f64_load(i->m0,(U64)si0+2720232U);
l8=sd0;
L5:;
sd0=l8;
goto L0;
L3:;
sd0=l0;
sd1=l1;
sd0+=sd1;
goto L0;
L2:;
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
goto L0;
L1:;
sd0=1.5707963267948966;
sd1=l0;
sd0=copysign(sd0,sd1);
L0:;
return sd0;
}

F64 f136(gauche_ffiInstance*i,F64 l0,F64 l1) {
F64 sd0,sd1;
sd0=l0;
sd1=l1;
sd0=f135(i,sd0,sd1);
L0:;
return sd0;
}

F64 f137(gauche_ffiInstance*i,F64 l0,F64 l1) {
U32 si2,si3;
F64 sd0,sd1,sd2,sd3,sd4;
sd0=l1;
sd1=l1;
sd2=l0;
sd3=l0;
sd4=l1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=l0;
sd3=l0;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
L0:;
return sd0;
}

void f138(gauche_ffiInstance*i,U32 l0,U64 l1,U64 l2,U64 l3,U64 l4) {
U32 l5=0;
U32 si0,si1;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=32U;
si0-=si1;
l5=si0;
i->g0=si0;
si0=l5;
sj1=l1;
sj2=l2;
sj3=l3;
sj4=l4;
f132(i,si0,sj1,sj2,sj3,sj4);
si0=l5;
sj0=i64_load(i->m0,(U64)si0);
l4=sj0;
si0=l0;
si1=l5;
sj1=i64_load(i->m0,(U64)si1+8U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l0;
sj1=l4;
i64_store(i->m0,(U64)si0,sj1);
si0=l5;
si1=32U;
si0+=si1;
i->g0=si0;
L0:;
}

F64 f139(gauche_ffiInstance*i,F64 l0,F64 l1) {
U32 si2,si3;
F64 sd0,sd1,sd2,sd3,sd4;
sd0=l0;
sd1=l0;
sd2=l1;
sd3=l0;
sd4=l1;
si3=sd3 < sd4;
sd1=si3?sd1:sd2;
sd2=l1;
sd3=l1;
si2=sd2 != sd3;
sd0=si2?sd0:sd1;
L0:;
return sd0;
}

U32 f140(gauche_ffiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5) {
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
F64 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
F64 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
F64 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
F64 l34=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj1,sj2;
F64 sd0,sd1,sd2,sd3;
si0=i->g0;
si1=560U;
si0-=si1;
l6=si0;
i->g0=si0;
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+152U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+144U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+136U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+128U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+120U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+112U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+104U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+96U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+88U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+80U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+72U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+64U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+56U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+48U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+16U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+8U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+312U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+304U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+296U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+288U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+280U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+272U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+264U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+256U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+248U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+240U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+232U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+224U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+216U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+208U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+200U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+192U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+184U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+176U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+168U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+160U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+472U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+464U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+456U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+448U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+440U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+432U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+424U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+416U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+408U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+400U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+392U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+384U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+376U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+368U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+360U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+352U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+344U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+336U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+328U,sj1);
si0=l6;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+320U,sj1);
si0=l6;
si1=480U;
si0+=si1;
si1=0U;
si2=80U;
wasmMemoryFill(i->m0,si0,si1,si2);
si0=l5;
si1=2U;
si0<<=(si1&31);
si0=i32_load(i->m0,(U64)si0+2720264U);
l7=si0;
si1=l1;
si2=-1U;
si1+=si2;
l8=si1;
si0+=si1;
l9=si0;
si0=l4;
si1=-3U;
si0+=si1;
si1=24U;
si0=I32_DIV_S(si0,si1);
l10=si0;
si1=0U;
si2=l10;
si3=0U;
si2=(U32)((I32)si2>(I32)si3);
si0=si2?si0:si1;
l11=si0;
si1=l8;
si0-=si1;
l10=si0;
si0=l11;
si1=2U;
si0<<=(si1&31);
si1=l1;
si2=2U;
si1<<=(si2&31);
si0-=si1;
si1=2720284U;
si0+=si1;
l12=si0;
si0=0U;
l1=si0;
L1:;
{
si0=l10;
si1=0U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L3;
}
sd0=0;
l13=sd0;
goto L2;
L3:;
si0=l12;
si0=i32_load(i->m0,(U64)si0);
sd0=(F64)(I32)(si0);
l13=sd0;
L2:;
si0=l6;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L4;
}
si0=l12;
si1=4U;
si0+=si1;
l12=si0;
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si1=l1;
si2=l9;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l9;
si0=si0 <= si1;
if(si0){
goto L1;
}
L4:;
}
si0=0U;
l10=si0;
L5:;
{
si0=l10;
si1=l8;
si0+=si1;
l9=si0;
sd0=0;
l13=sd0;
si0=0U;
l1=si0;
L7:;
{
sd0=l13;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l6;
si3=l9;
si4=l1;
si3-=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L6;
}
si0=l1;
si1=l1;
si2=l8;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L7;
}
}
L6:;
si0=l6;
si1=320U;
si0+=si1;
si1=l10;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l10;
si1=l7;
si0=si0 >= si1;
if(si0){
goto L8;
}
si0=l10;
si1=l10;
si2=l7;
si1=si1 < si2;
si0+=si1;
l10=si0;
si1=l7;
si0=si0 <= si1;
if(si0){
goto L5;
}
L8:;
}
sd0=INFINITY;
sd1=8.9884656743115795e+307;
si2=l4;
si3=l11;
si4=-24U;
si3*=si4;
si2+=si3;
l14=si2;
si3=-24U;
si2+=si3;
l15=si2;
si3=2046U;
si2=si2 > si3;
l16=si2;
sd0=si2?sd0:sd1;
sd1=0;
sd2=2.0041683600089728e-292;
si3=l15;
si4=-1991U;
si3=si3 < si4;
l17=si3;
sd1=si3?sd1:sd2;
sd2=1;
si3=l15;
si4=-1022U;
si3=(U32)((I32)si3<(I32)si4);
l18=si3;
sd1=si3?sd1:sd2;
si2=l15;
si3=1023U;
si2=(U32)((I32)si2>(I32)si3);
l19=si2;
sd0=si2?sd0:sd1;
si1=l15;
si2=3069U;
si3=l15;
si4=3069U;
si3=si3 < si4;
si1=si3?si1:si2;
si2=-2046U;
si1+=si2;
si2=l14;
si3=-1047U;
si2+=si3;
si3=l16;
si1=si3?si1:si2;
l20=si1;
si2=l15;
si3=-2960U;
si4=l15;
si5=-2960U;
si4=si4 > si5;
si2=si4?si2:si3;
si3=1938U;
si2+=si3;
si3=l14;
si4=945U;
si3+=si4;
si4=l17;
si2=si4?si2:si3;
l21=si2;
si3=l15;
si4=l18;
si2=si4?si2:si3;
si3=l19;
si1=si3?si1:si2;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=W2C2_LL(52U);
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l22=sd0;
si0=l7;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l23=si0;
si0=47U;
si1=l14;
si0-=si1;
si1=31U;
si0&=si1;
l24=si0;
si0=48U;
si1=l14;
si0-=si1;
si1=31U;
si0&=si1;
l25=si0;
si0=l15;
si1=0U;
si0=(U32)((I32)si0>(I32)si1);
l26=si0;
si0=l15;
si1=-1U;
si0+=si1;
l27=si0;
si0=l7;
l10=si0;
L10:;
{
si0=l6;
si1=320U;
si0+=si1;
si1=l10;
l4=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
l13=sd0;
si0=l4;
si0=!(si0);
if(si0){
goto L11;
}
si0=l6;
si1=480U;
si0+=si1;
l9=si0;
si0=l4;
l1=si0;
L12:;
{
si0=l9;
sd1=l13;
sd2=l13;
sd3=5.9604644775390625e-08;
sd2*=sd3;
si2=I32_TRUNC_SAT_S_F64(sd2);
sd2=(F64)(I32)(si2);
l28=sd2;
sd3=-16777216;
sd2*=sd3;
sd1+=sd2;
si1=I32_TRUNC_SAT_S_F64(sd1);
i32_store(i->m0,(U64)si0,si1);
si0=l6;
si1=320U;
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=-8U;
si0+=si1;
sd0=f64_load(i->m0,(U64)si0);
sd1=l28;
sd0+=sd1;
l13=sd0;
si0=l1;
si1=1U;
si0=si0 == si1;
l10=si0;
if(si0){
goto L11;
}
si0=l9;
si1=4U;
si0+=si1;
l9=si0;
si0=1U;
si1=l1;
si2=-1U;
si1+=si2;
si2=l10;
si0=si2?si0:si1;
l1=si0;
if(si0){
goto L12;
}
}
L11:;
si0=l19;
if(si0){
goto L15;
}
si0=l18;
if(si0){
goto L14;
}
si0=l15;
l1=si0;
goto L13;
L15:;
sd0=l13;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l13=sd0;
sd1=8.9884656743115795e+307;
sd0*=sd1;
sd1=l13;
si2=l16;
sd0=si2?sd0:sd1;
l13=sd0;
si0=l20;
l1=si0;
goto L13;
L14:;
sd0=l13;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l13=sd0;
sd1=2.0041683600089728e-292;
sd0*=sd1;
sd1=l13;
si2=l17;
sd0=si2?sd0:sd1;
l13=sd0;
si0=l21;
l1=si0;
L13:;
sd0=l13;
si1=l1;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=W2C2_LL(52U);
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l13=sd0;
sd1=l13;
sd2=0.125;
sd1*=sd2;
sd1=floor(sd1);
sd2=-8;
sd1*=sd2;
sd0+=sd1;
l13=sd0;
sd1=l13;
si1=I32_TRUNC_SAT_S_F64(sd1);
l29=si1;
sd1=(F64)(I32)(si1);
sd0-=sd1;
l13=sd0;
si0=l26;
if(si0){
goto L21;
}
si0=l15;
if(si0){
goto L22;
}
si0=l6;
si1=480U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=23U;
si0=(U32)((I32)si0>>(si1&31));
l30=si0;
goto L20;
L22:;
si0=2U;
l30=si0;
si0=0U;
l31=si0;
sd0=l13;
sd1=0.5;
si0=sd0 >= sd1;
si0=!(si0);
if(si0){
goto L16;
}
goto L19;
L21:;
si0=l6;
si1=480U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l1=si0;
si1=l1;
si1=i32_load(i->m0,(U64)si1);
l1=si1;
si2=l1;
si3=l25;
si2=(U32)((I32)si2>>(si3&31));
l1=si2;
si3=l25;
si2<<=(si3&31);
si1-=si2;
l9=si1;
i32_store(i->m0,(U64)si0,si1);
si0=l9;
si1=l24;
si0=(U32)((I32)si0>>(si1&31));
l30=si0;
si0=l1;
si1=l29;
si0+=si1;
l29=si0;
L20:;
si0=l30;
si1=1U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L18;
}
L19:;
si0=1U;
l9=si0;
si0=l4;
si0=!(si0);
if(si0){
goto L23;
}
si0=0U;
l10=si0;
si0=0U;
l12=si0;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L24;
}
si0=l4;
si1=1U;
si0&=si1;
l32=si0;
si0=l4;
si1=30U;
si0&=si1;
l31=si0;
si0=0U;
l10=si0;
si0=l6;
si1=480U;
si0+=si1;
l1=si0;
si0=0U;
l12=si0;
L25:;
{
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L29;
}
si0=16777215U;
l12=si0;
goto L28;
L29:;
si0=l9;
si0=!(si0);
if(si0){
goto L27;
}
si0=16777216U;
l12=si0;
L28:;
si0=l1;
si1=l12;
si2=l9;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l12=si0;
goto L26;
L27:;
si0=1U;
l12=si0;
L26:;
si0=l1;
si1=4U;
si0+=si1;
l33=si0;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l12;
if(si0){
goto L33;
}
si0=16777215U;
l12=si0;
goto L32;
L33:;
si0=l9;
si0=!(si0);
if(si0){
goto L31;
}
si0=16777216U;
l12=si0;
L32:;
si0=l33;
si1=l12;
si2=l9;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=1U;
l12=si0;
si0=0U;
l9=si0;
goto L30;
L31:;
si0=0U;
l12=si0;
si0=1U;
l9=si0;
L30:;
si0=l1;
si1=8U;
si0+=si1;
l1=si0;
si0=l31;
si1=l10;
si2=2U;
si1+=si2;
l10=si1;
si0=si0 != si1;
if(si0){
goto L25;
}
}
si0=l32;
si0=!(si0);
if(si0){
goto L23;
}
L24:;
si0=l6;
si1=480U;
si0+=si1;
si1=l10;
si2=2U;
si1<<=(si2&31);
si0+=si1;
l10=si0;
si0=i32_load(i->m0,(U64)si0);
l1=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L35;
}
si0=16777215U;
l9=si0;
goto L34;
L35:;
si0=1U;
l9=si0;
si0=l1;
si0=!(si0);
if(si0){
goto L23;
}
si0=16777216U;
l9=si0;
L34:;
si0=l10;
si1=l9;
si2=l1;
si1-=si2;
i32_store(i->m0,(U64)si0,si1);
si0=0U;
l9=si0;
L23:;
si0=l26;
si0=!(si0);
if(si0){
goto L36;
}
si0=8388607U;
l1=si0;
si0=l27;
switch(si0){
case 0:
goto L37;
case 1:
goto L38;
default:
goto L36;
}
L38:;
si0=4194303U;
l1=si0;
L37:;
si0=l6;
si1=480U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l10=si0;
si1=l10;
si1=i32_load(i->m0,(U64)si1);
si2=l1;
si1&=si2;
i32_store(i->m0,(U64)si0,si1);
L36:;
si0=l29;
si1=1U;
si0+=si1;
l29=si0;
si0=l30;
si1=2U;
si0=si0 == si1;
if(si0){
goto L17;
}
L18:;
si0=l30;
l31=si0;
goto L16;
L17:;
sd0=1;
sd1=l13;
sd0-=sd1;
l13=sd0;
sd1=l13;
sd2=l22;
sd1-=sd2;
si2=l9;
sd0=si2?sd0:sd1;
l13=sd0;
si0=2U;
l31=si0;
L16:;
sd0=l13;
sd1=0;
si0=sd0 != sd1;
if(si0){
goto L39;
}
si0=l23;
l1=si0;
si0=l4;
l10=si0;
si0=l7;
si1=l4;
si2=-1U;
si1+=si2;
l9=si1;
si0=si0 > si1;
if(si0){
goto L40;
}
si0=0U;
l12=si0;
L42:;
{
si0=l6;
si1=480U;
si0+=si1;
si1=l9;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si0=i32_load(i->m0,(U64)si0);
si1=l12;
si0|=si1;
l12=si0;
si0=l7;
si1=l9;
si0=si0 >= si1;
if(si0){
goto L41;
}
si0=l7;
si1=l9;
si2=l7;
si3=l9;
si2=si2 < si3;
si1-=si2;
l9=si1;
si0=si0 <= si1;
if(si0){
goto L42;
}
}
L41:;
si0=l23;
l1=si0;
si0=l4;
l10=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L40;
}
si0=l6;
si1=480U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
si1=-4U;
si0+=si1;
l1=si0;
L43:;
{
si0=l4;
si1=-1U;
si0+=si1;
l4=si0;
si0=l15;
si1=-24U;
si0+=si1;
l15=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l8=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l8;
si0=!(si0);
if(si0){
goto L43;
}
goto L9;
}
L40:;
L44:;
{
si0=l10;
si1=1U;
si0+=si1;
l10=si0;
si0=l1;
si0=i32_load(i->m0,(U64)si0);
l9=si0;
si0=l1;
si1=-4U;
si0+=si1;
l1=si0;
si0=l9;
si0=!(si0);
if(si0){
goto L44;
}
}
si0=l4;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l4;
si1=1U;
si0+=si1;
l12=si0;
L45:;
{
si0=l6;
si1=l12;
si2=l8;
si1+=si2;
l9=si1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
si1=l12;
si2=l11;
si1+=si2;
si2=2U;
si1<<=(si2&31);
si1=i32_load(i->m0,(U64)si1+2720280U);
sd1=(F64)(I32)(si1);
f64_store(i->m0,(U64)si0,sd1);
si0=0U;
l1=si0;
sd0=0;
l13=sd0;
L47:;
{
sd0=l13;
si1=l0;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l6;
si3=l9;
si4=l1;
si3-=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
si0=l1;
si1=l8;
si0=si0 >= si1;
if(si0){
goto L46;
}
si0=l1;
si1=l1;
si2=l8;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l8;
si0=si0 <= si1;
if(si0){
goto L47;
}
}
L46:;
si0=l6;
si1=320U;
si0+=si1;
si1=l12;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l12;
si1=l12;
si2=l10;
si1=si1 < si2;
si0+=si1;
l1=si0;
si0=l12;
si1=l10;
si0=si0 >= si1;
if(si0){
goto L10;
}
si0=l1;
l12=si0;
si0=l1;
si1=l10;
si0=si0 <= si1;
if(si0){
goto L45;
}
goto L10;
}
L39:;
}
si0=0U;
si1=l15;
si0-=si1;
l1=si0;
si1=1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L51;
}
si0=l1;
si1=-1022U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L48;
}
sd0=l13;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=-1992U;
si0=si0 <= si1;
if(si0){
goto L50;
}
si0=969U;
si1=l15;
si0-=si1;
l1=si0;
goto L48;
L51:;
sd0=l13;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L49;
}
si0=-1023U;
si1=l15;
si0-=si1;
l1=si0;
goto L48;
L50:;
sd0=l13;
sd1=2.0041683600089728e-292;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=-2960U;
si2=l1;
si3=-2960U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1938U;
si0+=si1;
l1=si0;
goto L48;
L49:;
sd0=l13;
sd1=8.9884656743115795e+307;
sd0*=sd1;
l13=sd0;
si0=l1;
si1=3069U;
si2=l1;
si3=3069U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2046U;
si0+=si1;
l1=si0;
L48:;
sd0=l13;
si1=l1;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=W2C2_LL(52U);
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l13=sd0;
sd1=16777216;
si0=sd0 >= sd1;
if(si0){
goto L53;
}
sd0=l13;
l28=sd0;
goto L52;
L53:;
si0=l6;
si1=480U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
sd2=l13;
sd3=5.9604644775390625e-08;
sd2*=sd3;
si2=I32_TRUNC_SAT_S_F64(sd2);
sd2=(F64)(I32)(si2);
l28=sd2;
sd3=-16777216;
sd2*=sd3;
sd1+=sd2;
si1=I32_TRUNC_SAT_S_F64(sd1);
i32_store(i->m0,(U64)si0,si1);
si0=l4;
si1=1U;
si0+=si1;
l4=si0;
si0=l14;
l15=si0;
L52:;
si0=l6;
si1=480U;
si0+=si1;
si1=l4;
si2=2U;
si1<<=(si2&31);
si0+=si1;
sd1=l28;
si1=I32_TRUNC_SAT_S_F64(sd1);
i32_store(i->m0,(U64)si0,si1);
L9:;
si0=l15;
si1=1023U;
si0=(U32)((I32)si0>(I32)si1);
if(si0){
goto L57;
}
si0=l15;
si1=-1022U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L56;
}
sd0=1;
l13=sd0;
goto L54;
L57:;
si0=l15;
si1=2046U;
si0=si0 > si1;
if(si0){
goto L55;
}
si0=l15;
si1=-1023U;
si0+=si1;
l15=si0;
sd0=8.9884656743115795e+307;
l13=sd0;
goto L54;
L56:;
si0=l15;
si1=-1992U;
si0=si0 <= si1;
if(si0){
goto L58;
}
si0=l15;
si1=969U;
si0+=si1;
l15=si0;
sd0=2.0041683600089728e-292;
l13=sd0;
goto L54;
L58:;
si0=l15;
si1=-2960U;
si2=l15;
si3=-2960U;
si2=si2 > si3;
si0=si2?si0:si1;
si1=1938U;
si0+=si1;
l15=si0;
sd0=0;
l13=sd0;
goto L54;
L55:;
si0=l15;
si1=3069U;
si2=l15;
si3=3069U;
si2=si2 < si3;
si0=si2?si0:si1;
si1=-2046U;
si0+=si1;
l15=si0;
sd0=INFINITY;
l13=sd0;
L54:;
sd0=l13;
si1=l15;
si2=1023U;
si1+=si2;
sj1=(U64)(si1);
sj2=W2C2_LL(52U);
sj1<<=(sj2&63);
sd1=f64_reinterpret_i64(sj1);
sd0*=sd1;
l13=sd0;
si0=l4;
si1=1U;
si0&=si1;
si0=!(si0);
if(si0){
goto L60;
}
si0=l4;
l0=si0;
goto L59;
L60:;
si0=l6;
si1=320U;
si0+=si1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
si2=l6;
si3=480U;
si2+=si3;
si3=l4;
si4=2U;
si3<<=(si4&31);
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
sd0=l13;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l13=sd0;
si0=l4;
si1=-1U;
si0+=si1;
l0=si0;
L59:;
si0=l4;
si0=!(si0);
if(si0){
goto L61;
}
si0=l0;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=320U;
si1+=si2;
si0+=si1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l0;
si1=2U;
si0<<=(si1&31);
si1=l6;
si2=480U;
si1+=si2;
si0+=si1;
si1=-4U;
si0+=si1;
l8=si0;
L62:;
{
si0=l1;
sd1=l13;
sd2=5.9604644775390625e-08;
sd1*=sd2;
l28=sd1;
si2=l8;
si2=i32_load(i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=8U;
si0+=si1;
sd1=l13;
si2=l8;
si3=4U;
si2+=si3;
si2=i32_load(i->m0,(U64)si2);
sd2=(F64)(I32)(si2);
sd1*=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=-16U;
si0+=si1;
l1=si0;
si0=l8;
si1=-8U;
si0+=si1;
l8=si0;
sd0=l28;
sd1=5.9604644775390625e-08;
sd0*=sd1;
l13=sd0;
si0=l0;
si1=1U;
si0=si0 != si1;
l9=si0;
si0=l0;
si1=-2U;
si0+=si1;
l0=si0;
si0=l9;
if(si0){
goto L62;
}
}
L61:;
si0=l4;
si1=1U;
si0+=si1;
l30=si0;
si0=l6;
si1=320U;
si0+=si1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l9=si0;
si0=l4;
l1=si0;
L63:;
{
si0=l7;
si1=l4;
si2=l1;
l12=si2;
si1-=si2;
l11=si1;
si2=l7;
si3=l11;
si2=si2 < si3;
si0=si2?si0:si1;
l1=si0;
if(si0){
goto L66;
}
sd0=0;
l13=sd0;
si0=0U;
l8=si0;
goto L65;
L66:;
si0=l1;
si1=1U;
si0+=si1;
l1=si0;
si1=1U;
si0&=si1;
l33=si0;
si0=l1;
si1=-2U;
si0&=si1;
l10=si0;
sd0=0;
l13=sd0;
si0=0U;
l1=si0;
si0=0U;
l8=si0;
L67:;
{
sd0=l13;
si1=l1;
si2=2720544U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l9;
si3=l1;
si2+=si3;
l0=si2;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
si1=l1;
si2=2720552U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
si2=l0;
si3=8U;
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
si0=l1;
si1=16U;
si0+=si1;
l1=si0;
si0=l10;
si1=l8;
si2=2U;
si1+=si2;
l8=si1;
si0=si0 != si1;
if(si0){
goto L67;
}
}
si0=l33;
si0=!(si0);
if(si0){
goto L64;
}
L65:;
sd0=l13;
si1=l8;
si2=3U;
si1<<=(si2&31);
sd1=f64_load(i->m0,(U64)si1+2720544U);
si2=l6;
si3=320U;
si2+=si3;
si3=l8;
si4=l12;
si3+=si4;
si4=3U;
si3<<=(si4&31);
si2+=si3;
sd2=f64_load(i->m0,(U64)si2);
sd1*=sd2;
sd0+=sd1;
l13=sd0;
L64:;
si0=l6;
si1=160U;
si0+=si1;
si1=l11;
si2=3U;
si1<<=(si2&31);
si0+=si1;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l9;
si1=-8U;
si0+=si1;
l9=si0;
si0=l12;
si1=-1U;
si0+=si1;
l1=si0;
si0=l12;
if(si0){
goto L63;
}
}
si0=l5;
switch(si0){
case 0:
goto L70;
case 1:
goto L69;
case 2:
goto L69;
case 3:
goto L71;
default:
goto L70;
}
L71:;
sd0=0;
l34=sd0;
si0=l4;
si0=!(si0);
if(si0){
goto L72;
}
si0=l4;
l1=si0;
L74:;
{
si0=l6;
si1=160U;
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=-8U;
si0+=si1;
l0=si0;
si1=l0;
sd1=f64_load(i->m0,(U64)si1);
l13=sd1;
si2=l8;
sd2=f64_load(i->m0,(U64)si2);
l28=sd2;
sd1+=sd2;
l22=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l8;
sd1=l28;
sd2=l13;
sd3=l22;
sd2-=sd3;
sd1+=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=1U;
si0=si0 == si1;
l8=si0;
if(si0){
goto L73;
}
si0=1U;
si1=l1;
si2=-1U;
si1+=si2;
si2=l8;
si0=si2?si0:si1;
l1=si0;
if(si0){
goto L74;
}
}
L73:;
si0=l4;
si1=1U;
si0=si0 == si1;
if(si0){
goto L72;
}
si0=l4;
l1=si0;
L76:;
{
si0=l6;
si1=160U;
si0+=si1;
si1=l1;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l8=si0;
si1=-8U;
si0+=si1;
l0=si0;
si1=l0;
sd1=f64_load(i->m0,(U64)si1);
l13=sd1;
si2=l8;
sd2=f64_load(i->m0,(U64)si2);
l28=sd2;
sd1+=sd2;
l22=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l8;
sd1=l28;
sd2=l13;
sd3=l22;
sd2-=sd3;
sd1+=sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l1;
si1=2U;
si0=si0 == si1;
l8=si0;
if(si0){
goto L75;
}
si0=2U;
si1=l1;
si2=-1U;
si1+=si2;
si2=l8;
si0=si2?si0:si1;
l1=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L76;
}
}
L75:;
sd0=0;
l34=sd0;
L77:;
{
sd0=l34;
si1=l6;
si2=160U;
si1+=si2;
si2=l4;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l34=sd0;
si0=l4;
si1=2U;
si0=si0 == si1;
l1=si0;
if(si0){
goto L72;
}
si0=2U;
si1=l4;
si2=-1U;
si1+=si2;
si2=l1;
si0=si2?si0:si1;
l4=si0;
si1=1U;
si0=si0 > si1;
if(si0){
goto L77;
}
}
L72:;
si0=l6;
sd0=f64_load(i->m0,(U64)si0+160U);
l13=sd0;
si0=l31;
if(si0){
goto L78;
}
si0=l2;
sd1=l13;
f64_store(i->m0,(U64)si0,sd1);
si0=l2;
sd1=l34;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l2;
si1=l6;
sd1=f64_load(i->m0,(U64)si1+168U);
f64_store(i->m0,(U64)si0+8U,sd1);
goto L68;
L78:;
si0=l2;
sd1=l13;
sd1=-(sd1);
f64_store(i->m0,(U64)si0,sd1);
si0=l2;
sd1=l34;
sd1=-(sd1);
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l2;
si1=l6;
sd1=f64_load(i->m0,(U64)si1+168U);
sd1=-(sd1);
f64_store(i->m0,(U64)si0+8U,sd1);
goto L68;
L70:;
si0=l30;
si1=3U;
si0&=si1;
l0=si0;
if(si0){
goto L80;
}
sd0=0;
l13=sd0;
si0=l4;
l8=si0;
goto L79;
L80:;
si0=l6;
si1=160U;
si0+=si1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sd0=0;
l13=sd0;
si0=l4;
l8=si0;
L81:;
{
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
sd0=l13;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L81;
}
}
L79:;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L82;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l1=si0;
L83:;
{
sd0=l13;
si1=l1;
si2=24U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=16U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=8U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-32U;
si0+=si1;
l1=si0;
si0=l8;
si1=3U;
si0=si0 != si1;
l0=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l0;
if(si0){
goto L83;
}
}
L82:;
si0=l2;
sd1=l13;
sd1=-(sd1);
sd2=l13;
si3=l31;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0,sd1);
goto L68;
L69:;
si0=l30;
si1=3U;
si0&=si1;
l0=si0;
if(si0){
goto L85;
}
sd0=0;
l13=sd0;
si0=l4;
l8=si0;
goto L84;
L85:;
si0=l6;
si1=160U;
si0+=si1;
si1=l4;
si2=3U;
si1<<=(si2&31);
si0+=si1;
l1=si0;
sd0=0;
l13=sd0;
si0=l4;
l8=si0;
L86:;
{
si0=l8;
si1=-1U;
si0+=si1;
l8=si0;
sd0=l13;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-8U;
si0+=si1;
l1=si0;
si0=l0;
si1=-1U;
si0+=si1;
l0=si0;
if(si0){
goto L86;
}
}
L84:;
si0=l4;
si1=3U;
si0=si0 < si1;
if(si0){
goto L87;
}
si0=l8;
si1=3U;
si0<<=(si1&31);
si1=l6;
si2=160U;
si1+=si2;
si0+=si1;
si1=-24U;
si0+=si1;
l1=si0;
L88:;
{
sd0=l13;
si1=l1;
si2=24U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=16U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
si2=8U;
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
si1=l1;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=-32U;
si0+=si1;
l1=si0;
si0=l8;
si1=3U;
si0=si0 != si1;
l0=si0;
si0=l8;
si1=-4U;
si0+=si1;
l8=si0;
si0=l0;
if(si0){
goto L88;
}
}
L87:;
si0=l2;
sd1=l13;
sd1=-(sd1);
sd2=l13;
si3=l31;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0,sd1);
si0=l6;
sd0=f64_load(i->m0,(U64)si0+160U);
sd1=l13;
sd0-=sd1;
l13=sd0;
si0=l4;
si0=!(si0);
if(si0){
goto L89;
}
si0=1U;
l1=si0;
L90:;
{
sd0=l13;
si1=l6;
si2=160U;
si1+=si2;
si2=l1;
si3=3U;
si2<<=(si3&31);
si1+=si2;
sd1=f64_load(i->m0,(U64)si1);
sd0+=sd1;
l13=sd0;
si0=l1;
si1=l4;
si0=si0 >= si1;
if(si0){
goto L89;
}
si0=l1;
si1=l1;
si2=l4;
si1=si1 < si2;
si0+=si1;
l1=si0;
si1=l4;
si0=si0 <= si1;
if(si0){
goto L90;
}
}
L89:;
si0=l2;
sd1=l13;
sd1=-(sd1);
sd2=l13;
si3=l31;
sd1=si3?sd1:sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
L68:;
si0=l6;
si1=560U;
si0+=si1;
i->g0=si0;
si0=l29;
si1=7U;
si0&=si1;
L0:;
return si0;
}

void f141(gauche_ffiInstance*i,U32 l0,F64 l1) {
U32 l2=0;
U64 l3=0;
U32 l4=0;
U32 l5=0;
F64 l6=0;
F64 l7=0;
F64 l8=0;
F64 l9=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2;
F64 sd0,sd1,sd2,sd3,sd4;
si0=i->g0;
si1=48U;
si0-=si1;
l2=si0;
i->g0=si0;
sd0=l1;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
l4=si0;
si1=2147483647U;
si0&=si1;
l5=si0;
si1=1074752123U;
si0=si0 < si1;
if(si0){
goto L3;
}
si0=l5;
si1=1075594812U;
si0=si0 < si1;
if(si0){
goto L4;
}
si0=l5;
si1=1094263291U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l5;
si1=2146435071U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l2;
sj1=l3;
sj2=W2C2_LL(4503599627370495U);
sj1&=sj2;
sj2=W2C2_LL(4710765210229538816U);
sj1|=sj2;
sd1=f64_reinterpret_i64(sj1);
l1=sd1;
si1=I32_TRUNC_SAT_S_F64(sd1);
sd1=(F64)(I32)(si1);
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l2;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=16777216;
sd1*=sd2;
l1=sd1;
si1=I32_TRUNC_SAT_S_F64(sd1);
l4=si1;
sd1=(F64)(I32)(si1);
l6=sd1;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l2;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=16777216;
sd1*=sd2;
l1=sd1;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+40U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+32U,sj1);
si0=l2;
sj1=W2C2_LL(0U);
i64_store(i->m0,(U64)si0+24U,sj1);
si0=l2;
si1=2U;
si2=1U;
si3=l4;
si1=si3?si1:si2;
si2=3U;
sd3=l1;
sd4=0;
si3=sd3 == sd4;
si1=si3?si1:si2;
si2=l2;
si3=24U;
si2+=si3;
si3=3U;
si4=l5;
si5=20U;
si4>>=(si5&31);
si5=-1046U;
si4+=si5;
si5=1U;
si0=f140(i,si0,si1,si2,si3,si4,si5);
l5=si0;
sj0=l3;
sj1=W2C2_LL(-1U);
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L5;
}
si0=l0;
si1=l5;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1+32U);
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1+24U);
f64_store(i->m0,(U64)si0,sd1);
goto L1;
L7:;
si0=l5;
si1=20U;
si0>>=(si1&31);
l5=si0;
sd1=l1;
sd2=l1;
sd3=0.63661977236758138;
sd2*=sd3;
sd3=6755399441055744;
sd2+=sd3;
sd3=-6755399441055744;
sd2+=sd3;
l6=sd2;
sd3=-1.5707963267341256;
sd2*=sd3;
sd1+=sd2;
l1=sd1;
sd2=l6;
sd3=6.0771005065061922e-11;
sd2*=sd3;
l7=sd2;
sd1-=sd2;
l8=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=W2C2_LL(52U);
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=17U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L8;
}
si0=l5;
sd1=l1;
sd2=l6;
sd3=6.077100506303966e-11;
sd2*=sd3;
l8=sd2;
sd1-=sd2;
l9=sd1;
sd2=l6;
sd3=2.0222662487959506e-21;
sd2*=sd3;
sd3=l1;
sd4=l9;
sd3-=sd4;
sd4=l8;
sd3-=sd4;
sd2-=sd3;
l7=sd2;
sd1-=sd2;
l8=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=W2C2_LL(52U);
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=50U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L9;
}
sd0=l9;
l1=sd0;
goto L8;
L9:;
sd0=l9;
sd1=l6;
sd2=2.0222662487111665e-21;
sd1*=sd2;
l8=sd1;
sd0-=sd1;
l1=sd0;
sd1=l6;
sd2=8.4784276603688996e-32;
sd1*=sd2;
sd2=l9;
sd3=l1;
sd2-=sd3;
sd3=l8;
sd2-=sd3;
sd1-=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
L8:;
si0=l0;
sd1=l8;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l6;
si1=I32_TRUNC_SAT_S_F64(sd1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=l8;
sd1-=sd2;
sd2=l7;
sd1-=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L6:;
si0=l0;
si1=0U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=l1;
sd1-=sd2;
l1=sd1;
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l0;
sd1=l1;
f64_store(i->m0,(U64)si0,sd1);
goto L1;
L5:;
si0=l0;
si1=0U;
si2=l5;
si1-=si2;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1+32U);
sd1=-(sd1);
f64_store(i->m0,(U64)si0+16U,sd1);
si0=l0;
si1=l2;
sd1=f64_load(i->m0,(U64)si1+24U);
sd1=-(sd1);
f64_store(i->m0,(U64)si0,sd1);
goto L1;
L4:;
si0=l5;
si1=1075183037U;
si0=si0 < si1;
if(si0){
goto L10;
}
si0=l5;
si1=1075388923U;
si0=si0 != si1;
if(si0){
goto L11;
}
sd0=l1;
sd1=l1;
sd2=0.63661977236758138;
sd1*=sd2;
sd2=6755399441055744;
sd1+=sd2;
sd2=-6755399441055744;
sd1+=sd2;
l6=sd1;
sd2=-1.5707963267341256;
sd1*=sd2;
sd0+=sd1;
l1=sd0;
sd1=l6;
sd2=6.0771005065061922e-11;
sd1*=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(9218868437227405312U);
sj0&=sj1;
sj1=W2C2_LL(4544132024016830463U);
si0=sj0 > sj1;
if(si0){
goto L12;
}
sd0=l1;
sd1=l6;
sd2=6.077100506303966e-11;
sd1*=sd2;
l8=sd1;
sd0-=sd1;
l9=sd0;
sd1=l6;
sd2=2.0222662487959506e-21;
sd1*=sd2;
sd2=l1;
sd3=l9;
sd2-=sd3;
sd3=l8;
sd2-=sd3;
sd1-=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(9151314442816847872U);
sj0&=sj1;
sj1=W2C2_LL(4395513236313604095U);
si0=sj0 <= sj1;
if(si0){
goto L13;
}
sd0=l9;
l1=sd0;
goto L12;
L13:;
sd0=l9;
sd1=l6;
sd2=2.0222662487111665e-21;
sd1*=sd2;
l8=sd1;
sd0-=sd1;
l1=sd0;
sd1=l6;
sd2=8.4784276603688996e-32;
sd1*=sd2;
sd2=l9;
sd3=l1;
sd2-=sd3;
sd3=l8;
sd2-=sd3;
sd1-=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
L12:;
si0=l0;
sd1=l8;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l6;
si1=I32_TRUNC_SAT_S_F64(sd1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=l8;
sd1-=sd2;
sd2=l7;
sd1-=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L11:;
sj0=l3;
sj1=W2C2_LL(0U);
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L14;
}
si0=l0;
si1=4U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=-6.2831853069365025;
sd1+=sd2;
l1=sd1;
sd2=-2.4308402026024769e-10;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=-2.4308402026024769e-10;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L14:;
si0=l0;
si1=-4U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=6.2831853069365025;
sd1+=sd2;
l1=sd1;
sd2=2.4308402026024769e-10;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=2.4308402026024769e-10;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L10:;
si0=l5;
si1=1074977148U;
si0=si0 == si1;
if(si0){
goto L2;
}
sj0=l3;
sj1=W2C2_LL(0U);
si0=(U64)((I64)sj0<(I64)sj1);
if(si0){
goto L15;
}
si0=l0;
si1=3U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=-4.7123889802023768;
sd1+=sd2;
l1=sd1;
sd2=-1.8231301519518578e-10;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=-1.8231301519518578e-10;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L15:;
si0=l0;
si1=-3U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=4.7123889802023768;
sd1+=sd2;
l1=sd1;
sd2=1.8231301519518578e-10;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=1.8231301519518578e-10;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L3:;
si0=l4;
si1=1048575U;
si0&=si1;
si1=598523U;
si0=si0 == si1;
if(si0){
goto L16;
}
si0=l5;
si1=1073928573U;
si0=si0 < si1;
if(si0){
goto L17;
}
sj0=l3;
sj1=W2C2_LL(-1U);
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L18;
}
si0=l0;
si1=2U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=-3.1415926534682512;
sd1+=sd2;
l1=sd1;
sd2=-1.2154201013012384e-10;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=-1.2154201013012384e-10;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L18:;
si0=l0;
si1=-2U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=3.1415926534682512;
sd1+=sd2;
l1=sd1;
sd2=1.2154201013012384e-10;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=1.2154201013012384e-10;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L17:;
sj0=l3;
sj1=W2C2_LL(-1U);
si0=(U64)((I64)sj0>(I64)sj1);
if(si0){
goto L19;
}
si0=l0;
si1=-1U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=1.5707963267341256;
sd1+=sd2;
l1=sd1;
sd2=6.0771005065061922e-11;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=6.0771005065061922e-11;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L19:;
si0=l0;
si1=1U;
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=-1.5707963267341256;
sd1+=sd2;
l1=sd1;
sd2=-6.0771005065061922e-11;
sd1+=sd2;
l6=sd1;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l1;
sd2=l6;
sd1-=sd2;
sd2=-6.0771005065061922e-11;
sd1+=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L16:;
si0=l5;
si1=20U;
si0>>=(si1&31);
l5=si0;
sd1=l1;
sd2=l1;
sd3=0.63661977236758138;
sd2*=sd3;
sd3=6755399441055744;
sd2+=sd3;
sd3=-6755399441055744;
sd2+=sd3;
l6=sd2;
sd3=-1.5707963267341256;
sd2*=sd3;
sd1+=sd2;
l1=sd1;
sd2=l6;
sd3=6.0771005065061922e-11;
sd2*=sd3;
l7=sd2;
sd1-=sd2;
l8=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=W2C2_LL(52U);
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=17U;
si0=(U32)((I32)si0<(I32)si1);
if(si0){
goto L20;
}
si0=l5;
sd1=l1;
sd2=l6;
sd3=6.077100506303966e-11;
sd2*=sd3;
l8=sd2;
sd1-=sd2;
l9=sd1;
sd2=l6;
sd3=2.0222662487959506e-21;
sd2*=sd3;
sd3=l1;
sd4=l9;
sd3-=sd4;
sd4=l8;
sd3-=sd4;
sd2-=sd3;
l7=sd2;
sd1-=sd2;
l8=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=W2C2_LL(52U);
sj1>>=(sj2&63);
si1=(U32)(sj1);
si2=2047U;
si1&=si2;
si0-=si1;
si1=50U;
si0=(U32)((I32)si0>=(I32)si1);
if(si0){
goto L21;
}
sd0=l9;
l1=sd0;
goto L20;
L21:;
sd0=l9;
sd1=l6;
sd2=2.0222662487111665e-21;
sd1*=sd2;
l8=sd1;
sd0-=sd1;
l1=sd0;
sd1=l6;
sd2=8.4784276603688996e-32;
sd1*=sd2;
sd2=l9;
sd3=l1;
sd2-=sd3;
sd3=l8;
sd2-=sd3;
sd1-=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
L20:;
si0=l0;
sd1=l8;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l6;
si1=I32_TRUNC_SAT_S_F64(sd1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=l8;
sd1-=sd2;
sd2=l7;
sd1-=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
goto L1;
L2:;
sd0=l1;
sd1=l1;
sd2=0.63661977236758138;
sd1*=sd2;
sd2=6755399441055744;
sd1+=sd2;
sd2=-6755399441055744;
sd1+=sd2;
l6=sd1;
sd2=-1.5707963267341256;
sd1*=sd2;
sd0+=sd1;
l1=sd0;
sd1=l6;
sd2=6.0771005065061922e-11;
sd1*=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(9218868437227405312U);
sj0&=sj1;
sj1=W2C2_LL(4544132024016830463U);
si0=sj0 > sj1;
if(si0){
goto L22;
}
sd0=l1;
sd1=l6;
sd2=6.077100506303966e-11;
sd1*=sd2;
l8=sd1;
sd0-=sd1;
l9=sd0;
sd1=l6;
sd2=2.0222662487959506e-21;
sd1*=sd2;
sd2=l1;
sd3=l9;
sd2-=sd3;
sd3=l8;
sd2-=sd3;
sd1-=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(9151314442816847872U);
sj0&=sj1;
sj1=W2C2_LL(4395513236313604095U);
si0=sj0 <= sj1;
if(si0){
goto L23;
}
sd0=l9;
l1=sd0;
goto L22;
L23:;
sd0=l9;
sd1=l6;
sd2=2.0222662487111665e-21;
sd1*=sd2;
l8=sd1;
sd0-=sd1;
l1=sd0;
sd1=l6;
sd2=8.4784276603688996e-32;
sd1*=sd2;
sd2=l9;
sd3=l1;
sd2-=sd3;
sd3=l8;
sd2-=sd3;
sd1-=sd2;
l7=sd1;
sd0-=sd1;
l8=sd0;
L22:;
si0=l0;
sd1=l8;
f64_store(i->m0,(U64)si0,sd1);
si0=l0;
sd1=l6;
si1=I32_TRUNC_SAT_S_F64(sd1);
i32_store(i->m0,(U64)si0+8U,si1);
si0=l0;
sd1=l1;
sd2=l8;
sd1-=sd2;
sd2=l7;
sd1-=sd2;
f64_store(i->m0,(U64)si0+16U,sd1);
L1:;
si0=l2;
si1=48U;
si0+=si1;
i->g0=si0;
L0:;
}

F64 f142(gauche_ffiInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
U32 si0,si1;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072243196U;
si0=si0 < si1;
if(si0){
goto L7;
}
si0=l2;
si1=2146435071U;
si0=si0 > si1;
if(si0){
goto L6;
}
si0=l1;
si1=8U;
si0+=si1;
sd1=l0;
f141(i,si0,sd1);
si0=l1;
sd0=f64_load(i->m0,(U64)si0+24U);
l3=sd0;
si0=l1;
sd0=f64_load(i->m0,(U64)si0+8U);
l4=sd0;
sd1=l4;
sd0*=sd1;
l0=sd0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L4;
case 1:
goto L3;
case 2:
goto L2;
case 3:
goto L5;
default:
goto L4;
}
L7:;
sd0=l0;
si0=I32_TRUNC_SAT_S_F64(sd0);
if(si0){
goto L8;
}
sd0=1;
l4=sd0;
si0=l2;
si1=1044816030U;
si0=si0 < si1;
if(si0){
goto L1;
}
L8:;
sd0=1;
sd1=l0;
sd2=l0;
sd1*=sd2;
l4=sd1;
sd2=0.5;
sd1*=sd2;
l3=sd1;
sd0-=sd1;
l5=sd0;
sd1=1;
sd2=l5;
sd1-=sd2;
sd2=l3;
sd1-=sd2;
sd2=l4;
sd3=l4;
sd4=l4;
sd5=l4;
sd6=2.4801587289476729e-05;
sd5*=sd6;
sd6=-0.001388888888887411;
sd5+=sd6;
sd4*=sd5;
sd5=0.041666666666666602;
sd4+=sd5;
sd3*=sd4;
sd4=l4;
sd5=l4;
sd4*=sd5;
l3=sd4;
sd5=l3;
sd4*=sd5;
sd5=l4;
sd6=l4;
sd7=-1.1359647557788195e-11;
sd6*=sd7;
sd7=2.0875723212981748e-09;
sd6+=sd7;
sd5*=sd6;
sd6=-2.7557314351390663e-07;
sd5+=sd6;
sd4*=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l0;
sd4=-0.f;
sd3*=sd4;
sd2+=sd3;
sd1+=sd2;
sd0+=sd1;
l4=sd0;
goto L1;
L6:;
sd0=l0;
sd1=l0;
sd0-=sd1;
l4=sd0;
goto L1;
L5:;
sd0=l4;
sd1=l4;
sd2=l0;
sd1*=sd2;
l5=sd1;
sd2=0.16666666666666632;
sd1*=sd2;
sd2=l0;
sd3=l3;
sd4=0.5;
sd3*=sd4;
sd4=l5;
sd5=l0;
sd6=l0;
sd7=l0;
sd6*=sd7;
sd5*=sd6;
sd6=l0;
sd7=1.5896909952115501e-10;
sd6*=sd7;
sd7=-2.5050760253406863e-08;
sd6+=sd7;
sd5*=sd6;
sd6=l0;
sd7=l0;
sd8=2.7557313707070068e-06;
sd7*=sd8;
sd8=-0.00019841269829857949;
sd7+=sd8;
sd6*=sd7;
sd7=0.0083333333333224895;
sd6+=sd7;
sd5+=sd6;
sd4*=sd5;
sd3-=sd4;
sd2*=sd3;
sd3=l3;
sd2-=sd3;
sd1+=sd2;
sd0-=sd1;
l4=sd0;
goto L1;
L4:;
sd0=1;
sd1=l0;
sd2=0.5;
sd1*=sd2;
l5=sd1;
sd0-=sd1;
l6=sd0;
sd1=1;
sd2=l6;
sd1-=sd2;
sd2=l5;
sd1-=sd2;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=2.4801587289476729e-05;
sd5*=sd6;
sd6=-0.001388888888887411;
sd5+=sd6;
sd4*=sd5;
sd5=0.041666666666666602;
sd4+=sd5;
sd3*=sd4;
sd4=l0;
sd5=l0;
sd4*=sd5;
l5=sd4;
sd5=l5;
sd4*=sd5;
sd5=l0;
sd6=l0;
sd7=-1.1359647557788195e-11;
sd6*=sd7;
sd7=2.0875723212981748e-09;
sd6+=sd7;
sd5*=sd6;
sd6=-2.7557314351390663e-07;
sd5+=sd6;
sd4*=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l4;
sd4=l3;
sd3*=sd4;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
l4=sd0;
goto L1;
L3:;
sd0=l4;
sd1=l4;
sd2=l0;
sd1*=sd2;
l5=sd1;
sd2=0.16666666666666632;
sd1*=sd2;
sd2=l0;
sd3=l3;
sd4=0.5;
sd3*=sd4;
sd4=l5;
sd5=l0;
sd6=l0;
sd7=l0;
sd6*=sd7;
sd5*=sd6;
sd6=l0;
sd7=1.5896909952115501e-10;
sd6*=sd7;
sd7=-2.5050760253406863e-08;
sd6+=sd7;
sd5*=sd6;
sd6=l0;
sd7=l0;
sd8=2.7557313707070068e-06;
sd7*=sd8;
sd8=-0.00019841269829857949;
sd7+=sd8;
sd6*=sd7;
sd7=0.0083333333333224895;
sd6+=sd7;
sd5+=sd6;
sd4*=sd5;
sd3-=sd4;
sd2*=sd3;
sd3=l3;
sd2-=sd3;
sd1+=sd2;
sd0-=sd1;
sd0=-(sd0);
l4=sd0;
goto L1;
L2:;
sd0=1;
sd1=l0;
sd2=0.5;
sd1*=sd2;
l5=sd1;
sd0-=sd1;
l6=sd0;
sd1=1;
sd2=l6;
sd1-=sd2;
sd2=l5;
sd1-=sd2;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=2.4801587289476729e-05;
sd5*=sd6;
sd6=-0.001388888888887411;
sd5+=sd6;
sd4*=sd5;
sd5=0.041666666666666602;
sd4+=sd5;
sd3*=sd4;
sd4=l0;
sd5=l0;
sd4*=sd5;
l5=sd4;
sd5=l5;
sd4*=sd5;
sd5=l0;
sd6=l0;
sd7=-1.1359647557788195e-11;
sd6*=sd7;
sd7=2.0875723212981748e-09;
sd6+=sd7;
sd5*=sd6;
sd6=-2.7557314351390663e-07;
sd5+=sd6;
sd4*=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l4;
sd4=l3;
sd3*=sd4;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=-(sd0);
l4=sd0;
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
sd0=l4;
L0:;
return sd0;
}

F64 f143(gauche_ffiInstance*i,F64 l0) {
F64 sd0;
sd0=l0;
sd0=f142(i,sd0);
L0:;
return sd0;
}

void f144(gauche_ffiInstance*i,U32 l0,U64 l1,U64 l2,U32 l3) {
U64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2;
si0=l3;
si1=64U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
sj0=l2;
si1=0U;
si2=l3;
si1-=si2;
sj1=(U64)(si1);
sj0<<=(sj1&63);
sj1=l1;
si2=l3;
sj2=(U64)(si2);
l4=sj2;
sj1>>=(sj2&63);
sj0|=sj1;
l1=sj0;
sj0=l2;
sj1=l4;
sj0>>=(sj1&63);
l2=sj0;
goto L1;
L2:;
sj0=l2;
si1=l3;
sj1=(U64)(si1);
sj0>>=(sj1&63);
l1=sj0;
sj0=W2C2_LL(0U);
l2=sj0;
L1:;
si0=l0;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(i->m0,(U64)si0+8U,sj1);
L0:;
}

F64 f145(gauche_ffiInstance*i,F64 l0) {
U32 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
F64 l5=0;
F64 l6=0;
F64 l7=0;
U32 si0,si1;
U64 sj0,sj1;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8;
si0=i->g0;
si1=32U;
si0-=si1;
l1=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072243196U;
si0=si0 < si1;
if(si0){
goto L2;
}
si0=l2;
si1=2146435071U;
si0=si0 > si1;
if(si0){
goto L7;
}
si0=l1;
si1=8U;
si0+=si1;
sd1=l0;
f141(i,si0,sd1);
si0=l1;
sd0=f64_load(i->m0,(U64)si0+24U);
l3=sd0;
si0=l1;
sd0=f64_load(i->m0,(U64)si0+8U);
l4=sd0;
sd1=l4;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd0*=sd1;
l5=sd0;
si0=l1;
si0=i32_load(i->m0,(U64)si0+16U);
si1=3U;
si0&=si1;
switch(si0){
case 0:
goto L5;
case 1:
goto L4;
case 2:
goto L3;
case 3:
goto L6;
default:
goto L5;
}
L7:;
sd0=l0;
sd1=l0;
sd0-=sd1;
l0=sd0;
goto L1;
L6:;
sd0=1;
sd1=l0;
sd2=0.5;
sd1*=sd2;
l6=sd1;
sd0-=sd1;
l7=sd0;
sd1=1;
sd2=l7;
sd1-=sd2;
sd2=l6;
sd1-=sd2;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=2.4801587289476729e-05;
sd5*=sd6;
sd6=-0.001388888888887411;
sd5+=sd6;
sd4*=sd5;
sd5=0.041666666666666602;
sd4+=sd5;
sd3*=sd4;
sd4=l5;
sd5=l5;
sd4*=sd5;
sd5=l0;
sd6=l0;
sd7=-1.1359647557788195e-11;
sd6*=sd7;
sd7=2.0875723212981748e-09;
sd6+=sd7;
sd5*=sd6;
sd6=-2.7557314351390663e-07;
sd5+=sd6;
sd4*=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l4;
sd4=l3;
sd3*=sd4;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
sd0=-(sd0);
l0=sd0;
goto L1;
L5:;
sd0=l4;
sd1=l4;
sd2=l0;
sd1*=sd2;
l6=sd1;
sd2=0.16666666666666632;
sd1*=sd2;
sd2=l0;
sd3=l3;
sd4=0.5;
sd3*=sd4;
sd4=l6;
sd5=l0;
sd6=l5;
sd5*=sd6;
sd6=l0;
sd7=1.5896909952115501e-10;
sd6*=sd7;
sd7=-2.5050760253406863e-08;
sd6+=sd7;
sd5*=sd6;
sd6=l0;
sd7=l0;
sd8=2.7557313707070068e-06;
sd7*=sd8;
sd8=-0.00019841269829857949;
sd7+=sd8;
sd6*=sd7;
sd7=0.0083333333333224895;
sd6+=sd7;
sd5+=sd6;
sd4*=sd5;
sd3-=sd4;
sd2*=sd3;
sd3=l3;
sd2-=sd3;
sd1+=sd2;
sd0-=sd1;
l0=sd0;
goto L1;
L4:;
sd0=1;
sd1=l0;
sd2=0.5;
sd1*=sd2;
l6=sd1;
sd0-=sd1;
l7=sd0;
sd1=1;
sd2=l7;
sd1-=sd2;
sd2=l6;
sd1-=sd2;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=2.4801587289476729e-05;
sd5*=sd6;
sd6=-0.001388888888887411;
sd5+=sd6;
sd4*=sd5;
sd5=0.041666666666666602;
sd4+=sd5;
sd3*=sd4;
sd4=l5;
sd5=l5;
sd4*=sd5;
sd5=l0;
sd6=l0;
sd7=-1.1359647557788195e-11;
sd6*=sd7;
sd7=2.0875723212981748e-09;
sd6+=sd7;
sd5*=sd6;
sd6=-2.7557314351390663e-07;
sd5+=sd6;
sd4*=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=l4;
sd4=l3;
sd3*=sd4;
sd2-=sd3;
sd1+=sd2;
sd0+=sd1;
l0=sd0;
goto L1;
L3:;
sd0=l4;
sd1=l4;
sd2=l0;
sd1*=sd2;
l6=sd1;
sd2=0.16666666666666632;
sd1*=sd2;
sd2=l0;
sd3=l3;
sd4=0.5;
sd3*=sd4;
sd4=l6;
sd5=l0;
sd6=l5;
sd5*=sd6;
sd6=l0;
sd7=1.5896909952115501e-10;
sd6*=sd7;
sd7=-2.5050760253406863e-08;
sd6+=sd7;
sd5*=sd6;
sd6=l0;
sd7=l0;
sd8=2.7557313707070068e-06;
sd7*=sd8;
sd8=-0.00019841269829857949;
sd7+=sd8;
sd6*=sd7;
sd7=0.0083333333333224895;
sd6+=sd7;
sd5+=sd6;
sd4*=sd5;
sd3-=sd4;
sd2*=sd3;
sd3=l3;
sd2-=sd3;
sd1+=sd2;
sd0-=sd1;
sd0=-(sd0);
l0=sd0;
goto L1;
L2:;
si0=l2;
si1=1045430272U;
si0=si0 < si1;
if(si0){
goto L8;
}
sd0=l0;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l4=sd2;
sd1*=sd2;
sd2=l4;
sd3=l4;
sd4=l4;
sd5=l4;
sd4*=sd5;
sd3*=sd4;
sd4=l4;
sd5=1.5896909952115501e-10;
sd4*=sd5;
sd5=-2.5050760253406863e-08;
sd4+=sd5;
sd3*=sd4;
sd4=l4;
sd5=l4;
sd6=2.7557313707070068e-06;
sd5*=sd6;
sd6=-0.00019841269829857949;
sd5+=sd6;
sd4*=sd5;
sd5=0.0083333333333224895;
sd4+=sd5;
sd3+=sd4;
sd2*=sd3;
sd3=-0.16666666666666632;
sd2+=sd3;
sd1*=sd2;
sd0+=sd1;
l0=sd0;
goto L1;
L8:;
si0=l2;
si1=1048576U;
si0=si0 < si1;
if(si0){
goto L9;
}
si0=l1;
sd1=l0;
sd2=1.3292279957849159e+36;
sd1+=sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l1;
sd0=f64_load(i->m0,(U64)si0+8U);
goto L1;
L9:;
si0=l1;
sd1=l0;
sd2=7.5231638452626401e-37;
sd1*=sd2;
f64_store(i->m0,(U64)si0+8U,sd1);
si0=l1;
sd0=f64_load(i->m0,(U64)si0+8U);
L1:;
si0=l1;
si1=32U;
si0+=si1;
i->g0=si0;
sd0=l0;
L0:;
return sd0;
}

F64 f146(gauche_ffiInstance*i,F64 l0) {
F64 sd0;
sd0=l0;
sd0=f145(i,sd0);
L0:;
return sd0;
}

F64 f147(gauche_ffiInstance*i,F64 l0) {
U64 l1=0;
U32 l2=0;
F64 l3=0;
F64 l4=0;
U32 si0,si1,si2;
U64 sj0,sj1,sj2,sj3;
F64 sd0,sd1,sd2,sd3,sd4,sd5,sd6,sd7,sd8,sd9;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l1=sj0;
sj1=W2C2_LL(32U);
sj0>>=(sj1&63);
si0=(U32)(sj0);
si1=2147483647U;
si0&=si1;
l2=si0;
si1=1072693247U;
si0=si0 > si1;
if(si0){
goto L2;
}
si0=l2;
si1=1071644672U;
si0=si0 < si1;
if(si0){
goto L3;
}
sj0=l1;
sj1=W2C2_LL(-1U);
si0=(U64)((I64)sj0<=(I64)sj1);
if(si0){
goto L4;
}
sd0=1;
sd1=l0;
sd0-=sd1;
sd1=0.5;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd1=sqrt(sd1);
l3=sd1;
sj1=i64_reinterpret_f64(sd1);
sj2=W2C2_LL(-4294967296U);
sj1&=sj2;
sd1=f64_reinterpret_i64(sj1);
l4=sd1;
sd2=l4;
sd1*=sd2;
sd0-=sd1;
sd1=l3;
sd2=l4;
sd1+=sd2;
sd0/=sd1;
sd1=l3;
sd2=l0;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=3.4793310759602117e-05;
sd7*=sd8;
sd8=0.00079153499428981453;
sd7+=sd8;
sd6*=sd7;
sd7=-0.040055534500679411;
sd6+=sd7;
sd5*=sd6;
sd6=0.20121253213486293;
sd5+=sd6;
sd4*=sd5;
sd5=-0.32556581862240092;
sd4+=sd5;
sd3*=sd4;
sd4=0.16666666666666666;
sd3+=sd4;
sd2*=sd3;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=0.077038150555901935;
sd6*=sd7;
sd7=-0.68828397160545329;
sd6+=sd7;
sd5*=sd6;
sd6=2.0209457602335057;
sd5+=sd6;
sd4*=sd5;
sd5=-2.4033949117344142;
sd4+=sd5;
sd3*=sd4;
sd4=1;
sd3+=sd4;
sd2/=sd3;
sd1*=sd2;
sd0+=sd1;
sd1=l4;
sd0+=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
goto L0;
L4:;
sd0=1.5707963267948966;
sd1=l0;
sd2=1;
sd1+=sd2;
sd2=0.5;
sd1*=sd2;
l0=sd1;
sd1=sqrt(sd1);
l4=sd1;
sd2=l4;
sd3=l0;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=l0;
sd9=3.4793310759602117e-05;
sd8*=sd9;
sd9=0.00079153499428981453;
sd8+=sd9;
sd7*=sd8;
sd8=-0.040055534500679411;
sd7+=sd8;
sd6*=sd7;
sd7=0.20121253213486293;
sd6+=sd7;
sd5*=sd6;
sd6=-0.32556581862240092;
sd5+=sd6;
sd4*=sd5;
sd5=0.16666666666666666;
sd4+=sd5;
sd3*=sd4;
sd4=l0;
sd5=l0;
sd6=l0;
sd7=l0;
sd8=0.077038150555901935;
sd7*=sd8;
sd8=-0.68828397160545329;
sd7+=sd8;
sd6*=sd7;
sd7=2.0209457602335057;
sd6+=sd7;
sd5*=sd6;
sd6=-2.4033949117344142;
sd5+=sd6;
sd4*=sd5;
sd5=1;
sd4+=sd5;
sd3/=sd4;
sd2*=sd3;
sd3=-6.123233995736766e-17;
sd2+=sd3;
sd1+=sd2;
sd0-=sd1;
l0=sd0;
sd1=l0;
sd0+=sd1;
l4=sd0;
goto L1;
L3:;
sd0=1.5707963267948966;
l4=sd0;
si0=l2;
si1=1012924417U;
si0=si0 < si1;
if(si0){
goto L1;
}
sd0=6.123233995736766e-17;
sd1=l0;
sd2=l0;
sd3=l0;
sd2*=sd3;
l4=sd2;
sd3=l4;
sd4=l4;
sd5=l4;
sd6=l4;
sd7=l4;
sd8=3.4793310759602117e-05;
sd7*=sd8;
sd8=0.00079153499428981453;
sd7+=sd8;
sd6*=sd7;
sd7=-0.040055534500679411;
sd6+=sd7;
sd5*=sd6;
sd6=0.20121253213486293;
sd5+=sd6;
sd4*=sd5;
sd5=-0.32556581862240092;
sd4+=sd5;
sd3*=sd4;
sd4=0.16666666666666666;
sd3+=sd4;
sd2*=sd3;
sd3=l4;
sd4=l4;
sd5=l4;
sd6=l4;
sd7=0.077038150555901935;
sd6*=sd7;
sd7=-0.68828397160545329;
sd6+=sd7;
sd5*=sd6;
sd6=2.0209457602335057;
sd5+=sd6;
sd4*=sd5;
sd5=-2.4033949117344142;
sd4+=sd5;
sd3*=sd4;
sd4=1;
sd3+=sd4;
sd2/=sd3;
sd1*=sd2;
sd0-=sd1;
sd1=l0;
sd0-=sd1;
sd1=1.5707963267948966;
sd0+=sd1;
goto L0;
L2:;
si0=l2;
si1=-1072693248U;
si0+=si1;
sj1=l1;
si1=(U32)(sj1);
si0|=si1;
si0=!(si0);
if(si0){
goto L5;
}
sd0=0;
sd1=l0;
sd2=l0;
sd1-=sd2;
sd0/=sd1;
goto L0;
L5:;
sd0=0;
sd1=3.1415926535897931;
sj2=l1;
sj3=W2C2_LL(-1U);
si2=(U64)((I64)sj2>(I64)sj3);
sd0=si2?sd0:sd1;
goto L0;
L1:;
sd0=l4;
L0:;
return sd0;
}

F64 f148(gauche_ffiInstance*i,F64 l0) {
F64 sd0;
sd0=l0;
sd0=f147(i,sd0);
L0:;
return sd0;
}

void f149(gauche_ffiInstance*i,U32 l0,U64 l1,U64 l2,U32 l3) {
U64 l4=0;
U32 si0,si1,si2,si3;
U64 sj0,sj1,sj2;
si0=l3;
si1=64U;
si0&=si1;
if(si0){
goto L2;
}
si0=l3;
si0=!(si0);
if(si0){
goto L1;
}
sj0=l2;
si1=l3;
sj1=(U64)(si1);
l4=sj1;
sj0<<=(sj1&63);
sj1=l1;
si2=0U;
si3=l3;
si2-=si3;
sj2=(U64)(si2);
sj1>>=(sj2&63);
sj0|=sj1;
l2=sj0;
sj0=l1;
sj1=l4;
sj0<<=(sj1&63);
l1=sj0;
goto L1;
L2:;
sj0=l1;
si1=l3;
sj1=(U64)(si1);
sj0<<=(sj1&63);
l2=sj0;
sj0=W2C2_LL(0U);
l1=sj0;
L1:;
si0=l0;
sj1=l1;
i64_store(i->m0,(U64)si0,sj1);
si0=l0;
sj1=l2;
i64_store(i->m0,(U64)si0+8U,sj1);
L0:;
}

U64 f150(gauche_ffiInstance*i,U64 l0,U32 l1,U64 l2) {
U32 l3=0;
U64 l4=0;
U32 l5=0;
U32 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U64 l10=0;
U32 si0,si1,si2,si3,si4,si5;
U64 sj0,sj1,sj2,sj3,sj4;
si0=i->g0;
si1=144U;
si0-=si1;
l3=si0;
i->g0=si0;
sj0=l2;
sj1=W2C2_LL(4611686018427387904U);
si0=sj0 >= sj1;
if(si0){
goto L1;
}
sj0=l0;
sj1=l2;
sj2=W2C2_LL(1U);
sj1<<=(sj2&63);
si0=sj0 >= sj1;
if(si0){
goto L1;
}
sj0=l2;
sj1=l2;
sj2=W2C2_LL(-1U);
sj1+=sj2;
l4=sj1;
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L3;
}
sj0=l2;
sj1=l2;
sj1=I64_CLZ(sj1);
si1=(U32)(sj1);
l5=si1;
si2=-2U;
si1+=si2;
l6=si1;
sj1=(U64)(si1);
l7=sj1;
sj0<<=(sj1&63);
l8=sj0;
sj1=W2C2_LL(2305843009213693952U);
si0=sj0 <= sj1;
if(si0){
goto L1;
}
sj0=l8;
sj1=W2C2_LL(4611686018427387904U);
si0=sj0 >= sj1;
if(si0){
goto L1;
}
sj0=l0;
sj1=l8;
sj2=W2C2_LL(1U);
sj1<<=(sj2&63);
l9=sj1;
si0=sj0 >= sj1;
if(si0){
goto L1;
}
si0=l3;
si1=128U;
si0+=si1;
sj1=W2C2_LL(0U);
sj2=W2C2_LL(-9223372036854775808U);
sj3=l9;
sj2-=sj3;
l2=sj2;
sj3=l9;
sj4=W2C2_LL(0U);
f138(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=112U;
si0+=si1;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+128U);
l4=sj1;
si2=l3;
sj2=i64_load(i->m0,(U64)si2+136U);
l10=sj2;
sj3=l9;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=96U;
si0+=si1;
sj1=l4;
sj2=l10;
sj3=W2C2_LL(1U);
sj2|=sj3;
sj3=l0;
sj4=W2C2_LL(1U);
sj3<<=(sj4&63);
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
sj0=l2;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+120U);
sj0-=sj1;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+112U);
l2=sj1;
sj2=W2C2_LL(0U);
si1=sj1 != sj2;
sj1=(U64)(si1);
sj0-=sj1;
l4=sj0;
sj0=W2C2_LL(0U);
sj1=l2;
sj0-=sj1;
l10=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+104U);
l2=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+96U);
l0=sj0;
si0=l6;
si1=l1;
si0+=si1;
l6=si0;
si1=62U;
si0=si0 <= si1;
if(si0){
goto L4;
}
si0=l1;
si1=l5;
si0+=si1;
si1=-65U;
si0+=si1;
l1=si0;
si1=63U;
si0=DIV_U(si0,si1);
si1=1U;
si0&=si1;
if(si0){
goto L5;
}
si0=l3;
si1=80U;
si0+=si1;
sj1=l10;
sj2=l4;
sj3=l2;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l6;
si1=-63U;
si0+=si1;
l6=si0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+88U);
sj1=l0;
sj2=W2C2_LL(1U);
sj1>>=(sj2&63);
sj0+=sj1;
l2=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+80U);
l0=sj0;
L5:;
si0=l1;
si1=63U;
si0=si0 < si1;
if(si0){
goto L4;
}
L6:;
{
si0=l3;
si1=64U;
si0+=si1;
sj1=l10;
sj2=l4;
sj3=l2;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=48U;
si0+=si1;
sj1=l10;
sj2=l4;
sj3=l0;
sj4=W2C2_LL(1U);
sj3>>=(sj4&63);
si4=l3;
sj4=i64_load(i->m0,(U64)si4+72U);
sj3+=sj4;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+56U);
si1=l3;
sj1=i64_load(i->m0,(U64)si1+64U);
sj2=W2C2_LL(1U);
sj1>>=(sj2&63);
sj0+=sj1;
l2=sj0;
si0=l3;
sj0=i64_load(i->m0,(U64)si0+48U);
l0=sj0;
si0=l6;
si1=-126U;
si0+=si1;
l6=si0;
si1=62U;
si0=si0 > si1;
if(si0){
goto L6;
}
}
L4:;
si0=l3;
si1=32U;
si0+=si1;
sj1=l0;
sj2=l2;
si3=l6;
f149(i,si0,sj1,sj2,si3);
si0=l3;
si1=16U;
si0+=si1;
sj1=l10;
sj2=l4;
sj3=l2;
si4=l6;
si5=63U;
si4^=si5;
sj4=(U64)(si4);
sj3>>=(sj4&63);
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
si1=l3;
sj1=i64_load(i->m0,(U64)si1+24U);
si2=l3;
sj2=i64_load(i->m0,(U64)si2+40U);
sj3=W2C2_LL(9223372036854775807U);
sj2&=sj3;
sj1+=sj2;
si2=l3;
sj2=i64_load(i->m0,(U64)si2+16U);
l2=sj2;
si3=l3;
sj3=i64_load(i->m0,(U64)si3+32U);
sj4=W2C2_LL(-2U);
sj3&=sj4;
sj2+=sj3;
sj3=l2;
si2=sj2 < sj3;
sj2=(U64)(si2);
sj1+=sj2;
sj2=W2C2_LL(2U);
sj1+=sj2;
sj2=W2C2_LL(0U);
sj3=l9;
sj4=W2C2_LL(0U);
f131(i,si0,sj1,sj2,sj3,sj4);
si0=l3;
sj0=i64_load(i->m0,(U64)si0+8U);
l2=sj0;
sj1=W2C2_LL(0U);
sj2=l8;
sj3=l8;
sj4=l2;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=l7;
sj0>>=(sj1&63);
l2=sj0;
goto L2;
L3:;
sj0=W2C2_LL(0U);
l2=sj0;
si0=l1;
si1=64U;
si0=si0 >= si1;
if(si0){
goto L2;
}
sj0=l4;
sj1=l0;
si2=l1;
sj2=(U64)(si2);
sj1<<=(sj2&63);
sj0&=sj1;
l2=sj0;
L2:;
si0=l3;
si1=144U;
si0+=si1;
i->g0=si0;
sj0=l2;
goto L0;
L1:;
UNREACHABLE;
L0:;
return sj0;
}

F64 f151(gauche_ffiInstance*i,F64 l0,F64 l1) {
U32 l2=0;
U64 l3=0;
U64 l4=0;
U64 l5=0;
U64 l6=0;
U64 l7=0;
U64 l8=0;
U64 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 si0,si1,si2,si3,si4;
U64 sj0,sj1,sj2,sj3,sj4,sj5;
F64 sd0,sd1;
si0=i->g0;
si1=32U;
si0-=si1;
l2=si0;
i->g0=si0;
sd0=l0;
sj0=i64_reinterpret_f64(sd0);
l3=sj0;
sj1=W2C2_LL(9218868437227405312U);
sj0&=sj1;
sj1=W2C2_LL(9218868437227405312U);
si0=sj0 == sj1;
if(si0){
goto L5;
}
sj0=W2C2_LL(0U);
sd1=l1;
sj1=i64_reinterpret_f64(sd1);
l4=sj1;
sj0-=sj1;
sj1=W2C2_LL(9218868437227405312U);
sj0&=sj1;
si0=!(sj0);
if(si0){
goto L5;
}
sj0=l3;
sj1=W2C2_LL(9223372036854775807U);
sj0&=sj1;
l5=sj0;
sj1=l4;
sj2=W2C2_LL(9223372036854775807U);
sj1&=sj2;
l6=sj1;
si0=sj0 < sj1;
if(si0){
goto L1;
}
sj0=l5;
sj1=W2C2_LL(0U);
sj2=l5;
sj3=W2C2_LL(-4503599627370496U);
sj2+=sj3;
l4=sj2;
sj3=l4;
sj4=l5;
si3=sj3 > sj4;
sj1=si3?sj1:sj2;
l7=sj1;
sj2=W2C2_LL(9218868437227405312U);
sj1&=sj2;
sj0-=sj1;
l5=sj0;
sj1=l6;
sj2=W2C2_LL(0U);
sj3=l6;
sj4=W2C2_LL(-4503599627370496U);
sj3+=sj4;
l4=sj3;
sj4=l4;
sj5=l6;
si4=sj4 > sj5;
sj2=si4?sj2:sj3;
l8=sj2;
sj3=W2C2_LL(9218868437227405312U);
sj2&=sj3;
l9=sj2;
sj1-=sj2;
l4=sj1;
sj2=W2C2_LL(1U);
sj1<<=(sj2&63);
si0=sj0 < sj1;
if(si0){
goto L6;
}
sj0=l6;
sj1=l9;
si0=sj0 == sj1;
if(si0){
goto L4;
}
sj0=l5;
sj1=l4;
sj0=REM_U(sj0,sj1);
l5=sj0;
L6:;
sj0=l7;
sj1=W2C2_LL(52U);
sj0>>=(sj1&63);
l6=sj0;
si0=(U32)(sj0);
l10=si0;
sj1=l8;
sj2=W2C2_LL(52U);
sj1>>=(sj2&63);
l7=sj1;
si1=(U32)(sj1);
l11=si1;
si0-=si1;
l12=si0;
si1=31U;
si0=si0 > si1;
if(si0){
goto L7;
}
sj0=l6;
sj1=l7;
si0=sj0 == sj1;
if(si0){
goto L8;
}
si0=l12;
si1=3U;
si0&=si1;
l13=si0;
si0=l11;
si1=l10;
si0-=si1;
si1=-4U;
si0=si0 > si1;
if(si0){
goto L9;
}
si0=l12;
si1=28U;
si0&=si1;
l12=si0;
L10:;
{
sj0=l5;
sj1=W2C2_LL(0U);
sj2=l4;
sj3=l5;
sj4=l4;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=W2C2_LL(1U);
sj0<<=(sj1&63);
l5=sj0;
sj1=W2C2_LL(0U);
sj2=l4;
sj3=l5;
sj4=l4;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=W2C2_LL(1U);
sj0<<=(sj1&63);
l5=sj0;
sj1=W2C2_LL(0U);
sj2=l4;
sj3=l5;
sj4=l4;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=W2C2_LL(1U);
sj0<<=(sj1&63);
l5=sj0;
sj1=W2C2_LL(0U);
sj2=l4;
sj3=l5;
sj4=l4;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=W2C2_LL(1U);
sj0<<=(sj1&63);
l5=sj0;
si0=l12;
si1=-4U;
si0+=si1;
l12=si0;
if(si0){
goto L10;
}
}
si0=l13;
si0=!(si0);
if(si0){
goto L8;
}
L9:;
si0=0U;
si1=l13;
si0-=si1;
l12=si0;
L11:;
{
sj0=l5;
sj1=W2C2_LL(0U);
sj2=l4;
sj3=l5;
sj4=l4;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
sj1=W2C2_LL(1U);
sj0<<=(sj1&63);
l5=sj0;
si0=l12;
si1=1U;
si0+=si1;
l12=si0;
if(si0){
goto L11;
}
}
L8:;
sj0=l5;
sj1=W2C2_LL(0U);
sj2=l4;
sj3=l5;
sj4=l4;
si3=sj3 < sj4;
sj1=si3?sj1:sj2;
sj0-=sj1;
l4=sj0;
goto L2;
L7:;
si0=l12;
si1=64U;
si0=si0 >= si1;
if(si0){
goto L3;
}
si0=l2;
si1=16U;
si0+=si1;
sj1=l5;
sj2=W2C2_LL(0U);
si3=l12;
f149(i,si0,sj1,sj2,si3);
sj0=l4;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+24U);
l6=sj1;
si0=sj0 <= sj1;
if(si0){
goto L3;
}
si0=l2;
si1=l2;
sj1=i64_load(i->m0,(U64)si1+16U);
sj2=l6;
sj3=l4;
sj4=W2C2_LL(0U);
f133(i,si0,sj1,sj2,sj3,sj4);
si0=l2;
sj0=i64_load(i->m0,(U64)si0);
l4=sj0;
goto L2;
L5:;
sd0=l0;
sd1=l1;
sd0*=sd1;
l0=sd0;
sd1=l0;
sd0/=sd1;
l0=sd0;
goto L1;
L4:;
UNREACHABLE;
L3:;
sj0=l5;
si1=l12;
sj2=l4;
sj0=f150(i,sj0,si1,sj2);
l4=sj0;
L2:;
sj0=l3;
sj1=W2C2_LL(-9223372036854775808U);
sj0&=sj1;
l5=sj0;
sj0=l4;
si0=!(sj0);
if(si0){
goto L12;
}
si0=l11;
si1=52U;
sj2=l4;
sj2=I64_CLZ(sj2);
si2=(U32)(sj2);
si3=63U;
si2^=si3;
si1-=si2;
l12=si1;
si2=l11;
si3=l12;
si4=l11;
si3=si3 < si4;
si1=si3?si1:si2;
l12=si1;
si0-=si1;
sj0=(U64)(si0);
sj1=W2C2_LL(52U);
sj0<<=(sj1&63);
sj1=l5;
sj0+=sj1;
sj1=l4;
si2=l12;
sj2=(U64)(si2);
sj1<<=(sj2&63);
sj0+=sj1;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
goto L1;
L12:;
sj0=l5;
sd0=f64_reinterpret_i64(sj0);
l0=sd0;
L1:;
si0=l2;
si1=32U;
si0+=si1;
i->g0=si0;
sd0=l0;
L0:;
return sd0;
}

F64 f152(gauche_ffiInstance*i,F64 l0,F64 l1) {
F64 sd0,sd1;
sd0=l0;
sd1=l1;
sd0=f151(i,sd0,sd1);
L0:;
return sd0;
}

