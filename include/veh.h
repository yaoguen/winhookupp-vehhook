#pragma once

#include "defines.h"
#include "hook.h"

_START_WINHOOKUPP_NM_
class Veh: public virtual Hook
{
public:
    virtual bool Enable(LPVOID target, LPVOID detour, LPVOID* origin = nullptr) noexcept override;

    virtual bool Disable() noexcept override;

private:
    DWORD old_protect_;
    LPVOID target_;         // [In] Address of the target function.
    LPVOID detour_;         // [In] Address of the detour function.
};

_END_WINHOOKUPP_NM_
