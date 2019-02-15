/*
 * Copyright (c) 2018, The MarketCash Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of MarketCash.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include "../IntegrationTestLib/BaseFunctionalTests.h"
#include "../IntegrationTestLib/Logger.h"
#include "gtest/gtest.h"

extern System::Dispatcher globalSystem;
extern CryptoNote::Currency currency;
extern Tests::Common::BaseFunctionalTestsConfig config;

class TransfersTest :
  public Tests::Common::BaseFunctionalTests,
  public ::testing::Test {

public:
  TransfersTest() : BaseFunctionalTests(currency, globalSystem, config) {
  }
};
