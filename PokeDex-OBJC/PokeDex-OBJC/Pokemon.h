//
//  Pokemon.h
//  PokeDex-OBJC
//
//  Created by Joe on 8/16/20.
//  Copyright © 2020 AlphaGradeINC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Pokemon : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSUInteger *identifier;
@property (nonatomic) NSArray *abilities;
@property (nonatomic) NSURL *image;

@end

NS_ASSUME_NONNULL_END
