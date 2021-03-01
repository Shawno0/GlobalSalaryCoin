// Copyright (c) 2017-2020 The GlobalSalaryCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GlobalSalaryCoin_ZEROCOIN_H
#define GlobalSalaryCoin_ZEROCOIN_H

#include "uint256.h"
#include "libzerocoin/bignum.h"

uint256 GetPubCoinHash(const CBigNum& bnValue);

#endif //GlobalSalaryCoin_ZEROCOIN_H
