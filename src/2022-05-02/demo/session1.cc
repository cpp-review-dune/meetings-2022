#include <iostream>
#include <cmath>
#include <iomanip>

template <typename T>
int sgn(T val)
{
  return (T(0) < val) - (val < T(0));
}

int main()
{
  // Primera parte
  std::cout << "5 + 3 = " << 5 + 3 << std::endl
            << "5 - 3 = " << 5 - 3 << std::endl
            << "5 * 3 = " << 5 * 3 << std::endl
            << "5 / 3 = " << 5. / 3 << std::endl
            << "3 / 5 = " << 3. / 5 << std::endl
            << "5 ^ 3 = " << pow(5, 3) << std::endl;

  // Segunda parte
  std::cout << "290 / 7 = " << std::setprecision(4 + 2)
            << 290. / 7 << std::endl;

  std::cout << "290 / 7 = " << std::setprecision(15 + 2)
            << 290. / 7 << std::endl;

  std::cout << "290 / 7 = " << std::scientific
            << 290. / 7 << std::endl;

  std::cout << "290 / 7 = " << std::setprecision(1 + 2)
            << std::fixed << 290. / 7 << std::endl;

  std::cout << "290 / 7 = " << std::setprecision(11 + 2)
            << std::fixed << 290. / 7 << std::endl;

  std::cout << "290 / 7 = " << std::setprecision(0 + 2)
            << 290. / 7 << std::endl;

  // Tercera parte
  std::cout << "sqrt(81) = " << sqrt(81) << std::endl
            << "nthroot(80, 5) = " << pow(80, 1. / 5) << std::endl
            << "e^5 = " << exp(5.) << std::endl
            << "|-24| = " << abs(-24) << std::endl
            << "ln(1000) = " << log(1000) << std::endl
            << "log(1000) = " << log10(1000) << std::endl
            << "Gamma(6) = (6 - 1)! = " << tgamma(6) << std::endl
            << "pi = " << acos(-1) << std::endl
            << "sin(pi / 6) = " << sin(acos(-1) / 6) << std::endl
            << "cos(pi / 6) = " << cos(acos(-1) / 6) << std::endl
            << "tan(pi / 6) = " << tan(acos(-1) / 6) << std::endl
            << "cot(pi / 6) = " << 1 / tan(acos(-1) / 6) << std::endl;

  std::cout << "round(17 / 5) = " << round(17. / 5) << std::endl
            << "fix(13 / 5) = " << trunc(13. / 5) << std::endl
            << "ceil(11 / 5) = " << ceil(11. / 5) << std::endl
            << "floor(-9 / 4) = " << floor(-9. / 4) << std::endl
            << "rem(13, 5) = " << 13 % 5 << std::endl;

  std::cout << "sign(5) = "
            << sgn<int>(5)
            << std::endl;

  // Tercera parte
  auto a = 12;
  std::cout << "a = " << a << std::endl;

  auto B = 4;
  std::cout << "B = " << B << std::endl;

  auto C = (a - B) + 40 - a / B * 10;
  std::cout << "(a - B) + 40 - a / B * 10 = " << C << std::endl;

  auto ABB = 72;
  std::cout << "ABB = " << ABB << std::endl;
  ABB = 9;
  std::cout << "ABB = " << ABB << std::endl;

  auto x = 0.75;
  std::cout << "x = " << x << std::endl;

  auto E = pow(sin(x), 2) + pow(cos(x), 2);
  std::cout << "sin^2 (x) + cos^2 (x) = " << E << std::endl;

  return 0;
}
