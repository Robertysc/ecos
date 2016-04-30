#ifndef CYGONCE_LIBM_CBRTF_H
#define CYGONCE_LIBM_CBRTF_H
//===========================================================================
//
//      cbrtf.h
//
//      Test vectors for testing of cbrtf() math library function
//
//===========================================================================
// ####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 2012 Free Software Foundation, Inc.
//
// eCos is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 or (at your option) any later
// version.
//
// eCos is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License
// along with eCos; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
// As a special exception, if other files instantiate templates or use
// macros or inline functions from this file, or you compile this file
// and link it with other works to produce a work based on this file,
// this file does not by itself cause the resulting work to be covered by
// the GNU General Public License. However the source code for this file
// must still be made available in accordance with section (3) of the GNU
// General Public License v2.
//
// This exception does not invalidate any other reasons why a work based
// on this file might be covered by the GNU General Public License.
// -------------------------------------------
// ####ECOSGPLCOPYRIGHTEND####
//===========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):
// Contributors:  visar, ilijak
// Date:        1998-02-13
// Purpose:
// Description:
// Usage:       #include "vectors/cbrtf.h"
//
//####DESCRIPTIONEND####
//
//===========================================================================


// CONFIGURATION

#include <pkgconf/libm.h>   // Configuration header


// INCLUDES

#include <cyg/infra/cyg_type.h>    // Common type definitions and support
#include "vectors/vector_support_float.h"// extra support for math tests

#define CBRTF_TOLERANCE 1.0E-04

