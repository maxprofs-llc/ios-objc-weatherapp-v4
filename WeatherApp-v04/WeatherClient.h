//
//  WeatherClient.h
//  WeatherApp-v04
//
//  Created by Edward Apostol on 6/22/18.
//  Copyright © 2018 edward. All rights reserved.
//

#import "AFHTTPClient.h"
#import <AFNetworking/AFNetworking.h>

@interface WeatherClient : AFHTTPClient
+ (instancetype)sharedClient;
@end
