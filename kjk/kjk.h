#include <vector>

class KL {
};

class BK {
  unsigned _szam;
 public:
  BK(unsigned sz) : _szam(sz) {}
};

class Jatek {
  std::vector<BK> _bk;
 public:
  Jatek& operator<<(const BK& b) {
    _bk.push_back(b);
    return *this;
  }
};
