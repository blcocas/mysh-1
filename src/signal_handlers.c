#include "signal_handlers.h"
#include <signal.h>
void catch_sigint(int signalNo)
{
  signal(signalNo,SIG_IGN);   //Ctrl+C
}

void catch_sigtstp(int signalNo)
{
  signal(signalNo,SIG_IGN); //Ctrl+Z
}
