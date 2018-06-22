//
//  WeatherClient.m
//  WeatherApp-v04
//
//  Created by Edward Apostol on 6/22/18.
//  Copyright © 2018 edward. All rights reserved.
//

#import "WeatherClient.h"
#import "WeatherAPIKey.h"

static NSString * const kWeatherUndergroundAPIBaseURLString = @"http://api.wunderground.com/api/";

@implementation WeatherClient
#pragma mark - Singleton
+ (instancetype)sharedClient
{
    static WeatherClient *sharedClient = nil;
    static dispatch_once_t onceToken;

        dispatch_once(&onceToken, ^{
            NSString *baseURLString = [kWeatherUndergroundAPIBaseURLString stringByAppendingString:kWeatherUndergroundAPIKey];
            sharedClient = [[self alloc] initWithBaseURL:[NSURL URLWithString:baseURLString]];
        });
        
        return sharedClient;
}

#pragma mark - Initialization

- (id)initWithBaseURL:(NSURL *)url
{
    self = [super initWithBaseURL:url];
    if (self)
    {
        [self registerHTTPOperationClass:[AFJSONRequestOperation class]];
        [self setDefaultHeader:@"Accept" value:@"application/json"];
    }
    
    return self;
}
@end
