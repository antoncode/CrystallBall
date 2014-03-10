//
//  THCrystalBall.m
//  CrystalBall
//
//  Created by Anton Rivera on 1/23/14.
//  Copyright (c) 2014 Hudson Bay Inc. All rights reserved.
//

#import "THCrystalBall.h"

@implementation THCrystalBall

- (NSArray *) predictions {
    if (_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain",
        @"It is decided",
        @"YES",
        @"Stars are not aligned",
        @"My reply is no",
        @"It is doubtful",
        @"Better not tell you now",
        @"Ask again",
        @"Magic!",
        nil];
    }
    return _predictions;
    
}

- (NSString*) randomPrediction {
    
    NSInteger random = arc4random_uniform(self.predictions.count);
    
    return [self.predictions objectAtIndex:random];
}

@end
