//
//  MainWindowController.h
//  SnakeMac
//
//  Created by Alberto Quesada Aranda on 16/05/15.
//  Copyright (c) 2015 Alberto Quesada Aranda. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "SnakeStateProtocol.h"
#import "Snake.h"

@interface MainWindowController : NSView <SnakeStateProtocol> {

    NSTimer *timer; // speed of the snake --> difficulty of the game
    
}

@property (nonatomic) Snake *snake; // snake object

-(void)initGame; // start the game
-(void)gameOver; // finish the game

@end