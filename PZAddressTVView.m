
//
//  PZAddressTVView.m
//  yys_ios
//
//  Created by 潘珍珍 on 2018/3/14.
//  Copyright © 2018年 YYS. All rights reserved.
//

#import "PZAddressTVView.h"

@implementation PZAddressTVView
- (id)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if (self) {
        self.frame = frame;
        self.backgroundColor = [UIColor whiteColor];

        [self addSubview:self.textView];
        
        self.textView.currentLength = ^(NSInteger length) {
            
            if (length==200) {
                [HLHHUDView showtipWithMsg:@"已达字数上限" delayTime:showTimeOne];
            }
        };
    }
    return self;
}


#pragma mark--lazy load
- (PZCommonTextView *)textView{
    
    if (!_textView) {
        
        //textView里的文字，默认x=5 y=11
        CGFloat h = self.frame.size.height - YHeight(10.0) - YHeight(10.0) + 11.0 + 11.0;
        _textView = [[PZCommonTextView alloc]initWithFrame:CGRectMake(12.0-5.0, YHeight(10.0) - 11.0, kScreenWidth - 12.0 - 12.0 + 5.0 + 5.0, h)];
        _textView.textColor = [UIColor colorWithHexString:@"#333333" alpha:1];
        _textView.limitLength = 200;
    }
    return _textView;
}

- (UILabel *)lineLab{
    if (!_lineLab) {
        CGFloat h = self.frame.size.height-1;
        _lineLab = [[UILabel alloc]initWithFrame:CGRectMake(0, h, kScreenWidth, 1)];
        _lineLab.backgroundColor = [UIColor colorWithHexString:@"#eeeeee" alpha:1];
    }
    return _lineLab;
}

@end
