//
//  ViewController.m
//  WeatherApp-v04
//
//  Created by Edward Apostol on 6/21/18.
//  Copyright © 2018 edward. All rights reserved.
//

#import "ViewController.h"
#import "WeatherClient.h"
#import "LocationManager.h"
#import "SVProgressHUD.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)reloadData
{
    WeatherClient *client = [WeatherClient sharedClient];
    CLLocation *location = [[LocationManager sharedManager] currentLocation];
    
    [SVProgressHUD showWithMaskType:SVProgressHUDMaskTypeGradient];
    
    __weak ViewController *weakSelf = self;
    [client getCurrentWeatherObservationForLocation:location completion:^(Observation *observation, NSError *error) {
        if (error)
        {
            NSLog(@"Web Service Error: %@", [error description]);
        }
        else
        {
            [weakSelf updateUIWithObservation:observation];
        }
        
        [SVProgressHUD dismiss];
    }];
}

- (void)updateUIWithObservation:(Observation *)observation
{
    // We will update our UI here...
}

@end
