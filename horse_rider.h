// Rákeresel erre:

extern THorseStat c_aHorseStat[HORSE_MAX_LEVEL+1];



// Definiáljuk alá ezt:

#define ENABLE_INFINITE_HORSE_HEALTH_STAMINA


// Rákeresel ezen sorokra:

		short		GetHorseHealth() const	{ return m_Horse.sHealth; }
		short		GetHorseStamina() const	{ return m_Horse.sStamina; }
		

// Módosítod így a 2 sort:

#ifdef ENABLE_INFINITE_HORSE_HEALTH_STAMINA
		short		GetHorseHealth() const	{ return GetHorseMaxHealth(); }
		short		GetHorseStamina() const	{ return GetHorseMaxStamina(); }
#else
		short		GetHorseHealth() const	{ return m_Horse.sHealth; }
		short		GetHorseStamina() const	{ return m_Horse.sStamina; }
#endif
