// Copyright (c) 2020 The GlobalSalaryCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef GlobalSalaryCoin_SAPLING_TEST_FIXTURE_H
#define GlobalSalaryCoin_SAPLING_TEST_FIXTURE_H

#include "test/test_globalsalarycoin.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //GlobalSalaryCoin_SAPLING_TEST_FIXTURE_H
