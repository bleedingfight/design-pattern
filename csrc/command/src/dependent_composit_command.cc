#include "dependent_composit_command.h"
void DependentCompositCommand::call() {
  bool ok = true;
  for (auto& cmd : *this) {
    if (ok) {
      cmd.call();
      ok = cmd.successed;
    } else {
      cmd.successed = false;
    }
  }
}
