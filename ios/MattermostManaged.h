//
//  MattermostManaged.h
//  Mattermost
//
// Copyright (c) 2016-present Mattermost, Inc. All Rights Reserved.
// See License.txt for license information.
//

#import <React/RCTEventEmitter.h>


@interface MattermostManaged : RCTEventEmitter

+ (void)sendConfigChangedEvent;

@end
