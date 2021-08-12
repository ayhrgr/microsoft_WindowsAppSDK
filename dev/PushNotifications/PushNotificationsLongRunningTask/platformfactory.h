﻿#pragma once

struct WpnLrpPlatformFactory WrlFinal : public Microsoft::WRL::ClassFactory<>
{
    HRESULT MakeAndInitialize();

    IFACEMETHODIMP CreateInstance(
        _In_opt_ IUnknown* outer,
        _In_ REFIID riid,
        _COM_Outptr_ void** ppvObject) override;

    static void SignalEvent();

    static void WaitForEvent();

    static void SetupTimer();

    static void CancelTimer();

private:

    Microsoft::WRL::ComPtr<NotificationsLongRunningPlatformImpl> m_platform;
    std::once_flag m_platformInitializedFlag;
};