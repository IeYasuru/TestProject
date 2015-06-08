#pragma once

#include "position.h"
#include "macros.h"
#include "pc.h"
#include "status.h"
#include "skill.h"
#include "mob.h"
#include "inventory.h"

class stats
{
	public:
		stats();
		~stats();
		
	private: 
		int str;
		int _int;
		int dex;
		int agi;
		int vit;
		int luk;
		
		int atk, matk;
//	int atk2, matk2;
		int def, mdef;
//	int def2, mdef2;

		int hit;
		int flee;
		int crit;
		
		double mfind;
};

enum pc_stats
{
	PC_STR = 1,
	PC_INT,
	PC_AGI,
	PC_DEX,
	PC_VIT,
	PC_LUK,
	PC_ATK,
	PC_MATK,
	//	PC_ATK2,
	//	PC_MATK2,
	PC_DEF,
	PC_MDEF;
	//	PC_DEF2,
	//	PC_MDEF2,
	PC_MAGICFIND,
	PC_FLEE,
	PC_CRIT,
	PC_HIT,

	PC_MAX_STAT
};