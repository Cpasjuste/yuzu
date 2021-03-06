// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include "core/hle/service/service.h"

namespace Service {
namespace NVFlinger {
class NVFlinger;
}

namespace VI {

class VI_M final : public ServiceFramework<VI_M> {
public:
    VI_M(std::shared_ptr<NVFlinger::NVFlinger> nv_flinger);
    ~VI_M() = default;

private:
    void GetDisplayService(Kernel::HLERequestContext& ctx);

    std::shared_ptr<NVFlinger::NVFlinger> nv_flinger;
};

} // namespace VI
} // namespace Service
