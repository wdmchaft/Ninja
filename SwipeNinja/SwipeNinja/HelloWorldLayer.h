//
//  HelloWorldLayer.h
//  SwipeNinja
//
//  Created by Ryan Lesko on 3/29/12.
//  Copyright University of Miami 2012. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// Importing Chipmunk headers
#import "chipmunk.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
	cpSpace *space;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
-(void) step: (ccTime) dt;
-(void) addNewSpriteX:(float)x y:(float)y;

@end
