//
//  LoopMeGlobalSettings.h
//  LoopMeSDK
//
//  Created by Kogda Bogdan on 6/16/15.
//
//

#import <Foundation/Foundation.h>

@interface LoopMeGlobalSettings : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, assign, getter = isDoNotLoadVideoWithoutWiFi) BOOL doNotLoadVideoWithoutWiFi;
@property (nonatomic, assign, getter = isLiveDebugEnabled) BOOL liveDebugEnabled;

@end
