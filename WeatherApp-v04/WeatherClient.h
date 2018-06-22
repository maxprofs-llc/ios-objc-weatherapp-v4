//
//  WeatherClient.h
//  WeatherApp-v04
//
//  Created by Edward Apostol on 6/22/18.
//  Copyright © 2018 edward. All rights reserved.
//

#import "AFHTTPClient.h"
#import <AFNetworking/AFNetworking.h>
#import "Observation.h"
// noted here that the pch file is not associating properly. so manual import of core location framework may be needed
#import <CoreLocation/CoreLocation.h>

@interface WeatherClient : AFHTTPClient
+ (instancetype)sharedClient;
- (void)getCurrentWeatherObservationForLocation:(CLLocation *)location completion:(void(^)(Observation *observation, NSError *error))completion;

@end
