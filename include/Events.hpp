#pragma once 
#include "layers/SogLayer.hpp"

namespace soggy_mod {
    struct OnSogLayer final : geode::Event<OnSogLayer, bool(SogLayer*)> {
        using Event::Event;
    };
}
