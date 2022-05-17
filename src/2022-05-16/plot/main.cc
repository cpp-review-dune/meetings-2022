#include <matplot/matplot.h>

int main()
{

  // auto f = matplot::figure<matplot::backend::gnuplot>(true);
  auto f = matplot::figure();
  f->ioff();
  auto ax = f->current_axes();
  ax->xlim({0., 2. * matplot::pi});
  ax->ylim({-1.5, 1.5});
  ax->yticks(matplot::iota(-1.5, 0.5, +1.5));
  ax->xticks(matplot::iota(0., 1., 2. * matplot::pi));
  f->save("main", "png");

  return 0;
}