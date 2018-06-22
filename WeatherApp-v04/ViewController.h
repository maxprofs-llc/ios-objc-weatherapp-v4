//
//  ViewController.h
//  WeatherApp-v04
//
//  Created by Edward Apostol on 6/21/18.
//  Copyright © 2018 edward. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GradientView.h"

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIView       *shadowContainerView;
@property (strong, nonatomic) IBOutlet GradientView *observationContainerView;

@property (strong, nonatomic) IBOutlet UILabel      *locationLabel;
@property (strong, nonatomic) IBOutlet UILabel      *currentTemperatureLabel;
@property (strong, nonatomic) IBOutlet UILabel      *feelsLikeTemperatureLabel;
@property (strong, nonatomic) IBOutlet UILabel      *weatherDescriptionLabel;
@property (strong, nonatomic) IBOutlet UILabel      *windDescriptionLabel;
@property (strong, nonatomic) IBOutlet UILabel      *humidityLabel;
@property (strong, nonatomic) IBOutlet UILabel      *dewpointLabel;
@property (strong, nonatomic) IBOutlet UILabel      *lastUpdatedLabel;

@property (strong, nonatomic) IBOutlet UIImageView  *currentConditionImageView;
@property (strong, nonatomic) IBOutlet UIImageView  *weatherUndergroundImageView;

- (IBAction)refresh:(id)sender;

@end

