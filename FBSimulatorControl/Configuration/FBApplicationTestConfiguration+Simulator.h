/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <FBControlCore/FBControlCore.h>

#import <XCTestBootstrap/XCTestBootstrap.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The Action Type for an Agent Launch.
 */
extern FBiOSTargetActionType const FBiOSTargetActionTypeApplicationTest;

/**
 Conforms an Application Test Configuration.
 */
@interface FBApplicationTestConfiguration (Simulator) <FBiOSTargetFuture>

@end

NS_ASSUME_NONNULL_END
