//
//  LabelFactory.h
//  LabelChess
//
//  Created by Hailong.wang on 15/7/27.
//  Copyright (c) 2015年 Hailong.wang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    //上边红色的那一派
    upSide = 999,
    //下边绿色的那一派
    downSide,
    //没有棋子的那些格子
    noSide
}UpOrDown;

@interface LabelFactory : NSObject

//将定制的title和frame传入，返回一个制造的label
+ (UILabel *)createLabelWithTitle:(NSString *)title frame:(CGRect)frame side:(UpOrDown)upOrDown;

@end
