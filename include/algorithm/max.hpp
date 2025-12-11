#if !defined(YYZL_ALGORITHM_MAX_HPP)
#define YYZL_ALGORITHM_MAX_HPP

namespace yslz
{
    template <typename T>
    const T &max(const T &a, const T &b)
    {
        return (a < b) ? b : a;
    }
};

#endif // !defined(YYZL_ALGORITHM_MAX_HPP)