// SKIP PARAM: --set ana.activated[+] apron --set ana.activated[+] unassume --set witness.yaml.unassume 25-apron-unassume-strengthening.yml --enable ana.apron.strengthening --set sem.int.signed_overflow assume_none
#include <goblint.h>

int main() {
  int x, y;
  x = 0;
  if (x < y) {
    __goblint_check(x == 0); // UNKNOWN (intentional by unassume)
    __goblint_check(x >= 0);
    __goblint_check(x < y); // TODO: https://github.com/goblint/analyzer/issues/1373
  }
  return 0;
}
