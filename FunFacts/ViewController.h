//
//  ViewController.h
//  FunFacts
//
//  Created by Jon Bachelor on 5/17/16.
//  Copyright © 2016 Jon Bachelor. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) IBOutlet UIView *background;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;


@end

