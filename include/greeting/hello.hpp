#if !defined(YYZL_GREETING_HELLO_HPP)
#define YYZL_GREETING_HELLO_HPP

#include <string_view>

namespace yslz
{
    constexpr std::string_view hello()
    {
        return "你好";
    }
};

#endif // !defined(YYZL_GREETING_HELLO_HPP)
