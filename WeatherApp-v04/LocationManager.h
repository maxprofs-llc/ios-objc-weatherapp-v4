//
//  LocationManager.h
//  WeatherApp-v04
//
//  Created by Edward Apostol on 6/22/18.
//  Copyright © 2018 edward. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

extern NSString * const kLocationDidChangeNotificationKey;

@interface LocationManager : NSObject
    @property (nonatomic, readonly) CLLocation *currentLocation;
    @property (nonatomic, readonly) BOOL       isMonitoringLocation;

    + (instancetype)sharedManager;

    - (void)startMonitoringLocationChanges;
    - (void)stopMonitoringLocationChanges;
@end
