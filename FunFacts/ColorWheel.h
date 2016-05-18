//
//  ColorWheel.h
//  FunFacts
//
//  Created by Jon Bachelor on 5/17/16.
//  Copyright © 2016 Jon Bachelor. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
