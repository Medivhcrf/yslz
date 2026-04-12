#if !defined(YSLZ_ALGORITHM_MAX_HPP)
#define YSLZ_ALGORITHM_MAX_HPP

namespace yslz
{
    template <typename T>
    const T &max(const T &a, const T &b)
    {
        return (a < b) ? b : a;
    }
};

#endif // !defined(YSLZ_ALGORITHM_MAX_HPP)