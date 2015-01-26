//    OpenVPN -- An application to securely tunnel IP networks
//               over a single port, with support for SSL/TLS-based
//               session authentication and key exchange,
//               packet encryption, packet authentication, and
//               packet compression.
//
//    Copyright (C) 2013 OpenVPN Technologies, Inc.
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU Affero General Public License Version 3
//    as published by the Free Software Foundation.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU Affero General Public License for more details.
//
//    You should have received a copy of the GNU Affero General Public License
//    along with this program in the COPYING file.
//    If not, see <http://www.gnu.org/licenses/>.

// process-wide initialization for underlying cryptographic engines

#ifndef OPENVPN_INIT_ENGINEINIT_H
#define OPENVPN_INIT_ENGINEINIT_H

#include <string>

#if defined(USE_OPENSSL)
#include <openvpn/openssl/util/engine.hpp>
#endif

#if 0
extern "C" {
  void OPENSSL_cpuid_setup();
}
#endif

namespace openvpn {

  void setup_crypto_engine(const std::string& engine)
  {
#if defined(USE_OPENSSL)
    openssl_setup_engine(engine);
#endif
  }

#if 0
  OPENSSL_cpuid_setup();
#endif
}

#endif