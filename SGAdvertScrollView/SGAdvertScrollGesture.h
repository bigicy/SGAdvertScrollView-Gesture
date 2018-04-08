//
//  SGAdvertScrollGesture.h
//  SGAdvertScrollViewExample
//
//  Created by 黄兵 on 2018/4/8.
//  Copyright © 2018年 kingsic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SGAdvertScrollGesture : UITapGestureRecognizer

@property (nonatomic, strong) NSIndexPath *indexPath;

@property (nonatomic, assign) BOOL isTop;

@end
