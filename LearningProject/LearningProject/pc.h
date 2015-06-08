#pragma once

#include "position.h"
#include "macros.h"
#include "stats.h"
#include "status.h"
#include "skill.h"
#include "mob.h"
#include "inventory.h"

class pc
{
	public:
		pc();
		~pc();
		int getInfo(enum pc_info);

		
	private:
		int hp;
		int mp;
		int max_hp;
		int max_mp;
		int money;
		int life_regen;
		int mp_regen;
		int life_drain;
		int mp_drain;
		inventory *items;
		skill *skills;
		position *pos;
		stats *stats;
		status *status;
};

enum pc_info
{
	PC_HP = 1,
	PC_MP,
	PC_MAX_HP,
	PC_MAX_MP,
	PC_MONEY,
	PC_LIFE_REGEN,
	PC_MP_REGEN,
	PC_LIFE_DRAIN,
	PC_MP_DRAIN,

	PC_MAX_INFO
};