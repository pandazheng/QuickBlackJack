//
//  Player.h
//  QuickBlackJack
//
//  Created by Kayden Bui on 3/1/13.
//  Copyright (c) 2013 Kayden Bui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GameLayer.h"

@interface Player : NSObject
@property (nonatomic, assign) NSInteger fund;
@property (nonatomic, strong) NSMutableArray *cardHands;
@property (nonatomic, weak) GameLayer *layer;
@property (nonatomic, assign) NSInteger totalPoints;
@property (nonatomic, assign) NSInteger totalPointsOfSecondHand;
@property (nonatomic, assign) NSInteger splitModeStatus;
//@property (nonatomic, assign) NSInteger totalPointsForCardHand2;
@property (nonatomic, assign) BOOL busted;
@property (nonatomic, assign) BOOL turnFinished;


//designated initializer
- (id) initWithLayer:(GameLayer *)layer;
- (void) drawCard: (float)delay;

@end
