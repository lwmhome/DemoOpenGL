//
//  TouchDrawViewViaOpenGLES.h
//  OpenGLDemo
//
//  Created by zj-db0352 on 15/8/6.
//  Copyright (c) 2015年 zj-db0352. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Line.h"

@protocol TouchDrawViewViaOpenGLESDelegate <NSObject>

- (void)drawCGPointViaOpenGLES:(CGPoint)point inFrame:(CGRect)rect;

@end

@interface TouchDrawViewViaOpenGLES : UIView

@property (nonatomic) NSMutableArray *linesCompleted;
@property (nonatomic) Line *currentLine;
@property (nonatomic, weak) id<TouchDrawViewViaOpenGLESDelegate> delegate;

@end
