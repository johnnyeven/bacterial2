//
//  ScoreScene.h
//  bacterial
//
//  Created by 李翌文 on 14-6-30.
//  Copyright (c) 2014年 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "UMSocial.h"

@interface ScoreScene : CCNode
<UMSocialUIDelegate>

-(void)setOver:(BOOL)over;
-(void)setScore:(int)score;
-(void)setScreenshot:(UIImage *)screenshot;

@end
