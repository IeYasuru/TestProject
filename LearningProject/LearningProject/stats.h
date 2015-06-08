#pragma once
class stats
{
	public:
		stats();
		~stats();
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
	PC_MDEF2,
	//	PC_DEF2,
	//	PC_MDEF2,
	PC_MAGICFIND,
	PC_FLEE,
	PC_CRIT,
	PC_HIT,

	PC_MAX_STAT
};