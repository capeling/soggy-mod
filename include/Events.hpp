#pragma once 
#include "layers/SogLayer.hpp"

namespace soggy_mod {
    struct OnSogLayer final : geode::SimpleEvent<OnSogLayer, SogLayer*> {
        using SimpleEvent::SimpleEvent;
    };
}
