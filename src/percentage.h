#ifndef PERCENTH
#define PERCENTH

#include <iostream>
#include <iomanip>

class percentage {
  public:
    percentage(int total, int percent_to_log):
        total(total),
        percent_to_log(percent_to_log),
        increment(percent_to_log * total / 100)
    {
      countdown = increment;
      progress = 0;
    }
    void log() {
      if (--countdown == 0) {
        countdown = increment;
        progress++;
        std::cerr
          << "["
          << std::setw(3)
          << progress * percent_to_log
          << "%] Working...\n";
      }
    }

    const int total;
    const int percent_to_log;
    const int increment;
  private:
    int countdown;
    int progress;
};

#endif
