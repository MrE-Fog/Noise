//
//  NFHandshakeState+Package.h
//  Noise
//
// Created by Paulo Andrade on 14/09/2018.
// Copyright © 2018 Outer Corner. All rights reserved.
//

#import "NFSession.h"
#import "NFHandshakeState.h"

NS_ASSUME_NONNULL_BEGIN

@interface NFHandshakeState (Package)

- (BOOL)startForSession:(NFSession *)session error:(NSError * _Nullable __autoreleasing *)error;

- (void)receivedData:(NSData *)data;

- (BOOL)needsPerformAction;
- (BOOL)performNextAction:(NSError * _Nullable __autoreleasing *)error;

@end

NS_ASSUME_NONNULL_END