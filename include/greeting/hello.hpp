#if !defined(YSLZ_GREETING_HELLO_HPP)
#define YSLZ_GREETING_HELLO_HPP

#include <string_view>

namespace yslz
{
    constexpr std::string_view hello()
    {
        return "你好";
    }
};

#endif // !defined(YSLZ_GREETING_HELLO_HPP)
