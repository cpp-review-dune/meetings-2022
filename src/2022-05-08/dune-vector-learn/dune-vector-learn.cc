#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <iostream>
#include <dune/common/test/testsuite.hh>
#include <dune/common/arraylist.hh>

int main(int argc, char **argv)
{
  Dune::TestSuite test;
  Dune::ArrayList<double, 10> alist;

  for (int i = 0; i < 100; i++)
    alist.push_back(i);

  for (auto &e : alist)
    std::cout << e << std::endl;

  return test.exit();
}
