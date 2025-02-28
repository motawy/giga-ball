//
//  Menu.h
//  Brick Breaker
//
//  Created by Tantawy Mohammed on 9/4/19.
//  Copyright © 2019 Tantawy Mohammed. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

NS_ASSUME_NONNULL_BEGIN

@interface Menu : SKScene
@property (nonatomic) BOOL gamePaused;

@property (nonatomic) SKConstraint* leftConstrain;
@property (nonatomic) SKConstraint* rightConstrain;
@property (nonatomic) SKConstraint* topConstrain;
@property (nonatomic) SKConstraint* bottomConstrain;
@end

NS_ASSUME_NONNULL_END
