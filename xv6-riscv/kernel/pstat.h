#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct pstat {
  int inuse[NPROC];   // whether slot of process is in use
  int tickets[NPROC]; // number of tickets for this process
  int pid[NPROC];     // pid of process
  int ticks[NPROC];   // sum of ticks of process
};

#endif // _PSTAT_H_