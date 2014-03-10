//
//  THViewController.h
//  CrystalBall
//
//  Created by Anton Rivera on 1/22/14.
//  Copyright (c) 2014 Hudson Bay Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class THCrystalBall;

@interface THViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) THCrystalBall *crystalBall;
@property (weak, nonatomic) IBOutlet UIImageView *backgrounImageView;

- (void) makePrediction;

@end
