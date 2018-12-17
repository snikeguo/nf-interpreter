﻿//
// Copyright (c) 2017 The nanoFramework project contributors
// Portions Copyright (c) Microsoft Corporation.  All rights reserved.
// See LICENSE file in the project root for full license information.
//

#include "win_net_sockets_native.h"


static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::socket___STATIC__I4__I4__I4__I4,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::bind___STATIC__VOID__OBJECT__SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::connect___STATIC__VOID__OBJECT__SZARRAY_U1__BOOLEAN,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::send___STATIC__I4__OBJECT__SZARRAY_U1__I4__I4__I4__I4,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::recv___STATIC__I4__OBJECT__SZARRAY_U1__I4__I4__I4__I4,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::close___STATIC__I4__OBJECT,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::listen___STATIC__VOID__OBJECT__I4,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::accept___STATIC__I4__OBJECT,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::getaddrinfo___STATIC__VOID__STRING__BYREF_STRING__BYREF_SZARRAY_SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::shutdown___STATIC__VOID__OBJECT__I4__BYREF_I4,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::sendto___STATIC__I4__OBJECT__SZARRAY_U1__I4__I4__I4__I4__SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::recvfrom___STATIC__I4__OBJECT__SZARRAY_U1__I4__I4__I4__I4__BYREF_SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::getpeername___STATIC__VOID__OBJECT__BYREF_SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::getsockname___STATIC__VOID__OBJECT__BYREF_SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::getsockopt___STATIC__VOID__OBJECT__I4__I4__SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::setsockopt___STATIC__VOID__OBJECT__I4__I4__SZARRAY_U1,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::poll___STATIC__BOOLEAN__OBJECT__I4__I4,
    Library_win_net_sockets_native_Windows_Networking_Sockets_SocketNative::ioctl___STATIC__VOID__OBJECT__U4__BYREF_U4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Windows_Networking_Sockets =
{
    "Windows.Networking.Sockets", 
    0x03D7E1A6,
    method_lookup,
    { 1, 0, 0, 0 }
};
