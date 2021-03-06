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

#include <CryptoNoteCore/BlockchainCache.h>
#include <map>

namespace CryptoNote {

struct KeyOutputInfo {
  Crypto::PublicKey publicKey;
  Crypto::Hash transactionHash;
  uint64_t unlockTime;
  uint16_t outputIndex;

  void serialize(CryptoNote::ISerializer& s);
};

// inherit here to avoid breaking IBlockchainCache interface
struct ExtendedTransactionInfo : CachedTransactionInfo {
  //CachedTransactionInfo tx;
  std::map<IBlockchainCache::Amount, std::vector<IBlockchainCache::GlobalOutputIndex>> amountToKeyIndexes; //global key output indexes spawned in this transaction
  void serialize(ISerializer& s);
};

}
