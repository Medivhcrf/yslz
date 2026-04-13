#if !defined(YSLZ_ALGORITHM_MIN_HPP)
#define YSLZ_ALGORITHM_MIN_HPP

namespace yslz
{
    template <typename T>
    const T &min(const T &a, const T &b)
    {
        return (a < b) ? a : b;
    }
};

#endif // !defined(YSLZ_ALGORITHM_MIN_HPP)
