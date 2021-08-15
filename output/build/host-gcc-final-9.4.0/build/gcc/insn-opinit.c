/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010f10, CODE_FOR_extendqihi2 },
  { 0x010f11, CODE_FOR_extendqisi2 },
  { 0x010f12, CODE_FOR_extendqidi2 },
  { 0x011011, CODE_FOR_extendhisi2 },
  { 0x011012, CODE_FOR_extendhidi2 },
  { 0x011112, CODE_FOR_extendsidi2 },
  { 0x012829, CODE_FOR_extendsfdf2 },
  { 0x01282a, CODE_FOR_extendsfxf2 },
  { 0x01292a, CODE_FOR_extenddfxf2 },
  { 0x022928, CODE_FOR_truncdfsf2 },
  { 0x022a28, CODE_FOR_truncxfsf2 },
  { 0x022a29, CODE_FOR_truncxfdf2 },
  { 0x030f10, CODE_FOR_zero_extendqihi2 },
  { 0x030f11, CODE_FOR_zero_extendqisi2 },
  { 0x030f12, CODE_FOR_zero_extendqidi2 },
  { 0x031011, CODE_FOR_zero_extendhisi2 },
  { 0x031012, CODE_FOR_zero_extendhidi2 },
  { 0x031112, CODE_FOR_zero_extendsidi2 },
  { 0x061028, CODE_FOR_floathisf2 },
  { 0x061029, CODE_FOR_floathidf2 },
  { 0x06102a, CODE_FOR_floathixf2 },
  { 0x061128, CODE_FOR_floatsisf2 },
  { 0x061129, CODE_FOR_floatsidf2 },
  { 0x06112a, CODE_FOR_floatsixf2 },
  { 0x061228, CODE_FOR_floatdisf2 },
  { 0x061229, CODE_FOR_floatdidf2 },
  { 0x06122a, CODE_FOR_floatdixf2 },
  { 0x06475b, CODE_FOR_floatv4siv4sf2 },
  { 0x06475e, CODE_FOR_floatv4siv4df2 },
  { 0x06485a, CODE_FOR_floatv2div2sf2 },
  { 0x06485c, CODE_FOR_floatv2div2df2 },
  { 0x064c5d, CODE_FOR_floatv8siv8sf2 },
  { 0x064c61, CODE_FOR_floatv8siv8df2 },
  { 0x064d5b, CODE_FOR_floatv4div4sf2 },
  { 0x064d5e, CODE_FOR_floatv4div4df2 },
  { 0x065160, CODE_FOR_floatv16siv16sf2 },
  { 0x06525d, CODE_FOR_floatv8div8sf2 },
  { 0x065261, CODE_FOR_floatv8div8df2 },
  { 0x070f28, CODE_FOR_floatunsqisf2 },
  { 0x070f29, CODE_FOR_floatunsqidf2 },
  { 0x071028, CODE_FOR_floatunshisf2 },
  { 0x071029, CODE_FOR_floatunshidf2 },
  { 0x071128, CODE_FOR_floatunssisf2 },
  { 0x071129, CODE_FOR_floatunssidf2 },
  { 0x07112a, CODE_FOR_floatunssixf2 },
  { 0x071228, CODE_FOR_floatunsdisf2 },
  { 0x071229, CODE_FOR_floatunsdidf2 },
  { 0x07475b, CODE_FOR_floatunsv4siv4sf2 },
  { 0x07485a, CODE_FOR_floatunsv2div2sf2 },
  { 0x07485c, CODE_FOR_floatunsv2div2df2 },
  { 0x074c5d, CODE_FOR_floatunsv8siv8sf2 },
  { 0x074d5b, CODE_FOR_floatunsv4div4sf2 },
  { 0x074d5e, CODE_FOR_floatunsv4div4df2 },
  { 0x075160, CODE_FOR_floatunsv16siv16sf2 },
  { 0x07525d, CODE_FOR_floatunsv8div8sf2 },
  { 0x075261, CODE_FOR_floatunsv8div8df2 },
  { 0x082811, CODE_FOR_lrintsfsi2 },
  { 0x082812, CODE_FOR_lrintsfdi2 },
  { 0x082911, CODE_FOR_lrintdfsi2 },
  { 0x082912, CODE_FOR_lrintdfdi2 },
  { 0x082a10, CODE_FOR_lrintxfhi2 },
  { 0x082a11, CODE_FOR_lrintxfsi2 },
  { 0x082a12, CODE_FOR_lrintxfdi2 },
  { 0x092810, CODE_FOR_lroundsfhi2 },
  { 0x092811, CODE_FOR_lroundsfsi2 },
  { 0x092812, CODE_FOR_lroundsfdi2 },
  { 0x092910, CODE_FOR_lrounddfhi2 },
  { 0x092911, CODE_FOR_lrounddfsi2 },
  { 0x092912, CODE_FOR_lrounddfdi2 },
  { 0x092a10, CODE_FOR_lroundxfhi2 },
  { 0x092a11, CODE_FOR_lroundxfsi2 },
  { 0x092a12, CODE_FOR_lroundxfdi2 },
  { 0x0a2811, CODE_FOR_lfloorsfsi2 },
  { 0x0a2812, CODE_FOR_lfloorsfdi2 },
  { 0x0a2911, CODE_FOR_lfloordfsi2 },
  { 0x0a2912, CODE_FOR_lfloordfdi2 },
  { 0x0a2a10, CODE_FOR_lfloorxfhi2 },
  { 0x0a2a11, CODE_FOR_lfloorxfsi2 },
  { 0x0a2a12, CODE_FOR_lfloorxfdi2 },
  { 0x0b2811, CODE_FOR_lceilsfsi2 },
  { 0x0b2812, CODE_FOR_lceilsfdi2 },
  { 0x0b2911, CODE_FOR_lceildfsi2 },
  { 0x0b2912, CODE_FOR_lceildfdi2 },
  { 0x0b2a10, CODE_FOR_lceilxfhi2 },
  { 0x0b2a11, CODE_FOR_lceilxfsi2 },
  { 0x0b2a12, CODE_FOR_lceilxfdi2 },
  { 0x102810, CODE_FOR_fix_truncsfhi2 },
  { 0x102811, CODE_FOR_fix_truncsfsi2 },
  { 0x102812, CODE_FOR_fix_truncsfdi2 },
  { 0x102910, CODE_FOR_fix_truncdfhi2 },
  { 0x102911, CODE_FOR_fix_truncdfsi2 },
  { 0x102912, CODE_FOR_fix_truncdfdi2 },
  { 0x102a10, CODE_FOR_fix_truncxfhi2 },
  { 0x102a11, CODE_FOR_fix_truncxfsi2 },
  { 0x102a12, CODE_FOR_fix_truncxfdi2 },
  { 0x105a48, CODE_FOR_fix_truncv2sfv2di2 },
  { 0x105b47, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x105b4d, CODE_FOR_fix_truncv4sfv4di2 },
  { 0x105c48, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x105d4c, CODE_FOR_fix_truncv8sfv8si2 },
  { 0x105d52, CODE_FOR_fix_truncv8sfv8di2 },
  { 0x105e47, CODE_FOR_fix_truncv4dfv4si2 },
  { 0x105e4d, CODE_FOR_fix_truncv4dfv4di2 },
  { 0x106051, CODE_FOR_fix_truncv16sfv16si2 },
  { 0x10614c, CODE_FOR_fix_truncv8dfv8si2 },
  { 0x106152, CODE_FOR_fix_truncv8dfv8di2 },
  { 0x112810, CODE_FOR_fixuns_truncsfhi2 },
  { 0x112811, CODE_FOR_fixuns_truncsfsi2 },
  { 0x112812, CODE_FOR_fixuns_truncsfdi2 },
  { 0x112910, CODE_FOR_fixuns_truncdfhi2 },
  { 0x112911, CODE_FOR_fixuns_truncdfsi2 },
  { 0x112912, CODE_FOR_fixuns_truncdfdi2 },
  { 0x115a48, CODE_FOR_fixuns_truncv2sfv2di2 },
  { 0x115b47, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x115b4d, CODE_FOR_fixuns_truncv4sfv4di2 },
  { 0x115c48, CODE_FOR_fixuns_truncv2dfv2di2 },
  { 0x115d4c, CODE_FOR_fixuns_truncv8sfv8si2 },
  { 0x115d52, CODE_FOR_fixuns_truncv8sfv8di2 },
  { 0x115e4d, CODE_FOR_fixuns_truncv4dfv4di2 },
  { 0x116051, CODE_FOR_fixuns_truncv16sfv16si2 },
  { 0x11614c, CODE_FOR_fixuns_truncv8dfv8si2 },
  { 0x116152, CODE_FOR_fixuns_truncv8dfv8di2 },
  { 0x120f10, CODE_FOR_mulqihi3 },
  { 0x121112, CODE_FOR_mulsidi3 },
  { 0x121213, CODE_FOR_mulditi3 },
  { 0x130f10, CODE_FOR_umulqihi3 },
  { 0x131112, CODE_FOR_umulsidi3 },
  { 0x131213, CODE_FOR_umulditi3 },
  { 0x214545, CODE_FOR_vcondv16qiv16qi },
  { 0x214546, CODE_FOR_vcondv8hiv16qi },
  { 0x214547, CODE_FOR_vcondv4siv16qi },
  { 0x214548, CODE_FOR_vcondv2div16qi },
  { 0x21455b, CODE_FOR_vcondv4sfv16qi },
  { 0x21455c, CODE_FOR_vcondv2dfv16qi },
  { 0x214645, CODE_FOR_vcondv16qiv8hi },
  { 0x214646, CODE_FOR_vcondv8hiv8hi },
  { 0x214647, CODE_FOR_vcondv4siv8hi },
  { 0x214648, CODE_FOR_vcondv2div8hi },
  { 0x21465b, CODE_FOR_vcondv4sfv8hi },
  { 0x21465c, CODE_FOR_vcondv2dfv8hi },
  { 0x214745, CODE_FOR_vcondv16qiv4si },
  { 0x214746, CODE_FOR_vcondv8hiv4si },
  { 0x214747, CODE_FOR_vcondv4siv4si },
  { 0x214748, CODE_FOR_vcondv2div4si },
  { 0x21475b, CODE_FOR_vcondv4sfv4si },
  { 0x21475c, CODE_FOR_vcondv2dfv4si },
  { 0x214848, CODE_FOR_vcondv2div2di },
  { 0x21485c, CODE_FOR_vcondv2dfv2di },
  { 0x214a4a, CODE_FOR_vcondv32qiv32qi },
  { 0x214a4b, CODE_FOR_vcondv16hiv32qi },
  { 0x214a4c, CODE_FOR_vcondv8siv32qi },
  { 0x214a4d, CODE_FOR_vcondv4div32qi },
  { 0x214a5d, CODE_FOR_vcondv8sfv32qi },
  { 0x214a5e, CODE_FOR_vcondv4dfv32qi },
  { 0x214b4a, CODE_FOR_vcondv32qiv16hi },
  { 0x214b4b, CODE_FOR_vcondv16hiv16hi },
  { 0x214b4c, CODE_FOR_vcondv8siv16hi },
  { 0x214b4d, CODE_FOR_vcondv4div16hi },
  { 0x214b5d, CODE_FOR_vcondv8sfv16hi },
  { 0x214b5e, CODE_FOR_vcondv4dfv16hi },
  { 0x214c4a, CODE_FOR_vcondv32qiv8si },
  { 0x214c4b, CODE_FOR_vcondv16hiv8si },
  { 0x214c4c, CODE_FOR_vcondv8siv8si },
  { 0x214c4d, CODE_FOR_vcondv4div8si },
  { 0x214c5d, CODE_FOR_vcondv8sfv8si },
  { 0x214c5e, CODE_FOR_vcondv4dfv8si },
  { 0x214d4a, CODE_FOR_vcondv32qiv4di },
  { 0x214d4b, CODE_FOR_vcondv16hiv4di },
  { 0x214d4c, CODE_FOR_vcondv8siv4di },
  { 0x214d4d, CODE_FOR_vcondv4div4di },
  { 0x214d5d, CODE_FOR_vcondv8sfv4di },
  { 0x214d5e, CODE_FOR_vcondv4dfv4di },
  { 0x214f4f, CODE_FOR_vcondv64qiv64qi },
  { 0x214f50, CODE_FOR_vcondv32hiv64qi },
  { 0x214f51, CODE_FOR_vcondv16siv64qi },
  { 0x214f52, CODE_FOR_vcondv8div64qi },
  { 0x214f60, CODE_FOR_vcondv16sfv64qi },
  { 0x214f61, CODE_FOR_vcondv8dfv64qi },
  { 0x21504f, CODE_FOR_vcondv64qiv32hi },
  { 0x215050, CODE_FOR_vcondv32hiv32hi },
  { 0x215051, CODE_FOR_vcondv16siv32hi },
  { 0x215052, CODE_FOR_vcondv8div32hi },
  { 0x215060, CODE_FOR_vcondv16sfv32hi },
  { 0x215061, CODE_FOR_vcondv8dfv32hi },
  { 0x21514f, CODE_FOR_vcondv64qiv16si },
  { 0x215150, CODE_FOR_vcondv32hiv16si },
  { 0x215151, CODE_FOR_vcondv16siv16si },
  { 0x215152, CODE_FOR_vcondv8div16si },
  { 0x215160, CODE_FOR_vcondv16sfv16si },
  { 0x215161, CODE_FOR_vcondv8dfv16si },
  { 0x21524f, CODE_FOR_vcondv64qiv8di },
  { 0x215250, CODE_FOR_vcondv32hiv8di },
  { 0x215251, CODE_FOR_vcondv16siv8di },
  { 0x215252, CODE_FOR_vcondv8div8di },
  { 0x215260, CODE_FOR_vcondv16sfv8di },
  { 0x215261, CODE_FOR_vcondv8dfv8di },
  { 0x215b45, CODE_FOR_vcondv16qiv4sf },
  { 0x215b46, CODE_FOR_vcondv8hiv4sf },
  { 0x215b47, CODE_FOR_vcondv4siv4sf },
  { 0x215b48, CODE_FOR_vcondv2div4sf },
  { 0x215b5b, CODE_FOR_vcondv4sfv4sf },
  { 0x215b5c, CODE_FOR_vcondv2dfv4sf },
  { 0x215c45, CODE_FOR_vcondv16qiv2df },
  { 0x215c46, CODE_FOR_vcondv8hiv2df },
  { 0x215c47, CODE_FOR_vcondv4siv2df },
  { 0x215c48, CODE_FOR_vcondv2div2df },
  { 0x215c5b, CODE_FOR_vcondv4sfv2df },
  { 0x215c5c, CODE_FOR_vcondv2dfv2df },
  { 0x215d4a, CODE_FOR_vcondv32qiv8sf },
  { 0x215d4b, CODE_FOR_vcondv16hiv8sf },
  { 0x215d4c, CODE_FOR_vcondv8siv8sf },
  { 0x215d4d, CODE_FOR_vcondv4div8sf },
  { 0x215d5d, CODE_FOR_vcondv8sfv8sf },
  { 0x215d5e, CODE_FOR_vcondv4dfv8sf },
  { 0x215e4a, CODE_FOR_vcondv32qiv4df },
  { 0x215e4b, CODE_FOR_vcondv16hiv4df },
  { 0x215e4c, CODE_FOR_vcondv8siv4df },
  { 0x215e4d, CODE_FOR_vcondv4div4df },
  { 0x215e5d, CODE_FOR_vcondv8sfv4df },
  { 0x215e5e, CODE_FOR_vcondv4dfv4df },
  { 0x21604f, CODE_FOR_vcondv64qiv16sf },
  { 0x216050, CODE_FOR_vcondv32hiv16sf },
  { 0x216051, CODE_FOR_vcondv16siv16sf },
  { 0x216052, CODE_FOR_vcondv8div16sf },
  { 0x216060, CODE_FOR_vcondv16sfv16sf },
  { 0x216061, CODE_FOR_vcondv8dfv16sf },
  { 0x21614f, CODE_FOR_vcondv64qiv8df },
  { 0x216150, CODE_FOR_vcondv32hiv8df },
  { 0x216151, CODE_FOR_vcondv16siv8df },
  { 0x216152, CODE_FOR_vcondv8div8df },
  { 0x216160, CODE_FOR_vcondv16sfv8df },
  { 0x216161, CODE_FOR_vcondv8dfv8df },
  { 0x224545, CODE_FOR_vconduv16qiv16qi },
  { 0x224546, CODE_FOR_vconduv8hiv16qi },
  { 0x224547, CODE_FOR_vconduv4siv16qi },
  { 0x224548, CODE_FOR_vconduv2div16qi },
  { 0x22455b, CODE_FOR_vconduv4sfv16qi },
  { 0x22455c, CODE_FOR_vconduv2dfv16qi },
  { 0x224645, CODE_FOR_vconduv16qiv8hi },
  { 0x224646, CODE_FOR_vconduv8hiv8hi },
  { 0x224647, CODE_FOR_vconduv4siv8hi },
  { 0x224648, CODE_FOR_vconduv2div8hi },
  { 0x22465b, CODE_FOR_vconduv4sfv8hi },
  { 0x22465c, CODE_FOR_vconduv2dfv8hi },
  { 0x224745, CODE_FOR_vconduv16qiv4si },
  { 0x224746, CODE_FOR_vconduv8hiv4si },
  { 0x224747, CODE_FOR_vconduv4siv4si },
  { 0x224748, CODE_FOR_vconduv2div4si },
  { 0x22475b, CODE_FOR_vconduv4sfv4si },
  { 0x22475c, CODE_FOR_vconduv2dfv4si },
  { 0x224848, CODE_FOR_vconduv2div2di },
  { 0x22485c, CODE_FOR_vconduv2dfv2di },
  { 0x224a4a, CODE_FOR_vconduv32qiv32qi },
  { 0x224a4b, CODE_FOR_vconduv16hiv32qi },
  { 0x224a4c, CODE_FOR_vconduv8siv32qi },
  { 0x224a4d, CODE_FOR_vconduv4div32qi },
  { 0x224a5d, CODE_FOR_vconduv8sfv32qi },
  { 0x224a5e, CODE_FOR_vconduv4dfv32qi },
  { 0x224b4a, CODE_FOR_vconduv32qiv16hi },
  { 0x224b4b, CODE_FOR_vconduv16hiv16hi },
  { 0x224b4c, CODE_FOR_vconduv8siv16hi },
  { 0x224b4d, CODE_FOR_vconduv4div16hi },
  { 0x224b5d, CODE_FOR_vconduv8sfv16hi },
  { 0x224b5e, CODE_FOR_vconduv4dfv16hi },
  { 0x224c4a, CODE_FOR_vconduv32qiv8si },
  { 0x224c4b, CODE_FOR_vconduv16hiv8si },
  { 0x224c4c, CODE_FOR_vconduv8siv8si },
  { 0x224c4d, CODE_FOR_vconduv4div8si },
  { 0x224c5d, CODE_FOR_vconduv8sfv8si },
  { 0x224c5e, CODE_FOR_vconduv4dfv8si },
  { 0x224d4a, CODE_FOR_vconduv32qiv4di },
  { 0x224d4b, CODE_FOR_vconduv16hiv4di },
  { 0x224d4c, CODE_FOR_vconduv8siv4di },
  { 0x224d4d, CODE_FOR_vconduv4div4di },
  { 0x224d5d, CODE_FOR_vconduv8sfv4di },
  { 0x224d5e, CODE_FOR_vconduv4dfv4di },
  { 0x224f4f, CODE_FOR_vconduv64qiv64qi },
  { 0x224f50, CODE_FOR_vconduv32hiv64qi },
  { 0x224f51, CODE_FOR_vconduv16siv64qi },
  { 0x224f52, CODE_FOR_vconduv8div64qi },
  { 0x224f60, CODE_FOR_vconduv16sfv64qi },
  { 0x224f61, CODE_FOR_vconduv8dfv64qi },
  { 0x22504f, CODE_FOR_vconduv64qiv32hi },
  { 0x225050, CODE_FOR_vconduv32hiv32hi },
  { 0x225051, CODE_FOR_vconduv16siv32hi },
  { 0x225052, CODE_FOR_vconduv8div32hi },
  { 0x225060, CODE_FOR_vconduv16sfv32hi },
  { 0x225061, CODE_FOR_vconduv8dfv32hi },
  { 0x22514f, CODE_FOR_vconduv64qiv16si },
  { 0x225150, CODE_FOR_vconduv32hiv16si },
  { 0x225151, CODE_FOR_vconduv16siv16si },
  { 0x225152, CODE_FOR_vconduv8div16si },
  { 0x225160, CODE_FOR_vconduv16sfv16si },
  { 0x225161, CODE_FOR_vconduv8dfv16si },
  { 0x22524f, CODE_FOR_vconduv64qiv8di },
  { 0x225250, CODE_FOR_vconduv32hiv8di },
  { 0x225251, CODE_FOR_vconduv16siv8di },
  { 0x225252, CODE_FOR_vconduv8div8di },
  { 0x225260, CODE_FOR_vconduv16sfv8di },
  { 0x225261, CODE_FOR_vconduv8dfv8di },
  { 0x234848, CODE_FOR_vcondeqv2div2di },
  { 0x23485c, CODE_FOR_vcondeqv2dfv2di },
  { 0x240f46, CODE_FOR_vcond_mask_v8hiqi },
  { 0x240f47, CODE_FOR_vcond_mask_v4siqi },
  { 0x240f48, CODE_FOR_vcond_mask_v2diqi },
  { 0x240f4c, CODE_FOR_vcond_mask_v8siqi },
  { 0x240f4d, CODE_FOR_vcond_mask_v4diqi },
  { 0x240f52, CODE_FOR_vcond_mask_v8diqi },
  { 0x240f5b, CODE_FOR_vcond_mask_v4sfqi },
  { 0x240f5c, CODE_FOR_vcond_mask_v2dfqi },
  { 0x240f5d, CODE_FOR_vcond_mask_v8sfqi },
  { 0x240f5e, CODE_FOR_vcond_mask_v4dfqi },
  { 0x240f61, CODE_FOR_vcond_mask_v8dfqi },
  { 0x241045, CODE_FOR_vcond_mask_v16qihi },
  { 0x24104b, CODE_FOR_vcond_mask_v16hihi },
  { 0x241051, CODE_FOR_vcond_mask_v16sihi },
  { 0x241060, CODE_FOR_vcond_mask_v16sfhi },
  { 0x24114a, CODE_FOR_vcond_mask_v32qisi },
  { 0x241150, CODE_FOR_vcond_mask_v32hisi },
  { 0x24124f, CODE_FOR_vcond_mask_v64qidi },
  { 0x244545, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x244646, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x244747, CODE_FOR_vcond_mask_v4siv4si },
  { 0x24475b, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x244848, CODE_FOR_vcond_mask_v2div2di },
  { 0x24485c, CODE_FOR_vcond_mask_v2dfv2di },
  { 0x244a4a, CODE_FOR_vcond_mask_v32qiv32qi },
  { 0x244b4b, CODE_FOR_vcond_mask_v16hiv16hi },
  { 0x244c4c, CODE_FOR_vcond_mask_v8siv8si },
  { 0x244c5d, CODE_FOR_vcond_mask_v8sfv8si },
  { 0x244d4d, CODE_FOR_vcond_mask_v4div4di },
  { 0x244d5e, CODE_FOR_vcond_mask_v4dfv4di },
  { 0x250f46, CODE_FOR_vec_cmpv8hiqi },
  { 0x250f47, CODE_FOR_vec_cmpv4siqi },
  { 0x250f48, CODE_FOR_vec_cmpv2diqi },
  { 0x250f4c, CODE_FOR_vec_cmpv8siqi },
  { 0x250f4d, CODE_FOR_vec_cmpv4diqi },
  { 0x250f52, CODE_FOR_vec_cmpv8diqi },
  { 0x250f5b, CODE_FOR_vec_cmpv4sfqi },
  { 0x250f5c, CODE_FOR_vec_cmpv2dfqi },
  { 0x250f5d, CODE_FOR_vec_cmpv8sfqi },
  { 0x250f5e, CODE_FOR_vec_cmpv4dfqi },
  { 0x250f61, CODE_FOR_vec_cmpv8dfqi },
  { 0x251045, CODE_FOR_vec_cmpv16qihi },
  { 0x25104b, CODE_FOR_vec_cmpv16hihi },
  { 0x251051, CODE_FOR_vec_cmpv16sihi },
  { 0x251060, CODE_FOR_vec_cmpv16sfhi },
  { 0x25114a, CODE_FOR_vec_cmpv32qisi },
  { 0x251150, CODE_FOR_vec_cmpv32hisi },
  { 0x25124f, CODE_FOR_vec_cmpv64qidi },
  { 0x254545, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x254646, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x254747, CODE_FOR_vec_cmpv4siv4si },
  { 0x25475b, CODE_FOR_vec_cmpv4sfv4si },
  { 0x254848, CODE_FOR_vec_cmpv2div2di },
  { 0x25485c, CODE_FOR_vec_cmpv2dfv2di },
  { 0x254a4a, CODE_FOR_vec_cmpv32qiv32qi },
  { 0x254b4b, CODE_FOR_vec_cmpv16hiv16hi },
  { 0x254c4c, CODE_FOR_vec_cmpv8siv8si },
  { 0x254c5d, CODE_FOR_vec_cmpv8sfv8si },
  { 0x254d4d, CODE_FOR_vec_cmpv4div4di },
  { 0x254d5e, CODE_FOR_vec_cmpv4dfv4di },
  { 0x260f46, CODE_FOR_vec_cmpuv8hiqi },
  { 0x260f47, CODE_FOR_vec_cmpuv4siqi },
  { 0x260f48, CODE_FOR_vec_cmpuv2diqi },
  { 0x260f4c, CODE_FOR_vec_cmpuv8siqi },
  { 0x260f4d, CODE_FOR_vec_cmpuv4diqi },
  { 0x260f52, CODE_FOR_vec_cmpuv8diqi },
  { 0x261045, CODE_FOR_vec_cmpuv16qihi },
  { 0x26104b, CODE_FOR_vec_cmpuv16hihi },
  { 0x261051, CODE_FOR_vec_cmpuv16sihi },
  { 0x26114a, CODE_FOR_vec_cmpuv32qisi },
  { 0x261150, CODE_FOR_vec_cmpuv32hisi },
  { 0x26124f, CODE_FOR_vec_cmpuv64qidi },
  { 0x264545, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x264646, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x264747, CODE_FOR_vec_cmpuv4siv4si },
  { 0x264848, CODE_FOR_vec_cmpuv2div2di },
  { 0x264a4a, CODE_FOR_vec_cmpuv32qiv32qi },
  { 0x264b4b, CODE_FOR_vec_cmpuv16hiv16hi },
  { 0x264c4c, CODE_FOR_vec_cmpuv8siv8si },
  { 0x264d4d, CODE_FOR_vec_cmpuv4div4di },
  { 0x274848, CODE_FOR_vec_cmpeqv2div2di },
  { 0x280f46, CODE_FOR_maskloadv8hiqi },
  { 0x280f47, CODE_FOR_maskloadv4siqi },
  { 0x280f48, CODE_FOR_maskloadv2diqi },
  { 0x280f4c, CODE_FOR_maskloadv8siqi },
  { 0x280f4d, CODE_FOR_maskloadv4diqi },
  { 0x280f52, CODE_FOR_maskloadv8diqi },
  { 0x280f5b, CODE_FOR_maskloadv4sfqi },
  { 0x280f5c, CODE_FOR_maskloadv2dfqi },
  { 0x280f5d, CODE_FOR_maskloadv8sfqi },
  { 0x280f5e, CODE_FOR_maskloadv4dfqi },
  { 0x280f61, CODE_FOR_maskloadv8dfqi },
  { 0x281045, CODE_FOR_maskloadv16qihi },
  { 0x28104b, CODE_FOR_maskloadv16hihi },
  { 0x281051, CODE_FOR_maskloadv16sihi },
  { 0x281060, CODE_FOR_maskloadv16sfhi },
  { 0x28114a, CODE_FOR_maskloadv32qisi },
  { 0x281150, CODE_FOR_maskloadv32hisi },
  { 0x28124f, CODE_FOR_maskloadv64qidi },
  { 0x284747, CODE_FOR_maskloadv4siv4si },
  { 0x28475b, CODE_FOR_maskloadv4sfv4si },
  { 0x284848, CODE_FOR_maskloadv2div2di },
  { 0x28485c, CODE_FOR_maskloadv2dfv2di },
  { 0x284c4c, CODE_FOR_maskloadv8siv8si },
  { 0x284c5d, CODE_FOR_maskloadv8sfv8si },
  { 0x284d4d, CODE_FOR_maskloadv4div4di },
  { 0x284d5e, CODE_FOR_maskloadv4dfv4di },
  { 0x290f46, CODE_FOR_maskstorev8hiqi },
  { 0x290f47, CODE_FOR_maskstorev4siqi },
  { 0x290f48, CODE_FOR_maskstorev2diqi },
  { 0x290f4c, CODE_FOR_maskstorev8siqi },
  { 0x290f4d, CODE_FOR_maskstorev4diqi },
  { 0x290f52, CODE_FOR_maskstorev8diqi },
  { 0x290f5b, CODE_FOR_maskstorev4sfqi },
  { 0x290f5c, CODE_FOR_maskstorev2dfqi },
  { 0x290f5d, CODE_FOR_maskstorev8sfqi },
  { 0x290f5e, CODE_FOR_maskstorev4dfqi },
  { 0x290f61, CODE_FOR_maskstorev8dfqi },
  { 0x291045, CODE_FOR_maskstorev16qihi },
  { 0x29104b, CODE_FOR_maskstorev16hihi },
  { 0x291051, CODE_FOR_maskstorev16sihi },
  { 0x291060, CODE_FOR_maskstorev16sfhi },
  { 0x29114a, CODE_FOR_maskstorev32qisi },
  { 0x291150, CODE_FOR_maskstorev32hisi },
  { 0x29124f, CODE_FOR_maskstorev64qidi },
  { 0x294747, CODE_FOR_maskstorev4siv4si },
  { 0x29475b, CODE_FOR_maskstorev4sfv4si },
  { 0x294848, CODE_FOR_maskstorev2div2di },
  { 0x29485c, CODE_FOR_maskstorev2dfv2di },
  { 0x294c4c, CODE_FOR_maskstorev8siv8si },
  { 0x294c5d, CODE_FOR_maskstorev8sfv8si },
  { 0x294d4d, CODE_FOR_maskstorev4div4di },
  { 0x294d5e, CODE_FOR_maskstorev4dfv4di },
  { 0x2a0f3e, CODE_FOR_vec_extractv8qiqi },
  { 0x2a0f45, CODE_FOR_vec_extractv16qiqi },
  { 0x2a0f4a, CODE_FOR_vec_extractv32qiqi },
  { 0x2a0f4f, CODE_FOR_vec_extractv64qiqi },
  { 0x2a103f, CODE_FOR_vec_extractv4hihi },
  { 0x2a1046, CODE_FOR_vec_extractv8hihi },
  { 0x2a104b, CODE_FOR_vec_extractv16hihi },
  { 0x2a1050, CODE_FOR_vec_extractv32hihi },
  { 0x2a1140, CODE_FOR_vec_extractv2sisi },
  { 0x2a1147, CODE_FOR_vec_extractv4sisi },
  { 0x2a114c, CODE_FOR_vec_extractv8sisi },
  { 0x2a1151, CODE_FOR_vec_extractv16sisi },
  { 0x2a1248, CODE_FOR_vec_extractv2didi },
  { 0x2a124d, CODE_FOR_vec_extractv4didi },
  { 0x2a1252, CODE_FOR_vec_extractv8didi },
  { 0x2a134e, CODE_FOR_vec_extractv2titi },
  { 0x2a1353, CODE_FOR_vec_extractv4titi },
  { 0x2a285a, CODE_FOR_vec_extractv2sfsf },
  { 0x2a285b, CODE_FOR_vec_extractv4sfsf },
  { 0x2a285d, CODE_FOR_vec_extractv8sfsf },
  { 0x2a2860, CODE_FOR_vec_extractv16sfsf },
  { 0x2a295c, CODE_FOR_vec_extractv2dfdf },
  { 0x2a295e, CODE_FOR_vec_extractv4dfdf },
  { 0x2a2961, CODE_FOR_vec_extractv8dfdf },
  { 0x2a454a, CODE_FOR_vec_extractv32qiv16qi },
  { 0x2a464b, CODE_FOR_vec_extractv16hiv8hi },
  { 0x2a474c, CODE_FOR_vec_extractv8siv4si },
  { 0x2a484d, CODE_FOR_vec_extractv4div2di },
  { 0x2a4a4f, CODE_FOR_vec_extractv64qiv32qi },
  { 0x2a4b50, CODE_FOR_vec_extractv32hiv16hi },
  { 0x2a4c51, CODE_FOR_vec_extractv16siv8si },
  { 0x2a4d52, CODE_FOR_vec_extractv8div4di },
  { 0x2a5b5d, CODE_FOR_vec_extractv8sfv4sf },
  { 0x2a5c5e, CODE_FOR_vec_extractv4dfv2df },
  { 0x2a5d60, CODE_FOR_vec_extractv16sfv8sf },
  { 0x2a5e61, CODE_FOR_vec_extractv8dfv4df },
  { 0x2b0f3e, CODE_FOR_vec_initv8qiqi },
  { 0x2b0f45, CODE_FOR_vec_initv16qiqi },
  { 0x2b0f4a, CODE_FOR_vec_initv32qiqi },
  { 0x2b0f4f, CODE_FOR_vec_initv64qiqi },
  { 0x2b103f, CODE_FOR_vec_initv4hihi },
  { 0x2b1046, CODE_FOR_vec_initv8hihi },
  { 0x2b104b, CODE_FOR_vec_initv16hihi },
  { 0x2b1050, CODE_FOR_vec_initv32hihi },
  { 0x2b1140, CODE_FOR_vec_initv2sisi },
  { 0x2b1147, CODE_FOR_vec_initv4sisi },
  { 0x2b114c, CODE_FOR_vec_initv8sisi },
  { 0x2b1151, CODE_FOR_vec_initv16sisi },
  { 0x2b1248, CODE_FOR_vec_initv2didi },
  { 0x2b124d, CODE_FOR_vec_initv4didi },
  { 0x2b1252, CODE_FOR_vec_initv8didi },
  { 0x2b134e, CODE_FOR_vec_initv2titi },
  { 0x2b1353, CODE_FOR_vec_initv4titi },
  { 0x2b285a, CODE_FOR_vec_initv2sfsf },
  { 0x2b285b, CODE_FOR_vec_initv4sfsf },
  { 0x2b285d, CODE_FOR_vec_initv8sfsf },
  { 0x2b2860, CODE_FOR_vec_initv16sfsf },
  { 0x2b295c, CODE_FOR_vec_initv2dfdf },
  { 0x2b295e, CODE_FOR_vec_initv4dfdf },
  { 0x2b2961, CODE_FOR_vec_initv8dfdf },
  { 0x2b3e45, CODE_FOR_vec_initv16qiv8qi },
  { 0x2b3f46, CODE_FOR_vec_initv8hiv4hi },
  { 0x2b4047, CODE_FOR_vec_initv4siv2si },
  { 0x2b454a, CODE_FOR_vec_initv32qiv16qi },
  { 0x2b464b, CODE_FOR_vec_initv16hiv8hi },
  { 0x2b474c, CODE_FOR_vec_initv8siv4si },
  { 0x2b484d, CODE_FOR_vec_initv4div2di },
  { 0x2b4a4f, CODE_FOR_vec_initv64qiv32qi },
  { 0x2b4b50, CODE_FOR_vec_initv32hiv16hi },
  { 0x2b4c51, CODE_FOR_vec_initv16siv8si },
  { 0x2b4d52, CODE_FOR_vec_initv8div4di },
  { 0x2b4e53, CODE_FOR_vec_initv4tiv2ti },
  { 0x2b5a5b, CODE_FOR_vec_initv4sfv2sf },
  { 0x2b5b5d, CODE_FOR_vec_initv8sfv4sf },
  { 0x2b5c5e, CODE_FOR_vec_initv4dfv2df },
  { 0x2b5d60, CODE_FOR_vec_initv16sfv8sf },
  { 0x2b5e61, CODE_FOR_vec_initv8dfv4df },
  { 0x2d000f, CODE_FOR_addqi3 },
  { 0x2d0010, CODE_FOR_addhi3 },
  { 0x2d0011, CODE_FOR_addsi3 },
  { 0x2d0012, CODE_FOR_adddi3 },
  { 0x2d0013, CODE_FOR_addti3 },
  { 0x2d0028, CODE_FOR_addsf3 },
  { 0x2d0029, CODE_FOR_adddf3 },
  { 0x2d002a, CODE_FOR_addxf3 },
  { 0x2d0045, CODE_FOR_addv16qi3 },
  { 0x2d0046, CODE_FOR_addv8hi3 },
  { 0x2d0047, CODE_FOR_addv4si3 },
  { 0x2d0048, CODE_FOR_addv2di3 },
  { 0x2d004a, CODE_FOR_addv32qi3 },
  { 0x2d004b, CODE_FOR_addv16hi3 },
  { 0x2d004c, CODE_FOR_addv8si3 },
  { 0x2d004d, CODE_FOR_addv4di3 },
  { 0x2d004f, CODE_FOR_addv64qi3 },
  { 0x2d0050, CODE_FOR_addv32hi3 },
  { 0x2d0051, CODE_FOR_addv16si3 },
  { 0x2d0052, CODE_FOR_addv8di3 },
  { 0x2d005b, CODE_FOR_addv4sf3 },
  { 0x2d005c, CODE_FOR_addv2df3 },
  { 0x2d005d, CODE_FOR_addv8sf3 },
  { 0x2d005e, CODE_FOR_addv4df3 },
  { 0x2d0060, CODE_FOR_addv16sf3 },
  { 0x2d0061, CODE_FOR_addv8df3 },
  { 0x31000f, CODE_FOR_subqi3 },
  { 0x310010, CODE_FOR_subhi3 },
  { 0x310011, CODE_FOR_subsi3 },
  { 0x310012, CODE_FOR_subdi3 },
  { 0x310013, CODE_FOR_subti3 },
  { 0x310028, CODE_FOR_subsf3 },
  { 0x310029, CODE_FOR_subdf3 },
  { 0x31002a, CODE_FOR_subxf3 },
  { 0x310045, CODE_FOR_subv16qi3 },
  { 0x310046, CODE_FOR_subv8hi3 },
  { 0x310047, CODE_FOR_subv4si3 },
  { 0x310048, CODE_FOR_subv2di3 },
  { 0x31004a, CODE_FOR_subv32qi3 },
  { 0x31004b, CODE_FOR_subv16hi3 },
  { 0x31004c, CODE_FOR_subv8si3 },
  { 0x31004d, CODE_FOR_subv4di3 },
  { 0x31004f, CODE_FOR_subv64qi3 },
  { 0x310050, CODE_FOR_subv32hi3 },
  { 0x310051, CODE_FOR_subv16si3 },
  { 0x310052, CODE_FOR_subv8di3 },
  { 0x31005b, CODE_FOR_subv4sf3 },
  { 0x31005c, CODE_FOR_subv2df3 },
  { 0x31005d, CODE_FOR_subv8sf3 },
  { 0x31005e, CODE_FOR_subv4df3 },
  { 0x310060, CODE_FOR_subv16sf3 },
  { 0x310061, CODE_FOR_subv8df3 },
  { 0x35000f, CODE_FOR_mulqi3 },
  { 0x350010, CODE_FOR_mulhi3 },
  { 0x350011, CODE_FOR_mulsi3 },
  { 0x350012, CODE_FOR_muldi3 },
  { 0x350028, CODE_FOR_mulsf3 },
  { 0x350029, CODE_FOR_muldf3 },
  { 0x35002a, CODE_FOR_mulxf3 },
  { 0x350045, CODE_FOR_mulv16qi3 },
  { 0x350046, CODE_FOR_mulv8hi3 },
  { 0x350047, CODE_FOR_mulv4si3 },
  { 0x350048, CODE_FOR_mulv2di3 },
  { 0x35004a, CODE_FOR_mulv32qi3 },
  { 0x35004b, CODE_FOR_mulv16hi3 },
  { 0x35004c, CODE_FOR_mulv8si3 },
  { 0x35004d, CODE_FOR_mulv4di3 },
  { 0x35004f, CODE_FOR_mulv64qi3 },
  { 0x350050, CODE_FOR_mulv32hi3 },
  { 0x350051, CODE_FOR_mulv16si3 },
  { 0x350052, CODE_FOR_mulv8di3 },
  { 0x35005b, CODE_FOR_mulv4sf3 },
  { 0x35005c, CODE_FOR_mulv2df3 },
  { 0x35005d, CODE_FOR_mulv8sf3 },
  { 0x35005e, CODE_FOR_mulv4df3 },
  { 0x350060, CODE_FOR_mulv16sf3 },
  { 0x350061, CODE_FOR_mulv8df3 },
  { 0x390028, CODE_FOR_divsf3 },
  { 0x390029, CODE_FOR_divdf3 },
  { 0x39002a, CODE_FOR_divxf3 },
  { 0x39005b, CODE_FOR_divv4sf3 },
  { 0x39005c, CODE_FOR_divv2df3 },
  { 0x39005d, CODE_FOR_divv8sf3 },
  { 0x39005e, CODE_FOR_divv4df3 },
  { 0x390060, CODE_FOR_divv16sf3 },
  { 0x390061, CODE_FOR_divv8df3 },
  { 0x3e000f, CODE_FOR_divmodqi4 },
  { 0x3e0010, CODE_FOR_divmodhi4 },
  { 0x3e0011, CODE_FOR_divmodsi4 },
  { 0x3e0012, CODE_FOR_divmoddi4 },
  { 0x3f000f, CODE_FOR_udivmodqi4 },
  { 0x3f0010, CODE_FOR_udivmodhi4 },
  { 0x3f0011, CODE_FOR_udivmodsi4 },
  { 0x3f0012, CODE_FOR_udivmoddi4 },
  { 0x43000f, CODE_FOR_andqi3 },
  { 0x430010, CODE_FOR_andhi3 },
  { 0x430011, CODE_FOR_andsi3 },
  { 0x430012, CODE_FOR_anddi3 },
  { 0x43002b, CODE_FOR_andtf3 },
  { 0x430045, CODE_FOR_andv16qi3 },
  { 0x430046, CODE_FOR_andv8hi3 },
  { 0x430047, CODE_FOR_andv4si3 },
  { 0x430048, CODE_FOR_andv2di3 },
  { 0x43004a, CODE_FOR_andv32qi3 },
  { 0x43004b, CODE_FOR_andv16hi3 },
  { 0x43004c, CODE_FOR_andv8si3 },
  { 0x43004d, CODE_FOR_andv4di3 },
  { 0x43004f, CODE_FOR_andv64qi3 },
  { 0x430050, CODE_FOR_andv32hi3 },
  { 0x430051, CODE_FOR_andv16si3 },
  { 0x430052, CODE_FOR_andv8di3 },
  { 0x43005b, CODE_FOR_andv4sf3 },
  { 0x43005c, CODE_FOR_andv2df3 },
  { 0x43005d, CODE_FOR_andv8sf3 },
  { 0x43005e, CODE_FOR_andv4df3 },
  { 0x430060, CODE_FOR_andv16sf3 },
  { 0x430061, CODE_FOR_andv8df3 },
  { 0x44000f, CODE_FOR_iorqi3 },
  { 0x440010, CODE_FOR_iorhi3 },
  { 0x440011, CODE_FOR_iorsi3 },
  { 0x440012, CODE_FOR_iordi3 },
  { 0x44002b, CODE_FOR_iortf3 },
  { 0x440045, CODE_FOR_iorv16qi3 },
  { 0x440046, CODE_FOR_iorv8hi3 },
  { 0x440047, CODE_FOR_iorv4si3 },
  { 0x440048, CODE_FOR_iorv2di3 },
  { 0x44004a, CODE_FOR_iorv32qi3 },
  { 0x44004b, CODE_FOR_iorv16hi3 },
  { 0x44004c, CODE_FOR_iorv8si3 },
  { 0x44004d, CODE_FOR_iorv4di3 },
  { 0x44004f, CODE_FOR_iorv64qi3 },
  { 0x440050, CODE_FOR_iorv32hi3 },
  { 0x440051, CODE_FOR_iorv16si3 },
  { 0x440052, CODE_FOR_iorv8di3 },
  { 0x44005b, CODE_FOR_iorv4sf3 },
  { 0x44005c, CODE_FOR_iorv2df3 },
  { 0x44005d, CODE_FOR_iorv8sf3 },
  { 0x44005e, CODE_FOR_iorv4df3 },
  { 0x440060, CODE_FOR_iorv16sf3 },
  { 0x440061, CODE_FOR_iorv8df3 },
  { 0x45000f, CODE_FOR_xorqi3 },
  { 0x450010, CODE_FOR_xorhi3 },
  { 0x450011, CODE_FOR_xorsi3 },
  { 0x450012, CODE_FOR_xordi3 },
  { 0x45002b, CODE_FOR_xortf3 },
  { 0x450045, CODE_FOR_xorv16qi3 },
  { 0x450046, CODE_FOR_xorv8hi3 },
  { 0x450047, CODE_FOR_xorv4si3 },
  { 0x450048, CODE_FOR_xorv2di3 },
  { 0x45004a, CODE_FOR_xorv32qi3 },
  { 0x45004b, CODE_FOR_xorv16hi3 },
  { 0x45004c, CODE_FOR_xorv8si3 },
  { 0x45004d, CODE_FOR_xorv4di3 },
  { 0x45004f, CODE_FOR_xorv64qi3 },
  { 0x450050, CODE_FOR_xorv32hi3 },
  { 0x450051, CODE_FOR_xorv16si3 },
  { 0x450052, CODE_FOR_xorv8di3 },
  { 0x45005b, CODE_FOR_xorv4sf3 },
  { 0x45005c, CODE_FOR_xorv2df3 },
  { 0x45005d, CODE_FOR_xorv8sf3 },
  { 0x45005e, CODE_FOR_xorv4df3 },
  { 0x450060, CODE_FOR_xorv16sf3 },
  { 0x450061, CODE_FOR_xorv8df3 },
  { 0x46000f, CODE_FOR_ashlqi3 },
  { 0x460010, CODE_FOR_ashlhi3 },
  { 0x460011, CODE_FOR_ashlsi3 },
  { 0x460012, CODE_FOR_ashldi3 },
  { 0x460013, CODE_FOR_ashlti3 },
  { 0x460045, CODE_FOR_ashlv16qi3 },
  { 0x460046, CODE_FOR_ashlv8hi3 },
  { 0x460047, CODE_FOR_ashlv4si3 },
  { 0x460048, CODE_FOR_ashlv2di3 },
  { 0x46004a, CODE_FOR_ashlv32qi3 },
  { 0x46004b, CODE_FOR_ashlv16hi3 },
  { 0x46004c, CODE_FOR_ashlv8si3 },
  { 0x46004d, CODE_FOR_ashlv4di3 },
  { 0x46004f, CODE_FOR_ashlv64qi3 },
  { 0x460050, CODE_FOR_ashlv32hi3 },
  { 0x460051, CODE_FOR_ashlv16si3 },
  { 0x460052, CODE_FOR_ashlv8di3 },
  { 0x49000f, CODE_FOR_ashrqi3 },
  { 0x490010, CODE_FOR_ashrhi3 },
  { 0x490011, CODE_FOR_ashrsi3 },
  { 0x490012, CODE_FOR_ashrdi3 },
  { 0x490013, CODE_FOR_ashrti3 },
  { 0x490045, CODE_FOR_ashrv16qi3 },
  { 0x490046, CODE_FOR_ashrv8hi3 },
  { 0x490047, CODE_FOR_ashrv4si3 },
  { 0x490048, CODE_FOR_ashrv2di3 },
  { 0x49004a, CODE_FOR_ashrv32qi3 },
  { 0x49004b, CODE_FOR_ashrv16hi3 },
  { 0x49004c, CODE_FOR_ashrv8si3 },
  { 0x49004d, CODE_FOR_ashrv4di3 },
  { 0x49004f, CODE_FOR_ashrv64qi3 },
  { 0x490050, CODE_FOR_ashrv32hi3 },
  { 0x490051, CODE_FOR_ashrv16si3 },
  { 0x490052, CODE_FOR_ashrv8di3 },
  { 0x4a000f, CODE_FOR_lshrqi3 },
  { 0x4a0010, CODE_FOR_lshrhi3 },
  { 0x4a0011, CODE_FOR_lshrsi3 },
  { 0x4a0012, CODE_FOR_lshrdi3 },
  { 0x4a0013, CODE_FOR_lshrti3 },
  { 0x4a0045, CODE_FOR_lshrv16qi3 },
  { 0x4a0046, CODE_FOR_lshrv8hi3 },
  { 0x4a0047, CODE_FOR_lshrv4si3 },
  { 0x4a0048, CODE_FOR_lshrv2di3 },
  { 0x4a004a, CODE_FOR_lshrv32qi3 },
  { 0x4a004b, CODE_FOR_lshrv16hi3 },
  { 0x4a004c, CODE_FOR_lshrv8si3 },
  { 0x4a004d, CODE_FOR_lshrv4di3 },
  { 0x4a004f, CODE_FOR_lshrv64qi3 },
  { 0x4a0050, CODE_FOR_lshrv32hi3 },
  { 0x4a0051, CODE_FOR_lshrv16si3 },
  { 0x4a0052, CODE_FOR_lshrv8di3 },
  { 0x4b000f, CODE_FOR_rotlqi3 },
  { 0x4b0010, CODE_FOR_rotlhi3 },
  { 0x4b0011, CODE_FOR_rotlsi3 },
  { 0x4b0012, CODE_FOR_rotldi3 },
  { 0x4b0013, CODE_FOR_rotlti3 },
  { 0x4b0045, CODE_FOR_rotlv16qi3 },
  { 0x4b0046, CODE_FOR_rotlv8hi3 },
  { 0x4b0047, CODE_FOR_rotlv4si3 },
  { 0x4b0048, CODE_FOR_rotlv2di3 },
  { 0x4c000f, CODE_FOR_rotrqi3 },
  { 0x4c0010, CODE_FOR_rotrhi3 },
  { 0x4c0011, CODE_FOR_rotrsi3 },
  { 0x4c0012, CODE_FOR_rotrdi3 },
  { 0x4c0013, CODE_FOR_rotrti3 },
  { 0x4c0045, CODE_FOR_rotrv16qi3 },
  { 0x4c0046, CODE_FOR_rotrv8hi3 },
  { 0x4c0047, CODE_FOR_rotrv4si3 },
  { 0x4c0048, CODE_FOR_rotrv2di3 },
  { 0x4d0045, CODE_FOR_vashlv16qi3 },
  { 0x4d0046, CODE_FOR_vashlv8hi3 },
  { 0x4d0047, CODE_FOR_vashlv4si3 },
  { 0x4d0048, CODE_FOR_vashlv2di3 },
  { 0x4d004c, CODE_FOR_vashlv8si3 },
  { 0x4d004d, CODE_FOR_vashlv4di3 },
  { 0x4d0051, CODE_FOR_vashlv16si3 },
  { 0x4d0052, CODE_FOR_vashlv8di3 },
  { 0x4e0045, CODE_FOR_vashrv16qi3 },
  { 0x4e0046, CODE_FOR_vashrv8hi3 },
  { 0x4e0047, CODE_FOR_vashrv4si3 },
  { 0x4e0048, CODE_FOR_vashrv2di3 },
  { 0x4e004c, CODE_FOR_vashrv8si3 },
  { 0x4e0051, CODE_FOR_vashrv16si3 },
  { 0x4f0045, CODE_FOR_vlshrv16qi3 },
  { 0x4f0046, CODE_FOR_vlshrv8hi3 },
  { 0x4f0047, CODE_FOR_vlshrv4si3 },
  { 0x4f0048, CODE_FOR_vlshrv2di3 },
  { 0x4f004c, CODE_FOR_vlshrv8si3 },
  { 0x4f004d, CODE_FOR_vlshrv4di3 },
  { 0x4f0051, CODE_FOR_vlshrv16si3 },
  { 0x4f0052, CODE_FOR_vlshrv8di3 },
  { 0x500045, CODE_FOR_vrotlv16qi3 },
  { 0x500046, CODE_FOR_vrotlv8hi3 },
  { 0x500047, CODE_FOR_vrotlv4si3 },
  { 0x500048, CODE_FOR_vrotlv2di3 },
  { 0x510045, CODE_FOR_vrotrv16qi3 },
  { 0x510046, CODE_FOR_vrotrv8hi3 },
  { 0x510047, CODE_FOR_vrotrv4si3 },
  { 0x510048, CODE_FOR_vrotrv2di3 },
  { 0x520028, CODE_FOR_sminsf3 },
  { 0x520029, CODE_FOR_smindf3 },
  { 0x520045, CODE_FOR_sminv16qi3 },
  { 0x520046, CODE_FOR_sminv8hi3 },
  { 0x520047, CODE_FOR_sminv4si3 },
  { 0x520048, CODE_FOR_sminv2di3 },
  { 0x52004a, CODE_FOR_sminv32qi3 },
  { 0x52004b, CODE_FOR_sminv16hi3 },
  { 0x52004c, CODE_FOR_sminv8si3 },
  { 0x52004d, CODE_FOR_sminv4di3 },
  { 0x52004f, CODE_FOR_sminv64qi3 },
  { 0x520050, CODE_FOR_sminv32hi3 },
  { 0x520051, CODE_FOR_sminv16si3 },
  { 0x520052, CODE_FOR_sminv8di3 },
  { 0x52005b, CODE_FOR_sminv4sf3 },
  { 0x52005c, CODE_FOR_sminv2df3 },
  { 0x52005d, CODE_FOR_sminv8sf3 },
  { 0x52005e, CODE_FOR_sminv4df3 },
  { 0x520060, CODE_FOR_sminv16sf3 },
  { 0x520061, CODE_FOR_sminv8df3 },
  { 0x530028, CODE_FOR_smaxsf3 },
  { 0x530029, CODE_FOR_smaxdf3 },
  { 0x530045, CODE_FOR_smaxv16qi3 },
  { 0x530046, CODE_FOR_smaxv8hi3 },
  { 0x530047, CODE_FOR_smaxv4si3 },
  { 0x530048, CODE_FOR_smaxv2di3 },
  { 0x53004a, CODE_FOR_smaxv32qi3 },
  { 0x53004b, CODE_FOR_smaxv16hi3 },
  { 0x53004c, CODE_FOR_smaxv8si3 },
  { 0x53004d, CODE_FOR_smaxv4di3 },
  { 0x53004f, CODE_FOR_smaxv64qi3 },
  { 0x530050, CODE_FOR_smaxv32hi3 },
  { 0x530051, CODE_FOR_smaxv16si3 },
  { 0x530052, CODE_FOR_smaxv8di3 },
  { 0x53005b, CODE_FOR_smaxv4sf3 },
  { 0x53005c, CODE_FOR_smaxv2df3 },
  { 0x53005d, CODE_FOR_smaxv8sf3 },
  { 0x53005e, CODE_FOR_smaxv4df3 },
  { 0x530060, CODE_FOR_smaxv16sf3 },
  { 0x530061, CODE_FOR_smaxv8df3 },
  { 0x540045, CODE_FOR_uminv16qi3 },
  { 0x540046, CODE_FOR_uminv8hi3 },
  { 0x540047, CODE_FOR_uminv4si3 },
  { 0x540048, CODE_FOR_uminv2di3 },
  { 0x54004a, CODE_FOR_uminv32qi3 },
  { 0x54004b, CODE_FOR_uminv16hi3 },
  { 0x54004c, CODE_FOR_uminv8si3 },
  { 0x54004d, CODE_FOR_uminv4di3 },
  { 0x54004f, CODE_FOR_uminv64qi3 },
  { 0x540050, CODE_FOR_uminv32hi3 },
  { 0x540051, CODE_FOR_uminv16si3 },
  { 0x540052, CODE_FOR_uminv8di3 },
  { 0x550045, CODE_FOR_umaxv16qi3 },
  { 0x550046, CODE_FOR_umaxv8hi3 },
  { 0x550047, CODE_FOR_umaxv4si3 },
  { 0x550048, CODE_FOR_umaxv2di3 },
  { 0x55004a, CODE_FOR_umaxv32qi3 },
  { 0x55004b, CODE_FOR_umaxv16hi3 },
  { 0x55004c, CODE_FOR_umaxv8si3 },
  { 0x55004d, CODE_FOR_umaxv4di3 },
  { 0x55004f, CODE_FOR_umaxv64qi3 },
  { 0x550050, CODE_FOR_umaxv32hi3 },
  { 0x550051, CODE_FOR_umaxv16si3 },
  { 0x550052, CODE_FOR_umaxv8di3 },
  { 0x56000f, CODE_FOR_negqi2 },
  { 0x560010, CODE_FOR_neghi2 },
  { 0x560011, CODE_FOR_negsi2 },
  { 0x560012, CODE_FOR_negdi2 },
  { 0x560013, CODE_FOR_negti2 },
  { 0x560028, CODE_FOR_negsf2 },
  { 0x560029, CODE_FOR_negdf2 },
  { 0x56002a, CODE_FOR_negxf2 },
  { 0x56002b, CODE_FOR_negtf2 },
  { 0x560045, CODE_FOR_negv16qi2 },
  { 0x560046, CODE_FOR_negv8hi2 },
  { 0x560047, CODE_FOR_negv4si2 },
  { 0x560048, CODE_FOR_negv2di2 },
  { 0x56004a, CODE_FOR_negv32qi2 },
  { 0x56004b, CODE_FOR_negv16hi2 },
  { 0x56004c, CODE_FOR_negv8si2 },
  { 0x56004d, CODE_FOR_negv4di2 },
  { 0x56004f, CODE_FOR_negv64qi2 },
  { 0x560050, CODE_FOR_negv32hi2 },
  { 0x560051, CODE_FOR_negv16si2 },
  { 0x560052, CODE_FOR_negv8di2 },
  { 0x56005b, CODE_FOR_negv4sf2 },
  { 0x56005c, CODE_FOR_negv2df2 },
  { 0x56005d, CODE_FOR_negv8sf2 },
  { 0x56005e, CODE_FOR_negv4df2 },
  { 0x560060, CODE_FOR_negv16sf2 },
  { 0x560061, CODE_FOR_negv8df2 },
  { 0x5a0028, CODE_FOR_abssf2 },
  { 0x5a0029, CODE_FOR_absdf2 },
  { 0x5a002a, CODE_FOR_absxf2 },
  { 0x5a002b, CODE_FOR_abstf2 },
  { 0x5a0045, CODE_FOR_absv16qi2 },
  { 0x5a0046, CODE_FOR_absv8hi2 },
  { 0x5a0047, CODE_FOR_absv4si2 },
  { 0x5a0048, CODE_FOR_absv2di2 },
  { 0x5a004a, CODE_FOR_absv32qi2 },
  { 0x5a004b, CODE_FOR_absv16hi2 },
  { 0x5a004c, CODE_FOR_absv8si2 },
  { 0x5a004d, CODE_FOR_absv4di2 },
  { 0x5a004f, CODE_FOR_absv64qi2 },
  { 0x5a0050, CODE_FOR_absv32hi2 },
  { 0x5a0051, CODE_FOR_absv16si2 },
  { 0x5a0052, CODE_FOR_absv8di2 },
  { 0x5a005b, CODE_FOR_absv4sf2 },
  { 0x5a005c, CODE_FOR_absv2df2 },
  { 0x5a005d, CODE_FOR_absv8sf2 },
  { 0x5a005e, CODE_FOR_absv4df2 },
  { 0x5a0060, CODE_FOR_absv16sf2 },
  { 0x5a0061, CODE_FOR_absv8df2 },
  { 0x5c000f, CODE_FOR_one_cmplqi2 },
  { 0x5c0010, CODE_FOR_one_cmplhi2 },
  { 0x5c0011, CODE_FOR_one_cmplsi2 },
  { 0x5c0012, CODE_FOR_one_cmpldi2 },
  { 0x5c0045, CODE_FOR_one_cmplv16qi2 },
  { 0x5c0046, CODE_FOR_one_cmplv8hi2 },
  { 0x5c0047, CODE_FOR_one_cmplv4si2 },
  { 0x5c0048, CODE_FOR_one_cmplv2di2 },
  { 0x5c004a, CODE_FOR_one_cmplv32qi2 },
  { 0x5c004b, CODE_FOR_one_cmplv16hi2 },
  { 0x5c004c, CODE_FOR_one_cmplv8si2 },
  { 0x5c004d, CODE_FOR_one_cmplv4di2 },
  { 0x5c004f, CODE_FOR_one_cmplv64qi2 },
  { 0x5c0050, CODE_FOR_one_cmplv32hi2 },
  { 0x5c0051, CODE_FOR_one_cmplv16si2 },
  { 0x5c0052, CODE_FOR_one_cmplv8di2 },
  { 0x5d0010, CODE_FOR_bswaphi2 },
  { 0x5d0011, CODE_FOR_bswapsi2 },
  { 0x5d0012, CODE_FOR_bswapdi2 },
  { 0x5e0011, CODE_FOR_ffssi2 },
  { 0x5e0012, CODE_FOR_ffsdi2 },
  { 0x5f0011, CODE_FOR_clzsi2 },
  { 0x5f0012, CODE_FOR_clzdi2 },
  { 0x5f0047, CODE_FOR_clzv4si2 },
  { 0x5f0048, CODE_FOR_clzv2di2 },
  { 0x5f004c, CODE_FOR_clzv8si2 },
  { 0x5f004d, CODE_FOR_clzv4di2 },
  { 0x5f0051, CODE_FOR_clzv16si2 },
  { 0x5f0052, CODE_FOR_clzv8di2 },
  { 0x600011, CODE_FOR_ctzsi2 },
  { 0x600012, CODE_FOR_ctzdi2 },
  { 0x620010, CODE_FOR_popcounthi2 },
  { 0x620011, CODE_FOR_popcountsi2 },
  { 0x620012, CODE_FOR_popcountdi2 },
  { 0x630011, CODE_FOR_paritysi2 },
  { 0x630012, CODE_FOR_paritydi2 },
  { 0x6e0028, CODE_FOR_sqrtsf2 },
  { 0x6e0029, CODE_FOR_sqrtdf2 },
  { 0x6e002a, CODE_FOR_sqrtxf2 },
  { 0x6e005b, CODE_FOR_sqrtv4sf2 },
  { 0x6e005c, CODE_FOR_sqrtv2df2 },
  { 0x6e005d, CODE_FOR_sqrtv8sf2 },
  { 0x6e005e, CODE_FOR_sqrtv4df2 },
  { 0x6e0060, CODE_FOR_sqrtv16sf2 },
  { 0x6e0061, CODE_FOR_sqrtv8df2 },
  { 0x7d000f, CODE_FOR_movqi },
  { 0x7d0010, CODE_FOR_movhi },
  { 0x7d0011, CODE_FOR_movsi },
  { 0x7d0012, CODE_FOR_movdi },
  { 0x7d0013, CODE_FOR_movti },
  { 0x7d0014, CODE_FOR_movoi },
  { 0x7d0015, CODE_FOR_movxi },
  { 0x7d0028, CODE_FOR_movsf },
  { 0x7d0029, CODE_FOR_movdf },
  { 0x7d002a, CODE_FOR_movxf },
  { 0x7d002b, CODE_FOR_movtf },
  { 0x7d0032, CODE_FOR_movcdi },
  { 0x7d003e, CODE_FOR_movv8qi },
  { 0x7d003f, CODE_FOR_movv4hi },
  { 0x7d0040, CODE_FOR_movv2si },
  { 0x7d0041, CODE_FOR_movv1di },
  { 0x7d0045, CODE_FOR_movv16qi },
  { 0x7d0046, CODE_FOR_movv8hi },
  { 0x7d0047, CODE_FOR_movv4si },
  { 0x7d0048, CODE_FOR_movv2di },
  { 0x7d0049, CODE_FOR_movv1ti },
  { 0x7d004a, CODE_FOR_movv32qi },
  { 0x7d004b, CODE_FOR_movv16hi },
  { 0x7d004c, CODE_FOR_movv8si },
  { 0x7d004d, CODE_FOR_movv4di },
  { 0x7d004e, CODE_FOR_movv2ti },
  { 0x7d004f, CODE_FOR_movv64qi },
  { 0x7d0050, CODE_FOR_movv32hi },
  { 0x7d0051, CODE_FOR_movv16si },
  { 0x7d0052, CODE_FOR_movv8di },
  { 0x7d0053, CODE_FOR_movv4ti },
  { 0x7d0059, CODE_FOR_movv64si },
  { 0x7d005a, CODE_FOR_movv2sf },
  { 0x7d005b, CODE_FOR_movv4sf },
  { 0x7d005c, CODE_FOR_movv2df },
  { 0x7d005d, CODE_FOR_movv8sf },
  { 0x7d005e, CODE_FOR_movv4df },
  { 0x7d0060, CODE_FOR_movv16sf },
  { 0x7d0061, CODE_FOR_movv8df },
  { 0x7d0066, CODE_FOR_movv64sf },
  { 0x7e000f, CODE_FOR_movstrictqi },
  { 0x7e0010, CODE_FOR_movstricthi },
  { 0x7f003e, CODE_FOR_movmisalignv8qi },
  { 0x7f003f, CODE_FOR_movmisalignv4hi },
  { 0x7f0040, CODE_FOR_movmisalignv2si },
  { 0x7f0041, CODE_FOR_movmisalignv1di },
  { 0x7f0045, CODE_FOR_movmisalignv16qi },
  { 0x7f0046, CODE_FOR_movmisalignv8hi },
  { 0x7f0047, CODE_FOR_movmisalignv4si },
  { 0x7f0048, CODE_FOR_movmisalignv2di },
  { 0x7f0049, CODE_FOR_movmisalignv1ti },
  { 0x7f004a, CODE_FOR_movmisalignv32qi },
  { 0x7f004b, CODE_FOR_movmisalignv16hi },
  { 0x7f004c, CODE_FOR_movmisalignv8si },
  { 0x7f004d, CODE_FOR_movmisalignv4di },
  { 0x7f004e, CODE_FOR_movmisalignv2ti },
  { 0x7f004f, CODE_FOR_movmisalignv64qi },
  { 0x7f0050, CODE_FOR_movmisalignv32hi },
  { 0x7f0051, CODE_FOR_movmisalignv16si },
  { 0x7f0052, CODE_FOR_movmisalignv8di },
  { 0x7f0053, CODE_FOR_movmisalignv4ti },
  { 0x7f005a, CODE_FOR_movmisalignv2sf },
  { 0x7f005b, CODE_FOR_movmisalignv4sf },
  { 0x7f005c, CODE_FOR_movmisalignv2df },
  { 0x7f005d, CODE_FOR_movmisalignv8sf },
  { 0x7f005e, CODE_FOR_movmisalignv4df },
  { 0x7f0060, CODE_FOR_movmisalignv16sf },
  { 0x7f0061, CODE_FOR_movmisalignv8df },
  { 0x800011, CODE_FOR_storentsi },
  { 0x800012, CODE_FOR_storentdi },
  { 0x800028, CODE_FOR_storentsf },
  { 0x800029, CODE_FOR_storentdf },
  { 0x800048, CODE_FOR_storentv2di },
  { 0x80004d, CODE_FOR_storentv4di },
  { 0x800052, CODE_FOR_storentv8di },
  { 0x80005b, CODE_FOR_storentv4sf },
  { 0x80005c, CODE_FOR_storentv2df },
  { 0x80005d, CODE_FOR_storentv8sf },
  { 0x80005e, CODE_FOR_storentv4df },
  { 0x800060, CODE_FOR_storentv16sf },
  { 0x800061, CODE_FOR_storentv8df },
  { 0x810010, CODE_FOR_insvhi },
  { 0x810011, CODE_FOR_insvsi },
  { 0x810012, CODE_FOR_insvdi },
  { 0x820010, CODE_FOR_extvhi },
  { 0x820011, CODE_FOR_extvsi },
  { 0x830010, CODE_FOR_extzvhi },
  { 0x830011, CODE_FOR_extzvsi },
  { 0x830012, CODE_FOR_extzvdi },
  { 0x8a0002, CODE_FOR_cbranchcc4 },
  { 0x8a000f, CODE_FOR_cbranchqi4 },
  { 0x8a0010, CODE_FOR_cbranchhi4 },
  { 0x8a0011, CODE_FOR_cbranchsi4 },
  { 0x8a0012, CODE_FOR_cbranchdi4 },
  { 0x8a0013, CODE_FOR_cbranchti4 },
  { 0x8a0028, CODE_FOR_cbranchsf4 },
  { 0x8a0029, CODE_FOR_cbranchdf4 },
  { 0x8a002a, CODE_FOR_cbranchxf4 },
  { 0x8a0047, CODE_FOR_cbranchv4si4 },
  { 0x8a0048, CODE_FOR_cbranchv2di4 },
  { 0x8a004c, CODE_FOR_cbranchv8si4 },
  { 0x8a004d, CODE_FOR_cbranchv4di4 },
  { 0x8b000f, CODE_FOR_addqicc },
  { 0x8b0010, CODE_FOR_addhicc },
  { 0x8b0011, CODE_FOR_addsicc },
  { 0x8b0012, CODE_FOR_adddicc },
  { 0x8e000f, CODE_FOR_movqicc },
  { 0x8e0010, CODE_FOR_movhicc },
  { 0x8e0011, CODE_FOR_movsicc },
  { 0x8e0012, CODE_FOR_movdicc },
  { 0x8e0028, CODE_FOR_movsfcc },
  { 0x8e0029, CODE_FOR_movdfcc },
  { 0x8e002a, CODE_FOR_movxfcc },
  { 0xa20002, CODE_FOR_cstorecc4 },
  { 0xa2000f, CODE_FOR_cstoreqi4 },
  { 0xa20010, CODE_FOR_cstorehi4 },
  { 0xa20011, CODE_FOR_cstoresi4 },
  { 0xa20012, CODE_FOR_cstoredi4 },
  { 0xa20028, CODE_FOR_cstoresf4 },
  { 0xa20029, CODE_FOR_cstoredf4 },
  { 0xa2002a, CODE_FOR_cstorexf4 },
  { 0xa4000f, CODE_FOR_addvqi4 },
  { 0xa40010, CODE_FOR_addvhi4 },
  { 0xa40011, CODE_FOR_addvsi4 },
  { 0xa40012, CODE_FOR_addvdi4 },
  { 0xa5000f, CODE_FOR_subvqi4 },
  { 0xa50010, CODE_FOR_subvhi4 },
  { 0xa50011, CODE_FOR_subvsi4 },
  { 0xa50012, CODE_FOR_subvdi4 },
  { 0xa6000f, CODE_FOR_mulvqi4 },
  { 0xa60010, CODE_FOR_mulvhi4 },
  { 0xa60011, CODE_FOR_mulvsi4 },
  { 0xa60012, CODE_FOR_mulvdi4 },
  { 0xa7000f, CODE_FOR_uaddvqi4 },
  { 0xa70010, CODE_FOR_uaddvhi4 },
  { 0xa70011, CODE_FOR_uaddvsi4 },
  { 0xa70012, CODE_FOR_uaddvdi4 },
  { 0xa8000f, CODE_FOR_usubvqi4 },
  { 0xa80010, CODE_FOR_usubvhi4 },
  { 0xa80011, CODE_FOR_usubvsi4 },
  { 0xa80012, CODE_FOR_usubvdi4 },
  { 0xa9000f, CODE_FOR_umulvqi4 },
  { 0xa90010, CODE_FOR_umulvhi4 },
  { 0xa90011, CODE_FOR_umulvsi4 },
  { 0xa90012, CODE_FOR_umulvdi4 },
  { 0xaa000f, CODE_FOR_negvqi3 },
  { 0xaa0010, CODE_FOR_negvhi3 },
  { 0xaa0011, CODE_FOR_negvsi3 },
  { 0xaa0012, CODE_FOR_negvdi3 },
  { 0xac0011, CODE_FOR_smulsi3_highpart },
  { 0xac0012, CODE_FOR_smuldi3_highpart },
  { 0xac0046, CODE_FOR_smulv8hi3_highpart },
  { 0xac004b, CODE_FOR_smulv16hi3_highpart },
  { 0xac0050, CODE_FOR_smulv32hi3_highpart },
  { 0xad0011, CODE_FOR_umulsi3_highpart },
  { 0xad0012, CODE_FOR_umuldi3_highpart },
  { 0xad0046, CODE_FOR_umulv8hi3_highpart },
  { 0xad004b, CODE_FOR_umulv16hi3_highpart },
  { 0xad0050, CODE_FOR_umulv32hi3_highpart },
  { 0xb00011, CODE_FOR_cmpstrnsi },
  { 0xb10011, CODE_FOR_movmemsi },
  { 0xb10012, CODE_FOR_movmemdi },
  { 0xb20011, CODE_FOR_setmemsi },
  { 0xb20012, CODE_FOR_setmemdi },
  { 0xb30011, CODE_FOR_strlensi },
  { 0xb30012, CODE_FOR_strlendi },
  { 0xb40028, CODE_FOR_fmasf4 },
  { 0xb40029, CODE_FOR_fmadf4 },
  { 0xb4005b, CODE_FOR_fmav4sf4 },
  { 0xb4005c, CODE_FOR_fmav2df4 },
  { 0xb4005d, CODE_FOR_fmav8sf4 },
  { 0xb4005e, CODE_FOR_fmav4df4 },
  { 0xb40060, CODE_FOR_fmav16sf4 },
  { 0xb40061, CODE_FOR_fmav8df4 },
  { 0xb50028, CODE_FOR_fmssf4 },
  { 0xb50029, CODE_FOR_fmsdf4 },
  { 0xb5005b, CODE_FOR_fmsv4sf4 },
  { 0xb5005c, CODE_FOR_fmsv2df4 },
  { 0xb5005d, CODE_FOR_fmsv8sf4 },
  { 0xb5005e, CODE_FOR_fmsv4df4 },
  { 0xb50060, CODE_FOR_fmsv16sf4 },
  { 0xb50061, CODE_FOR_fmsv8df4 },
  { 0xb60028, CODE_FOR_fnmasf4 },
  { 0xb60029, CODE_FOR_fnmadf4 },
  { 0xb6005b, CODE_FOR_fnmav4sf4 },
  { 0xb6005c, CODE_FOR_fnmav2df4 },
  { 0xb6005d, CODE_FOR_fnmav8sf4 },
  { 0xb6005e, CODE_FOR_fnmav4df4 },
  { 0xb60060, CODE_FOR_fnmav16sf4 },
  { 0xb60061, CODE_FOR_fnmav8df4 },
  { 0xb70028, CODE_FOR_fnmssf4 },
  { 0xb70029, CODE_FOR_fnmsdf4 },
  { 0xb7005b, CODE_FOR_fnmsv4sf4 },
  { 0xb7005c, CODE_FOR_fnmsv2df4 },
  { 0xb7005d, CODE_FOR_fnmsv8sf4 },
  { 0xb7005e, CODE_FOR_fnmsv4df4 },
  { 0xb70060, CODE_FOR_fnmsv16sf4 },
  { 0xb70061, CODE_FOR_fnmsv8df4 },
  { 0xb80028, CODE_FOR_rintsf2 },
  { 0xb80029, CODE_FOR_rintdf2 },
  { 0xb8002a, CODE_FOR_rintxf2 },
  { 0xb90028, CODE_FOR_roundsf2 },
  { 0xb90029, CODE_FOR_rounddf2 },
  { 0xb9002a, CODE_FOR_roundxf2 },
  { 0xb9005b, CODE_FOR_roundv4sf2 },
  { 0xb9005c, CODE_FOR_roundv2df2 },
  { 0xb9005d, CODE_FOR_roundv8sf2 },
  { 0xb9005e, CODE_FOR_roundv4df2 },
  { 0xb90060, CODE_FOR_roundv16sf2 },
  { 0xb90061, CODE_FOR_roundv8df2 },
  { 0xba0028, CODE_FOR_floorsf2 },
  { 0xba0029, CODE_FOR_floordf2 },
  { 0xba002a, CODE_FOR_floorxf2 },
  { 0xbb0028, CODE_FOR_ceilsf2 },
  { 0xbb0029, CODE_FOR_ceildf2 },
  { 0xbb002a, CODE_FOR_ceilxf2 },
  { 0xbc0028, CODE_FOR_btruncsf2 },
  { 0xbc0029, CODE_FOR_btruncdf2 },
  { 0xbc002a, CODE_FOR_btruncxf2 },
  { 0xbd0028, CODE_FOR_nearbyintsf2 },
  { 0xbd0029, CODE_FOR_nearbyintdf2 },
  { 0xbd002a, CODE_FOR_nearbyintxf2 },
  { 0xbe0028, CODE_FOR_acossf2 },
  { 0xbe0029, CODE_FOR_acosdf2 },
  { 0xbe002a, CODE_FOR_acosxf2 },
  { 0xbf0028, CODE_FOR_acoshsf2 },
  { 0xbf0029, CODE_FOR_acoshdf2 },
  { 0xbf002a, CODE_FOR_acoshxf2 },
  { 0xc00028, CODE_FOR_asinsf2 },
  { 0xc00029, CODE_FOR_asindf2 },
  { 0xc0002a, CODE_FOR_asinxf2 },
  { 0xc10028, CODE_FOR_asinhsf2 },
  { 0xc10029, CODE_FOR_asinhdf2 },
  { 0xc1002a, CODE_FOR_asinhxf2 },
  { 0xc20028, CODE_FOR_atan2sf3 },
  { 0xc20029, CODE_FOR_atan2df3 },
  { 0xc2002a, CODE_FOR_atan2xf3 },
  { 0xc30028, CODE_FOR_atansf2 },
  { 0xc30029, CODE_FOR_atandf2 },
  { 0xc3002a, CODE_FOR_atanxf2 },
  { 0xc40028, CODE_FOR_atanhsf2 },
  { 0xc40029, CODE_FOR_atanhdf2 },
  { 0xc4002a, CODE_FOR_atanhxf2 },
  { 0xc50028, CODE_FOR_copysignsf3 },
  { 0xc50029, CODE_FOR_copysigndf3 },
  { 0xc5002b, CODE_FOR_copysigntf3 },
  { 0xc5005b, CODE_FOR_copysignv4sf3 },
  { 0xc5005c, CODE_FOR_copysignv2df3 },
  { 0xc5005d, CODE_FOR_copysignv8sf3 },
  { 0xc5005e, CODE_FOR_copysignv4df3 },
  { 0xc50060, CODE_FOR_copysignv16sf3 },
  { 0xc50061, CODE_FOR_copysignv8df3 },
  { 0xc60028, CODE_FOR_xorsignsf3 },
  { 0xc60029, CODE_FOR_xorsigndf3 },
  { 0xc6005b, CODE_FOR_xorsignv4sf3 },
  { 0xc6005c, CODE_FOR_xorsignv2df3 },
  { 0xc6005d, CODE_FOR_xorsignv8sf3 },
  { 0xc6005e, CODE_FOR_xorsignv4df3 },
  { 0xc60060, CODE_FOR_xorsignv16sf3 },
  { 0xc60061, CODE_FOR_xorsignv8df3 },
  { 0xc70028, CODE_FOR_cossf2 },
  { 0xc70029, CODE_FOR_cosdf2 },
  { 0xc7002a, CODE_FOR_cosxf2 },
  { 0xc80028, CODE_FOR_coshsf2 },
  { 0xc80029, CODE_FOR_coshdf2 },
  { 0xc8002a, CODE_FOR_coshxf2 },
  { 0xc90028, CODE_FOR_exp10sf2 },
  { 0xc90029, CODE_FOR_exp10df2 },
  { 0xc9002a, CODE_FOR_exp10xf2 },
  { 0xca0028, CODE_FOR_exp2sf2 },
  { 0xca0029, CODE_FOR_exp2df2 },
  { 0xca002a, CODE_FOR_exp2xf2 },
  { 0xcb0028, CODE_FOR_expsf2 },
  { 0xcb0029, CODE_FOR_expdf2 },
  { 0xcb002a, CODE_FOR_expxf2 },
  { 0xcc0028, CODE_FOR_expm1sf2 },
  { 0xcc0029, CODE_FOR_expm1df2 },
  { 0xcc002a, CODE_FOR_expm1xf2 },
  { 0xcd0028, CODE_FOR_fmodsf3 },
  { 0xcd0029, CODE_FOR_fmoddf3 },
  { 0xcd002a, CODE_FOR_fmodxf3 },
  { 0xce0028, CODE_FOR_hypotsf3 },
  { 0xce0029, CODE_FOR_hypotdf3 },
  { 0xcf0028, CODE_FOR_ilogbsf2 },
  { 0xcf0029, CODE_FOR_ilogbdf2 },
  { 0xcf002a, CODE_FOR_ilogbxf2 },
  { 0xd10028, CODE_FOR_ldexpsf3 },
  { 0xd10029, CODE_FOR_ldexpdf3 },
  { 0xd1002a, CODE_FOR_ldexpxf3 },
  { 0xd20028, CODE_FOR_log10sf2 },
  { 0xd20029, CODE_FOR_log10df2 },
  { 0xd2002a, CODE_FOR_log10xf2 },
  { 0xd30028, CODE_FOR_log1psf2 },
  { 0xd30029, CODE_FOR_log1pdf2 },
  { 0xd3002a, CODE_FOR_log1pxf2 },
  { 0xd40028, CODE_FOR_log2sf2 },
  { 0xd40029, CODE_FOR_log2df2 },
  { 0xd4002a, CODE_FOR_log2xf2 },
  { 0xd50028, CODE_FOR_logsf2 },
  { 0xd50029, CODE_FOR_logdf2 },
  { 0xd5002a, CODE_FOR_logxf2 },
  { 0xd60028, CODE_FOR_logbsf2 },
  { 0xd60029, CODE_FOR_logbdf2 },
  { 0xd6002a, CODE_FOR_logbxf2 },
  { 0xd80028, CODE_FOR_remaindersf3 },
  { 0xd80029, CODE_FOR_remainderdf3 },
  { 0xd8002a, CODE_FOR_remainderxf3 },
  { 0xd90028, CODE_FOR_rsqrtsf2 },
  { 0xd9005b, CODE_FOR_rsqrtv4sf2 },
  { 0xd9005d, CODE_FOR_rsqrtv8sf2 },
  { 0xd90060, CODE_FOR_rsqrtv16sf2 },
  { 0xda0028, CODE_FOR_scalbsf3 },
  { 0xda0029, CODE_FOR_scalbdf3 },
  { 0xda002a, CODE_FOR_scalbxf3 },
  { 0xdb0028, CODE_FOR_signbitsf2 },
  { 0xdb0029, CODE_FOR_signbitdf2 },
  { 0xdb002a, CODE_FOR_signbitxf2 },
  { 0xdb002b, CODE_FOR_signbittf2 },
  { 0xdc0028, CODE_FOR_significandsf2 },
  { 0xdc0029, CODE_FOR_significanddf2 },
  { 0xdc002a, CODE_FOR_significandxf2 },
  { 0xdd0028, CODE_FOR_sinsf2 },
  { 0xdd0029, CODE_FOR_sindf2 },
  { 0xdd002a, CODE_FOR_sinxf2 },
  { 0xde0028, CODE_FOR_sincossf3 },
  { 0xde0029, CODE_FOR_sincosdf3 },
  { 0xde002a, CODE_FOR_sincosxf3 },
  { 0xdf0028, CODE_FOR_sinhsf2 },
  { 0xdf0029, CODE_FOR_sinhdf2 },
  { 0xdf002a, CODE_FOR_sinhxf2 },
  { 0xe00028, CODE_FOR_tansf2 },
  { 0xe00029, CODE_FOR_tandf2 },
  { 0xe0002a, CODE_FOR_tanxf2 },
  { 0xe10028, CODE_FOR_tanhsf2 },
  { 0xe10029, CODE_FOR_tanhdf2 },
  { 0xe1002a, CODE_FOR_tanhxf2 },
  { 0xe40045, CODE_FOR_reduc_smax_scal_v16qi },
  { 0xe40046, CODE_FOR_reduc_smax_scal_v8hi },
  { 0xe40047, CODE_FOR_reduc_smax_scal_v4si },
  { 0xe40048, CODE_FOR_reduc_smax_scal_v2di },
  { 0xe4004a, CODE_FOR_reduc_smax_scal_v32qi },
  { 0xe4004b, CODE_FOR_reduc_smax_scal_v16hi },
  { 0xe4004c, CODE_FOR_reduc_smax_scal_v8si },
  { 0xe4004d, CODE_FOR_reduc_smax_scal_v4di },
  { 0xe4004f, CODE_FOR_reduc_smax_scal_v64qi },
  { 0xe40050, CODE_FOR_reduc_smax_scal_v32hi },
  { 0xe40051, CODE_FOR_reduc_smax_scal_v16si },
  { 0xe40052, CODE_FOR_reduc_smax_scal_v8di },
  { 0xe4005b, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xe4005c, CODE_FOR_reduc_smax_scal_v2df },
  { 0xe4005d, CODE_FOR_reduc_smax_scal_v8sf },
  { 0xe4005e, CODE_FOR_reduc_smax_scal_v4df },
  { 0xe40060, CODE_FOR_reduc_smax_scal_v16sf },
  { 0xe40061, CODE_FOR_reduc_smax_scal_v8df },
  { 0xe50045, CODE_FOR_reduc_smin_scal_v16qi },
  { 0xe50046, CODE_FOR_reduc_smin_scal_v8hi },
  { 0xe50047, CODE_FOR_reduc_smin_scal_v4si },
  { 0xe50048, CODE_FOR_reduc_smin_scal_v2di },
  { 0xe5004a, CODE_FOR_reduc_smin_scal_v32qi },
  { 0xe5004b, CODE_FOR_reduc_smin_scal_v16hi },
  { 0xe5004c, CODE_FOR_reduc_smin_scal_v8si },
  { 0xe5004d, CODE_FOR_reduc_smin_scal_v4di },
  { 0xe5004f, CODE_FOR_reduc_smin_scal_v64qi },
  { 0xe50050, CODE_FOR_reduc_smin_scal_v32hi },
  { 0xe50051, CODE_FOR_reduc_smin_scal_v16si },
  { 0xe50052, CODE_FOR_reduc_smin_scal_v8di },
  { 0xe5005b, CODE_FOR_reduc_smin_scal_v4sf },
  { 0xe5005c, CODE_FOR_reduc_smin_scal_v2df },
  { 0xe5005d, CODE_FOR_reduc_smin_scal_v8sf },
  { 0xe5005e, CODE_FOR_reduc_smin_scal_v4df },
  { 0xe50060, CODE_FOR_reduc_smin_scal_v16sf },
  { 0xe50061, CODE_FOR_reduc_smin_scal_v8df },
  { 0xe6005b, CODE_FOR_reduc_plus_scal_v4sf },
  { 0xe6005c, CODE_FOR_reduc_plus_scal_v2df },
  { 0xe6005d, CODE_FOR_reduc_plus_scal_v8sf },
  { 0xe6005e, CODE_FOR_reduc_plus_scal_v4df },
  { 0xe60060, CODE_FOR_reduc_plus_scal_v16sf },
  { 0xe60061, CODE_FOR_reduc_plus_scal_v8df },
  { 0xe7004a, CODE_FOR_reduc_umax_scal_v32qi },
  { 0xe7004b, CODE_FOR_reduc_umax_scal_v16hi },
  { 0xe7004c, CODE_FOR_reduc_umax_scal_v8si },
  { 0xe7004d, CODE_FOR_reduc_umax_scal_v4di },
  { 0xe7004f, CODE_FOR_reduc_umax_scal_v64qi },
  { 0xe70050, CODE_FOR_reduc_umax_scal_v32hi },
  { 0xe70051, CODE_FOR_reduc_umax_scal_v16si },
  { 0xe70052, CODE_FOR_reduc_umax_scal_v8di },
  { 0xe80046, CODE_FOR_reduc_umin_scal_v8hi },
  { 0xe8004a, CODE_FOR_reduc_umin_scal_v32qi },
  { 0xe8004b, CODE_FOR_reduc_umin_scal_v16hi },
  { 0xe8004c, CODE_FOR_reduc_umin_scal_v8si },
  { 0xe8004d, CODE_FOR_reduc_umin_scal_v4di },
  { 0xe8004f, CODE_FOR_reduc_umin_scal_v64qi },
  { 0xe80050, CODE_FOR_reduc_umin_scal_v32hi },
  { 0xe80051, CODE_FOR_reduc_umin_scal_v16si },
  { 0xe80052, CODE_FOR_reduc_umin_scal_v8di },
  { 0xf20045, CODE_FOR_uavgv16qi3_ceil },
  { 0xf20046, CODE_FOR_uavgv8hi3_ceil },
  { 0xf2004a, CODE_FOR_uavgv32qi3_ceil },
  { 0xf2004b, CODE_FOR_uavgv16hi3_ceil },
  { 0xf2004f, CODE_FOR_uavgv64qi3_ceil },
  { 0xf20050, CODE_FOR_uavgv32hi3_ceil },
  { 0xf30046, CODE_FOR_sdot_prodv8hi },
  { 0xf30047, CODE_FOR_sdot_prodv4si },
  { 0xf3004b, CODE_FOR_sdot_prodv16hi },
  { 0xf30050, CODE_FOR_sdot_prodv32hi },
  { 0xf70045, CODE_FOR_usadv16qi },
  { 0xf7004a, CODE_FOR_usadv32qi },
  { 0xf7004f, CODE_FOR_usadv64qi },
  { 0xf9005c, CODE_FOR_vec_pack_sfix_trunc_v2df },
  { 0xf9005e, CODE_FOR_vec_pack_sfix_trunc_v4df },
  { 0xf90061, CODE_FOR_vec_pack_sfix_trunc_v8df },
  { 0xfb000f, CODE_FOR_vec_pack_trunc_qi },
  { 0xfb0010, CODE_FOR_vec_pack_trunc_hi },
  { 0xfb0011, CODE_FOR_vec_pack_trunc_si },
  { 0xfb0046, CODE_FOR_vec_pack_trunc_v8hi },
  { 0xfb0047, CODE_FOR_vec_pack_trunc_v4si },
  { 0xfb0048, CODE_FOR_vec_pack_trunc_v2di },
  { 0xfb004b, CODE_FOR_vec_pack_trunc_v16hi },
  { 0xfb004c, CODE_FOR_vec_pack_trunc_v8si },
  { 0xfb004d, CODE_FOR_vec_pack_trunc_v4di },
  { 0xfb0050, CODE_FOR_vec_pack_trunc_v32hi },
  { 0xfb0051, CODE_FOR_vec_pack_trunc_v16si },
  { 0xfb0052, CODE_FOR_vec_pack_trunc_v8di },
  { 0xfb005c, CODE_FOR_vec_pack_trunc_v2df },
  { 0xfb005e, CODE_FOR_vec_pack_trunc_v4df },
  { 0xfb0061, CODE_FOR_vec_pack_trunc_v8df },
  { 0xfc005c, CODE_FOR_vec_pack_ufix_trunc_v2df },
  { 0xfc005e, CODE_FOR_vec_pack_ufix_trunc_v4df },
  { 0xfc0061, CODE_FOR_vec_pack_ufix_trunc_v8df },
  { 0xfd000f, CODE_FOR_vec_pack_sbool_trunc_qi },
  { 0xff0048, CODE_FOR_vec_packs_float_v2di },
  { 0xff004d, CODE_FOR_vec_packs_float_v4di },
  { 0xff0052, CODE_FOR_vec_packs_float_v8di },
  { 0x1000048, CODE_FOR_vec_packu_float_v2di },
  { 0x100004d, CODE_FOR_vec_packu_float_v4di },
  { 0x1000052, CODE_FOR_vec_packu_float_v8di },
  { 0x1010045, CODE_FOR_vec_permv16qi },
  { 0x1010046, CODE_FOR_vec_permv8hi },
  { 0x1010047, CODE_FOR_vec_permv4si },
  { 0x1010048, CODE_FOR_vec_permv2di },
  { 0x101004a, CODE_FOR_vec_permv32qi },
  { 0x101004b, CODE_FOR_vec_permv16hi },
  { 0x101004c, CODE_FOR_vec_permv8si },
  { 0x101004d, CODE_FOR_vec_permv4di },
  { 0x101004f, CODE_FOR_vec_permv64qi },
  { 0x1010050, CODE_FOR_vec_permv32hi },
  { 0x1010051, CODE_FOR_vec_permv16si },
  { 0x1010052, CODE_FOR_vec_permv8di },
  { 0x101005b, CODE_FOR_vec_permv4sf },
  { 0x101005c, CODE_FOR_vec_permv2df },
  { 0x101005d, CODE_FOR_vec_permv8sf },
  { 0x101005e, CODE_FOR_vec_permv4df },
  { 0x1010060, CODE_FOR_vec_permv16sf },
  { 0x1010061, CODE_FOR_vec_permv8df },
  { 0x103003e, CODE_FOR_vec_setv8qi },
  { 0x103003f, CODE_FOR_vec_setv4hi },
  { 0x1030040, CODE_FOR_vec_setv2si },
  { 0x1030045, CODE_FOR_vec_setv16qi },
  { 0x1030046, CODE_FOR_vec_setv8hi },
  { 0x1030047, CODE_FOR_vec_setv4si },
  { 0x1030048, CODE_FOR_vec_setv2di },
  { 0x103004a, CODE_FOR_vec_setv32qi },
  { 0x103004b, CODE_FOR_vec_setv16hi },
  { 0x103004c, CODE_FOR_vec_setv8si },
  { 0x103004d, CODE_FOR_vec_setv4di },
  { 0x103004f, CODE_FOR_vec_setv64qi },
  { 0x1030050, CODE_FOR_vec_setv32hi },
  { 0x1030051, CODE_FOR_vec_setv16si },
  { 0x1030052, CODE_FOR_vec_setv8di },
  { 0x103005a, CODE_FOR_vec_setv2sf },
  { 0x103005b, CODE_FOR_vec_setv4sf },
  { 0x103005c, CODE_FOR_vec_setv2df },
  { 0x103005d, CODE_FOR_vec_setv8sf },
  { 0x103005e, CODE_FOR_vec_setv4df },
  { 0x1030060, CODE_FOR_vec_setv16sf },
  { 0x1030061, CODE_FOR_vec_setv8df },
  { 0x1040045, CODE_FOR_vec_shr_v16qi },
  { 0x1040046, CODE_FOR_vec_shr_v8hi },
  { 0x1040047, CODE_FOR_vec_shr_v4si },
  { 0x1040048, CODE_FOR_vec_shr_v2di },
  { 0x105005b, CODE_FOR_vec_unpack_sfix_trunc_hi_v4sf },
  { 0x105005d, CODE_FOR_vec_unpack_sfix_trunc_hi_v8sf },
  { 0x1050060, CODE_FOR_vec_unpack_sfix_trunc_hi_v16sf },
  { 0x106005b, CODE_FOR_vec_unpack_sfix_trunc_lo_v4sf },
  { 0x106005d, CODE_FOR_vec_unpack_sfix_trunc_lo_v8sf },
  { 0x1060060, CODE_FOR_vec_unpack_sfix_trunc_lo_v16sf },
  { 0x107005b, CODE_FOR_vec_unpack_ufix_trunc_hi_v4sf },
  { 0x107005d, CODE_FOR_vec_unpack_ufix_trunc_hi_v8sf },
  { 0x1070060, CODE_FOR_vec_unpack_ufix_trunc_hi_v16sf },
  { 0x108005b, CODE_FOR_vec_unpack_ufix_trunc_lo_v4sf },
  { 0x108005d, CODE_FOR_vec_unpack_ufix_trunc_lo_v8sf },
  { 0x1080060, CODE_FOR_vec_unpack_ufix_trunc_lo_v16sf },
  { 0x1090046, CODE_FOR_vec_unpacks_float_hi_v8hi },
  { 0x1090047, CODE_FOR_vec_unpacks_float_hi_v4si },
  { 0x109004b, CODE_FOR_vec_unpacks_float_hi_v16hi },
  { 0x109004c, CODE_FOR_vec_unpacks_float_hi_v8si },
  { 0x1090050, CODE_FOR_vec_unpacks_float_hi_v32hi },
  { 0x1090051, CODE_FOR_vec_unpacks_float_hi_v16si },
  { 0x10a0046, CODE_FOR_vec_unpacks_float_lo_v8hi },
  { 0x10a0047, CODE_FOR_vec_unpacks_float_lo_v4si },
  { 0x10a004b, CODE_FOR_vec_unpacks_float_lo_v16hi },
  { 0x10a004c, CODE_FOR_vec_unpacks_float_lo_v8si },
  { 0x10a0050, CODE_FOR_vec_unpacks_float_lo_v32hi },
  { 0x10a0051, CODE_FOR_vec_unpacks_float_lo_v16si },
  { 0x10b0010, CODE_FOR_vec_unpacks_hi_hi },
  { 0x10b0011, CODE_FOR_vec_unpacks_hi_si },
  { 0x10b0012, CODE_FOR_vec_unpacks_hi_di },
  { 0x10b0045, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0x10b0046, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0x10b0047, CODE_FOR_vec_unpacks_hi_v4si },
  { 0x10b004a, CODE_FOR_vec_unpacks_hi_v32qi },
  { 0x10b004b, CODE_FOR_vec_unpacks_hi_v16hi },
  { 0x10b004c, CODE_FOR_vec_unpacks_hi_v8si },
  { 0x10b004f, CODE_FOR_vec_unpacks_hi_v64qi },
  { 0x10b0050, CODE_FOR_vec_unpacks_hi_v32hi },
  { 0x10b0051, CODE_FOR_vec_unpacks_hi_v16si },
  { 0x10b005b, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0x10b005d, CODE_FOR_vec_unpacks_hi_v8sf },
  { 0x10b0060, CODE_FOR_vec_unpacks_hi_v16sf },
  { 0x10c0010, CODE_FOR_vec_unpacks_lo_hi },
  { 0x10c0011, CODE_FOR_vec_unpacks_lo_si },
  { 0x10c0012, CODE_FOR_vec_unpacks_lo_di },
  { 0x10c0045, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0x10c0046, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0x10c0047, CODE_FOR_vec_unpacks_lo_v4si },
  { 0x10c004a, CODE_FOR_vec_unpacks_lo_v32qi },
  { 0x10c004b, CODE_FOR_vec_unpacks_lo_v16hi },
  { 0x10c004c, CODE_FOR_vec_unpacks_lo_v8si },
  { 0x10c004f, CODE_FOR_vec_unpacks_lo_v64qi },
  { 0x10c0050, CODE_FOR_vec_unpacks_lo_v32hi },
  { 0x10c0051, CODE_FOR_vec_unpacks_lo_v16si },
  { 0x10c005b, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0x10c005d, CODE_FOR_vec_unpacks_lo_v8sf },
  { 0x10c0060, CODE_FOR_vec_unpacks_lo_v16sf },
  { 0x10d000f, CODE_FOR_vec_unpacks_sbool_hi_qi },
  { 0x10e000f, CODE_FOR_vec_unpacks_sbool_lo_qi },
  { 0x10f0046, CODE_FOR_vec_unpacku_float_hi_v8hi },
  { 0x10f0047, CODE_FOR_vec_unpacku_float_hi_v4si },
  { 0x10f004b, CODE_FOR_vec_unpacku_float_hi_v16hi },
  { 0x10f004c, CODE_FOR_vec_unpacku_float_hi_v8si },
  { 0x10f0050, CODE_FOR_vec_unpacku_float_hi_v32hi },
  { 0x10f0051, CODE_FOR_vec_unpacku_float_hi_v16si },
  { 0x1100046, CODE_FOR_vec_unpacku_float_lo_v8hi },
  { 0x1100047, CODE_FOR_vec_unpacku_float_lo_v4si },
  { 0x110004b, CODE_FOR_vec_unpacku_float_lo_v16hi },
  { 0x110004c, CODE_FOR_vec_unpacku_float_lo_v8si },
  { 0x1100050, CODE_FOR_vec_unpacku_float_lo_v32hi },
  { 0x1100051, CODE_FOR_vec_unpacku_float_lo_v16si },
  { 0x1110045, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0x1110046, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0x1110047, CODE_FOR_vec_unpacku_hi_v4si },
  { 0x111004a, CODE_FOR_vec_unpacku_hi_v32qi },
  { 0x111004b, CODE_FOR_vec_unpacku_hi_v16hi },
  { 0x111004c, CODE_FOR_vec_unpacku_hi_v8si },
  { 0x111004f, CODE_FOR_vec_unpacku_hi_v64qi },
  { 0x1110050, CODE_FOR_vec_unpacku_hi_v32hi },
  { 0x1110051, CODE_FOR_vec_unpacku_hi_v16si },
  { 0x1120045, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0x1120046, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0x1120047, CODE_FOR_vec_unpacku_lo_v4si },
  { 0x112004a, CODE_FOR_vec_unpacku_lo_v32qi },
  { 0x112004b, CODE_FOR_vec_unpacku_lo_v16hi },
  { 0x112004c, CODE_FOR_vec_unpacku_lo_v8si },
  { 0x112004f, CODE_FOR_vec_unpacku_lo_v64qi },
  { 0x1120050, CODE_FOR_vec_unpacku_lo_v32hi },
  { 0x1120051, CODE_FOR_vec_unpacku_lo_v16si },
  { 0x1130047, CODE_FOR_vec_widen_smult_even_v4si },
  { 0x113004c, CODE_FOR_vec_widen_smult_even_v8si },
  { 0x1130051, CODE_FOR_vec_widen_smult_even_v16si },
  { 0x1140045, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0x1140046, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0x1140047, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0x114004a, CODE_FOR_vec_widen_smult_hi_v32qi },
  { 0x114004b, CODE_FOR_vec_widen_smult_hi_v16hi },
  { 0x114004c, CODE_FOR_vec_widen_smult_hi_v8si },
  { 0x1150045, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0x1150046, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0x1150047, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0x115004a, CODE_FOR_vec_widen_smult_lo_v32qi },
  { 0x115004b, CODE_FOR_vec_widen_smult_lo_v16hi },
  { 0x115004c, CODE_FOR_vec_widen_smult_lo_v8si },
  { 0x1160047, CODE_FOR_vec_widen_smult_odd_v4si },
  { 0x116004c, CODE_FOR_vec_widen_smult_odd_v8si },
  { 0x1160051, CODE_FOR_vec_widen_smult_odd_v16si },
  { 0x1190047, CODE_FOR_vec_widen_umult_even_v4si },
  { 0x119004c, CODE_FOR_vec_widen_umult_even_v8si },
  { 0x1190051, CODE_FOR_vec_widen_umult_even_v16si },
  { 0x11a0045, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0x11a0046, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0x11a0047, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0x11a004a, CODE_FOR_vec_widen_umult_hi_v32qi },
  { 0x11a004b, CODE_FOR_vec_widen_umult_hi_v16hi },
  { 0x11a004c, CODE_FOR_vec_widen_umult_hi_v8si },
  { 0x11b0045, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0x11b0046, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0x11b0047, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0x11b004a, CODE_FOR_vec_widen_umult_lo_v32qi },
  { 0x11b004b, CODE_FOR_vec_widen_umult_lo_v16hi },
  { 0x11b004c, CODE_FOR_vec_widen_umult_lo_v8si },
  { 0x11c0047, CODE_FOR_vec_widen_umult_odd_v4si },
  { 0x11c004c, CODE_FOR_vec_widen_umult_odd_v8si },
  { 0x11c0051, CODE_FOR_vec_widen_umult_odd_v16si },
  { 0x127000f, CODE_FOR_atomic_addqi },
  { 0x1270010, CODE_FOR_atomic_addhi },
  { 0x1270011, CODE_FOR_atomic_addsi },
  { 0x1270012, CODE_FOR_atomic_adddi },
  { 0x129000f, CODE_FOR_atomic_andqi },
  { 0x1290010, CODE_FOR_atomic_andhi },
  { 0x1290011, CODE_FOR_atomic_andsi },
  { 0x1290012, CODE_FOR_atomic_anddi },
  { 0x12a0010, CODE_FOR_atomic_bit_test_and_sethi },
  { 0x12a0011, CODE_FOR_atomic_bit_test_and_setsi },
  { 0x12a0012, CODE_FOR_atomic_bit_test_and_setdi },
  { 0x12b0010, CODE_FOR_atomic_bit_test_and_complementhi },
  { 0x12b0011, CODE_FOR_atomic_bit_test_and_complementsi },
  { 0x12b0012, CODE_FOR_atomic_bit_test_and_complementdi },
  { 0x12c0010, CODE_FOR_atomic_bit_test_and_resethi },
  { 0x12c0011, CODE_FOR_atomic_bit_test_and_resetsi },
  { 0x12c0012, CODE_FOR_atomic_bit_test_and_resetdi },
  { 0x12d000f, CODE_FOR_atomic_compare_and_swapqi },
  { 0x12d0010, CODE_FOR_atomic_compare_and_swaphi },
  { 0x12d0011, CODE_FOR_atomic_compare_and_swapsi },
  { 0x12d0012, CODE_FOR_atomic_compare_and_swapdi },
  { 0x12d0013, CODE_FOR_atomic_compare_and_swapti },
  { 0x12e000f, CODE_FOR_atomic_exchangeqi },
  { 0x12e0010, CODE_FOR_atomic_exchangehi },
  { 0x12e0011, CODE_FOR_atomic_exchangesi },
  { 0x12e0012, CODE_FOR_atomic_exchangedi },
  { 0x12f000f, CODE_FOR_atomic_fetch_addqi },
  { 0x12f0010, CODE_FOR_atomic_fetch_addhi },
  { 0x12f0011, CODE_FOR_atomic_fetch_addsi },
  { 0x12f0012, CODE_FOR_atomic_fetch_adddi },
  { 0x135000f, CODE_FOR_atomic_loadqi },
  { 0x1350010, CODE_FOR_atomic_loadhi },
  { 0x1350011, CODE_FOR_atomic_loadsi },
  { 0x1350012, CODE_FOR_atomic_loaddi },
  { 0x139000f, CODE_FOR_atomic_orqi },
  { 0x1390010, CODE_FOR_atomic_orhi },
  { 0x1390011, CODE_FOR_atomic_orsi },
  { 0x1390012, CODE_FOR_atomic_ordi },
  { 0x13a000f, CODE_FOR_atomic_storeqi },
  { 0x13a0010, CODE_FOR_atomic_storehi },
  { 0x13a0011, CODE_FOR_atomic_storesi },
  { 0x13a0012, CODE_FOR_atomic_storedi },
  { 0x13c000f, CODE_FOR_atomic_subqi },
  { 0x13c0010, CODE_FOR_atomic_subhi },
  { 0x13c0011, CODE_FOR_atomic_subsi },
  { 0x13c0012, CODE_FOR_atomic_subdi },
  { 0x13e000f, CODE_FOR_atomic_xorqi },
  { 0x13e0010, CODE_FOR_atomic_xorhi },
  { 0x13e0011, CODE_FOR_atomic_xorsi },
  { 0x13e0012, CODE_FOR_atomic_xordi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendsfdf2;
  ena[7] = HAVE_extendsfxf2;
  ena[8] = HAVE_extenddfxf2;
  ena[9] = HAVE_truncdfsf2;
  ena[10] = HAVE_truncxfsf2;
  ena[11] = HAVE_truncxfdf2;
  ena[12] = HAVE_zero_extendqihi2;
  ena[13] = HAVE_zero_extendqisi2;
  ena[14] = HAVE_zero_extendqidi2;
  ena[15] = HAVE_zero_extendhisi2;
  ena[16] = HAVE_zero_extendhidi2;
  ena[17] = HAVE_zero_extendsidi2;
  ena[18] = HAVE_floathisf2;
  ena[19] = HAVE_floathidf2;
  ena[20] = HAVE_floathixf2;
  ena[21] = HAVE_floatsisf2;
  ena[22] = HAVE_floatsidf2;
  ena[23] = HAVE_floatsixf2;
  ena[24] = HAVE_floatdisf2;
  ena[25] = HAVE_floatdidf2;
  ena[26] = HAVE_floatdixf2;
  ena[27] = HAVE_floatv4siv4sf2;
  ena[28] = HAVE_floatv4siv4df2;
  ena[29] = HAVE_floatv2div2sf2;
  ena[30] = HAVE_floatv2div2df2;
  ena[31] = HAVE_floatv8siv8sf2;
  ena[32] = HAVE_floatv8siv8df2;
  ena[33] = HAVE_floatv4div4sf2;
  ena[34] = HAVE_floatv4div4df2;
  ena[35] = HAVE_floatv16siv16sf2;
  ena[36] = HAVE_floatv8div8sf2;
  ena[37] = HAVE_floatv8div8df2;
  ena[38] = HAVE_floatunsqisf2;
  ena[39] = HAVE_floatunsqidf2;
  ena[40] = HAVE_floatunshisf2;
  ena[41] = HAVE_floatunshidf2;
  ena[42] = HAVE_floatunssisf2;
  ena[43] = HAVE_floatunssidf2;
  ena[44] = HAVE_floatunssixf2;
  ena[45] = HAVE_floatunsdisf2;
  ena[46] = HAVE_floatunsdidf2;
  ena[47] = HAVE_floatunsv4siv4sf2;
  ena[48] = HAVE_floatunsv2div2sf2;
  ena[49] = HAVE_floatunsv2div2df2;
  ena[50] = HAVE_floatunsv8siv8sf2;
  ena[51] = HAVE_floatunsv4div4sf2;
  ena[52] = HAVE_floatunsv4div4df2;
  ena[53] = HAVE_floatunsv16siv16sf2;
  ena[54] = HAVE_floatunsv8div8sf2;
  ena[55] = HAVE_floatunsv8div8df2;
  ena[56] = HAVE_lrintsfsi2;
  ena[57] = HAVE_lrintsfdi2;
  ena[58] = HAVE_lrintdfsi2;
  ena[59] = HAVE_lrintdfdi2;
  ena[60] = HAVE_lrintxfhi2;
  ena[61] = HAVE_lrintxfsi2;
  ena[62] = HAVE_lrintxfdi2;
  ena[63] = HAVE_lroundsfhi2;
  ena[64] = HAVE_lroundsfsi2;
  ena[65] = HAVE_lroundsfdi2;
  ena[66] = HAVE_lrounddfhi2;
  ena[67] = HAVE_lrounddfsi2;
  ena[68] = HAVE_lrounddfdi2;
  ena[69] = HAVE_lroundxfhi2;
  ena[70] = HAVE_lroundxfsi2;
  ena[71] = HAVE_lroundxfdi2;
  ena[72] = HAVE_lfloorsfsi2;
  ena[73] = HAVE_lfloorsfdi2;
  ena[74] = HAVE_lfloordfsi2;
  ena[75] = HAVE_lfloordfdi2;
  ena[76] = HAVE_lfloorxfhi2;
  ena[77] = HAVE_lfloorxfsi2;
  ena[78] = HAVE_lfloorxfdi2;
  ena[79] = HAVE_lceilsfsi2;
  ena[80] = HAVE_lceilsfdi2;
  ena[81] = HAVE_lceildfsi2;
  ena[82] = HAVE_lceildfdi2;
  ena[83] = HAVE_lceilxfhi2;
  ena[84] = HAVE_lceilxfsi2;
  ena[85] = HAVE_lceilxfdi2;
  ena[86] = HAVE_fix_truncsfhi2;
  ena[87] = HAVE_fix_truncsfsi2;
  ena[88] = HAVE_fix_truncsfdi2;
  ena[89] = HAVE_fix_truncdfhi2;
  ena[90] = HAVE_fix_truncdfsi2;
  ena[91] = HAVE_fix_truncdfdi2;
  ena[92] = HAVE_fix_truncxfhi2;
  ena[93] = HAVE_fix_truncxfsi2;
  ena[94] = HAVE_fix_truncxfdi2;
  ena[95] = HAVE_fix_truncv2sfv2di2;
  ena[96] = HAVE_fix_truncv4sfv4si2;
  ena[97] = HAVE_fix_truncv4sfv4di2;
  ena[98] = HAVE_fix_truncv2dfv2di2;
  ena[99] = HAVE_fix_truncv8sfv8si2;
  ena[100] = HAVE_fix_truncv8sfv8di2;
  ena[101] = HAVE_fix_truncv4dfv4si2;
  ena[102] = HAVE_fix_truncv4dfv4di2;
  ena[103] = HAVE_fix_truncv16sfv16si2;
  ena[104] = HAVE_fix_truncv8dfv8si2;
  ena[105] = HAVE_fix_truncv8dfv8di2;
  ena[106] = HAVE_fixuns_truncsfhi2;
  ena[107] = HAVE_fixuns_truncsfsi2;
  ena[108] = HAVE_fixuns_truncsfdi2;
  ena[109] = HAVE_fixuns_truncdfhi2;
  ena[110] = HAVE_fixuns_truncdfsi2;
  ena[111] = HAVE_fixuns_truncdfdi2;
  ena[112] = HAVE_fixuns_truncv2sfv2di2;
  ena[113] = HAVE_fixuns_truncv4sfv4si2;
  ena[114] = HAVE_fixuns_truncv4sfv4di2;
  ena[115] = HAVE_fixuns_truncv2dfv2di2;
  ena[116] = HAVE_fixuns_truncv8sfv8si2;
  ena[117] = HAVE_fixuns_truncv8sfv8di2;
  ena[118] = HAVE_fixuns_truncv4dfv4di2;
  ena[119] = HAVE_fixuns_truncv16sfv16si2;
  ena[120] = HAVE_fixuns_truncv8dfv8si2;
  ena[121] = HAVE_fixuns_truncv8dfv8di2;
  ena[122] = HAVE_mulqihi3;
  ena[123] = HAVE_mulsidi3;
  ena[124] = HAVE_mulditi3;
  ena[125] = HAVE_umulqihi3;
  ena[126] = HAVE_umulsidi3;
  ena[127] = HAVE_umulditi3;
  ena[128] = HAVE_vcondv16qiv16qi;
  ena[129] = HAVE_vcondv8hiv16qi;
  ena[130] = HAVE_vcondv4siv16qi;
  ena[131] = HAVE_vcondv2div16qi;
  ena[132] = HAVE_vcondv4sfv16qi;
  ena[133] = HAVE_vcondv2dfv16qi;
  ena[134] = HAVE_vcondv16qiv8hi;
  ena[135] = HAVE_vcondv8hiv8hi;
  ena[136] = HAVE_vcondv4siv8hi;
  ena[137] = HAVE_vcondv2div8hi;
  ena[138] = HAVE_vcondv4sfv8hi;
  ena[139] = HAVE_vcondv2dfv8hi;
  ena[140] = HAVE_vcondv16qiv4si;
  ena[141] = HAVE_vcondv8hiv4si;
  ena[142] = HAVE_vcondv4siv4si;
  ena[143] = HAVE_vcondv2div4si;
  ena[144] = HAVE_vcondv4sfv4si;
  ena[145] = HAVE_vcondv2dfv4si;
  ena[146] = HAVE_vcondv2div2di;
  ena[147] = HAVE_vcondv2dfv2di;
  ena[148] = HAVE_vcondv32qiv32qi;
  ena[149] = HAVE_vcondv16hiv32qi;
  ena[150] = HAVE_vcondv8siv32qi;
  ena[151] = HAVE_vcondv4div32qi;
  ena[152] = HAVE_vcondv8sfv32qi;
  ena[153] = HAVE_vcondv4dfv32qi;
  ena[154] = HAVE_vcondv32qiv16hi;
  ena[155] = HAVE_vcondv16hiv16hi;
  ena[156] = HAVE_vcondv8siv16hi;
  ena[157] = HAVE_vcondv4div16hi;
  ena[158] = HAVE_vcondv8sfv16hi;
  ena[159] = HAVE_vcondv4dfv16hi;
  ena[160] = HAVE_vcondv32qiv8si;
  ena[161] = HAVE_vcondv16hiv8si;
  ena[162] = HAVE_vcondv8siv8si;
  ena[163] = HAVE_vcondv4div8si;
  ena[164] = HAVE_vcondv8sfv8si;
  ena[165] = HAVE_vcondv4dfv8si;
  ena[166] = HAVE_vcondv32qiv4di;
  ena[167] = HAVE_vcondv16hiv4di;
  ena[168] = HAVE_vcondv8siv4di;
  ena[169] = HAVE_vcondv4div4di;
  ena[170] = HAVE_vcondv8sfv4di;
  ena[171] = HAVE_vcondv4dfv4di;
  ena[172] = HAVE_vcondv64qiv64qi;
  ena[173] = HAVE_vcondv32hiv64qi;
  ena[174] = HAVE_vcondv16siv64qi;
  ena[175] = HAVE_vcondv8div64qi;
  ena[176] = HAVE_vcondv16sfv64qi;
  ena[177] = HAVE_vcondv8dfv64qi;
  ena[178] = HAVE_vcondv64qiv32hi;
  ena[179] = HAVE_vcondv32hiv32hi;
  ena[180] = HAVE_vcondv16siv32hi;
  ena[181] = HAVE_vcondv8div32hi;
  ena[182] = HAVE_vcondv16sfv32hi;
  ena[183] = HAVE_vcondv8dfv32hi;
  ena[184] = HAVE_vcondv64qiv16si;
  ena[185] = HAVE_vcondv32hiv16si;
  ena[186] = HAVE_vcondv16siv16si;
  ena[187] = HAVE_vcondv8div16si;
  ena[188] = HAVE_vcondv16sfv16si;
  ena[189] = HAVE_vcondv8dfv16si;
  ena[190] = HAVE_vcondv64qiv8di;
  ena[191] = HAVE_vcondv32hiv8di;
  ena[192] = HAVE_vcondv16siv8di;
  ena[193] = HAVE_vcondv8div8di;
  ena[194] = HAVE_vcondv16sfv8di;
  ena[195] = HAVE_vcondv8dfv8di;
  ena[196] = HAVE_vcondv16qiv4sf;
  ena[197] = HAVE_vcondv8hiv4sf;
  ena[198] = HAVE_vcondv4siv4sf;
  ena[199] = HAVE_vcondv2div4sf;
  ena[200] = HAVE_vcondv4sfv4sf;
  ena[201] = HAVE_vcondv2dfv4sf;
  ena[202] = HAVE_vcondv16qiv2df;
  ena[203] = HAVE_vcondv8hiv2df;
  ena[204] = HAVE_vcondv4siv2df;
  ena[205] = HAVE_vcondv2div2df;
  ena[206] = HAVE_vcondv4sfv2df;
  ena[207] = HAVE_vcondv2dfv2df;
  ena[208] = HAVE_vcondv32qiv8sf;
  ena[209] = HAVE_vcondv16hiv8sf;
  ena[210] = HAVE_vcondv8siv8sf;
  ena[211] = HAVE_vcondv4div8sf;
  ena[212] = HAVE_vcondv8sfv8sf;
  ena[213] = HAVE_vcondv4dfv8sf;
  ena[214] = HAVE_vcondv32qiv4df;
  ena[215] = HAVE_vcondv16hiv4df;
  ena[216] = HAVE_vcondv8siv4df;
  ena[217] = HAVE_vcondv4div4df;
  ena[218] = HAVE_vcondv8sfv4df;
  ena[219] = HAVE_vcondv4dfv4df;
  ena[220] = HAVE_vcondv64qiv16sf;
  ena[221] = HAVE_vcondv32hiv16sf;
  ena[222] = HAVE_vcondv16siv16sf;
  ena[223] = HAVE_vcondv8div16sf;
  ena[224] = HAVE_vcondv16sfv16sf;
  ena[225] = HAVE_vcondv8dfv16sf;
  ena[226] = HAVE_vcondv64qiv8df;
  ena[227] = HAVE_vcondv32hiv8df;
  ena[228] = HAVE_vcondv16siv8df;
  ena[229] = HAVE_vcondv8div8df;
  ena[230] = HAVE_vcondv16sfv8df;
  ena[231] = HAVE_vcondv8dfv8df;
  ena[232] = HAVE_vconduv16qiv16qi;
  ena[233] = HAVE_vconduv8hiv16qi;
  ena[234] = HAVE_vconduv4siv16qi;
  ena[235] = HAVE_vconduv2div16qi;
  ena[236] = HAVE_vconduv4sfv16qi;
  ena[237] = HAVE_vconduv2dfv16qi;
  ena[238] = HAVE_vconduv16qiv8hi;
  ena[239] = HAVE_vconduv8hiv8hi;
  ena[240] = HAVE_vconduv4siv8hi;
  ena[241] = HAVE_vconduv2div8hi;
  ena[242] = HAVE_vconduv4sfv8hi;
  ena[243] = HAVE_vconduv2dfv8hi;
  ena[244] = HAVE_vconduv16qiv4si;
  ena[245] = HAVE_vconduv8hiv4si;
  ena[246] = HAVE_vconduv4siv4si;
  ena[247] = HAVE_vconduv2div4si;
  ena[248] = HAVE_vconduv4sfv4si;
  ena[249] = HAVE_vconduv2dfv4si;
  ena[250] = HAVE_vconduv2div2di;
  ena[251] = HAVE_vconduv2dfv2di;
  ena[252] = HAVE_vconduv32qiv32qi;
  ena[253] = HAVE_vconduv16hiv32qi;
  ena[254] = HAVE_vconduv8siv32qi;
  ena[255] = HAVE_vconduv4div32qi;
  ena[256] = HAVE_vconduv8sfv32qi;
  ena[257] = HAVE_vconduv4dfv32qi;
  ena[258] = HAVE_vconduv32qiv16hi;
  ena[259] = HAVE_vconduv16hiv16hi;
  ena[260] = HAVE_vconduv8siv16hi;
  ena[261] = HAVE_vconduv4div16hi;
  ena[262] = HAVE_vconduv8sfv16hi;
  ena[263] = HAVE_vconduv4dfv16hi;
  ena[264] = HAVE_vconduv32qiv8si;
  ena[265] = HAVE_vconduv16hiv8si;
  ena[266] = HAVE_vconduv8siv8si;
  ena[267] = HAVE_vconduv4div8si;
  ena[268] = HAVE_vconduv8sfv8si;
  ena[269] = HAVE_vconduv4dfv8si;
  ena[270] = HAVE_vconduv32qiv4di;
  ena[271] = HAVE_vconduv16hiv4di;
  ena[272] = HAVE_vconduv8siv4di;
  ena[273] = HAVE_vconduv4div4di;
  ena[274] = HAVE_vconduv8sfv4di;
  ena[275] = HAVE_vconduv4dfv4di;
  ena[276] = HAVE_vconduv64qiv64qi;
  ena[277] = HAVE_vconduv32hiv64qi;
  ena[278] = HAVE_vconduv16siv64qi;
  ena[279] = HAVE_vconduv8div64qi;
  ena[280] = HAVE_vconduv16sfv64qi;
  ena[281] = HAVE_vconduv8dfv64qi;
  ena[282] = HAVE_vconduv64qiv32hi;
  ena[283] = HAVE_vconduv32hiv32hi;
  ena[284] = HAVE_vconduv16siv32hi;
  ena[285] = HAVE_vconduv8div32hi;
  ena[286] = HAVE_vconduv16sfv32hi;
  ena[287] = HAVE_vconduv8dfv32hi;
  ena[288] = HAVE_vconduv64qiv16si;
  ena[289] = HAVE_vconduv32hiv16si;
  ena[290] = HAVE_vconduv16siv16si;
  ena[291] = HAVE_vconduv8div16si;
  ena[292] = HAVE_vconduv16sfv16si;
  ena[293] = HAVE_vconduv8dfv16si;
  ena[294] = HAVE_vconduv64qiv8di;
  ena[295] = HAVE_vconduv32hiv8di;
  ena[296] = HAVE_vconduv16siv8di;
  ena[297] = HAVE_vconduv8div8di;
  ena[298] = HAVE_vconduv16sfv8di;
  ena[299] = HAVE_vconduv8dfv8di;
  ena[300] = HAVE_vcondeqv2div2di;
  ena[301] = HAVE_vcondeqv2dfv2di;
  ena[302] = HAVE_vcond_mask_v8hiqi;
  ena[303] = HAVE_vcond_mask_v4siqi;
  ena[304] = HAVE_vcond_mask_v2diqi;
  ena[305] = HAVE_vcond_mask_v8siqi;
  ena[306] = HAVE_vcond_mask_v4diqi;
  ena[307] = HAVE_vcond_mask_v8diqi;
  ena[308] = HAVE_vcond_mask_v4sfqi;
  ena[309] = HAVE_vcond_mask_v2dfqi;
  ena[310] = HAVE_vcond_mask_v8sfqi;
  ena[311] = HAVE_vcond_mask_v4dfqi;
  ena[312] = HAVE_vcond_mask_v8dfqi;
  ena[313] = HAVE_vcond_mask_v16qihi;
  ena[314] = HAVE_vcond_mask_v16hihi;
  ena[315] = HAVE_vcond_mask_v16sihi;
  ena[316] = HAVE_vcond_mask_v16sfhi;
  ena[317] = HAVE_vcond_mask_v32qisi;
  ena[318] = HAVE_vcond_mask_v32hisi;
  ena[319] = HAVE_vcond_mask_v64qidi;
  ena[320] = HAVE_vcond_mask_v16qiv16qi;
  ena[321] = HAVE_vcond_mask_v8hiv8hi;
  ena[322] = HAVE_vcond_mask_v4siv4si;
  ena[323] = HAVE_vcond_mask_v4sfv4si;
  ena[324] = HAVE_vcond_mask_v2div2di;
  ena[325] = HAVE_vcond_mask_v2dfv2di;
  ena[326] = HAVE_vcond_mask_v32qiv32qi;
  ena[327] = HAVE_vcond_mask_v16hiv16hi;
  ena[328] = HAVE_vcond_mask_v8siv8si;
  ena[329] = HAVE_vcond_mask_v8sfv8si;
  ena[330] = HAVE_vcond_mask_v4div4di;
  ena[331] = HAVE_vcond_mask_v4dfv4di;
  ena[332] = HAVE_vec_cmpv8hiqi;
  ena[333] = HAVE_vec_cmpv4siqi;
  ena[334] = HAVE_vec_cmpv2diqi;
  ena[335] = HAVE_vec_cmpv8siqi;
  ena[336] = HAVE_vec_cmpv4diqi;
  ena[337] = HAVE_vec_cmpv8diqi;
  ena[338] = HAVE_vec_cmpv4sfqi;
  ena[339] = HAVE_vec_cmpv2dfqi;
  ena[340] = HAVE_vec_cmpv8sfqi;
  ena[341] = HAVE_vec_cmpv4dfqi;
  ena[342] = HAVE_vec_cmpv8dfqi;
  ena[343] = HAVE_vec_cmpv16qihi;
  ena[344] = HAVE_vec_cmpv16hihi;
  ena[345] = HAVE_vec_cmpv16sihi;
  ena[346] = HAVE_vec_cmpv16sfhi;
  ena[347] = HAVE_vec_cmpv32qisi;
  ena[348] = HAVE_vec_cmpv32hisi;
  ena[349] = HAVE_vec_cmpv64qidi;
  ena[350] = HAVE_vec_cmpv16qiv16qi;
  ena[351] = HAVE_vec_cmpv8hiv8hi;
  ena[352] = HAVE_vec_cmpv4siv4si;
  ena[353] = HAVE_vec_cmpv4sfv4si;
  ena[354] = HAVE_vec_cmpv2div2di;
  ena[355] = HAVE_vec_cmpv2dfv2di;
  ena[356] = HAVE_vec_cmpv32qiv32qi;
  ena[357] = HAVE_vec_cmpv16hiv16hi;
  ena[358] = HAVE_vec_cmpv8siv8si;
  ena[359] = HAVE_vec_cmpv8sfv8si;
  ena[360] = HAVE_vec_cmpv4div4di;
  ena[361] = HAVE_vec_cmpv4dfv4di;
  ena[362] = HAVE_vec_cmpuv8hiqi;
  ena[363] = HAVE_vec_cmpuv4siqi;
  ena[364] = HAVE_vec_cmpuv2diqi;
  ena[365] = HAVE_vec_cmpuv8siqi;
  ena[366] = HAVE_vec_cmpuv4diqi;
  ena[367] = HAVE_vec_cmpuv8diqi;
  ena[368] = HAVE_vec_cmpuv16qihi;
  ena[369] = HAVE_vec_cmpuv16hihi;
  ena[370] = HAVE_vec_cmpuv16sihi;
  ena[371] = HAVE_vec_cmpuv32qisi;
  ena[372] = HAVE_vec_cmpuv32hisi;
  ena[373] = HAVE_vec_cmpuv64qidi;
  ena[374] = HAVE_vec_cmpuv16qiv16qi;
  ena[375] = HAVE_vec_cmpuv8hiv8hi;
  ena[376] = HAVE_vec_cmpuv4siv4si;
  ena[377] = HAVE_vec_cmpuv2div2di;
  ena[378] = HAVE_vec_cmpuv32qiv32qi;
  ena[379] = HAVE_vec_cmpuv16hiv16hi;
  ena[380] = HAVE_vec_cmpuv8siv8si;
  ena[381] = HAVE_vec_cmpuv4div4di;
  ena[382] = HAVE_vec_cmpeqv2div2di;
  ena[383] = HAVE_maskloadv8hiqi;
  ena[384] = HAVE_maskloadv4siqi;
  ena[385] = HAVE_maskloadv2diqi;
  ena[386] = HAVE_maskloadv8siqi;
  ena[387] = HAVE_maskloadv4diqi;
  ena[388] = HAVE_maskloadv8diqi;
  ena[389] = HAVE_maskloadv4sfqi;
  ena[390] = HAVE_maskloadv2dfqi;
  ena[391] = HAVE_maskloadv8sfqi;
  ena[392] = HAVE_maskloadv4dfqi;
  ena[393] = HAVE_maskloadv8dfqi;
  ena[394] = HAVE_maskloadv16qihi;
  ena[395] = HAVE_maskloadv16hihi;
  ena[396] = HAVE_maskloadv16sihi;
  ena[397] = HAVE_maskloadv16sfhi;
  ena[398] = HAVE_maskloadv32qisi;
  ena[399] = HAVE_maskloadv32hisi;
  ena[400] = HAVE_maskloadv64qidi;
  ena[401] = HAVE_maskloadv4siv4si;
  ena[402] = HAVE_maskloadv4sfv4si;
  ena[403] = HAVE_maskloadv2div2di;
  ena[404] = HAVE_maskloadv2dfv2di;
  ena[405] = HAVE_maskloadv8siv8si;
  ena[406] = HAVE_maskloadv8sfv8si;
  ena[407] = HAVE_maskloadv4div4di;
  ena[408] = HAVE_maskloadv4dfv4di;
  ena[409] = HAVE_maskstorev8hiqi;
  ena[410] = HAVE_maskstorev4siqi;
  ena[411] = HAVE_maskstorev2diqi;
  ena[412] = HAVE_maskstorev8siqi;
  ena[413] = HAVE_maskstorev4diqi;
  ena[414] = HAVE_maskstorev8diqi;
  ena[415] = HAVE_maskstorev4sfqi;
  ena[416] = HAVE_maskstorev2dfqi;
  ena[417] = HAVE_maskstorev8sfqi;
  ena[418] = HAVE_maskstorev4dfqi;
  ena[419] = HAVE_maskstorev8dfqi;
  ena[420] = HAVE_maskstorev16qihi;
  ena[421] = HAVE_maskstorev16hihi;
  ena[422] = HAVE_maskstorev16sihi;
  ena[423] = HAVE_maskstorev16sfhi;
  ena[424] = HAVE_maskstorev32qisi;
  ena[425] = HAVE_maskstorev32hisi;
  ena[426] = HAVE_maskstorev64qidi;
  ena[427] = HAVE_maskstorev4siv4si;
  ena[428] = HAVE_maskstorev4sfv4si;
  ena[429] = HAVE_maskstorev2div2di;
  ena[430] = HAVE_maskstorev2dfv2di;
  ena[431] = HAVE_maskstorev8siv8si;
  ena[432] = HAVE_maskstorev8sfv8si;
  ena[433] = HAVE_maskstorev4div4di;
  ena[434] = HAVE_maskstorev4dfv4di;
  ena[435] = HAVE_vec_extractv8qiqi;
  ena[436] = HAVE_vec_extractv16qiqi;
  ena[437] = HAVE_vec_extractv32qiqi;
  ena[438] = HAVE_vec_extractv64qiqi;
  ena[439] = HAVE_vec_extractv4hihi;
  ena[440] = HAVE_vec_extractv8hihi;
  ena[441] = HAVE_vec_extractv16hihi;
  ena[442] = HAVE_vec_extractv32hihi;
  ena[443] = HAVE_vec_extractv2sisi;
  ena[444] = HAVE_vec_extractv4sisi;
  ena[445] = HAVE_vec_extractv8sisi;
  ena[446] = HAVE_vec_extractv16sisi;
  ena[447] = HAVE_vec_extractv2didi;
  ena[448] = HAVE_vec_extractv4didi;
  ena[449] = HAVE_vec_extractv8didi;
  ena[450] = HAVE_vec_extractv2titi;
  ena[451] = HAVE_vec_extractv4titi;
  ena[452] = HAVE_vec_extractv2sfsf;
  ena[453] = HAVE_vec_extractv4sfsf;
  ena[454] = HAVE_vec_extractv8sfsf;
  ena[455] = HAVE_vec_extractv16sfsf;
  ena[456] = HAVE_vec_extractv2dfdf;
  ena[457] = HAVE_vec_extractv4dfdf;
  ena[458] = HAVE_vec_extractv8dfdf;
  ena[459] = HAVE_vec_extractv32qiv16qi;
  ena[460] = HAVE_vec_extractv16hiv8hi;
  ena[461] = HAVE_vec_extractv8siv4si;
  ena[462] = HAVE_vec_extractv4div2di;
  ena[463] = HAVE_vec_extractv64qiv32qi;
  ena[464] = HAVE_vec_extractv32hiv16hi;
  ena[465] = HAVE_vec_extractv16siv8si;
  ena[466] = HAVE_vec_extractv8div4di;
  ena[467] = HAVE_vec_extractv8sfv4sf;
  ena[468] = HAVE_vec_extractv4dfv2df;
  ena[469] = HAVE_vec_extractv16sfv8sf;
  ena[470] = HAVE_vec_extractv8dfv4df;
  ena[471] = HAVE_vec_initv8qiqi;
  ena[472] = HAVE_vec_initv16qiqi;
  ena[473] = HAVE_vec_initv32qiqi;
  ena[474] = HAVE_vec_initv64qiqi;
  ena[475] = HAVE_vec_initv4hihi;
  ena[476] = HAVE_vec_initv8hihi;
  ena[477] = HAVE_vec_initv16hihi;
  ena[478] = HAVE_vec_initv32hihi;
  ena[479] = HAVE_vec_initv2sisi;
  ena[480] = HAVE_vec_initv4sisi;
  ena[481] = HAVE_vec_initv8sisi;
  ena[482] = HAVE_vec_initv16sisi;
  ena[483] = HAVE_vec_initv2didi;
  ena[484] = HAVE_vec_initv4didi;
  ena[485] = HAVE_vec_initv8didi;
  ena[486] = HAVE_vec_initv2titi;
  ena[487] = HAVE_vec_initv4titi;
  ena[488] = HAVE_vec_initv2sfsf;
  ena[489] = HAVE_vec_initv4sfsf;
  ena[490] = HAVE_vec_initv8sfsf;
  ena[491] = HAVE_vec_initv16sfsf;
  ena[492] = HAVE_vec_initv2dfdf;
  ena[493] = HAVE_vec_initv4dfdf;
  ena[494] = HAVE_vec_initv8dfdf;
  ena[495] = HAVE_vec_initv16qiv8qi;
  ena[496] = HAVE_vec_initv8hiv4hi;
  ena[497] = HAVE_vec_initv4siv2si;
  ena[498] = HAVE_vec_initv32qiv16qi;
  ena[499] = HAVE_vec_initv16hiv8hi;
  ena[500] = HAVE_vec_initv8siv4si;
  ena[501] = HAVE_vec_initv4div2di;
  ena[502] = HAVE_vec_initv64qiv32qi;
  ena[503] = HAVE_vec_initv32hiv16hi;
  ena[504] = HAVE_vec_initv16siv8si;
  ena[505] = HAVE_vec_initv8div4di;
  ena[506] = HAVE_vec_initv4tiv2ti;
  ena[507] = HAVE_vec_initv4sfv2sf;
  ena[508] = HAVE_vec_initv8sfv4sf;
  ena[509] = HAVE_vec_initv4dfv2df;
  ena[510] = HAVE_vec_initv16sfv8sf;
  ena[511] = HAVE_vec_initv8dfv4df;
  ena[512] = HAVE_addqi3;
  ena[513] = HAVE_addhi3;
  ena[514] = HAVE_addsi3;
  ena[515] = HAVE_adddi3;
  ena[516] = HAVE_addti3;
  ena[517] = HAVE_addsf3;
  ena[518] = HAVE_adddf3;
  ena[519] = HAVE_addxf3;
  ena[520] = HAVE_addv16qi3;
  ena[521] = HAVE_addv8hi3;
  ena[522] = HAVE_addv4si3;
  ena[523] = HAVE_addv2di3;
  ena[524] = HAVE_addv32qi3;
  ena[525] = HAVE_addv16hi3;
  ena[526] = HAVE_addv8si3;
  ena[527] = HAVE_addv4di3;
  ena[528] = HAVE_addv64qi3;
  ena[529] = HAVE_addv32hi3;
  ena[530] = HAVE_addv16si3;
  ena[531] = HAVE_addv8di3;
  ena[532] = HAVE_addv4sf3;
  ena[533] = HAVE_addv2df3;
  ena[534] = HAVE_addv8sf3;
  ena[535] = HAVE_addv4df3;
  ena[536] = HAVE_addv16sf3;
  ena[537] = HAVE_addv8df3;
  ena[538] = HAVE_subqi3;
  ena[539] = HAVE_subhi3;
  ena[540] = HAVE_subsi3;
  ena[541] = HAVE_subdi3;
  ena[542] = HAVE_subti3;
  ena[543] = HAVE_subsf3;
  ena[544] = HAVE_subdf3;
  ena[545] = HAVE_subxf3;
  ena[546] = HAVE_subv16qi3;
  ena[547] = HAVE_subv8hi3;
  ena[548] = HAVE_subv4si3;
  ena[549] = HAVE_subv2di3;
  ena[550] = HAVE_subv32qi3;
  ena[551] = HAVE_subv16hi3;
  ena[552] = HAVE_subv8si3;
  ena[553] = HAVE_subv4di3;
  ena[554] = HAVE_subv64qi3;
  ena[555] = HAVE_subv32hi3;
  ena[556] = HAVE_subv16si3;
  ena[557] = HAVE_subv8di3;
  ena[558] = HAVE_subv4sf3;
  ena[559] = HAVE_subv2df3;
  ena[560] = HAVE_subv8sf3;
  ena[561] = HAVE_subv4df3;
  ena[562] = HAVE_subv16sf3;
  ena[563] = HAVE_subv8df3;
  ena[564] = HAVE_mulqi3;
  ena[565] = HAVE_mulhi3;
  ena[566] = HAVE_mulsi3;
  ena[567] = HAVE_muldi3;
  ena[568] = HAVE_mulsf3;
  ena[569] = HAVE_muldf3;
  ena[570] = HAVE_mulxf3;
  ena[571] = HAVE_mulv16qi3;
  ena[572] = HAVE_mulv8hi3;
  ena[573] = HAVE_mulv4si3;
  ena[574] = HAVE_mulv2di3;
  ena[575] = HAVE_mulv32qi3;
  ena[576] = HAVE_mulv16hi3;
  ena[577] = HAVE_mulv8si3;
  ena[578] = HAVE_mulv4di3;
  ena[579] = HAVE_mulv64qi3;
  ena[580] = HAVE_mulv32hi3;
  ena[581] = HAVE_mulv16si3;
  ena[582] = HAVE_mulv8di3;
  ena[583] = HAVE_mulv4sf3;
  ena[584] = HAVE_mulv2df3;
  ena[585] = HAVE_mulv8sf3;
  ena[586] = HAVE_mulv4df3;
  ena[587] = HAVE_mulv16sf3;
  ena[588] = HAVE_mulv8df3;
  ena[589] = HAVE_divsf3;
  ena[590] = HAVE_divdf3;
  ena[591] = HAVE_divxf3;
  ena[592] = HAVE_divv4sf3;
  ena[593] = HAVE_divv2df3;
  ena[594] = HAVE_divv8sf3;
  ena[595] = HAVE_divv4df3;
  ena[596] = HAVE_divv16sf3;
  ena[597] = HAVE_divv8df3;
  ena[598] = HAVE_divmodqi4;
  ena[599] = HAVE_divmodhi4;
  ena[600] = HAVE_divmodsi4;
  ena[601] = HAVE_divmoddi4;
  ena[602] = HAVE_udivmodqi4;
  ena[603] = HAVE_udivmodhi4;
  ena[604] = HAVE_udivmodsi4;
  ena[605] = HAVE_udivmoddi4;
  ena[606] = HAVE_andqi3;
  ena[607] = HAVE_andhi3;
  ena[608] = HAVE_andsi3;
  ena[609] = HAVE_anddi3;
  ena[610] = HAVE_andtf3;
  ena[611] = HAVE_andv16qi3;
  ena[612] = HAVE_andv8hi3;
  ena[613] = HAVE_andv4si3;
  ena[614] = HAVE_andv2di3;
  ena[615] = HAVE_andv32qi3;
  ena[616] = HAVE_andv16hi3;
  ena[617] = HAVE_andv8si3;
  ena[618] = HAVE_andv4di3;
  ena[619] = HAVE_andv64qi3;
  ena[620] = HAVE_andv32hi3;
  ena[621] = HAVE_andv16si3;
  ena[622] = HAVE_andv8di3;
  ena[623] = HAVE_andv4sf3;
  ena[624] = HAVE_andv2df3;
  ena[625] = HAVE_andv8sf3;
  ena[626] = HAVE_andv4df3;
  ena[627] = HAVE_andv16sf3;
  ena[628] = HAVE_andv8df3;
  ena[629] = HAVE_iorqi3;
  ena[630] = HAVE_iorhi3;
  ena[631] = HAVE_iorsi3;
  ena[632] = HAVE_iordi3;
  ena[633] = HAVE_iortf3;
  ena[634] = HAVE_iorv16qi3;
  ena[635] = HAVE_iorv8hi3;
  ena[636] = HAVE_iorv4si3;
  ena[637] = HAVE_iorv2di3;
  ena[638] = HAVE_iorv32qi3;
  ena[639] = HAVE_iorv16hi3;
  ena[640] = HAVE_iorv8si3;
  ena[641] = HAVE_iorv4di3;
  ena[642] = HAVE_iorv64qi3;
  ena[643] = HAVE_iorv32hi3;
  ena[644] = HAVE_iorv16si3;
  ena[645] = HAVE_iorv8di3;
  ena[646] = HAVE_iorv4sf3;
  ena[647] = HAVE_iorv2df3;
  ena[648] = HAVE_iorv8sf3;
  ena[649] = HAVE_iorv4df3;
  ena[650] = HAVE_iorv16sf3;
  ena[651] = HAVE_iorv8df3;
  ena[652] = HAVE_xorqi3;
  ena[653] = HAVE_xorhi3;
  ena[654] = HAVE_xorsi3;
  ena[655] = HAVE_xordi3;
  ena[656] = HAVE_xortf3;
  ena[657] = HAVE_xorv16qi3;
  ena[658] = HAVE_xorv8hi3;
  ena[659] = HAVE_xorv4si3;
  ena[660] = HAVE_xorv2di3;
  ena[661] = HAVE_xorv32qi3;
  ena[662] = HAVE_xorv16hi3;
  ena[663] = HAVE_xorv8si3;
  ena[664] = HAVE_xorv4di3;
  ena[665] = HAVE_xorv64qi3;
  ena[666] = HAVE_xorv32hi3;
  ena[667] = HAVE_xorv16si3;
  ena[668] = HAVE_xorv8di3;
  ena[669] = HAVE_xorv4sf3;
  ena[670] = HAVE_xorv2df3;
  ena[671] = HAVE_xorv8sf3;
  ena[672] = HAVE_xorv4df3;
  ena[673] = HAVE_xorv16sf3;
  ena[674] = HAVE_xorv8df3;
  ena[675] = HAVE_ashlqi3;
  ena[676] = HAVE_ashlhi3;
  ena[677] = HAVE_ashlsi3;
  ena[678] = HAVE_ashldi3;
  ena[679] = HAVE_ashlti3;
  ena[680] = HAVE_ashlv16qi3;
  ena[681] = HAVE_ashlv8hi3;
  ena[682] = HAVE_ashlv4si3;
  ena[683] = HAVE_ashlv2di3;
  ena[684] = HAVE_ashlv32qi3;
  ena[685] = HAVE_ashlv16hi3;
  ena[686] = HAVE_ashlv8si3;
  ena[687] = HAVE_ashlv4di3;
  ena[688] = HAVE_ashlv64qi3;
  ena[689] = HAVE_ashlv32hi3;
  ena[690] = HAVE_ashlv16si3;
  ena[691] = HAVE_ashlv8di3;
  ena[692] = HAVE_ashrqi3;
  ena[693] = HAVE_ashrhi3;
  ena[694] = HAVE_ashrsi3;
  ena[695] = HAVE_ashrdi3;
  ena[696] = HAVE_ashrti3;
  ena[697] = HAVE_ashrv16qi3;
  ena[698] = HAVE_ashrv8hi3;
  ena[699] = HAVE_ashrv4si3;
  ena[700] = HAVE_ashrv2di3;
  ena[701] = HAVE_ashrv32qi3;
  ena[702] = HAVE_ashrv16hi3;
  ena[703] = HAVE_ashrv8si3;
  ena[704] = HAVE_ashrv4di3;
  ena[705] = HAVE_ashrv64qi3;
  ena[706] = HAVE_ashrv32hi3;
  ena[707] = HAVE_ashrv16si3;
  ena[708] = HAVE_ashrv8di3;
  ena[709] = HAVE_lshrqi3;
  ena[710] = HAVE_lshrhi3;
  ena[711] = HAVE_lshrsi3;
  ena[712] = HAVE_lshrdi3;
  ena[713] = HAVE_lshrti3;
  ena[714] = HAVE_lshrv16qi3;
  ena[715] = HAVE_lshrv8hi3;
  ena[716] = HAVE_lshrv4si3;
  ena[717] = HAVE_lshrv2di3;
  ena[718] = HAVE_lshrv32qi3;
  ena[719] = HAVE_lshrv16hi3;
  ena[720] = HAVE_lshrv8si3;
  ena[721] = HAVE_lshrv4di3;
  ena[722] = HAVE_lshrv64qi3;
  ena[723] = HAVE_lshrv32hi3;
  ena[724] = HAVE_lshrv16si3;
  ena[725] = HAVE_lshrv8di3;
  ena[726] = HAVE_rotlqi3;
  ena[727] = HAVE_rotlhi3;
  ena[728] = HAVE_rotlsi3;
  ena[729] = HAVE_rotldi3;
  ena[730] = HAVE_rotlti3;
  ena[731] = HAVE_rotlv16qi3;
  ena[732] = HAVE_rotlv8hi3;
  ena[733] = HAVE_rotlv4si3;
  ena[734] = HAVE_rotlv2di3;
  ena[735] = HAVE_rotrqi3;
  ena[736] = HAVE_rotrhi3;
  ena[737] = HAVE_rotrsi3;
  ena[738] = HAVE_rotrdi3;
  ena[739] = HAVE_rotrti3;
  ena[740] = HAVE_rotrv16qi3;
  ena[741] = HAVE_rotrv8hi3;
  ena[742] = HAVE_rotrv4si3;
  ena[743] = HAVE_rotrv2di3;
  ena[744] = HAVE_vashlv16qi3;
  ena[745] = HAVE_vashlv8hi3;
  ena[746] = HAVE_vashlv4si3;
  ena[747] = HAVE_vashlv2di3;
  ena[748] = HAVE_vashlv8si3;
  ena[749] = HAVE_vashlv4di3;
  ena[750] = HAVE_vashlv16si3;
  ena[751] = HAVE_vashlv8di3;
  ena[752] = HAVE_vashrv16qi3;
  ena[753] = HAVE_vashrv8hi3;
  ena[754] = HAVE_vashrv4si3;
  ena[755] = HAVE_vashrv2di3;
  ena[756] = HAVE_vashrv8si3;
  ena[757] = HAVE_vashrv16si3;
  ena[758] = HAVE_vlshrv16qi3;
  ena[759] = HAVE_vlshrv8hi3;
  ena[760] = HAVE_vlshrv4si3;
  ena[761] = HAVE_vlshrv2di3;
  ena[762] = HAVE_vlshrv8si3;
  ena[763] = HAVE_vlshrv4di3;
  ena[764] = HAVE_vlshrv16si3;
  ena[765] = HAVE_vlshrv8di3;
  ena[766] = HAVE_vrotlv16qi3;
  ena[767] = HAVE_vrotlv8hi3;
  ena[768] = HAVE_vrotlv4si3;
  ena[769] = HAVE_vrotlv2di3;
  ena[770] = HAVE_vrotrv16qi3;
  ena[771] = HAVE_vrotrv8hi3;
  ena[772] = HAVE_vrotrv4si3;
  ena[773] = HAVE_vrotrv2di3;
  ena[774] = HAVE_sminsf3;
  ena[775] = HAVE_smindf3;
  ena[776] = HAVE_sminv16qi3;
  ena[777] = HAVE_sminv8hi3;
  ena[778] = HAVE_sminv4si3;
  ena[779] = HAVE_sminv2di3;
  ena[780] = HAVE_sminv32qi3;
  ena[781] = HAVE_sminv16hi3;
  ena[782] = HAVE_sminv8si3;
  ena[783] = HAVE_sminv4di3;
  ena[784] = HAVE_sminv64qi3;
  ena[785] = HAVE_sminv32hi3;
  ena[786] = HAVE_sminv16si3;
  ena[787] = HAVE_sminv8di3;
  ena[788] = HAVE_sminv4sf3;
  ena[789] = HAVE_sminv2df3;
  ena[790] = HAVE_sminv8sf3;
  ena[791] = HAVE_sminv4df3;
  ena[792] = HAVE_sminv16sf3;
  ena[793] = HAVE_sminv8df3;
  ena[794] = HAVE_smaxsf3;
  ena[795] = HAVE_smaxdf3;
  ena[796] = HAVE_smaxv16qi3;
  ena[797] = HAVE_smaxv8hi3;
  ena[798] = HAVE_smaxv4si3;
  ena[799] = HAVE_smaxv2di3;
  ena[800] = HAVE_smaxv32qi3;
  ena[801] = HAVE_smaxv16hi3;
  ena[802] = HAVE_smaxv8si3;
  ena[803] = HAVE_smaxv4di3;
  ena[804] = HAVE_smaxv64qi3;
  ena[805] = HAVE_smaxv32hi3;
  ena[806] = HAVE_smaxv16si3;
  ena[807] = HAVE_smaxv8di3;
  ena[808] = HAVE_smaxv4sf3;
  ena[809] = HAVE_smaxv2df3;
  ena[810] = HAVE_smaxv8sf3;
  ena[811] = HAVE_smaxv4df3;
  ena[812] = HAVE_smaxv16sf3;
  ena[813] = HAVE_smaxv8df3;
  ena[814] = HAVE_uminv16qi3;
  ena[815] = HAVE_uminv8hi3;
  ena[816] = HAVE_uminv4si3;
  ena[817] = HAVE_uminv2di3;
  ena[818] = HAVE_uminv32qi3;
  ena[819] = HAVE_uminv16hi3;
  ena[820] = HAVE_uminv8si3;
  ena[821] = HAVE_uminv4di3;
  ena[822] = HAVE_uminv64qi3;
  ena[823] = HAVE_uminv32hi3;
  ena[824] = HAVE_uminv16si3;
  ena[825] = HAVE_uminv8di3;
  ena[826] = HAVE_umaxv16qi3;
  ena[827] = HAVE_umaxv8hi3;
  ena[828] = HAVE_umaxv4si3;
  ena[829] = HAVE_umaxv2di3;
  ena[830] = HAVE_umaxv32qi3;
  ena[831] = HAVE_umaxv16hi3;
  ena[832] = HAVE_umaxv8si3;
  ena[833] = HAVE_umaxv4di3;
  ena[834] = HAVE_umaxv64qi3;
  ena[835] = HAVE_umaxv32hi3;
  ena[836] = HAVE_umaxv16si3;
  ena[837] = HAVE_umaxv8di3;
  ena[838] = HAVE_negqi2;
  ena[839] = HAVE_neghi2;
  ena[840] = HAVE_negsi2;
  ena[841] = HAVE_negdi2;
  ena[842] = HAVE_negti2;
  ena[843] = HAVE_negsf2;
  ena[844] = HAVE_negdf2;
  ena[845] = HAVE_negxf2;
  ena[846] = HAVE_negtf2;
  ena[847] = HAVE_negv16qi2;
  ena[848] = HAVE_negv8hi2;
  ena[849] = HAVE_negv4si2;
  ena[850] = HAVE_negv2di2;
  ena[851] = HAVE_negv32qi2;
  ena[852] = HAVE_negv16hi2;
  ena[853] = HAVE_negv8si2;
  ena[854] = HAVE_negv4di2;
  ena[855] = HAVE_negv64qi2;
  ena[856] = HAVE_negv32hi2;
  ena[857] = HAVE_negv16si2;
  ena[858] = HAVE_negv8di2;
  ena[859] = HAVE_negv4sf2;
  ena[860] = HAVE_negv2df2;
  ena[861] = HAVE_negv8sf2;
  ena[862] = HAVE_negv4df2;
  ena[863] = HAVE_negv16sf2;
  ena[864] = HAVE_negv8df2;
  ena[865] = HAVE_abssf2;
  ena[866] = HAVE_absdf2;
  ena[867] = HAVE_absxf2;
  ena[868] = HAVE_abstf2;
  ena[869] = HAVE_absv16qi2;
  ena[870] = HAVE_absv8hi2;
  ena[871] = HAVE_absv4si2;
  ena[872] = HAVE_absv2di2;
  ena[873] = HAVE_absv32qi2;
  ena[874] = HAVE_absv16hi2;
  ena[875] = HAVE_absv8si2;
  ena[876] = HAVE_absv4di2;
  ena[877] = HAVE_absv64qi2;
  ena[878] = HAVE_absv32hi2;
  ena[879] = HAVE_absv16si2;
  ena[880] = HAVE_absv8di2;
  ena[881] = HAVE_absv4sf2;
  ena[882] = HAVE_absv2df2;
  ena[883] = HAVE_absv8sf2;
  ena[884] = HAVE_absv4df2;
  ena[885] = HAVE_absv16sf2;
  ena[886] = HAVE_absv8df2;
  ena[887] = HAVE_one_cmplqi2;
  ena[888] = HAVE_one_cmplhi2;
  ena[889] = HAVE_one_cmplsi2;
  ena[890] = HAVE_one_cmpldi2;
  ena[891] = HAVE_one_cmplv16qi2;
  ena[892] = HAVE_one_cmplv8hi2;
  ena[893] = HAVE_one_cmplv4si2;
  ena[894] = HAVE_one_cmplv2di2;
  ena[895] = HAVE_one_cmplv32qi2;
  ena[896] = HAVE_one_cmplv16hi2;
  ena[897] = HAVE_one_cmplv8si2;
  ena[898] = HAVE_one_cmplv4di2;
  ena[899] = HAVE_one_cmplv64qi2;
  ena[900] = HAVE_one_cmplv32hi2;
  ena[901] = HAVE_one_cmplv16si2;
  ena[902] = HAVE_one_cmplv8di2;
  ena[903] = HAVE_bswaphi2;
  ena[904] = HAVE_bswapsi2;
  ena[905] = HAVE_bswapdi2;
  ena[906] = HAVE_ffssi2;
  ena[907] = HAVE_ffsdi2;
  ena[908] = HAVE_clzsi2;
  ena[909] = HAVE_clzdi2;
  ena[910] = HAVE_clzv4si2;
  ena[911] = HAVE_clzv2di2;
  ena[912] = HAVE_clzv8si2;
  ena[913] = HAVE_clzv4di2;
  ena[914] = HAVE_clzv16si2;
  ena[915] = HAVE_clzv8di2;
  ena[916] = HAVE_ctzsi2;
  ena[917] = HAVE_ctzdi2;
  ena[918] = HAVE_popcounthi2;
  ena[919] = HAVE_popcountsi2;
  ena[920] = HAVE_popcountdi2;
  ena[921] = HAVE_paritysi2;
  ena[922] = HAVE_paritydi2;
  ena[923] = HAVE_sqrtsf2;
  ena[924] = HAVE_sqrtdf2;
  ena[925] = HAVE_sqrtxf2;
  ena[926] = HAVE_sqrtv4sf2;
  ena[927] = HAVE_sqrtv2df2;
  ena[928] = HAVE_sqrtv8sf2;
  ena[929] = HAVE_sqrtv4df2;
  ena[930] = HAVE_sqrtv16sf2;
  ena[931] = HAVE_sqrtv8df2;
  ena[932] = HAVE_movqi;
  ena[933] = HAVE_movhi;
  ena[934] = HAVE_movsi;
  ena[935] = HAVE_movdi;
  ena[936] = HAVE_movti;
  ena[937] = HAVE_movoi;
  ena[938] = HAVE_movxi;
  ena[939] = HAVE_movsf;
  ena[940] = HAVE_movdf;
  ena[941] = HAVE_movxf;
  ena[942] = HAVE_movtf;
  ena[943] = HAVE_movcdi;
  ena[944] = HAVE_movv8qi;
  ena[945] = HAVE_movv4hi;
  ena[946] = HAVE_movv2si;
  ena[947] = HAVE_movv1di;
  ena[948] = HAVE_movv16qi;
  ena[949] = HAVE_movv8hi;
  ena[950] = HAVE_movv4si;
  ena[951] = HAVE_movv2di;
  ena[952] = HAVE_movv1ti;
  ena[953] = HAVE_movv32qi;
  ena[954] = HAVE_movv16hi;
  ena[955] = HAVE_movv8si;
  ena[956] = HAVE_movv4di;
  ena[957] = HAVE_movv2ti;
  ena[958] = HAVE_movv64qi;
  ena[959] = HAVE_movv32hi;
  ena[960] = HAVE_movv16si;
  ena[961] = HAVE_movv8di;
  ena[962] = HAVE_movv4ti;
  ena[963] = HAVE_movv64si;
  ena[964] = HAVE_movv2sf;
  ena[965] = HAVE_movv4sf;
  ena[966] = HAVE_movv2df;
  ena[967] = HAVE_movv8sf;
  ena[968] = HAVE_movv4df;
  ena[969] = HAVE_movv16sf;
  ena[970] = HAVE_movv8df;
  ena[971] = HAVE_movv64sf;
  ena[972] = HAVE_movstrictqi;
  ena[973] = HAVE_movstricthi;
  ena[974] = HAVE_movmisalignv8qi;
  ena[975] = HAVE_movmisalignv4hi;
  ena[976] = HAVE_movmisalignv2si;
  ena[977] = HAVE_movmisalignv1di;
  ena[978] = HAVE_movmisalignv16qi;
  ena[979] = HAVE_movmisalignv8hi;
  ena[980] = HAVE_movmisalignv4si;
  ena[981] = HAVE_movmisalignv2di;
  ena[982] = HAVE_movmisalignv1ti;
  ena[983] = HAVE_movmisalignv32qi;
  ena[984] = HAVE_movmisalignv16hi;
  ena[985] = HAVE_movmisalignv8si;
  ena[986] = HAVE_movmisalignv4di;
  ena[987] = HAVE_movmisalignv2ti;
  ena[988] = HAVE_movmisalignv64qi;
  ena[989] = HAVE_movmisalignv32hi;
  ena[990] = HAVE_movmisalignv16si;
  ena[991] = HAVE_movmisalignv8di;
  ena[992] = HAVE_movmisalignv4ti;
  ena[993] = HAVE_movmisalignv2sf;
  ena[994] = HAVE_movmisalignv4sf;
  ena[995] = HAVE_movmisalignv2df;
  ena[996] = HAVE_movmisalignv8sf;
  ena[997] = HAVE_movmisalignv4df;
  ena[998] = HAVE_movmisalignv16sf;
  ena[999] = HAVE_movmisalignv8df;
  ena[1000] = HAVE_storentsi;
  ena[1001] = HAVE_storentdi;
  ena[1002] = HAVE_storentsf;
  ena[1003] = HAVE_storentdf;
  ena[1004] = HAVE_storentv2di;
  ena[1005] = HAVE_storentv4di;
  ena[1006] = HAVE_storentv8di;
  ena[1007] = HAVE_storentv4sf;
  ena[1008] = HAVE_storentv2df;
  ena[1009] = HAVE_storentv8sf;
  ena[1010] = HAVE_storentv4df;
  ena[1011] = HAVE_storentv16sf;
  ena[1012] = HAVE_storentv8df;
  ena[1013] = HAVE_insvhi;
  ena[1014] = HAVE_insvsi;
  ena[1015] = HAVE_insvdi;
  ena[1016] = HAVE_extvhi;
  ena[1017] = HAVE_extvsi;
  ena[1018] = HAVE_extzvhi;
  ena[1019] = HAVE_extzvsi;
  ena[1020] = HAVE_extzvdi;
  ena[1021] = HAVE_cbranchcc4;
  ena[1022] = HAVE_cbranchqi4;
  ena[1023] = HAVE_cbranchhi4;
  ena[1024] = HAVE_cbranchsi4;
  ena[1025] = HAVE_cbranchdi4;
  ena[1026] = HAVE_cbranchti4;
  ena[1027] = HAVE_cbranchsf4;
  ena[1028] = HAVE_cbranchdf4;
  ena[1029] = HAVE_cbranchxf4;
  ena[1030] = HAVE_cbranchv4si4;
  ena[1031] = HAVE_cbranchv2di4;
  ena[1032] = HAVE_cbranchv8si4;
  ena[1033] = HAVE_cbranchv4di4;
  ena[1034] = HAVE_addqicc;
  ena[1035] = HAVE_addhicc;
  ena[1036] = HAVE_addsicc;
  ena[1037] = HAVE_adddicc;
  ena[1038] = HAVE_movqicc;
  ena[1039] = HAVE_movhicc;
  ena[1040] = HAVE_movsicc;
  ena[1041] = HAVE_movdicc;
  ena[1042] = HAVE_movsfcc;
  ena[1043] = HAVE_movdfcc;
  ena[1044] = HAVE_movxfcc;
  ena[1045] = HAVE_cstorecc4;
  ena[1046] = HAVE_cstoreqi4;
  ena[1047] = HAVE_cstorehi4;
  ena[1048] = HAVE_cstoresi4;
  ena[1049] = HAVE_cstoredi4;
  ena[1050] = HAVE_cstoresf4;
  ena[1051] = HAVE_cstoredf4;
  ena[1052] = HAVE_cstorexf4;
  ena[1053] = HAVE_addvqi4;
  ena[1054] = HAVE_addvhi4;
  ena[1055] = HAVE_addvsi4;
  ena[1056] = HAVE_addvdi4;
  ena[1057] = HAVE_subvqi4;
  ena[1058] = HAVE_subvhi4;
  ena[1059] = HAVE_subvsi4;
  ena[1060] = HAVE_subvdi4;
  ena[1061] = HAVE_mulvqi4;
  ena[1062] = HAVE_mulvhi4;
  ena[1063] = HAVE_mulvsi4;
  ena[1064] = HAVE_mulvdi4;
  ena[1065] = HAVE_uaddvqi4;
  ena[1066] = HAVE_uaddvhi4;
  ena[1067] = HAVE_uaddvsi4;
  ena[1068] = HAVE_uaddvdi4;
  ena[1069] = HAVE_usubvqi4;
  ena[1070] = HAVE_usubvhi4;
  ena[1071] = HAVE_usubvsi4;
  ena[1072] = HAVE_usubvdi4;
  ena[1073] = HAVE_umulvqi4;
  ena[1074] = HAVE_umulvhi4;
  ena[1075] = HAVE_umulvsi4;
  ena[1076] = HAVE_umulvdi4;
  ena[1077] = HAVE_negvqi3;
  ena[1078] = HAVE_negvhi3;
  ena[1079] = HAVE_negvsi3;
  ena[1080] = HAVE_negvdi3;
  ena[1081] = HAVE_smulsi3_highpart;
  ena[1082] = HAVE_smuldi3_highpart;
  ena[1083] = HAVE_smulv8hi3_highpart;
  ena[1084] = HAVE_smulv16hi3_highpart;
  ena[1085] = HAVE_smulv32hi3_highpart;
  ena[1086] = HAVE_umulsi3_highpart;
  ena[1087] = HAVE_umuldi3_highpart;
  ena[1088] = HAVE_umulv8hi3_highpart;
  ena[1089] = HAVE_umulv16hi3_highpart;
  ena[1090] = HAVE_umulv32hi3_highpart;
  ena[1091] = HAVE_cmpstrnsi;
  ena[1092] = HAVE_movmemsi;
  ena[1093] = HAVE_movmemdi;
  ena[1094] = HAVE_setmemsi;
  ena[1095] = HAVE_setmemdi;
  ena[1096] = HAVE_strlensi;
  ena[1097] = HAVE_strlendi;
  ena[1098] = HAVE_fmasf4;
  ena[1099] = HAVE_fmadf4;
  ena[1100] = HAVE_fmav4sf4;
  ena[1101] = HAVE_fmav2df4;
  ena[1102] = HAVE_fmav8sf4;
  ena[1103] = HAVE_fmav4df4;
  ena[1104] = HAVE_fmav16sf4;
  ena[1105] = HAVE_fmav8df4;
  ena[1106] = HAVE_fmssf4;
  ena[1107] = HAVE_fmsdf4;
  ena[1108] = HAVE_fmsv4sf4;
  ena[1109] = HAVE_fmsv2df4;
  ena[1110] = HAVE_fmsv8sf4;
  ena[1111] = HAVE_fmsv4df4;
  ena[1112] = HAVE_fmsv16sf4;
  ena[1113] = HAVE_fmsv8df4;
  ena[1114] = HAVE_fnmasf4;
  ena[1115] = HAVE_fnmadf4;
  ena[1116] = HAVE_fnmav4sf4;
  ena[1117] = HAVE_fnmav2df4;
  ena[1118] = HAVE_fnmav8sf4;
  ena[1119] = HAVE_fnmav4df4;
  ena[1120] = HAVE_fnmav16sf4;
  ena[1121] = HAVE_fnmav8df4;
  ena[1122] = HAVE_fnmssf4;
  ena[1123] = HAVE_fnmsdf4;
  ena[1124] = HAVE_fnmsv4sf4;
  ena[1125] = HAVE_fnmsv2df4;
  ena[1126] = HAVE_fnmsv8sf4;
  ena[1127] = HAVE_fnmsv4df4;
  ena[1128] = HAVE_fnmsv16sf4;
  ena[1129] = HAVE_fnmsv8df4;
  ena[1130] = HAVE_rintsf2;
  ena[1131] = HAVE_rintdf2;
  ena[1132] = HAVE_rintxf2;
  ena[1133] = HAVE_roundsf2;
  ena[1134] = HAVE_rounddf2;
  ena[1135] = HAVE_roundxf2;
  ena[1136] = HAVE_roundv4sf2;
  ena[1137] = HAVE_roundv2df2;
  ena[1138] = HAVE_roundv8sf2;
  ena[1139] = HAVE_roundv4df2;
  ena[1140] = HAVE_roundv16sf2;
  ena[1141] = HAVE_roundv8df2;
  ena[1142] = HAVE_floorsf2;
  ena[1143] = HAVE_floordf2;
  ena[1144] = HAVE_floorxf2;
  ena[1145] = HAVE_ceilsf2;
  ena[1146] = HAVE_ceildf2;
  ena[1147] = HAVE_ceilxf2;
  ena[1148] = HAVE_btruncsf2;
  ena[1149] = HAVE_btruncdf2;
  ena[1150] = HAVE_btruncxf2;
  ena[1151] = HAVE_nearbyintsf2;
  ena[1152] = HAVE_nearbyintdf2;
  ena[1153] = HAVE_nearbyintxf2;
  ena[1154] = HAVE_acossf2;
  ena[1155] = HAVE_acosdf2;
  ena[1156] = HAVE_acosxf2;
  ena[1157] = HAVE_acoshsf2;
  ena[1158] = HAVE_acoshdf2;
  ena[1159] = HAVE_acoshxf2;
  ena[1160] = HAVE_asinsf2;
  ena[1161] = HAVE_asindf2;
  ena[1162] = HAVE_asinxf2;
  ena[1163] = HAVE_asinhsf2;
  ena[1164] = HAVE_asinhdf2;
  ena[1165] = HAVE_asinhxf2;
  ena[1166] = HAVE_atan2sf3;
  ena[1167] = HAVE_atan2df3;
  ena[1168] = HAVE_atan2xf3;
  ena[1169] = HAVE_atansf2;
  ena[1170] = HAVE_atandf2;
  ena[1171] = HAVE_atanxf2;
  ena[1172] = HAVE_atanhsf2;
  ena[1173] = HAVE_atanhdf2;
  ena[1174] = HAVE_atanhxf2;
  ena[1175] = HAVE_copysignsf3;
  ena[1176] = HAVE_copysigndf3;
  ena[1177] = HAVE_copysigntf3;
  ena[1178] = HAVE_copysignv4sf3;
  ena[1179] = HAVE_copysignv2df3;
  ena[1180] = HAVE_copysignv8sf3;
  ena[1181] = HAVE_copysignv4df3;
  ena[1182] = HAVE_copysignv16sf3;
  ena[1183] = HAVE_copysignv8df3;
  ena[1184] = HAVE_xorsignsf3;
  ena[1185] = HAVE_xorsigndf3;
  ena[1186] = HAVE_xorsignv4sf3;
  ena[1187] = HAVE_xorsignv2df3;
  ena[1188] = HAVE_xorsignv8sf3;
  ena[1189] = HAVE_xorsignv4df3;
  ena[1190] = HAVE_xorsignv16sf3;
  ena[1191] = HAVE_xorsignv8df3;
  ena[1192] = HAVE_cossf2;
  ena[1193] = HAVE_cosdf2;
  ena[1194] = HAVE_cosxf2;
  ena[1195] = HAVE_coshsf2;
  ena[1196] = HAVE_coshdf2;
  ena[1197] = HAVE_coshxf2;
  ena[1198] = HAVE_exp10sf2;
  ena[1199] = HAVE_exp10df2;
  ena[1200] = HAVE_exp10xf2;
  ena[1201] = HAVE_exp2sf2;
  ena[1202] = HAVE_exp2df2;
  ena[1203] = HAVE_exp2xf2;
  ena[1204] = HAVE_expsf2;
  ena[1205] = HAVE_expdf2;
  ena[1206] = HAVE_expxf2;
  ena[1207] = HAVE_expm1sf2;
  ena[1208] = HAVE_expm1df2;
  ena[1209] = HAVE_expm1xf2;
  ena[1210] = HAVE_fmodsf3;
  ena[1211] = HAVE_fmoddf3;
  ena[1212] = HAVE_fmodxf3;
  ena[1213] = HAVE_hypotsf3;
  ena[1214] = HAVE_hypotdf3;
  ena[1215] = HAVE_ilogbsf2;
  ena[1216] = HAVE_ilogbdf2;
  ena[1217] = HAVE_ilogbxf2;
  ena[1218] = HAVE_ldexpsf3;
  ena[1219] = HAVE_ldexpdf3;
  ena[1220] = HAVE_ldexpxf3;
  ena[1221] = HAVE_log10sf2;
  ena[1222] = HAVE_log10df2;
  ena[1223] = HAVE_log10xf2;
  ena[1224] = HAVE_log1psf2;
  ena[1225] = HAVE_log1pdf2;
  ena[1226] = HAVE_log1pxf2;
  ena[1227] = HAVE_log2sf2;
  ena[1228] = HAVE_log2df2;
  ena[1229] = HAVE_log2xf2;
  ena[1230] = HAVE_logsf2;
  ena[1231] = HAVE_logdf2;
  ena[1232] = HAVE_logxf2;
  ena[1233] = HAVE_logbsf2;
  ena[1234] = HAVE_logbdf2;
  ena[1235] = HAVE_logbxf2;
  ena[1236] = HAVE_remaindersf3;
  ena[1237] = HAVE_remainderdf3;
  ena[1238] = HAVE_remainderxf3;
  ena[1239] = HAVE_rsqrtsf2;
  ena[1240] = HAVE_rsqrtv4sf2;
  ena[1241] = HAVE_rsqrtv8sf2;
  ena[1242] = HAVE_rsqrtv16sf2;
  ena[1243] = HAVE_scalbsf3;
  ena[1244] = HAVE_scalbdf3;
  ena[1245] = HAVE_scalbxf3;
  ena[1246] = HAVE_signbitsf2;
  ena[1247] = HAVE_signbitdf2;
  ena[1248] = HAVE_signbitxf2;
  ena[1249] = HAVE_signbittf2;
  ena[1250] = HAVE_significandsf2;
  ena[1251] = HAVE_significanddf2;
  ena[1252] = HAVE_significandxf2;
  ena[1253] = HAVE_sinsf2;
  ena[1254] = HAVE_sindf2;
  ena[1255] = HAVE_sinxf2;
  ena[1256] = HAVE_sincossf3;
  ena[1257] = HAVE_sincosdf3;
  ena[1258] = HAVE_sincosxf3;
  ena[1259] = HAVE_sinhsf2;
  ena[1260] = HAVE_sinhdf2;
  ena[1261] = HAVE_sinhxf2;
  ena[1262] = HAVE_tansf2;
  ena[1263] = HAVE_tandf2;
  ena[1264] = HAVE_tanxf2;
  ena[1265] = HAVE_tanhsf2;
  ena[1266] = HAVE_tanhdf2;
  ena[1267] = HAVE_tanhxf2;
  ena[1268] = HAVE_reduc_smax_scal_v16qi;
  ena[1269] = HAVE_reduc_smax_scal_v8hi;
  ena[1270] = HAVE_reduc_smax_scal_v4si;
  ena[1271] = HAVE_reduc_smax_scal_v2di;
  ena[1272] = HAVE_reduc_smax_scal_v32qi;
  ena[1273] = HAVE_reduc_smax_scal_v16hi;
  ena[1274] = HAVE_reduc_smax_scal_v8si;
  ena[1275] = HAVE_reduc_smax_scal_v4di;
  ena[1276] = HAVE_reduc_smax_scal_v64qi;
  ena[1277] = HAVE_reduc_smax_scal_v32hi;
  ena[1278] = HAVE_reduc_smax_scal_v16si;
  ena[1279] = HAVE_reduc_smax_scal_v8di;
  ena[1280] = HAVE_reduc_smax_scal_v4sf;
  ena[1281] = HAVE_reduc_smax_scal_v2df;
  ena[1282] = HAVE_reduc_smax_scal_v8sf;
  ena[1283] = HAVE_reduc_smax_scal_v4df;
  ena[1284] = HAVE_reduc_smax_scal_v16sf;
  ena[1285] = HAVE_reduc_smax_scal_v8df;
  ena[1286] = HAVE_reduc_smin_scal_v16qi;
  ena[1287] = HAVE_reduc_smin_scal_v8hi;
  ena[1288] = HAVE_reduc_smin_scal_v4si;
  ena[1289] = HAVE_reduc_smin_scal_v2di;
  ena[1290] = HAVE_reduc_smin_scal_v32qi;
  ena[1291] = HAVE_reduc_smin_scal_v16hi;
  ena[1292] = HAVE_reduc_smin_scal_v8si;
  ena[1293] = HAVE_reduc_smin_scal_v4di;
  ena[1294] = HAVE_reduc_smin_scal_v64qi;
  ena[1295] = HAVE_reduc_smin_scal_v32hi;
  ena[1296] = HAVE_reduc_smin_scal_v16si;
  ena[1297] = HAVE_reduc_smin_scal_v8di;
  ena[1298] = HAVE_reduc_smin_scal_v4sf;
  ena[1299] = HAVE_reduc_smin_scal_v2df;
  ena[1300] = HAVE_reduc_smin_scal_v8sf;
  ena[1301] = HAVE_reduc_smin_scal_v4df;
  ena[1302] = HAVE_reduc_smin_scal_v16sf;
  ena[1303] = HAVE_reduc_smin_scal_v8df;
  ena[1304] = HAVE_reduc_plus_scal_v4sf;
  ena[1305] = HAVE_reduc_plus_scal_v2df;
  ena[1306] = HAVE_reduc_plus_scal_v8sf;
  ena[1307] = HAVE_reduc_plus_scal_v4df;
  ena[1308] = HAVE_reduc_plus_scal_v16sf;
  ena[1309] = HAVE_reduc_plus_scal_v8df;
  ena[1310] = HAVE_reduc_umax_scal_v32qi;
  ena[1311] = HAVE_reduc_umax_scal_v16hi;
  ena[1312] = HAVE_reduc_umax_scal_v8si;
  ena[1313] = HAVE_reduc_umax_scal_v4di;
  ena[1314] = HAVE_reduc_umax_scal_v64qi;
  ena[1315] = HAVE_reduc_umax_scal_v32hi;
  ena[1316] = HAVE_reduc_umax_scal_v16si;
  ena[1317] = HAVE_reduc_umax_scal_v8di;
  ena[1318] = HAVE_reduc_umin_scal_v8hi;
  ena[1319] = HAVE_reduc_umin_scal_v32qi;
  ena[1320] = HAVE_reduc_umin_scal_v16hi;
  ena[1321] = HAVE_reduc_umin_scal_v8si;
  ena[1322] = HAVE_reduc_umin_scal_v4di;
  ena[1323] = HAVE_reduc_umin_scal_v64qi;
  ena[1324] = HAVE_reduc_umin_scal_v32hi;
  ena[1325] = HAVE_reduc_umin_scal_v16si;
  ena[1326] = HAVE_reduc_umin_scal_v8di;
  ena[1327] = HAVE_uavgv16qi3_ceil;
  ena[1328] = HAVE_uavgv8hi3_ceil;
  ena[1329] = HAVE_uavgv32qi3_ceil;
  ena[1330] = HAVE_uavgv16hi3_ceil;
  ena[1331] = HAVE_uavgv64qi3_ceil;
  ena[1332] = HAVE_uavgv32hi3_ceil;
  ena[1333] = HAVE_sdot_prodv8hi;
  ena[1334] = HAVE_sdot_prodv4si;
  ena[1335] = HAVE_sdot_prodv16hi;
  ena[1336] = HAVE_sdot_prodv32hi;
  ena[1337] = HAVE_usadv16qi;
  ena[1338] = HAVE_usadv32qi;
  ena[1339] = HAVE_usadv64qi;
  ena[1340] = HAVE_vec_pack_sfix_trunc_v2df;
  ena[1341] = HAVE_vec_pack_sfix_trunc_v4df;
  ena[1342] = HAVE_vec_pack_sfix_trunc_v8df;
  ena[1343] = HAVE_vec_pack_trunc_qi;
  ena[1344] = HAVE_vec_pack_trunc_hi;
  ena[1345] = HAVE_vec_pack_trunc_si;
  ena[1346] = HAVE_vec_pack_trunc_v8hi;
  ena[1347] = HAVE_vec_pack_trunc_v4si;
  ena[1348] = HAVE_vec_pack_trunc_v2di;
  ena[1349] = HAVE_vec_pack_trunc_v16hi;
  ena[1350] = HAVE_vec_pack_trunc_v8si;
  ena[1351] = HAVE_vec_pack_trunc_v4di;
  ena[1352] = HAVE_vec_pack_trunc_v32hi;
  ena[1353] = HAVE_vec_pack_trunc_v16si;
  ena[1354] = HAVE_vec_pack_trunc_v8di;
  ena[1355] = HAVE_vec_pack_trunc_v2df;
  ena[1356] = HAVE_vec_pack_trunc_v4df;
  ena[1357] = HAVE_vec_pack_trunc_v8df;
  ena[1358] = HAVE_vec_pack_ufix_trunc_v2df;
  ena[1359] = HAVE_vec_pack_ufix_trunc_v4df;
  ena[1360] = HAVE_vec_pack_ufix_trunc_v8df;
  ena[1361] = HAVE_vec_pack_sbool_trunc_qi;
  ena[1362] = HAVE_vec_packs_float_v2di;
  ena[1363] = HAVE_vec_packs_float_v4di;
  ena[1364] = HAVE_vec_packs_float_v8di;
  ena[1365] = HAVE_vec_packu_float_v2di;
  ena[1366] = HAVE_vec_packu_float_v4di;
  ena[1367] = HAVE_vec_packu_float_v8di;
  ena[1368] = HAVE_vec_permv16qi;
  ena[1369] = HAVE_vec_permv8hi;
  ena[1370] = HAVE_vec_permv4si;
  ena[1371] = HAVE_vec_permv2di;
  ena[1372] = HAVE_vec_permv32qi;
  ena[1373] = HAVE_vec_permv16hi;
  ena[1374] = HAVE_vec_permv8si;
  ena[1375] = HAVE_vec_permv4di;
  ena[1376] = HAVE_vec_permv64qi;
  ena[1377] = HAVE_vec_permv32hi;
  ena[1378] = HAVE_vec_permv16si;
  ena[1379] = HAVE_vec_permv8di;
  ena[1380] = HAVE_vec_permv4sf;
  ena[1381] = HAVE_vec_permv2df;
  ena[1382] = HAVE_vec_permv8sf;
  ena[1383] = HAVE_vec_permv4df;
  ena[1384] = HAVE_vec_permv16sf;
  ena[1385] = HAVE_vec_permv8df;
  ena[1386] = HAVE_vec_setv8qi;
  ena[1387] = HAVE_vec_setv4hi;
  ena[1388] = HAVE_vec_setv2si;
  ena[1389] = HAVE_vec_setv16qi;
  ena[1390] = HAVE_vec_setv8hi;
  ena[1391] = HAVE_vec_setv4si;
  ena[1392] = HAVE_vec_setv2di;
  ena[1393] = HAVE_vec_setv32qi;
  ena[1394] = HAVE_vec_setv16hi;
  ena[1395] = HAVE_vec_setv8si;
  ena[1396] = HAVE_vec_setv4di;
  ena[1397] = HAVE_vec_setv64qi;
  ena[1398] = HAVE_vec_setv32hi;
  ena[1399] = HAVE_vec_setv16si;
  ena[1400] = HAVE_vec_setv8di;
  ena[1401] = HAVE_vec_setv2sf;
  ena[1402] = HAVE_vec_setv4sf;
  ena[1403] = HAVE_vec_setv2df;
  ena[1404] = HAVE_vec_setv8sf;
  ena[1405] = HAVE_vec_setv4df;
  ena[1406] = HAVE_vec_setv16sf;
  ena[1407] = HAVE_vec_setv8df;
  ena[1408] = HAVE_vec_shr_v16qi;
  ena[1409] = HAVE_vec_shr_v8hi;
  ena[1410] = HAVE_vec_shr_v4si;
  ena[1411] = HAVE_vec_shr_v2di;
  ena[1412] = HAVE_vec_unpack_sfix_trunc_hi_v4sf;
  ena[1413] = HAVE_vec_unpack_sfix_trunc_hi_v8sf;
  ena[1414] = HAVE_vec_unpack_sfix_trunc_hi_v16sf;
  ena[1415] = HAVE_vec_unpack_sfix_trunc_lo_v4sf;
  ena[1416] = HAVE_vec_unpack_sfix_trunc_lo_v8sf;
  ena[1417] = HAVE_vec_unpack_sfix_trunc_lo_v16sf;
  ena[1418] = HAVE_vec_unpack_ufix_trunc_hi_v4sf;
  ena[1419] = HAVE_vec_unpack_ufix_trunc_hi_v8sf;
  ena[1420] = HAVE_vec_unpack_ufix_trunc_hi_v16sf;
  ena[1421] = HAVE_vec_unpack_ufix_trunc_lo_v4sf;
  ena[1422] = HAVE_vec_unpack_ufix_trunc_lo_v8sf;
  ena[1423] = HAVE_vec_unpack_ufix_trunc_lo_v16sf;
  ena[1424] = HAVE_vec_unpacks_float_hi_v8hi;
  ena[1425] = HAVE_vec_unpacks_float_hi_v4si;
  ena[1426] = HAVE_vec_unpacks_float_hi_v16hi;
  ena[1427] = HAVE_vec_unpacks_float_hi_v8si;
  ena[1428] = HAVE_vec_unpacks_float_hi_v32hi;
  ena[1429] = HAVE_vec_unpacks_float_hi_v16si;
  ena[1430] = HAVE_vec_unpacks_float_lo_v8hi;
  ena[1431] = HAVE_vec_unpacks_float_lo_v4si;
  ena[1432] = HAVE_vec_unpacks_float_lo_v16hi;
  ena[1433] = HAVE_vec_unpacks_float_lo_v8si;
  ena[1434] = HAVE_vec_unpacks_float_lo_v32hi;
  ena[1435] = HAVE_vec_unpacks_float_lo_v16si;
  ena[1436] = HAVE_vec_unpacks_hi_hi;
  ena[1437] = HAVE_vec_unpacks_hi_si;
  ena[1438] = HAVE_vec_unpacks_hi_di;
  ena[1439] = HAVE_vec_unpacks_hi_v16qi;
  ena[1440] = HAVE_vec_unpacks_hi_v8hi;
  ena[1441] = HAVE_vec_unpacks_hi_v4si;
  ena[1442] = HAVE_vec_unpacks_hi_v32qi;
  ena[1443] = HAVE_vec_unpacks_hi_v16hi;
  ena[1444] = HAVE_vec_unpacks_hi_v8si;
  ena[1445] = HAVE_vec_unpacks_hi_v64qi;
  ena[1446] = HAVE_vec_unpacks_hi_v32hi;
  ena[1447] = HAVE_vec_unpacks_hi_v16si;
  ena[1448] = HAVE_vec_unpacks_hi_v4sf;
  ena[1449] = HAVE_vec_unpacks_hi_v8sf;
  ena[1450] = HAVE_vec_unpacks_hi_v16sf;
  ena[1451] = HAVE_vec_unpacks_lo_hi;
  ena[1452] = HAVE_vec_unpacks_lo_si;
  ena[1453] = HAVE_vec_unpacks_lo_di;
  ena[1454] = HAVE_vec_unpacks_lo_v16qi;
  ena[1455] = HAVE_vec_unpacks_lo_v8hi;
  ena[1456] = HAVE_vec_unpacks_lo_v4si;
  ena[1457] = HAVE_vec_unpacks_lo_v32qi;
  ena[1458] = HAVE_vec_unpacks_lo_v16hi;
  ena[1459] = HAVE_vec_unpacks_lo_v8si;
  ena[1460] = HAVE_vec_unpacks_lo_v64qi;
  ena[1461] = HAVE_vec_unpacks_lo_v32hi;
  ena[1462] = HAVE_vec_unpacks_lo_v16si;
  ena[1463] = HAVE_vec_unpacks_lo_v4sf;
  ena[1464] = HAVE_vec_unpacks_lo_v8sf;
  ena[1465] = HAVE_vec_unpacks_lo_v16sf;
  ena[1466] = HAVE_vec_unpacks_sbool_hi_qi;
  ena[1467] = HAVE_vec_unpacks_sbool_lo_qi;
  ena[1468] = HAVE_vec_unpacku_float_hi_v8hi;
  ena[1469] = HAVE_vec_unpacku_float_hi_v4si;
  ena[1470] = HAVE_vec_unpacku_float_hi_v16hi;
  ena[1471] = HAVE_vec_unpacku_float_hi_v8si;
  ena[1472] = HAVE_vec_unpacku_float_hi_v32hi;
  ena[1473] = HAVE_vec_unpacku_float_hi_v16si;
  ena[1474] = HAVE_vec_unpacku_float_lo_v8hi;
  ena[1475] = HAVE_vec_unpacku_float_lo_v4si;
  ena[1476] = HAVE_vec_unpacku_float_lo_v16hi;
  ena[1477] = HAVE_vec_unpacku_float_lo_v8si;
  ena[1478] = HAVE_vec_unpacku_float_lo_v32hi;
  ena[1479] = HAVE_vec_unpacku_float_lo_v16si;
  ena[1480] = HAVE_vec_unpacku_hi_v16qi;
  ena[1481] = HAVE_vec_unpacku_hi_v8hi;
  ena[1482] = HAVE_vec_unpacku_hi_v4si;
  ena[1483] = HAVE_vec_unpacku_hi_v32qi;
  ena[1484] = HAVE_vec_unpacku_hi_v16hi;
  ena[1485] = HAVE_vec_unpacku_hi_v8si;
  ena[1486] = HAVE_vec_unpacku_hi_v64qi;
  ena[1487] = HAVE_vec_unpacku_hi_v32hi;
  ena[1488] = HAVE_vec_unpacku_hi_v16si;
  ena[1489] = HAVE_vec_unpacku_lo_v16qi;
  ena[1490] = HAVE_vec_unpacku_lo_v8hi;
  ena[1491] = HAVE_vec_unpacku_lo_v4si;
  ena[1492] = HAVE_vec_unpacku_lo_v32qi;
  ena[1493] = HAVE_vec_unpacku_lo_v16hi;
  ena[1494] = HAVE_vec_unpacku_lo_v8si;
  ena[1495] = HAVE_vec_unpacku_lo_v64qi;
  ena[1496] = HAVE_vec_unpacku_lo_v32hi;
  ena[1497] = HAVE_vec_unpacku_lo_v16si;
  ena[1498] = HAVE_vec_widen_smult_even_v4si;
  ena[1499] = HAVE_vec_widen_smult_even_v8si;
  ena[1500] = HAVE_vec_widen_smult_even_v16si;
  ena[1501] = HAVE_vec_widen_smult_hi_v16qi;
  ena[1502] = HAVE_vec_widen_smult_hi_v8hi;
  ena[1503] = HAVE_vec_widen_smult_hi_v4si;
  ena[1504] = HAVE_vec_widen_smult_hi_v32qi;
  ena[1505] = HAVE_vec_widen_smult_hi_v16hi;
  ena[1506] = HAVE_vec_widen_smult_hi_v8si;
  ena[1507] = HAVE_vec_widen_smult_lo_v16qi;
  ena[1508] = HAVE_vec_widen_smult_lo_v8hi;
  ena[1509] = HAVE_vec_widen_smult_lo_v4si;
  ena[1510] = HAVE_vec_widen_smult_lo_v32qi;
  ena[1511] = HAVE_vec_widen_smult_lo_v16hi;
  ena[1512] = HAVE_vec_widen_smult_lo_v8si;
  ena[1513] = HAVE_vec_widen_smult_odd_v4si;
  ena[1514] = HAVE_vec_widen_smult_odd_v8si;
  ena[1515] = HAVE_vec_widen_smult_odd_v16si;
  ena[1516] = HAVE_vec_widen_umult_even_v4si;
  ena[1517] = HAVE_vec_widen_umult_even_v8si;
  ena[1518] = HAVE_vec_widen_umult_even_v16si;
  ena[1519] = HAVE_vec_widen_umult_hi_v16qi;
  ena[1520] = HAVE_vec_widen_umult_hi_v8hi;
  ena[1521] = HAVE_vec_widen_umult_hi_v4si;
  ena[1522] = HAVE_vec_widen_umult_hi_v32qi;
  ena[1523] = HAVE_vec_widen_umult_hi_v16hi;
  ena[1524] = HAVE_vec_widen_umult_hi_v8si;
  ena[1525] = HAVE_vec_widen_umult_lo_v16qi;
  ena[1526] = HAVE_vec_widen_umult_lo_v8hi;
  ena[1527] = HAVE_vec_widen_umult_lo_v4si;
  ena[1528] = HAVE_vec_widen_umult_lo_v32qi;
  ena[1529] = HAVE_vec_widen_umult_lo_v16hi;
  ena[1530] = HAVE_vec_widen_umult_lo_v8si;
  ena[1531] = HAVE_vec_widen_umult_odd_v4si;
  ena[1532] = HAVE_vec_widen_umult_odd_v8si;
  ena[1533] = HAVE_vec_widen_umult_odd_v16si;
  ena[1534] = HAVE_atomic_addqi;
  ena[1535] = HAVE_atomic_addhi;
  ena[1536] = HAVE_atomic_addsi;
  ena[1537] = HAVE_atomic_adddi;
  ena[1538] = HAVE_atomic_andqi;
  ena[1539] = HAVE_atomic_andhi;
  ena[1540] = HAVE_atomic_andsi;
  ena[1541] = HAVE_atomic_anddi;
  ena[1542] = HAVE_atomic_bit_test_and_sethi;
  ena[1543] = HAVE_atomic_bit_test_and_setsi;
  ena[1544] = HAVE_atomic_bit_test_and_setdi;
  ena[1545] = HAVE_atomic_bit_test_and_complementhi;
  ena[1546] = HAVE_atomic_bit_test_and_complementsi;
  ena[1547] = HAVE_atomic_bit_test_and_complementdi;
  ena[1548] = HAVE_atomic_bit_test_and_resethi;
  ena[1549] = HAVE_atomic_bit_test_and_resetsi;
  ena[1550] = HAVE_atomic_bit_test_and_resetdi;
  ena[1551] = HAVE_atomic_compare_and_swapqi;
  ena[1552] = HAVE_atomic_compare_and_swaphi;
  ena[1553] = HAVE_atomic_compare_and_swapsi;
  ena[1554] = HAVE_atomic_compare_and_swapdi;
  ena[1555] = HAVE_atomic_compare_and_swapti;
  ena[1556] = HAVE_atomic_exchangeqi;
  ena[1557] = HAVE_atomic_exchangehi;
  ena[1558] = HAVE_atomic_exchangesi;
  ena[1559] = HAVE_atomic_exchangedi;
  ena[1560] = HAVE_atomic_fetch_addqi;
  ena[1561] = HAVE_atomic_fetch_addhi;
  ena[1562] = HAVE_atomic_fetch_addsi;
  ena[1563] = HAVE_atomic_fetch_adddi;
  ena[1564] = HAVE_atomic_loadqi;
  ena[1565] = HAVE_atomic_loadhi;
  ena[1566] = HAVE_atomic_loadsi;
  ena[1567] = HAVE_atomic_loaddi;
  ena[1568] = HAVE_atomic_orqi;
  ena[1569] = HAVE_atomic_orhi;
  ena[1570] = HAVE_atomic_orsi;
  ena[1571] = HAVE_atomic_ordi;
  ena[1572] = HAVE_atomic_storeqi;
  ena[1573] = HAVE_atomic_storehi;
  ena[1574] = HAVE_atomic_storesi;
  ena[1575] = HAVE_atomic_storedi;
  ena[1576] = HAVE_atomic_subqi;
  ena[1577] = HAVE_atomic_subhi;
  ena[1578] = HAVE_atomic_subsi;
  ena[1579] = HAVE_atomic_subdi;
  ena[1580] = HAVE_atomic_xorqi;
  ena[1581] = HAVE_atomic_xorhi;
  ena[1582] = HAVE_atomic_xorsi;
  ena[1583] = HAVE_atomic_xordi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

