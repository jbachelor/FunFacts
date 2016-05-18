//
//  FactBook.h
//  FunFacts
//
//  Created by Jon Bachelor on 5/17/16.
//  Copyright © 2016 Jon Bachelor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
