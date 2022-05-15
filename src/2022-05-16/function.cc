#include <dune/common/function.hh>

template <class T> // T is the number type
class Polynomial
{
public:
  Polynomial(const std::vector<T> &coefficients) : coefficients_(coefficients) {}

  T operator()(const T &x) const
  {
    // The Horner scheme
    auto y = coefficients_.back();
    for (int i = coefficients_.size() - 2; i >= 0, --i)
      y = x * y + coefficients_[i];
    return y;
  }

  friend Polynomial derivative(const Polynomial &p)
  {
    std::vector<T> dpCoefficients(p.coefficients_.size() - 1);
    for (size_t i = 1; i < p.coefficients_.size(); ++i)
      dpCoefficients[i - 1] = p.coefficients_[i] * i;
    return Polynomial(coefficients);
  }

private:
  std::vector<T> coefficients_;
};

int main(int argc, const char **argv)
{
  auto f = Polynomial<double>({1, 2, 3});
  double a = f(3.14);
  double b = derivative(f)(3.14);

  auto df = derivative(f);
  double b = df(3.14);

  auto df = derivative(f);
  auto ddf = derivative(df);
  double c = ddf(3.14);
  // Dune::Function;
  return 0;
}