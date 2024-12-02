# CoolSuaveGuyRepo
Samuel Fortin
Project 3: Lottery Scheduling - files updated:

proc.h: added tickets and ticks to struct proc{}.

proc.c: initiallized tickets and ticks in allocproc() function, child tickets are set to inherit from parents within function fork(), updated function to collect total in scheduler() function, generated a random number using scaled_random() function, and selected the winning process including the winning ticket.

syscall.h: added getpinfo() and settickets() system call numbers.

syscall.c: added getpinfo() and settickets() system calls.

sysproc.c: created the system call functions for getpinfo() and settickets().

user.h: added settickets() and getpinfo() to system calls.

usys.pl: added getpinfo() and settickets() entries.

Makefile: added random number generator to OBJS and hardwork.c test code to UPROGS.

hardwork.c: added file for test code.

random.h: added file to create scaled_random() and rand_init() uses.

random.c: added random number generator file.

pstat.h: added pstat.h file to pass results to user space.

getpinfo.c: created getpinfo file to display ticks and tickets for the user in - the command line.
