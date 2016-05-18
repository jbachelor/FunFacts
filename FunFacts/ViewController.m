//
//  ViewController.m
//  FunFacts
//
//  Created by Jon Bachelor on 5/17/16.
//  Copyright © 2016 Jon Bachelor. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.factBook = [[FactBook alloc] init];
    [self showFunFact];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact {
    ColorWheel *colorWheel = [[ColorWheel alloc]init];
    UIColor *newColor = [colorWheel randomColor];
    
    self.background.backgroundColor = newColor;
    self.funFactButton.tintColor = newColor;
    self.funFactLabel.text = [self.factBook randomFact];
}

@end
