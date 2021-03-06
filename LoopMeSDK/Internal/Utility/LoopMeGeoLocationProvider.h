//
//  LoopMeGeoLocationProvider.h
//  LoopMeSDK
//
//  Created by Kogda Bogdan on 1/19/15.
//
//

#import <UIKit/UIKit.h>

@class CLLocation;

@interface LoopMeGeoLocationProvider : NSObject

@property (nonatomic, getter = isLocationUpdateEnabled) BOOL locationUpdateEnabled;
@property (nonatomic, readonly, strong) CLLocation *location;

+ (LoopMeGeoLocationProvider *)sharedProvider;
- (BOOL)isValidLocation:(CLLocation *)inputLocation;
@end
