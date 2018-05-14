#ifndef _PROCINFO_H_
#define _PROCINFO_H_

#include "param.h"

struct procinfo{
    int inuse[NPROC];
	int pid[NPROC];
	int state[NPROC];
	int priority[NPROC];
	char name[NPROC][16];
};





#endif
