#include <functional>
#include <vector>
#include <tuple>
#include <algorithm>

template<typename T, typename... Ts> 
std::function<T(Ts... args)> memoize(std::function<T(Ts... args)> inFunc)
{
    return std::function<T(Ts... args)>
    {
        static std::vector<std::tuple<Ts...>, T> prevArgs;
        if (std::find(prevArgs.begin(), prevArgs.end(), args) != prevArgs.end())
        {
            /* code */
        }
        
    }
}