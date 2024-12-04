# CoolSuaveGuyRepo
Samuel Fortin
Project 3: Lottery Scheduling - files updated:

proc.h: added tickets and ticks to struct proc{}.

proc.c: initiallized tickets and ticks in allocproc() function, child tickets are set to inherit from parents in fork() function, updated to collect total in scheduler() function, generated a random number using scaled_random() function, and selected the winning process including the winning ticket.

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

Proof it works:
As seen in the bar graph and pie graph, 1 has the highest value, with 2 and 3 trailing behind. I let this run for 5 hours and very large numbers were achieved. The 3-2-1 ratio was not perfectly upheld by the scheduler. However, a clear hierarchy of order descending from 1 was established. The percentages were roughly 38%, 34%, and 28%.

![image](https://github.com/user-attachments/assets/9f5bdbd6-2eea-4b3e-923b-10b7bee7a20c)

