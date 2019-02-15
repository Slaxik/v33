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

#include <cstddef>
#include <cstdint>
#include <limits>
#include <initializer_list>

namespace CryptoNote {
namespace parameters {

#define CRYPTONOTE_MAX_BLOCK_NUMBER                     500000000
#define CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                  500000000
#define CRYPTONOTE_MAX_TX_SIZE                          1000000000
#define CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX         0x166df9 // starts with "invc"
#define CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW            10
#define CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT              360
#define CRYPTONOTE_BLOCK_CONSENSUS_FEE_HOLD             2 //50% for hold platform

#define BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW               60


#define MONEY_SUPPLY                                    261800000000
#define MIN_MIXIN                                       0
#define MANDATORY_MIXIN_BLOCK_VERSION                   0
#define KILL_HEIGHT                                     0
#define ZAWY_DIFFICULTY_BLOCK_INDEX                     0
#define ZAWY_DIFFICULTY_V2                              1
#define ZAWY_DIFFICULTY_DIFFICULTY_BLOCK_VERSION        0

#define EMISSION_SPEED_FACTOR                           26
#define GENESIS_BLOCK_REWARD                            200000000000

#define CRYPTONOTE_REWARD_BLOCKS_WINDOW                 100
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE       100000
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2    90000
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1    80000
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE
#define CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE          600
#define CRYPTONOTE_MONEY_DECIMAL_POINT                  2
#define CRYPTONOTE_MONEY_DECIMAL_UNITS                  (uint64_t)pow(10, CRYPTONOTE_MONEY_DECIMAL_POINT)
#define MINIMUM_FEE                                     (uint64_t)pow(10, CRYPTONOTE_MONEY_DECIMAL_POINT / 2)
#define DEFAULT_FEE                                     (uint64_t)pow(10, CRYPTONOTE_MONEY_DECIMAL_POINT / 2)
#define DEFAULT_DUST_THRESHOLD                          MINIMUM_FEE

#define MAX_TRANSACTION_SIZE_LIMIT                      128000 
#define MEMPOOL_POLLING_INTERVAL                        60 // how often to clean mempool

#define DIFFICULTY_TARGET                               300
#define EXPECTED_NUMBER_OF_BLOCKS_PER_DAY               24 * 60 * 60 / DIFFICULTY_TARGET
#define DIFFICULTY_WINDOW                               17
#define DIFFICULTY_WINDOW_V1                            DIFFICULTY_WINDOW
#define DIFFICULTY_WINDOW_V2                            DIFFICULTY_WINDOW
#define DIFFICULTY_WINDOW_V4                            DIFFICULTY_WINDOW
#define DIFFICULTY_WINDOW_V5                            90
#define DIFFICULTY_CUT                                  0
#define DIFFICULTY_CUT_V1                               DIFFICULTY_CUT
#define DIFFICULTY_CUT_V2                               DIFFICULTY_CUT
#define DIFFICULTY_LAG                                  0
#define DIFFICULTY_LAG_V1                               DIFFICULTY_LAG
#define DIFFICULTY_LAG_V2                               DIFFICULTY_LAG

#define INVC                                             0x60000
#define MAX_BLOCK_SIZE_INITIAL                          100 * 1024
#define MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR           100 * 1024
#define MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR         365 * 24 * 60 * 60 / DIFFICULTY_TARGET

#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS       1
#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS      DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS

#define CRYPTONOTE_MEMPOOL_TX_LIVETIME                  60 * 60 * 24
#define CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME   CRYPTONOTE_MEMPOOL_TX_LIVETIME * 7
#define CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL 7


#define FUSION_TX_MIN_INPUT_COUNT                       12
#define FUSION_TX_MIN_IN_OUT_COUNT_RATIO                4

#define KEY_IMAGE_CHECKING_BLOCK_INDEX                  0
#define UPGRADE_HEIGHT_V2                               11900
#define UPGRADE_HEIGHT_V3                               12000
#define UPGRADE_HEIGHT_V4                               12100
#define UPGRADE_HEIGHT_V5                               12200
#define UPGRADE_HEIGHT_V6                               28000

#define UPGRADE_VOTING_THRESHOLD                        90
#define UPGRADE_VOTING_WINDOW                           EXPECTED_NUMBER_OF_BLOCKS_PER_DAY
#define UPGRADE_WINDOW                                  EXPECTED_NUMBER_OF_BLOCKS_PER_DAY

#define CRYPTONOTE_BLOCKS_FILENAME                      "blocks.bin"
#define CRYPTONOTE_BLOCKINDEXES_FILENAME                "blockindexes.bin"
#define CRYPTONOTE_POOLDATA_FILENAME                    "poolstate.bin"
#define P2P_NET_DATA_FILENAME                           "p2pstate.bin"
#define MINER_CONFIG_FILE_NAME                          "miner_conf.json"

} // parameters

#define CRYPTONOTE_NAME                                 "investcoin"
#define CRYPTONOTE_GENESIS_TX                           "013c01ff000101029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd08807121019093d7a8a8187801a8b1adceff6da28b359f070dc3e60292179fc5ca4bf8b92d"


#define TRANSACTION_VERSION_1                           1
#define TRANSACTION_VERSION_2                           2
#define CURRENT_TRANSACTION_VERSION                     TRANSACTION_VERSION_1
#define BLOCK_MAJOR_VERSION_1                           1
#define BLOCK_MAJOR_VERSION_2                           2
#define BLOCK_MAJOR_VERSION_3                           3
#define BLOCK_MAJOR_VERSION_4                           4
#define BLOCK_MAJOR_VERSION_5                           5
#define BLOCK_MAJOR_VERSION_6                           6

#define BLOCK_MINOR_VERSION_0                           0
#define BLOCK_MINOR_VERSION_1                           1

#define BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT          20000
#define BLOCKS_SYNCHRONIZING_DEFAULT_COUNT              4000
#define COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT           1000

#define P2P_DEFAULT_PORT                                5333
#define RPC_DEFAULT_PORT                                5334

#define P2P_LOCAL_WHITE_PEERLIST_LIMIT                  1000
#define P2P_LOCAL_GRAY_PEERLIST_LIMIT                   5000

#define P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE            64 * 1024 * 1024
#define P2P_DEFAULT_CONNECTIONS_COUNT                   10
#define P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT       70
#define P2P_DEFAULT_HANDSHAKE_INTERVAL                  60
#define P2P_DEFAULT_PACKET_MAX_SIZE                     50000000
#define P2P_DEFAULT_PEERS_IN_HANDSHAKE                  250
#define P2P_DEFAULT_CONNECTION_TIMEOUT                  5000
#define P2P_DEFAULT_PING_CONNECTION_TIMEOUT             2000
#define P2P_DEFAULT_INVOKE_TIMEOUT                      60 * 2 * 1000
#define P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT            5000

const std::initializer_list<const char*> SEED_NODES {
  "81.177.135.60:5333",
  "195.161.114.82:5333",
  "81.177.135.158:5333",
  "81.177.140.56:5333"
  
};

struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

#ifdef __GNUC__
__attribute__((unused))
#endif

const std::initializer_list<CheckpointData> CHECKPOINTS {
  {10,		"3f658b2dacdd0c1bc1c3cc59037a867992c688079cf5a6594567e2d66b2eb4f1" },
  {100,		"cc5133a55eac068fbbe512dab52b62d6dc5486a0c4da03f5389da8422b2e967c" },
  {1000,	"dece7c338cb084377748106548bfcc14d50c1a7d20e98435a1118c81db3c86fb" },
  {10000,	"7a296132cca0c2e550a824c7997e9a129d019d1e87512e3959c0f86568521932" },
  {11800,   "c7eb3a09d83bef3cdcd313c4c4ff98ce868e10abf0d50bce0a1423a71ae80c00" },
  {25000,   "f864a8d0fc10dcef6fca66a02284c90525a7a11d63c69dddc4fbf6ac282586df" }
};

} // CryptoNote