static const Cyg_libm_test_float_vec_t cbrtf_vec[] = {

// AUTOMATICALLY GENERATED VECTORS START

{0, 3214514586u, 2147497108u, 3213362482u, 0, CBRTF_TOLERANCE, 0},
{1, 3214430700u, 2147497108u, 3213337651u, 0, CBRTF_TOLERANCE, 0},
{2, 3214346813u, 2147497108u, 3213312681u, 0, CBRTF_TOLERANCE, 0},
{3, 3214262927u, 2147497108u, 3213287569u, 0, CBRTF_TOLERANCE, 0},
{4, 3214179041u, 2147497108u, 3213262314u, 0, CBRTF_TOLERANCE, 0},
{5, 3214095155u, 2147497108u, 3213236913u, 0, CBRTF_TOLERANCE, 0},
{6, 3214011269u, 2147497108u, 3213211364u, 0, CBRTF_TOLERANCE, 0},
{7, 3213927383u, 2147497108u, 3213185666u, 0, CBRTF_TOLERANCE, 0},
{8, 3213843497u, 2147497108u, 3213159816u, 0, CBRTF_TOLERANCE, 0},
{9, 3213759611u, 2147497108u, 3213133811u, 0, CBRTF_TOLERANCE, 0},
{10, 3213675725u, 2147497108u, 3213107649u, 0, CBRTF_TOLERANCE, 0},
{11, 3213591839u, 2147497108u, 3213081329u, 0, CBRTF_TOLERANCE, 0},
{12, 3213507953u, 2147497108u, 3213054847u, 0, CBRTF_TOLERANCE, 0},
{13, 3213424067u, 2147497108u, 3213028201u, 0, CBRTF_TOLERANCE, 0},
{14, 3213340180u, 2147497108u, 3213001388u, 0, CBRTF_TOLERANCE, 0},
{15, 3213256294u, 2147497108u, 3212974407u, 0, CBRTF_TOLERANCE, 0},
{16, 3213172408u, 2147497108u, 3212947253u, 0, CBRTF_TOLERANCE, 0},
{17, 3213088522u, 2147497108u, 3212919925u, 0, CBRTF_TOLERANCE, 0},
{18, 3213004636u, 2147497108u, 3212892419u, 0, CBRTF_TOLERANCE, 0},
{19, 3212920750u, 2147497108u, 3212864733u, 0, CBRTF_TOLERANCE, 0},
{20, 3212836864u, 2147497108u, 3212836864u, 0, CBRTF_TOLERANCE, 0},
{21, 3212669092u, 2147497108u, 3212780752u, 0, CBRTF_TOLERANCE, 0},
{22, 3212501320u, 2147497108u, 3212724262u, 0, CBRTF_TOLERANCE, 0},
{23, 3212333548u, 2147497108u, 3212667386u, 0, CBRTF_TOLERANCE, 0},
{24, 3212165775u, 2147497108u, 3212610117u, 0, CBRTF_TOLERANCE, 0},
{25, 3211998003u, 2147497108u, 3212552449u, 0, CBRTF_TOLERANCE, 0},
{26, 3211830231u, 2147497108u, 3212494376u, 0, CBRTF_TOLERANCE, 0},
{27, 3211662459u, 2147497108u, 3212435889u, 0, CBRTF_TOLERANCE, 0},
{28, 3211494687u, 2147497108u, 3212376981u, 0, CBRTF_TOLERANCE, 0},
{29, 3211326915u, 2147497108u, 3212317645u, 0, CBRTF_TOLERANCE, 0},
{30, 3211159142u, 2147497108u, 3212257872u, 0, CBRTF_TOLERANCE, 0},
{31, 3210991370u, 2147497108u, 3212197655u, 0, CBRTF_TOLERANCE, 0},
{32, 3210823598u, 2147497108u, 3212136985u, 0, CBRTF_TOLERANCE, 0},
{33, 3210655826u, 2147497108u, 3212075854u, 0, CBRTF_TOLERANCE, 0},
{34, 3210488054u, 2147497108u, 3212014253u, 0, CBRTF_TOLERANCE, 0},
{35, 3210320282u, 2147497108u, 3211952172u, 0, CBRTF_TOLERANCE, 0},
{36, 3210152509u, 2147497108u, 3211889602u, 0, CBRTF_TOLERANCE, 0},
{37, 3209984737u, 2147497108u, 3211826534u, 0, CBRTF_TOLERANCE, 0},
{38, 3209816965u, 2147497108u, 3211762957u, 0, CBRTF_TOLERANCE, 0},
{39, 3209649193u, 2147497108u, 3211698861u, 0, CBRTF_TOLERANCE, 0},
{40, 3209481421u, 2147497108u, 3211634236u, 0, CBRTF_TOLERANCE, 0},
{41, 3209313649u, 2147497108u, 3211569069u, 0, CBRTF_TOLERANCE, 0},
{42, 3209145876u, 2147497108u, 3211503351u, 0, CBRTF_TOLERANCE, 0},
{43, 3208978104u, 2147497108u, 3211437068u, 0, CBRTF_TOLERANCE, 0},
{44, 3208810332u, 2147497108u, 3211370209u, 0, CBRTF_TOLERANCE, 0},
{45, 3208642560u, 2147497108u, 3211302760u, 0, CBRTF_TOLERANCE, 0},
{46, 3208474788u, 2147497108u, 3211234710u, 0, CBRTF_TOLERANCE, 0},
{47, 3208307016u, 2147497108u, 3211166043u, 0, CBRTF_TOLERANCE, 0},
{48, 3208139244u, 2147497108u, 3211096747u, 0, CBRTF_TOLERANCE, 0},
{49, 3207971471u, 2147497108u, 3211026806u, 0, CBRTF_TOLERANCE, 0},
{50, 3207803699u, 2147497108u, 3210956205u, 0, CBRTF_TOLERANCE, 0},
{51, 3207635927u, 2147497108u, 3210884929u, 0, CBRTF_TOLERANCE, 0},
{52, 3207468155u, 2147497108u, 3210812960u, 0, CBRTF_TOLERANCE, 0},
{53, 3207300383u, 2147497108u, 3210740283u, 0, CBRTF_TOLERANCE, 0},
{54, 3207132611u, 2147497108u, 3210666878u, 0, CBRTF_TOLERANCE, 0},
{55, 3206964838u, 2147497108u, 3210592729u, 0, CBRTF_TOLERANCE, 0},
{56, 3206797066u, 2147497108u, 3210517814u, 0, CBRTF_TOLERANCE, 0},
{57, 3206629294u, 2147497108u, 3210442116u, 0, CBRTF_TOLERANCE, 0},
{58, 3206461522u, 2147497108u, 3210365612u, 0, CBRTF_TOLERANCE, 0},
{59, 3206293750u, 2147497108u, 3210288281u, 0, CBRTF_TOLERANCE, 0},
{60, 3206125978u, 2147497108u, 3210210100u, 0, CBRTF_TOLERANCE, 0},
{61, 3205958205u, 2147497108u, 3210131046u, 0, CBRTF_TOLERANCE, 0},
{62, 3205790433u, 2147497108u, 3210051093u, 0, CBRTF_TOLERANCE, 0},
{63, 3205622661u, 2147497108u, 3209970215u, 0, CBRTF_TOLERANCE, 0},
{64, 3205454889u, 2147497108u, 3209888387u, 0, CBRTF_TOLERANCE, 0},
{65, 3205287117u, 2147497108u, 3209805578u, 0, CBRTF_TOLERANCE, 0},
{66, 3205119345u, 2147497108u, 3209721759u, 0, CBRTF_TOLERANCE, 0},
{67, 3204951572u, 2147497108u, 3209636899u, 0, CBRTF_TOLERANCE, 0},
{68, 3204783800u, 2147497108u, 3209550965u, 0, CBRTF_TOLERANCE, 0},
{69, 3204616028u, 2147497108u, 3209463922u, 0, CBRTF_TOLERANCE, 0},
{70, 3204448256u, 2147497108u, 3209375733u, 0, CBRTF_TOLERANCE, 0},
{71, 3204112712u, 2147497108u, 3209286361u, 0, CBRTF_TOLERANCE, 0},
{72, 3203777167u, 2147497108u, 3209195764u, 0, CBRTF_TOLERANCE, 0},
{73, 3203441623u, 2147497108u, 3209103900u, 0, CBRTF_TOLERANCE, 0},
{74, 3203106079u, 2147497108u, 3209010724u, 0, CBRTF_TOLERANCE, 0},
{75, 3202770534u, 2147497108u, 3208916187u, 0, CBRTF_TOLERANCE, 0},
{76, 3202434990u, 2147497108u, 3208820239u, 0, CBRTF_TOLERANCE, 0},
{77, 3202099446u, 2147497108u, 3208722826u, 0, CBRTF_TOLERANCE, 0},
{78, 3201763901u, 2147497108u, 3208623891u, 0, CBRTF_TOLERANCE, 0},
{79, 3201428357u, 2147497108u, 3208523373u, 0, CBRTF_TOLERANCE, 0},
{80, 3201092813u, 2147497108u, 3208421206u, 0, CBRTF_TOLERANCE, 0},
{81, 3200757268u, 2147497108u, 3208317323u, 0, CBRTF_TOLERANCE, 0},
{82, 3200421724u, 2147497108u, 3208211648u, 0, CBRTF_TOLERANCE, 0},
{83, 3200086180u, 2147497108u, 3208104103u, 0, CBRTF_TOLERANCE, 0},
{84, 3199750636u, 2147497108u, 3207994601u, 0, CBRTF_TOLERANCE, 0},
{85, 3199415091u, 2147497108u, 3207883053u, 0, CBRTF_TOLERANCE, 0},
{86, 3199079547u, 2147497108u, 3207769360u, 0, CBRTF_TOLERANCE, 0},
{87, 3198744003u, 2147497108u, 3207653414u, 0, CBRTF_TOLERANCE, 0},
{88, 3198408458u, 2147497108u, 3207535102u, 0, CBRTF_TOLERANCE, 0},
{89, 3198072914u, 2147497108u, 3207414299u, 0, CBRTF_TOLERANCE, 0},
{90, 3197737370u, 2147497108u, 3207290869u, 0, CBRTF_TOLERANCE, 0},
{91, 3197401825u, 2147497108u, 3207164665u, 0, CBRTF_TOLERANCE, 0},
{92, 3197066281u, 2147497108u, 3207035525u, 0, CBRTF_TOLERANCE, 0},
{93, 3196730737u, 2147497108u, 3206903273u, 0, CBRTF_TOLERANCE, 0},
{94, 3196395192u, 2147497108u, 3206767713u, 0, CBRTF_TOLERANCE, 0},
{95, 3196059648u, 2147497108u, 3206628632u, 0, CBRTF_TOLERANCE, 0},
{96, 3195388559u, 2147497108u, 3206485790u, 0, CBRTF_TOLERANCE, 0},
{97, 3194717471u, 2147497108u, 3206338924u, 0, CBRTF_TOLERANCE, 0},
{98, 3194046382u, 2147497108u, 3206187736u, 0, CBRTF_TOLERANCE, 0},
{99, 3193375293u, 2147497108u, 3206031894u, 0, CBRTF_TOLERANCE, 0},
{100, 3192704205u, 2147497108u, 3205871023u, 0, CBRTF_TOLERANCE, 0},
{101, 3192033116u, 2147497108u, 3205704697u, 0, CBRTF_TOLERANCE, 0},
{102, 3191362028u, 2147497108u, 3205532427u, 0, CBRTF_TOLERANCE, 0},
{103, 3190690939u, 2147497108u, 3205353652u, 0, CBRTF_TOLERANCE, 0},
{104, 3190019850u, 2147497108u, 3205167722u, 0, CBRTF_TOLERANCE, 0},
{105, 3189348762u, 2147497108u, 3204973874u, 0, CBRTF_TOLERANCE, 0},
{106, 3188677673u, 2147497108u, 3204771208u, 0, CBRTF_TOLERANCE, 0},
{107, 3188006584u, 2147497108u, 3204558645u, 0, CBRTF_TOLERANCE, 0},
{108, 3186999951u, 2147497108u, 3204221509u, 0, CBRTF_TOLERANCE, 0},
{109, 3185657774u, 2147497108u, 3203748377u, 0, CBRTF_TOLERANCE, 0},
{110, 3184315597u, 2147497108u, 3203245628u, 0, CBRTF_TOLERANCE, 0},
{111, 3182973420u, 2147497108u, 3202708139u, 0, CBRTF_TOLERANCE, 0},
{112, 3181631242u, 2147497108u, 3202129206u, 0, CBRTF_TOLERANCE, 0},
{113, 3180289065u, 2147497108u, 3201499779u, 0, CBRTF_TOLERANCE, 0},
{114, 3178611343u, 2147497108u, 3200807156u, 0, CBRTF_TOLERANCE, 0},
{115, 3175926989u, 2147497108u, 3200032598u, 0, CBRTF_TOLERANCE, 0},
{116, 3173242634u, 2147497108u, 3199146494u, 0, CBRTF_TOLERANCE, 0},
{117, 3170222735u, 2147497108u, 3198097182u, 0, CBRTF_TOLERANCE, 0},
{118, 3164854026u, 2147497108u, 3196779114u, 0, CBRTF_TOLERANCE, 0},
{119, 3156465418u, 2147497108u, 3193740598u, 0, CBRTF_TOLERANCE, 0},
{120, 646742016u, 2147497108u, 925260670u, 0, CBRTF_TOLERANCE, 0},
{121, 1008981770u, 2147497108u, 1046256950u, 0, CBRTF_TOLERANCE, 0},
{122, 1017370378u, 2147497108u, 1049295466u, 0, CBRTF_TOLERANCE, 0},
{123, 1022739087u, 2147497108u, 1050613534u, 0, CBRTF_TOLERANCE, 0},
{124, 1025758986u, 2147497108u, 1051662846u, 0, CBRTF_TOLERANCE, 0},
{125, 1028443341u, 2147497108u, 1052548950u, 0, CBRTF_TOLERANCE, 0},
{126, 1031127695u, 2147497108u, 1053323508u, 0, CBRTF_TOLERANCE, 0},
{127, 1032805417u, 2147497108u, 1054016131u, 0, CBRTF_TOLERANCE, 0},
{128, 1034147594u, 2147497108u, 1054645558u, 0, CBRTF_TOLERANCE, 0},
{129, 1035489772u, 2147497108u, 1055224491u, 0, CBRTF_TOLERANCE, 0},
{130, 1036831949u, 2147497108u, 1055761980u, 0, CBRTF_TOLERANCE, 0},
{131, 1038174126u, 2147497108u, 1056264729u, 0, CBRTF_TOLERANCE, 0},
{132, 1039516303u, 2147497108u, 1056737861u, 0, CBRTF_TOLERANCE, 0},
{133, 1040522936u, 2147497108u, 1057074997u, 0, CBRTF_TOLERANCE, 0},
{134, 1041194025u, 2147497108u, 1057287560u, 0, CBRTF_TOLERANCE, 0},
{135, 1041865114u, 2147497108u, 1057490226u, 0, CBRTF_TOLERANCE, 0},
{136, 1042536202u, 2147497108u, 1057684074u, 0, CBRTF_TOLERANCE, 0},
{137, 1043207291u, 2147497108u, 1057870004u, 0, CBRTF_TOLERANCE, 0},
{138, 1043878380u, 2147497108u, 1058048779u, 0, CBRTF_TOLERANCE, 0},
{139, 1044549468u, 2147497108u, 1058221049u, 0, CBRTF_TOLERANCE, 0},
{140, 1045220557u, 2147497108u, 1058387375u, 0, CBRTF_TOLERANCE, 0},
{141, 1045891645u, 2147497108u, 1058548246u, 0, CBRTF_TOLERANCE, 0},
{142, 1046562734u, 2147497108u, 1058704088u, 0, CBRTF_TOLERANCE, 0},
{143, 1047233823u, 2147497108u, 1058855276u, 0, CBRTF_TOLERANCE, 0},
{144, 1047904911u, 2147497108u, 1059002142u, 0, CBRTF_TOLERANCE, 0},
{145, 1048576000u, 2147497108u, 1059144984u, 0, CBRTF_TOLERANCE, 0},
{146, 1048911544u, 2147497108u, 1059284065u, 0, CBRTF_TOLERANCE, 0},
{147, 1049247089u, 2147497108u, 1059419625u, 0, CBRTF_TOLERANCE, 0},
{148, 1049582633u, 2147497108u, 1059551877u, 0, CBRTF_TOLERANCE, 0},
{149, 1049918177u, 2147497108u, 1059681017u, 0, CBRTF_TOLERANCE, 0},
{150, 1050253722u, 2147497108u, 1059807221u, 0, CBRTF_TOLERANCE, 0},
{151, 1050589266u, 2147497108u, 1059930651u, 0, CBRTF_TOLERANCE, 0},
{152, 1050924810u, 2147497108u, 1060051454u, 0, CBRTF_TOLERANCE, 0},
{153, 1051260355u, 2147497108u, 1060169766u, 0, CBRTF_TOLERANCE, 0},
{154, 1051595899u, 2147497108u, 1060285712u, 0, CBRTF_TOLERANCE, 0},
{155, 1051931443u, 2147497108u, 1060399405u, 0, CBRTF_TOLERANCE, 0},
{156, 1052266988u, 2147497108u, 1060510953u, 0, CBRTF_TOLERANCE, 0},
{157, 1052602532u, 2147497108u, 1060620455u, 0, CBRTF_TOLERANCE, 0},
{158, 1052938076u, 2147497108u, 1060728000u, 0, CBRTF_TOLERANCE, 0},
{159, 1053273620u, 2147497108u, 1060833675u, 0, CBRTF_TOLERANCE, 0},
{160, 1053609165u, 2147497108u, 1060937558u, 0, CBRTF_TOLERANCE, 0},
{161, 1053944709u, 2147497108u, 1061039725u, 0, CBRTF_TOLERANCE, 0},
{162, 1054280253u, 2147497108u, 1061140243u, 0, CBRTF_TOLERANCE, 0},
{163, 1054615798u, 2147497108u, 1061239178u, 0, CBRTF_TOLERANCE, 0},
{164, 1054951342u, 2147497108u, 1061336591u, 0, CBRTF_TOLERANCE, 0},
{165, 1055286886u, 2147497108u, 1061432539u, 0, CBRTF_TOLERANCE, 0},
{166, 1055622431u, 2147497108u, 1061527076u, 0, CBRTF_TOLERANCE, 0},
{167, 1055957975u, 2147497108u, 1061620252u, 0, CBRTF_TOLERANCE, 0},
{168, 1056293519u, 2147497108u, 1061712116u, 0, CBRTF_TOLERANCE, 0},
{169, 1056629064u, 2147497108u, 1061802713u, 0, CBRTF_TOLERANCE, 0},
{170, 1056964608u, 2147497108u, 1061892085u, 0, CBRTF_TOLERANCE, 0},
{171, 1057132380u, 2147497108u, 1061980274u, 0, CBRTF_TOLERANCE, 0},
{172, 1057300152u, 2147497108u, 1062067317u, 0, CBRTF_TOLERANCE, 0},
{173, 1057467924u, 2147497108u, 1062153251u, 0, CBRTF_TOLERANCE, 0},
{174, 1057635697u, 2147497108u, 1062238111u, 0, CBRTF_TOLERANCE, 0},
{175, 1057803469u, 2147497108u, 1062321930u, 0, CBRTF_TOLERANCE, 0},
{176, 1057971241u, 2147497108u, 1062404739u, 0, CBRTF_TOLERANCE, 0},
{177, 1058139013u, 2147497108u, 1062486567u, 0, CBRTF_TOLERANCE, 0},
{178, 1058306785u, 2147497108u, 1062567445u, 0, CBRTF_TOLERANCE, 0},
{179, 1058474557u, 2147497108u, 1062647398u, 0, CBRTF_TOLERANCE, 0},
{180, 1058642330u, 2147497108u, 1062726452u, 0, CBRTF_TOLERANCE, 0},
{181, 1058810102u, 2147497108u, 1062804633u, 0, CBRTF_TOLERANCE, 0},
{182, 1058977874u, 2147497108u, 1062881964u, 0, CBRTF_TOLERANCE, 0},
{183, 1059145646u, 2147497108u, 1062958468u, 0, CBRTF_TOLERANCE, 0},
{184, 1059313418u, 2147497108u, 1063034166u, 0, CBRTF_TOLERANCE, 0},
{185, 1059481190u, 2147497108u, 1063109081u, 0, CBRTF_TOLERANCE, 0},
{186, 1059648963u, 2147497108u, 1063183230u, 0, CBRTF_TOLERANCE, 0},
{187, 1059816735u, 2147497108u, 1063256635u, 0, CBRTF_TOLERANCE, 0},
{188, 1059984507u, 2147497108u, 1063329312u, 0, CBRTF_TOLERANCE, 0},
{189, 1060152279u, 2147497108u, 1063401281u, 0, CBRTF_TOLERANCE, 0},
{190, 1060320051u, 2147497108u, 1063472557u, 0, CBRTF_TOLERANCE, 0},
{191, 1060487823u, 2147497108u, 1063543158u, 0, CBRTF_TOLERANCE, 0},
{192, 1060655596u, 2147497108u, 1063613099u, 0, CBRTF_TOLERANCE, 0},
{193, 1060823368u, 2147497108u, 1063682395u, 0, CBRTF_TOLERANCE, 0},
{194, 1060991140u, 2147497108u, 1063751062u, 0, CBRTF_TOLERANCE, 0},
{195, 1061158912u, 2147497108u, 1063819112u, 0, CBRTF_TOLERANCE, 0},
{196, 1061326684u, 2147497108u, 1063886561u, 0, CBRTF_TOLERANCE, 0},
{197, 1061494456u, 2147497108u, 1063953420u, 0, CBRTF_TOLERANCE, 0},
{198, 1061662228u, 2147497108u, 1064019703u, 0, CBRTF_TOLERANCE, 0},
{199, 1061830001u, 2147497108u, 1064085421u, 0, CBRTF_TOLERANCE, 0},
{200, 1061997773u, 2147497108u, 1064150588u, 0, CBRTF_TOLERANCE, 0},
{201, 1062165545u, 2147497108u, 1064215213u, 0, CBRTF_TOLERANCE, 0},
{202, 1062333317u, 2147497108u, 1064279309u, 0, CBRTF_TOLERANCE, 0},
{203, 1062501089u, 2147497108u, 1064342886u, 0, CBRTF_TOLERANCE, 0},
{204, 1062668861u, 2147497108u, 1064405954u, 0, CBRTF_TOLERANCE, 0},
{205, 1062836634u, 2147497108u, 1064468524u, 0, CBRTF_TOLERANCE, 0},
{206, 1063004406u, 2147497108u, 1064530605u, 0, CBRTF_TOLERANCE, 0},
{207, 1063172178u, 2147497108u, 1064592206u, 0, CBRTF_TOLERANCE, 0},
{208, 1063339950u, 2147497108u, 1064653337u, 0, CBRTF_TOLERANCE, 0},
{209, 1063507722u, 2147497108u, 1064714007u, 0, CBRTF_TOLERANCE, 0},
{210, 1063675494u, 2147497108u, 1064774224u, 0, CBRTF_TOLERANCE, 0},
{211, 1063843267u, 2147497108u, 1064833997u, 0, CBRTF_TOLERANCE, 0},
{212, 1064011039u, 2147497108u, 1064893333u, 0, CBRTF_TOLERANCE, 0},
{213, 1064178811u, 2147497108u, 1064952241u, 0, CBRTF_TOLERANCE, 0},
{214, 1064346583u, 2147497108u, 1065010728u, 0, CBRTF_TOLERANCE, 0},
{215, 1064514355u, 2147497108u, 1065068801u, 0, CBRTF_TOLERANCE, 0},
{216, 1064682127u, 2147497108u, 1065126469u, 0, CBRTF_TOLERANCE, 0},
{217, 1064849900u, 2147497108u, 1065183738u, 0, CBRTF_TOLERANCE, 0},
{218, 1065017672u, 2147497108u, 1065240614u, 0, CBRTF_TOLERANCE, 0},
{219, 1065185444u, 2147497108u, 1065297104u, 0, CBRTF_TOLERANCE, 0},
{220, 1065353216u, 2147497108u, 1065353216u, 0, CBRTF_TOLERANCE, 0},
{221, 1065437102u, 2147497108u, 1065381085u, 0, CBRTF_TOLERANCE, 0},
{222, 1065520988u, 2147497108u, 1065408771u, 0, CBRTF_TOLERANCE, 0},
{223, 1065604874u, 2147497108u, 1065436277u, 0, CBRTF_TOLERANCE, 0},
{224, 1065688760u, 2147497108u, 1065463605u, 0, CBRTF_TOLERANCE, 0},
{225, 1065772646u, 2147497108u, 1065490759u, 0, CBRTF_TOLERANCE, 0},
{226, 1065856532u, 2147497108u, 1065517740u, 0, CBRTF_TOLERANCE, 0},
{227, 1065940419u, 2147497108u, 1065544553u, 0, CBRTF_TOLERANCE, 0},
{228, 1066024305u, 2147497108u, 1065571199u, 0, CBRTF_TOLERANCE, 0},
{229, 1066108191u, 2147497108u, 1065597681u, 0, CBRTF_TOLERANCE, 0},
{230, 1066192077u, 2147497108u, 1065624001u, 0, CBRTF_TOLERANCE, 0},
{231, 1066275963u, 2147497108u, 1065650163u, 0, CBRTF_TOLERANCE, 0},
{232, 1066359849u, 2147497108u, 1065676168u, 0, CBRTF_TOLERANCE, 0},
{233, 1066443735u, 2147497108u, 1065702018u, 0, CBRTF_TOLERANCE, 0},
{234, 1066527621u, 2147497108u, 1065727716u, 0, CBRTF_TOLERANCE, 0},
{235, 1066611507u, 2147497108u, 1065753265u, 0, CBRTF_TOLERANCE, 0},
{236, 1066695393u, 2147497108u, 1065778666u, 0, CBRTF_TOLERANCE, 0},
{237, 1066779279u, 2147497108u, 1065803921u, 0, CBRTF_TOLERANCE, 0},
{238, 1066863165u, 2147497108u, 1065829033u, 0, CBRTF_TOLERANCE, 0},
{239, 1066947052u, 2147497108u, 1065854003u, 0, CBRTF_TOLERANCE, 0},
{240, 3234402267u, 2147497108u, 3219927504u, 0, CBRTF_TOLERANCE, 0},
{241, 3231108068u, 2147497108u, 3218512086u, 0, CBRTF_TOLERANCE, 0},
{242, 3226013659u, 2147497108u, 3216734143u, 0, CBRTF_TOLERANCE, 0},
{243, 3217625051u, 2147497108u, 3214199571u, 0, CBRTF_TOLERANCE, 0},
{244, 0u, 2147497108u, 0u, 0, CBRTF_TOLERANCE, 0},
{245, 1070141403u, 2147497108u, 1066715923u, 0, CBRTF_TOLERANCE, 0},
{246, 1078530011u, 2147497108u, 1069250495u, 0, CBRTF_TOLERANCE, 0},
{247, 1083624420u, 2147497108u, 1071028438u, 0, CBRTF_TOLERANCE, 0},
{248, 3253731328u, 2147497108u, 3225869542u, 0, CBRTF_TOLERANCE, 0},
{249, 3252840038u, 2147497108u, 3225618567u, 0, CBRTF_TOLERANCE, 0},
{250, 3251948749u, 2147497108u, 3225357329u, 0, CBRTF_TOLERANCE, 0},
{251, 3251057459u, 2147497108u, 3225084709u, 0, CBRTF_TOLERANCE, 0},
{252, 3250166170u, 2147497108u, 3224799381u, 0, CBRTF_TOLERANCE, 0},
{253, 3249274880u, 2147497108u, 3224499751u, 0, CBRTF_TOLERANCE, 0},
{254, 3248383590u, 2147497108u, 3224183879u, 0, CBRTF_TOLERANCE, 0},
{255, 3247492301u, 2147497108u, 3223849368u, 0, CBRTF_TOLERANCE, 0},
{256, 3246601011u, 2147497108u, 3223493199u, 0, CBRTF_TOLERANCE, 0},
{257, 3245028147u, 2147497108u, 3223111482u, 0, CBRTF_TOLERANCE, 0},
{258, 3243245568u, 2147497108u, 3222699076u, 0, CBRTF_TOLERANCE, 0},
{259, 3241462989u, 2147497108u, 3222248954u, 0, CBRTF_TOLERANCE, 0},
{260, 3239680410u, 2147497108u, 3221751090u, 0, CBRTF_TOLERANCE, 0},
{261, 3237792973u, 2147497108u, 3221155274u, 0, CBRTF_TOLERANCE, 0},
{262, 3234227814u, 2147497108u, 3219858888u, 0, CBRTF_TOLERANCE, 0},
{263, 3230662656u, 2147497108u, 3218297543u, 0, CBRTF_TOLERANCE, 0},
{264, 3224580915u, 2147497108u, 3216271661u, 0, CBRTF_TOLERANCE, 0},
{265, 3213675725u, 2147497108u, 3213107649u, 0, CBRTF_TOLERANCE, 0},
{266, 1058642330u, 2147497108u, 1062726452u, 0, CBRTF_TOLERANCE, 0},
{267, 1075000115u, 2147497108u, 1068037622u, 0, CBRTF_TOLERANCE, 0},
{268, 1082130432u, 2147497108u, 1070280693u, 0, CBRTF_TOLERANCE, 0},
{269, 1085695590u, 2147497108u, 1071949313u, 0, CBRTF_TOLERANCE, 0},
{270, 1089260749u, 2147497108u, 1073311448u, 0, CBRTF_TOLERANCE, 0},
{271, 1091672474u, 2147497108u, 1074109914u, 0, CBRTF_TOLERANCE, 0},
{272, 1093455053u, 2147497108u, 1074624385u, 0, CBRTF_TOLERANCE, 0},
{273, 1095237632u, 2147497108u, 1075087333u, 0, CBRTF_TOLERANCE, 0},
{274, 1097020211u, 2147497108u, 1075509995u, 0, CBRTF_TOLERANCE, 0},
{275, 1098802790u, 2147497108u, 1075900135u, 0, CBRTF_TOLERANCE, 0},
{276, 1099746509u, 2147497108u, 1076263368u, 0, CBRTF_TOLERANCE, 0},
{277, 1100637798u, 2147497108u, 1076603902u, 0, CBRTF_TOLERANCE, 0},
{278, 1101529088u, 2147497108u, 1076924983u, 0, CBRTF_TOLERANCE, 0},
{279, 1102420378u, 2147497108u, 1077229170u, 0, CBRTF_TOLERANCE, 0},
{280, 1103311667u, 2147497108u, 1077518526u, 0, CBRTF_TOLERANCE, 0},
{281, 1104202957u, 2147497108u, 1077794735u, 0, CBRTF_TOLERANCE, 0},
{282, 1105094246u, 2147497108u, 1078059196u, 0, CBRTF_TOLERANCE, 0},
{283, 1105985536u, 2147497108u, 1078313084u, 0, CBRTF_TOLERANCE, 0}

// AUTOMATICALLY GENERATED VECTORS STOP

};

#endif // CYGONCE_LIBM_CBRTF_H multiple inclusion protection

// EOF cbrtf.h