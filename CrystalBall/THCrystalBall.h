//
//  THCrystalBall.h
//  CrystalBall
//
//  Created by Anton Rivera on 1/23/14.
//  Copyright (c) 2014 Hudson Bay Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THCrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;

@end
