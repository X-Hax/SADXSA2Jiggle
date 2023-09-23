#pragma once
#include "SADXModLoader.h"

struct JiggleInfo
{
	char type;
	char field_1;
	__int16 field_2;
	float speed;
	int field_8;
	int field_C;
	int field_10;
	NJS_OBJECT* SourceModelPtr;
	NJS_OBJECT* SourceModelCopy;
	NJS_OBJECT* Model;
	NJS_OBJECT* OtherModel;
	NJS_VECTOR field_24;
	char gap30[4];
	float field_34[33];
	int field_B8;
	int field_BC;
	int field_C0;
	float field_C4;
	float field_C8;
	float field_CC;
	int field_D0;
	int field_D4;
	int field_D8;
	float field_DC;
	int field_E0;
	int field_E4;
	int field_E8;
	int field_EC;
	int field_F0;
	int field_F4;
	int field_F8;
	int field_FC;
	int field_100;
	int field_104;
	int field_108;
	int field_10C;
	int field_110;
	int field_114;
	int field_118;
	int field_11C;
	int field_120;
	int field_124;
	int field_128;
	int field_12C;
	int field_130;
	int field_134;
	int field_138;
	int field_13C;
};

JiggleInfo* __cdecl InitJiggle(NJS_OBJECT* arg0);
void FreeJiggle(JiggleInfo* a1);
void ApplyJiggle(JiggleInfo* a1);
